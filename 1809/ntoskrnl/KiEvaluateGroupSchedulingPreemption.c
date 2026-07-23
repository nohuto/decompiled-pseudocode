/*
 * XREFs of KiEvaluateGroupSchedulingPreemption @ 0x1400C60C0
 * Callers:
 *     KiDeferredReadyThread @ 0x1400C32D0 (KiDeferredReadyThread.c)
 * Callees:
 *     KiGetThreadEffectiveRankNonZero @ 0x1400D15A0 (KiGetThreadEffectiveRankNonZero.c)
 *     KiShouldPreemptionBeDeferred @ 0x1400D3850 (KiShouldPreemptionBeDeferred.c)
 *     KiGetComparisonRanks @ 0x1401361A8 (KiGetComparisonRanks.c)
 */

bool __fastcall KiEvaluateGroupSchedulingPreemption(struct _KPRCB *a1, _KTHREAD *a2, __int64 a3, _QWORD *a4)
{
  int v4; // edi
  _QWORD *v5; // r15
  struct _KPRCB *v8; // r10
  _KSCHEDULING_GROUP *volatile SchedulingGroup; // rsi
  __int64 v10; // r14
  unsigned int v11; // r10d
  unsigned int v12; // eax
  __int64 v14; // rax
  int v15; // eax
  unsigned int v16; // [rsp+60h] [rbp+8h] BYREF
  unsigned int ThreadEffectiveRankNonZero; // [rsp+68h] [rbp+10h] BYREF

  v4 = 0;
  v5 = a4;
  v8 = a1;
  ThreadEffectiveRankNonZero = 0;
  LOBYTE(a4) = a1->CurrentThread != a2 || a1 == KeGetCurrentPrcb();
  SchedulingGroup = a2->SchedulingGroup;
  if ( SchedulingGroup )
  {
    SchedulingGroup = (_KSCHEDULING_GROUP *volatile)((char *)SchedulingGroup + a1->ScbOffset);
    if ( SchedulingGroup )
      ThreadEffectiveRankNonZero = KiGetThreadEffectiveRankNonZero(
                                     (_DWORD)a2,
                                     (_DWORD)SchedulingGroup,
                                     a3,
                                     (_DWORD)a4,
                                     0LL);
  }
  v10 = *(_QWORD *)(a3 + 104);
  v16 = 0;
  *v5 = 0LL;
  if ( !v10 )
    goto LABEL_6;
  v10 += v8->ScbOffset;
  if ( !v10 )
    goto LABEL_6;
  LOBYTE(a4) = 1;
  v16 = KiGetThreadEffectiveRankNonZero(a3, v10, a3, (_DWORD)a4, 0LL);
  v11 = v16;
  if ( v16 )
  {
    *v5 = v10;
    goto LABEL_7;
  }
  v14 = v10;
  do
  {
    v4 += *(_DWORD *)(v14 + 116);
    v14 = *(_QWORD *)(v14 + 408);
  }
  while ( v14 );
  if ( v4 )
  {
    v15 = *(_DWORD *)(a3 + 120);
    if ( (v15 & 0x200) == 0
      && *(char *)(a3 + 195) < 16
      && (v15 & 0xC00) == 0
      && (unsigned __int8)KiShouldPreemptionBeDeferred(a3) )
    {
      _interlockedbittestandset((volatile signed __int32 *)(a3 + 120), 0xBu);
LABEL_6:
      v11 = v16;
    }
  }
LABEL_7:
  if ( !SchedulingGroup || !v10 )
    goto LABEL_8;
  v12 = ThreadEffectiveRankNonZero;
  if ( ThreadEffectiveRankNonZero && v11 )
  {
    KiGetComparisonRanks(SchedulingGroup, v10, &ThreadEffectiveRankNonZero, &v16);
    v11 = v16;
LABEL_8:
    v12 = ThreadEffectiveRankNonZero;
  }
  return v11 < v12 || v11 == v12 && *(_BYTE *)(a3 + 195) > a2->Priority;
}
