/*
 * XREFs of ExpRegisterFirmwareTableInformationHandler @ 0x14075C8BC
 * Callers:
 *     NtSetSystemInformation @ 0x140664FB0 (NtSetSystemInformation.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x14004E220 (ObfReferenceObject.c)
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400505F0 (ExAcquireResourceExclusiveLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
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
  v12 = (_QWORD *)qword_14040AD48;
  if ( *(__int64 **)qword_14040AD48 != &ExpFirmwareTableProviderListHead )
    goto LABEL_20;
  *v11 = &ExpFirmwareTableProviderListHead;
  v11[1] = v12;
  *v12 = v11;
  qword_14040AD48 = (__int64)v11;
LABEL_11:
  ExReleaseResourceLite(&ExpFirmwareTableResource);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return v3;
}
