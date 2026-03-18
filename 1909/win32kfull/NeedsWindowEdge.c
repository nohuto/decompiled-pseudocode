/*
 * XREFs of NeedsWindowEdge @ 0x1C0033550
 * Callers:
 *     _AdjustWindowRectExForDpi @ 0x1C0033330 (_AdjustWindowRectExForDpi.c)
 *     xxxCreateWindowEx @ 0x1C0061510 (xxxCreateWindowEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NeedsWindowEdge(int a1, int a2, unsigned int a3)
{
  __int64 result; // rax
  int v4; // ecx

  result = 0LL;
  if ( (a2 & 1) != 0 )
    return 1LL;
  if ( (a2 & 0x20000) != 0 )
    return result;
  if ( (a1 & 0x40000) != 0 )
    return 1LL;
  v4 = a1 & 0xC00000;
  if ( v4 == 0x400000 )
    return 1LL;
  if ( v4 == 12582912 )
    return a3;
  return result;
}
