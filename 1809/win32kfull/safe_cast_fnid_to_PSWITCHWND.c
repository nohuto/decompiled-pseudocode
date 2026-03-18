/*
 * XREFs of safe_cast_fnid_to_PSWITCHWND @ 0x1C01C42A0
 * Callers:
 *     xxxFreeWindow @ 0x1C001E184 (xxxFreeWindow.c)
 *     ?Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z @ 0x1C01DDE24 (-Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z.c)
 *     xxxNextWindow @ 0x1C01DF29C (xxxNextWindow.c)
 *     xxxOldNextWindow @ 0x1C01DFA50 (xxxOldNextWindow.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall safe_cast_fnid_to_PSWITCHWND(__int64 a1)
{
  __int64 v1; // rax
  __int16 v2; // dx

  if ( !a1 )
    return 0LL;
  v1 = *(_QWORD *)(a1 + 40);
  v2 = *(_WORD *)(v1 + 42);
  if ( (v2 & 0x1000) != 0 || (v2 & 0x2FFF) != 0x2A0 )
    return 0LL;
  if ( *(_DWORD *)(v1 + 252) )
    return *(_QWORD *)(a1 + 264);
  return *(_QWORD *)(v1 + 296);
}
