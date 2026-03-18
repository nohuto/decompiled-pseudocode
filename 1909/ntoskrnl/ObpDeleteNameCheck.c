/*
 * XREFs of ObpDeleteNameCheck @ 0x14063F4B0
 * Callers:
 *     ObpDereferenceNamedObject @ 0x14008D014 (ObpDereferenceNamedObject.c)
 *     ObOpenObjectByNameEx @ 0x1405F5850 (ObOpenObjectByNameEx.c)
 *     ObpIncrementHandleCountEx @ 0x1405F5FC0 (ObpIncrementHandleCountEx.c)
 *     ObpDecrementHandleCount @ 0x14063F2E4 (ObpDecrementHandleCount.c)
 *     ObMakeTemporaryObject @ 0x1406A12C0 (ObMakeTemporaryObject.c)
 * Callees:
 *     ObpReleaseLookupContext @ 0x140003F54 (ObpReleaseLookupContext.c)
 *     KeLeaveCriticalRegion @ 0x14003DF60 (KeLeaveCriticalRegion.c)
 *     ObfReferenceObject @ 0x14003E070 (ObfReferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14003EF80 (ExReleasePushLockEx.c)
 *     ObpLockDirectoryExclusive @ 0x140105100 (ObpLockDirectoryExclusive.c)
 *     PsDereferenceSiloContext @ 0x14012E7D0 (PsDereferenceSiloContext.c)
 *     ObpMarkDirectoryTreeTemporary @ 0x1406B36E8 (ObpMarkDirectoryTreeTemporary.c)
 *     ObpDeleteSymbolicLinkName @ 0x1406B3964 (ObpDeleteSymbolicLinkName.c)
 *     ObpLookupDirectoryEntryEx @ 0x1406BEB70 (ObpLookupDirectoryEntryEx.c)
 *     ObpDeleteDirectoryEntry @ 0x1406CC76C (ObpDeleteDirectoryEntry.c)
 */

void __fastcall ObpDeleteNameCheck(__int64 a1)
{
  char v1; // al
  __int64 v3; // rax
  __int64 v4; // rdi
  struct _KTHREAD *CurrentThread; // rax
  PVOID v6; // rbp
  char v7; // al
  struct _KTHREAD *v8; // rax
  PVOID v9; // r10
  void *v11; // r14
  struct _OBJECT_TYPE *v12; // r15
  void *v13; // rax
  __int64 v14[2]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v15; // [rsp+40h] [rbp-38h]
  int v16; // [rsp+48h] [rbp-30h]
  __int16 v17; // [rsp+4Ch] [rbp-2Ch]
  __int16 v18; // [rsp+4Eh] [rbp-2Ah]
  int v19; // [rsp+50h] [rbp-28h]
  int v20; // [rsp+54h] [rbp-24h]

  v1 = *(_BYTE *)(a1 + 26);
  v15 = 0LL;
  v16 = 0;
  v17 = 0;
  v20 = 0;
  if ( (v1 & 2) != 0 )
  {
    v3 = ObpInfoMaskToOffset[v1 & 3];
    v4 = a1 - v3;
    if ( a1 != v3 )
    {
      while ( 1 )
      {
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        ExAcquirePushLockExclusiveEx(a1 + 16, 0LL);
        v6 = *(PVOID *)v4;
        if ( !*(_QWORD *)v4 || ((*(_BYTE *)(a1 + 27) & 0x10) != 0 || *(_QWORD *)(a1 + 8) ? (v7 = 0) : (v7 = 1), !v7) )
        {
          ExReleasePushLockEx(a1 + 16, 0LL);
          KeLeaveCriticalRegion();
          return;
        }
        ObfReferenceObject(*(PVOID *)v4);
        ExReleasePushLockEx(a1 + 16, 0LL);
        KeLeaveCriticalRegion();
        v18 = 0;
        v19 = -60876;
        *(_OWORD *)v14 = 0LL;
        ObpLockDirectoryExclusive((__int64)v14, v6);
        v8 = KeGetCurrentThread();
        --v8->KernelApcDisable;
        ExAcquirePushLockExclusiveEx(a1 + 16, 0LL);
        v9 = *(PVOID *)v4;
        if ( *(PVOID *)v4 == v6 && (*(_BYTE *)(a1 + 27) & 0x10) == 0 && !*(_QWORD *)(a1 + 8) )
          break;
        ObpReleaseLookupContext((__int64)v14);
        ExReleasePushLockEx(a1 + 16, 0LL);
        KeLeaveCriticalRegion();
        PsDereferenceSiloContext(v6);
      }
      v11 = 0LL;
      if ( !*(_DWORD *)(v4 + 24) )
      {
        v12 = (struct _OBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(a1 + 24) ^ (unsigned __int64)BYTE1(a1)];
        if ( v12 == ObpSymbolicLinkObjectType )
        {
          ObpDeleteSymbolicLinkName(a1 + 48);
          v9 = *(PVOID *)v4;
        }
        v13 = (void *)ObpLookupDirectoryEntryEx(v9, 0, (__int64)v14);
        v11 = v13;
        if ( v12 == ObpDirectoryObjectType )
          ObfReferenceObject(v13);
        else
          v11 = 0LL;
        ObpDeleteDirectoryEntry(v14);
      }
      ObpReleaseLookupContext((__int64)v14);
      ExReleasePushLockEx(a1 + 16, 0LL);
      KeLeaveCriticalRegion();
      PsDereferenceSiloContext(v6);
      if ( v11 )
      {
        ObpMarkDirectoryTreeTemporary(v11);
        PsDereferenceSiloContext(v11);
      }
    }
  }
}
