/*
 * XREFs of FindSpb @ 0x1C01F2BF4
 * Callers:
 *     xxxFreeWindow @ 0x1C001E184 (xxxFreeWindow.c)
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C0043B34 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     OffsetWindow @ 0x1C006F138 (OffsetWindow.c)
 *     xxxDrawDragRectEx @ 0x1C01EAC18 (xxxDrawDragRectEx.c)
 *     RestoreSpb @ 0x1C01F2E30 (RestoreSpb.c)
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
