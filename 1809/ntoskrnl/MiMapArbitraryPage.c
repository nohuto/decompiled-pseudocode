/*
 * XREFs of MiMapArbitraryPage @ 0x14010EA90
 * Callers:
 *     MiSharePages @ 0x1400846D0 (MiSharePages.c)
 *     MiCombinePte @ 0x140088F00 (MiCombinePte.c)
 *     MiCombineAllPhysicalMemory @ 0x1406D5450 (MiCombineAllPhysicalMemory.c)
 * Callees:
 *     MiMakeValidPte @ 0x14003D7F0 (MiMakeValidPte.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     MiCombineCandidate @ 0x1400B2610 (MiCombineCandidate.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiMapArbitraryPage(__int64 *a1, _QWORD *a2, __int64 a3, int a4, int a5)
{
  __int64 v5; // rbx
  unsigned __int64 *v7; // rdi
  char v8; // r12
  __int64 v11; // rdx
  unsigned __int8 CurrentIrql; // r14
  int v13; // eax
  char v14; // al
  int v15; // r8d
  unsigned __int64 ValidPte; // rdx
  __int64 v17; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v21; // rcx
  int v22; // [rsp+68h] [rbp+20h] BYREF

  v5 = a2[8];
  v7 = (unsigned __int64 *)a2[9];
  v8 = a3;
  v11 = (unsigned __int128)((v5 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  v22 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v5 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v22, v11, a3);
    while ( *(__int64 *)(v5 + 24) < 0 );
  }
  v13 = MiCombineCandidate(a1, v8, v5);
  if ( a4 )
  {
    if ( v13 != a4 )
      goto LABEL_26;
  }
  else if ( !v13 )
  {
    goto LABEL_26;
  }
  if ( a5 == 1 && (unsigned __int8)((*(_BYTE *)(v5 + 34) & 7) - 2) > 1u )
  {
LABEL_26:
    _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( !KiIrqlFlags || (KiIrqlFlags & 1) == 0 || KeGetCurrentIrql() < 2u || CurrentIrql >= 2u )
      goto LABEL_36;
LABEL_35:
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
LABEL_36:
    __writecr8(CurrentIrql);
    return 0LL;
  }
  v14 = *(_BYTE *)(v5 + 34) >> 6;
  if ( v14 == 3 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( !KiIrqlFlags || (KiIrqlFlags & 1) == 0 || KeGetCurrentIrql() < 2u || CurrentIrql >= 2u )
      goto LABEL_36;
    goto LABEL_35;
  }
  v15 = 1;
  if ( v14 )
  {
    if ( v14 == 2 )
      v15 = 25;
  }
  else
  {
    v15 = 9;
  }
  ValidPte = MiMakeValidPte((unsigned __int64)v7, (v5 + 0x58000000000LL) / 48, v15 | 0x20000000u);
  a2[7] = v7;
  a2[6] = v5;
  if ( (unsigned __int64)v7 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v7 <= 0xFFFFF6FB7DBED7F8uLL )
  {
    if ( (unsigned int)MiPteHasShadow(v17, ValidPte) )
    {
      if ( !HIBYTE(word_14043B26C) && (ValidPte & 1) != 0 )
        ValidPte |= 0x8000000000000000uLL;
      *v7 = ValidPte;
      MiWritePteShadow(v7);
      goto LABEL_12;
    }
    if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0
      && (ValidPte & 1) != 0 )
    {
      ValidPte |= 0x8000000000000000uLL;
    }
  }
  *v7 = ValidPte;
LABEL_12:
  _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    v21 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v21->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v21);
  }
  __writecr8(CurrentIrql);
  return 1LL;
}
