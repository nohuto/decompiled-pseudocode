/*
 * XREFs of MiCanPageMove @ 0x1400C359C
 * Callers:
 *     MiReferenceInPageFile @ 0x140009B08 (MiReferenceInPageFile.c)
 *     MiTradeTransitionPage @ 0x1400C32D4 (MiTradeTransitionPage.c)
 *     MiProbeLeafPteAccess @ 0x1400CCDA0 (MiProbeLeafPteAccess.c)
 *     MiReplaceLockedPage @ 0x1402CA310 (MiReplaceLockedPage.c)
 *     MiSwapNumaStandbyPage @ 0x1402DA6D0 (MiSwapNumaStandbyPage.c)
 * Callees:
 *     MiIsPfnFileOnly @ 0x1400B9E30 (MiIsPfnFileOnly.c)
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
  if ( qword_140465800 && (v1 & 0x10) == 0 )
    v1 &= ~qword_140465800;
  v2 = v1 >> 16;
  v3 = *(_QWORD *)v2;
  return v2 == *(_QWORD *)v2 + 128LL || (*(_DWORD *)(v3 + 56) & 0x20) == 0 || (*(_DWORD *)(v3 + 92) & 0x20000) == 0;
}
