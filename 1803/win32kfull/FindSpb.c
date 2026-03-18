/*
 * XREFs of FindSpb @ 0x1C01CE610
 * Callers:
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C00281E0 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     xxxFreeWindow @ 0x1C0036A54 (xxxFreeWindow.c)
 *     OffsetChildren @ 0x1C0073D44 (OffsetChildren.c)
 *     xxxDrawDragRectEx @ 0x1C01C6034 (xxxDrawDragRectEx.c)
 *     RestoreSpb @ 0x1C01CE808 (RestoreSpb.c)
 * Callees:
 *     <none>
 */

__int64 **__fastcall FindSpb(__int64 *a1)
{
  __int64 **result; // rax

  for ( result = *(__int64 ***)(gpDispInfo + 32LL);
        result && (result[1] != a1 || ((_DWORD)result[6] & 2) != 0);
        result = (__int64 **)*result )
  {
    ;
  }
  return result;
}
