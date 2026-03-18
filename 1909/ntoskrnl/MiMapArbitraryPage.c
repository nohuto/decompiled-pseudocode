/*
 * XREFs of MiMapArbitraryPage @ 0x140140B10
 * Callers:
 *     MiSharePages @ 0x14013F5C0 (MiSharePages.c)
 *     MiCombinePte @ 0x1402E5C70 (MiCombinePte.c)
 *     MiCombineAllPhysicalMemory @ 0x1406F5EB0 (MiCombineAllPhysicalMemory.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14002AC50 (MiPteInShadowRange.c)
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     MiIsAddressGlobal @ 0x14006DA60 (MiIsAddressGlobal.c)
 *     MiWritePteShadow @ 0x1400F8750 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1400F87B0 (MiPteHasShadow.c)
 *     MiUserPdeOrAbove @ 0x140118C20 (MiUserPdeOrAbove.c)
 *     MiCombineCandidate @ 0x140140780 (MiCombineCandidate.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiMapArbitraryPage(__int64 *a1, _QWORD *a2, char a3, int a4, int a5)
{
  __int64 v5; // rdi
  unsigned __int64 v7; // r14
  unsigned __int8 CurrentIrql; // r12
  int v12; // eax
  char v13; // al
  __int64 v14; // rdx
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v17; // r8
  struct _KPRCB *v18; // rcx
  int v19; // [rsp+68h] [rbp+20h] BYREF

  v5 = a2[8];
  v7 = a2[9];
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  v19 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v5 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v19);
    while ( *(__int64 *)(v5 + 24) < 0 );
  }
  v12 = MiCombineCandidate(a1, a3, v5);
  if ( a4 )
  {
    if ( v12 != a4 )
      goto LABEL_25;
  }
  else if ( !v12 )
  {
    goto LABEL_25;
  }
  if ( a5 == 1 && (unsigned __int8)((*(_BYTE *)(v5 + 34) & 7) - 2) > 1u )
  {
LABEL_25:
    _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( !KiIrqlFlags || (KiIrqlFlags & 1) == 0 || KeGetCurrentIrql() < 2u || CurrentIrql >= 2u )
      goto LABEL_35;
LABEL_34:
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
LABEL_35:
    __writecr8(CurrentIrql);
    return 0LL;
  }
  v13 = *(_BYTE *)(v5 + 34) >> 6;
  if ( v13 == 3 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( !KiIrqlFlags || (KiIrqlFlags & 1) == 0 || KeGetCurrentIrql() < 2u || CurrentIrql >= 2u )
      goto LABEL_35;
    goto LABEL_34;
  }
  if ( v7 >= 0xFFFFF68000000000uLL && v7 <= 0xFFFFF6FFFFFFFFFFuLL )
  {
    if ( v7 >= 0xFFFFF6FB40000000uLL && v7 <= 0xFFFFF6FB7FFFFFFFuLL )
      MiUserPdeOrAbove(v7);
    MiIsAddressGlobal((__int64)(v7 << 25) >> 16);
  }
  a2[7] = v7;
  a2[6] = v5;
  if ( MiPteInShadowRange(v7) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      if ( !HIBYTE(word_1404658EC) )
        v14 |= v17;
      *(_QWORD *)v7 = v14;
      MiWritePteShadow(v7);
      goto LABEL_13;
    }
    if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0 )
      v14 |= v17;
  }
  *(_QWORD *)v7 = v14;
LABEL_13:
  _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    v18 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v18->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v18);
  }
  __writecr8(CurrentIrql);
  return 1LL;
}
