/*
 * XREFs of ViFreeMapRegisterFile @ 0x14092E524
 * Callers:
 *     VfAllocateAdapterChannel @ 0x14092AAE0 (VfAllocateAdapterChannel.c)
 *     VfBuildScatterGatherList @ 0x14092B430 (VfBuildScatterGatherList.c)
 *     VfCancelAdapterChannel @ 0x14092B9A0 (VfCancelAdapterChannel.c)
 *     VfFreeAdapterChannel @ 0x14092BD60 (VfFreeAdapterChannel.c)
 *     VfFreeAdapterObject @ 0x14092BE10 (VfFreeAdapterObject.c)
 *     VfFreeMapRegisters @ 0x14092C040 (VfFreeMapRegisters.c)
 *     VfGetScatterGatherList @ 0x14092C360 (VfGetScatterGatherList.c)
 *     VfPutScatterGatherList @ 0x14092D170 (VfPutScatterGatherList.c)
 *     ViAdapterCallback @ 0x14092D3B0 (ViAdapterCallback.c)
 * Callees:
 *     MmUnmapLockedPages @ 0x140033F00 (MmUnmapLockedPages.c)
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CE80 (KeAcquireSpinLockRaiseToDpc.c)
 *     IoFreeMdl @ 0x1400E0BE0 (IoFreeMdl.c)
 *     VfUtilFreePoolCheckIRQL @ 0x14016C410 (VfUtilFreePoolCheckIRQL.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     ViCheckPadding @ 0x14092DE08 (ViCheckPadding.c)
 *     ViFreeToContiguousMemory @ 0x14092E788 (ViFreeToContiguousMemory.c)
 */

__int64 __fastcall ViFreeMapRegisterFile(__int64 a1, __int64 a2)
{
  KIRQL v4; // di
  __int64 v5; // r9
  _QWORD *v6; // r8
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v8; // rdi
  unsigned int v9; // esi
  __int64 i; // rdi
  __int64 v11; // rcx
  unsigned int v12; // r9d
  ULONG_PTR v13; // r8
  __int64 v14; // rdx
  _SLIST_ENTRY *v15; // rcx

  if ( !a2 || *(_DWORD *)a2 != -1393569779 )
    return 0LL;
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 120));
  v5 = *(_QWORD *)(a2 + 8);
  v6 = *(_QWORD **)(a2 + 16);
  if ( *(_QWORD *)(v5 + 8) != a2 + 8 || *v6 != a2 + 8 )
    __fastfail(3u);
  *v6 = v5;
  *(_QWORD *)(v5 + 8) = v6;
  KxReleaseSpinLock((PKSPIN_LOCK)(a1 + 120));
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v4 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  __writecr8(v4);
  *(_DWORD *)a2 = 0;
  v8 = *(_QWORD *)(a2 + 40);
  if ( v8 )
  {
    if ( (*(_BYTE *)(v8 + 10) & 1) != 0 )
      MmUnmapLockedPages(*(PVOID *)(v8 + 24), *(PMDL *)(a2 + 40));
    IoFreeMdl((PMDL)v8);
  }
  MmUnmapLockedPages(*(PVOID *)(a2 + 64), *(PMDL *)(a2 + 56));
  v9 = 0;
  for ( i = a2 + 88; v9 < *(_DWORD *)(a2 + 28); i += 32LL )
  {
    v11 = *(_QWORD *)(i + 16);
    if ( *(_QWORD *)i )
    {
      v12 = *(_DWORD *)(i + 8);
      v13 = (*(_QWORD *)i & 0xFFFLL) + v11 + 4096;
    }
    else
    {
      v13 = 0LL;
      v12 = 0;
    }
    ViCheckPadding(v11, 0x3000u, v13, v12);
    v14 = *(_QWORD *)(i + 16);
    *(_DWORD *)(i + 12) = 0;
    if ( !(unsigned int)ViFreeToContiguousMemory(a1, v14, v9) )
      ExFreePoolWithTag(*(PVOID *)(i + 16), 0);
    ++v9;
  }
  IoFreeMdl(*(PMDL *)(a2 + 56));
  v15 = *(_SLIST_ENTRY **)(a2 + 72);
  if ( v15 )
    VfUtilFreePoolCheckIRQL(v15);
  *(_QWORD *)a2 = 0LL;
  VfUtilFreePoolCheckIRQL((_SLIST_ENTRY *)a2);
  return 1LL;
}
