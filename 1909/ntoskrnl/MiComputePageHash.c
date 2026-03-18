/*
 * XREFs of MiComputePageHash @ 0x1401650EC
 * Callers:
 *     MiValidatePagefilePageHash @ 0x140164C9C (MiValidatePagefilePageHash.c)
 *     MiWritePageFileHash @ 0x140164F08 (MiWritePageFileHash.c)
 * Callees:
 *     MiUnmapPageInHyperSpaceWorker @ 0x140026E50 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14002E160 (MiMapPageInHyperSpaceWorker.c)
 *     MiGetPagingFileOffset @ 0x140076424 (MiGetPagingFileOffset.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiComputePageHash(__int64 a1, __int64 a2)
{
  __int64 v2; // r10
  unsigned __int8 CurrentIrql; // di
  _QWORD *v5; // rsi
  unsigned int PagingFileOffset; // eax
  __int64 v7; // rdx
  unsigned __int64 v8; // r11
  _QWORD *v9; // r10
  __int64 v10; // r8
  _QWORD *v11; // rcx
  __int64 v12; // r9
  __int64 v13; // rbx
  __int64 v14; // r10
  __int64 v15; // rbx
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
  v10 = v9[1];
  v11 = v9 + 2;
  v12 = v9[2];
  v13 = *v9 + PagingFileOffset;
  v14 = v9[3];
  do
  {
    v11 += 4;
    v10 += *(v11 - 1);
    v13 += *(v11 - 2);
    v12 += *v11;
    v14 += v11[1];
  }
  while ( v11 - 2 != v5 );
  v15 = v10 + v14 + v12 + v13;
  if ( v8 )
  {
    LOBYTE(v7) = 17;
    MiUnmapPageInHyperSpaceWorker(v8, v7, 0LL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(CurrentIrql);
  }
  result = (unsigned int)(v15 + HIDWORD(v15));
  if ( (unsigned int)result < 3 )
    return 3LL;
  return result;
}
