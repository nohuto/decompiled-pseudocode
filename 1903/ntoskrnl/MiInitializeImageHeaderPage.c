/*
 * XREFs of MiInitializeImageHeaderPage @ 0x140131278
 * Callers:
 *     MiCreateImageFileMap @ 0x14068AE6C (MiCreateImageFileMap.c)
 * Callees:
 *     MiUnmapPageInHyperSpaceWorker @ 0x140026A60 (MiUnmapPageInHyperSpaceWorker.c)
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14002DD70 (MiMapPageInHyperSpaceWorker.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

__int64 __fastcall MiInitializeImageHeaderPage(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 result; // rax
  __int64 v7; // rbx
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int8 v9; // [rsp+38h] [rbp+10h] BYREF
  int v10; // [rsp+40h] [rbp+18h] BYREF

  v4 = MiMapPageInHyperSpaceWorker(a1, &v9, 0x80000000);
  memset((void *)(v4 + a2), 0, 4096 - a2);
  LOBYTE(v5) = 2;
  MiUnmapPageInHyperSpaceWorker(v4, v5, 0x80000000LL);
  if ( (a2 & 0x1FF) != 0 )
  {
    v7 = 48 * a1 - 0x58000000000LL;
    v10 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v10);
      while ( *(__int64 *)(v7 + 24) < 0 );
    }
    *(_BYTE *)(v7 + 34) |= 0x10u;
    _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v9 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  result = v9;
  __writecr8(v9);
  return result;
}
