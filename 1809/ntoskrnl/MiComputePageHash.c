/*
 * XREFs of MiComputePageHash @ 0x14015178C
 * Callers:
 *     MiWritePageFileHash @ 0x1401515B8 (MiWritePageFileHash.c)
 *     MiValidatePagefilePageHash @ 0x1402CC704 (MiValidatePagefilePageHash.c)
 * Callees:
 *     MiUnmapPageInHyperSpaceWorker @ 0x14003AB00 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140082770 (MiMapPageInHyperSpaceWorker.c)
 *     MiGetPagingFileOffset @ 0x14010FAA4 (MiGetPagingFileOffset.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiComputePageHash(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r10
  unsigned __int8 CurrentIrql; // di
  _QWORD *v5; // rsi
  unsigned int PagingFileOffset; // eax
  unsigned __int64 v7; // r11
  _QWORD *v8; // r10
  __int64 v9; // r8
  _QWORD *v10; // rcx
  __int64 v11; // r9
  __int64 v12; // rbx
  __int64 v13; // r10
  __int64 v14; // rbx
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx

  v2 = a2;
  if ( a2 )
  {
    CurrentIrql = 17;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    v2 = MiMapPageInHyperSpaceWorker((a1 + 0x58000000000LL) / 48, 0LL, 0);
  }
  v5 = (_QWORD *)(v2 + 4064);
  PagingFileOffset = MiGetPagingFileOffset(a1 + 16);
  v9 = v8[1];
  v10 = v8 + 2;
  v11 = v8[2];
  v12 = *v8 + PagingFileOffset;
  v13 = v8[3];
  do
  {
    v10 += 4;
    v9 += *(v10 - 1);
    v12 += *(v10 - 2);
    v11 += *v10;
    v13 += v10[1];
  }
  while ( v10 - 2 != v5 );
  v14 = v9 + v13 + v11 + v12;
  if ( v7 )
  {
    MiUnmapPageInHyperSpaceWorker(v7, 0x11u, 0LL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(CurrentIrql);
  }
  result = (unsigned int)(v14 + HIDWORD(v14));
  if ( (unsigned int)result < 3 )
    return 3LL;
  return result;
}
