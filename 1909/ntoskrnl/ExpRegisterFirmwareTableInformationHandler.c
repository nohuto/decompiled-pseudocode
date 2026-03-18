/*
 * XREFs of ExpRegisterFirmwareTableInformationHandler @ 0x140784BFC
 * Callers:
 *     NtSetSystemInformation @ 0x1406A6650 (NtSetSystemInformation.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003B910 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x14003C090 (ExAcquireResourceExclusiveLite.c)
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x14003E070 (ObfReferenceObject.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpRegisterFirmwareTableInformationHandler(__int64 a1, unsigned int a2, char a3)
{
  unsigned int v3; // ebx
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v6; // rsi
  __int64 *v7; // rax
  _QWORD *PoolWithTag; // rax
  _QWORD *v9; // rcx
  __int64 v10; // rax
  _QWORD *v11; // rdi
  _QWORD *v12; // rax
  __int64 v14; // rcx
  __int64 **v15; // rdx

  v3 = 0;
  if ( a3 )
    return (unsigned int)-1073741727;
  if ( !a1 || a2 < 0x18 )
    return (unsigned int)-1073741820;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&ExpFirmwareTableResource, 1u);
  v6 = (__int64 *)(ExpFirmwareTableProviderListHead - 24);
  if ( &ExpFirmwareTableProviderListHead != (__int64 *)ExpFirmwareTableProviderListHead )
  {
    while ( *(_DWORD *)v6 != *(_DWORD *)a1 )
    {
      v7 = (__int64 *)v6[3];
      v6 = v7 - 3;
      if ( &ExpFirmwareTableProviderListHead == v7 )
        goto LABEL_7;
    }
    if ( *(_BYTE *)(a1 + 4) )
    {
      v3 = 0x40000000;
      goto LABEL_11;
    }
    if ( v6[2] == *(_QWORD *)(a1 + 16) )
    {
      v14 = v6[3];
      if ( *(__int64 **)(v14 + 8) == v6 + 3 )
      {
        v15 = (__int64 **)v6[4];
        if ( *v15 == v6 + 3 )
        {
          *v15 = (__int64 *)v14;
          *(_QWORD *)(v14 + 8) = v15;
          ObfDereferenceObject((PVOID)v6[2]);
          ExFreePoolWithTag(v6, 0x54465241u);
          goto LABEL_11;
        }
      }
LABEL_20:
      __fastfail(3u);
    }
LABEL_22:
    v3 = -1073741811;
    goto LABEL_11;
  }
LABEL_7:
  if ( !*(_BYTE *)(a1 + 4) )
    goto LABEL_22;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x28uLL, 0x54465241u);
  v9 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v3 = -1073741670;
    goto LABEL_11;
  }
  *(_DWORD *)PoolWithTag = *(_DWORD *)a1;
  PoolWithTag[1] = *(_QWORD *)(a1 + 8);
  v10 = *(_QWORD *)(a1 + 16);
  v11 = v9 + 3;
  v9[2] = v10;
  v9[4] = v9 + 3;
  v9[3] = v9 + 3;
  ObfReferenceObject((PVOID)v9[2]);
  v12 = (_QWORD *)qword_1404323F8;
  if ( *(__int64 **)qword_1404323F8 != &ExpFirmwareTableProviderListHead )
    goto LABEL_20;
  *v11 = &ExpFirmwareTableProviderListHead;
  v11[1] = v12;
  *v12 = v11;
  qword_1404323F8 = (__int64)v11;
LABEL_11:
  ExReleaseResourceLite(&ExpFirmwareTableResource);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v3;
}
