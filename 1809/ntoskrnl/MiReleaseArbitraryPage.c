/*
 * XREFs of MiReleaseArbitraryPage @ 0x140111CF0
 * Callers:
 *     MiSharePages @ 0x1400846D0 (MiSharePages.c)
 *     MiCombinePte @ 0x140088F00 (MiCombinePte.c)
 *     MiCombineAllPhysicalMemory @ 0x1406D5450 (MiCombineAllPhysicalMemory.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiReleaseArbitraryPage(_QWORD *SchedulerAssist, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rdi
  __int64 v4; // rbx
  unsigned __int8 CurrentIrql; // si
  __int64 v6; // rdx
  __int64 *v7; // r8
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  int v11; // [rsp+30h] [rbp+8h] BYREF

  v3 = SchedulerAssist;
  v4 = SchedulerAssist[6];
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    _InterlockedOr((volatile signed __int32 *)SchedulerAssist, 0x10000u);
  }
  v11 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v11, a2, a3);
    while ( *(__int64 *)(v4 + 24) < 0 );
  }
  v6 = ZeroPte;
  v7 = (__int64 *)v3[7];
  v3[6] = 0LL;
  if ( (unsigned __int64)v7 < 0xFFFFF6FB7DBED000uLL || (unsigned __int64)v7 > 0xFFFFF6FB7DBED7F8uLL )
    goto LABEL_4;
  if ( !(unsigned int)MiPteHasShadow(SchedulerAssist, ZeroPte) )
  {
    if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0 && (v6 & 1) != 0 )
      v6 |= 0x8000000000000000uLL;
LABEL_4:
    *v7 = v6;
    goto LABEL_5;
  }
  if ( !HIBYTE(word_14043B26C) && (v6 & 1) != 0 )
    v6 |= 0x8000000000000000uLL;
  *v7 = v6;
  MiWritePteShadow(v7);
LABEL_5:
  v3[7] = 0LL;
  _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
