/*
 * XREFs of safe_cast_fnid_to_PSWITCHWND @ 0x1C01A28BC
 * Callers:
 *     xxxFreeWindow @ 0x1C0036A54 (xxxFreeWindow.c)
 *     ?Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z @ 0x1C01BB320 (-Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z.c)
 *     xxxNextWindow @ 0x1C01BC6C8 (xxxNextWindow.c)
 *     xxxOldNextWindow @ 0x1C01BCDF8 (xxxOldNextWindow.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall safe_cast_fnid_to_PSWITCHWND(__int64 a1)
{
  __int64 v1; // rdx

  if ( !a1 )
    return 0LL;
  v1 = *(_QWORD *)(a1 + 40);
  if ( (*(_WORD *)(v1 + 42) & 0x3FFF) != 0x2A0 )
    return 0LL;
  if ( *(_DWORD *)(v1 + 252) )
    return *(_QWORD *)(a1 + 272);
  return *(_QWORD *)(v1 + 296);
}
