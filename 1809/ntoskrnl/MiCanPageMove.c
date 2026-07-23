/*
 * XREFs of MiCanPageMove @ 0x140118464
 * Callers:
 *     MiReferenceInPageFile @ 0x14001CAC8 (MiReferenceInPageFile.c)
 *     MiProbeLeafPteAccess @ 0x1400420D0 (MiProbeLeafPteAccess.c)
 *     MiTradeTransitionPage @ 0x14011819C (MiTradeTransitionPage.c)
 *     MiReplaceLockedPage @ 0x14018B174 (MiReplaceLockedPage.c)
 *     MiSwapNumaStandbyPage @ 0x1402C1200 (MiSwapNumaStandbyPage.c)
 * Callees:
 *     MiIsPfnFileOnly @ 0x14009C960 (MiIsPfnFileOnly.c)
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
  if ( qword_14043B180 && (v1 & 0x10) == 0 )
    v1 &= ~qword_14043B180;
  v2 = v1 >> 16;
  v3 = *(_QWORD *)v2;
  return v2 == *(_QWORD *)v2 + 128LL || (*(_DWORD *)(v3 + 56) & 0x20) == 0 || (*(_DWORD *)(v3 + 92) & 0x200000) == 0;
}
