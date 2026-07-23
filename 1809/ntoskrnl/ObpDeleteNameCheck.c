/*
 * XREFs of ObpDeleteNameCheck @ 0x1405AA740
 * Callers:
 *     ObpDereferenceNamedObject @ 0x14000FB64 (ObpDereferenceNamedObject.c)
 *     ObpDecrementHandleCount @ 0x1405AA584 (ObpDecrementHandleCount.c)
 *     ObOpenObjectByNameEx @ 0x1405E3E30 (ObOpenObjectByNameEx.c)
 *     ObpIncrementHandleCountEx @ 0x1405E45F0 (ObpIncrementHandleCountEx.c)
 *     ObMakeTemporaryObject @ 0x1406C8670 (ObMakeTemporaryObject.c)
 * Callees:
 *     ObpReleaseLookupContext @ 0x140016078 (ObpReleaseLookupContext.c)
 *     ObfReferenceObject @ 0x14004E220 (ObfReferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14004F160 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegion @ 0x14004F410 (KeLeaveCriticalRegion.c)
 *     ObpLockDirectoryExclusive @ 0x14010A050 (ObpLockDirectoryExclusive.c)
 *     PsDereferenceSiloContext @ 0x14012C170 (PsDereferenceSiloContext.c)
 *     ObpLookupDirectoryEntryEx @ 0x140625DE0 (ObpLookupDirectoryEntryEx.c)
 *     ObpMarkDirectoryTreeTemporary @ 0x14068EC20 (ObpMarkDirectoryTreeTemporary.c)
 *     ObpDeleteSymbolicLinkName @ 0x14068F354 (ObpDeleteSymbolicLinkName.c)
 *     ObpDeleteDirectoryEntry @ 0x1406A7F3C (ObpDeleteDirectoryEntry.c)
 */

void __fastcall ObpDeleteNameCheck(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  struct _KTHREAD *CurrentThread; // rax
  PVOID v5; // rbp
  char v6; // al
  struct _KTHREAD *v7; // rax
  PVOID v8; // r10
  void *v10; // r14
  struct _OBJECT_TYPE *v11; // r15
  void *v12; // rax
  __int128 v13; // [rsp+30h] [rbp-48h] BYREF
  __int16 v14; // [rsp+4Eh] [rbp-2Ah]
  int v15; // [rsp+50h] [rbp-28h]

  if ( (*(_BYTE *)(a1 + 26) & 2) != 0 )
  {
    v2 = ObpInfoMaskToOffset[*(_BYTE *)(a1 + 26) & 3];
    v3 = a1 - v2;
    if ( a1 != v2 )
    {
      while ( 1 )
      {
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        ExAcquirePushLockExclusiveEx(a1 + 16, 0LL);
        v5 = *(PVOID *)v3;
        if ( !*(_QWORD *)v3 || ((*(_BYTE *)(a1 + 27) & 0x10) != 0 || *(_QWORD *)(a1 + 8) ? (v6 = 0) : (v6 = 1), !v6) )
        {
          ExReleasePushLockEx(a1 + 16, 0LL);
          KeLeaveCriticalRegion();
          return;
        }
        ObfReferenceObject(*(PVOID *)v3);
        ExReleasePushLockEx(a1 + 16, 0LL);
        KeLeaveCriticalRegion();
        v14 = 0;
        v15 = -60876;
        v13 = 0LL;
        ObpLockDirectoryExclusive((__int64)&v13, v5);
        v7 = KeGetCurrentThread();
        --v7->KernelApcDisable;
        ExAcquirePushLockExclusiveEx(a1 + 16, 0LL);
        v8 = *(PVOID *)v3;
        if ( *(PVOID *)v3 == v5 && (*(_BYTE *)(a1 + 27) & 0x10) == 0 && !*(_QWORD *)(a1 + 8) )
          break;
        ObpReleaseLookupContext((__int64)&v13);
        ExReleasePushLockEx(a1 + 16, 0LL);
        KeLeaveCriticalRegion();
        PsDereferenceSiloContext(v5);
      }
      v10 = 0LL;
      if ( !*(_DWORD *)(v3 + 24) )
      {
        v11 = (struct _OBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(a1 + 24) ^ (unsigned __int64)BYTE1(a1)];
        if ( v11 == ObpSymbolicLinkObjectType )
        {
          ObpDeleteSymbolicLinkName(a1 + 48);
          v8 = *(PVOID *)v3;
        }
        v12 = (void *)ObpLookupDirectoryEntryEx((_DWORD)v8, (int)v3 + 8, 0, 0, 0, (__int64)&v13);
        v10 = v12;
        if ( v11 == ObpDirectoryObjectType )
          ObfReferenceObject(v12);
        else
          v10 = 0LL;
        ObpDeleteDirectoryEntry(&v13);
      }
      ObpReleaseLookupContext((__int64)&v13);
      ExReleasePushLockEx(a1 + 16, 0LL);
      KeLeaveCriticalRegion();
      PsDereferenceSiloContext(v5);
      if ( v10 )
      {
        ObpMarkDirectoryTreeTemporary(v10);
        PsDereferenceSiloContext(v10);
      }
    }
  }
}
