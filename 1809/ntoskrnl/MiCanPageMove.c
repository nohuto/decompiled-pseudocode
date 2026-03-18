/*
 * XREFs of MiCanPageMove @ 0x1401183D4
 * Callers:
 *     MiReferenceInPageFile @ 0x14001CAC8 (MiReferenceInPageFile.c)
 *     MiProbeLeafPteAccess @ 0x1400420D0 (MiProbeLeafPteAccess.c)
 *     MiTradeTransitionPage @ 0x14011810C (MiTradeTransitionPage.c)
 *     MiReplaceLockedPage @ 0x14018B014 (MiReplaceLockedPage.c)
 *     MiSwapNumaStandbyPage @ 0x1402C0F10 (MiSwapNumaStandbyPage.c)
 * Callees:
 *     MiIsPfnFileOnly @ 0x14009CA20 (MiIsPfnFileOnly.c)
 */

_BOOL8 __fastcall MiCanPageMove(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rdx
  __int64 v3; // rcx

  if ( (*(_QWORD *)(a1 + 40) & 0x200000000000000LL) == 0 || (*(_QWORD *)(a1 + 16) & 0x400LL) == 0 )
    return 1LL;
  if ( MiIsPfnFileOnly(a1) )
    return 0LL;
  if ( qword_14043A0C0 && (v1 & 0x10) == 0 )
    v1 &= ~qword_14043A0C0;
  v2 = v1 >> 16;
  v3 = *(_QWORD *)v2;
  return v2 == *(_QWORD *)v2 + 128LL || (*(_DWORD *)(v3 + 56) & 0x20) == 0 || (*(_DWORD *)(v3 + 92) & 0x200000) == 0;
}
