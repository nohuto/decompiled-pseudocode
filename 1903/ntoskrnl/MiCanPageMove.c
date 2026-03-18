/*
 * XREFs of MiCanPageMove @ 0x14009D990
 * Callers:
 *     MiReferenceInPageFile @ 0x140009A78 (MiReferenceInPageFile.c)
 *     MiProbeLeafPteAccess @ 0x14008F7B0 (MiProbeLeafPteAccess.c)
 *     MiTradeTransitionPage @ 0x14009D6C8 (MiTradeTransitionPage.c)
 *     MiReplaceLockedPage @ 0x1402CA5B0 (MiReplaceLockedPage.c)
 *     MiSwapNumaStandbyPage @ 0x1402DA970 (MiSwapNumaStandbyPage.c)
 * Callees:
 *     MiIsPfnFileOnly @ 0x1400D9FB0 (MiIsPfnFileOnly.c)
 */

_BOOL8 __fastcall MiCanPageMove(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rcx

  if ( (*(_QWORD *)(a1 + 40) & 0x200000000000000LL) == 0 )
    return 1LL;
  v4 = *(_QWORD *)(a1 + 16);
  if ( (v4 & 0x400) == 0 )
    return 1LL;
  if ( (unsigned int)MiIsPfnFileOnly(a1, v4, a3, a4) == 1 )
    return 0LL;
  if ( qword_140465B00 && (v5 & 0x10) == 0 )
    v5 &= ~qword_140465B00;
  v6 = v5 >> 16;
  v7 = *(_QWORD *)v6;
  return v6 == *(_QWORD *)v6 + 128LL || (*(_DWORD *)(v7 + 56) & 0x20) == 0 || (*(_DWORD *)(v7 + 92) & 0x20000) == 0;
}
