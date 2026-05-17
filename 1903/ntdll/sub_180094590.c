/*
 * XREFs of sub_180094590 @ 0x180094590
 * Callers:
 *     sub_1800946BC @ 0x1800946BC (sub_1800946BC.c)
 * Callees:
 *     WinSqmStartSqmOptinListener @ 0x180082920 (WinSqmStartSqmOptinListener.c)
 *     sub_180095420 @ 0x180095420 (sub_180095420.c)
 *     sub_180095704 @ 0x180095704 (sub_180095704.c)
 */

double __fastcall sub_180094590(unsigned int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, double a6, __int64 a7)
{
  sub_180095704(a7, 65472LL);
  if ( !(unsigned int)WinSqmStartSqmOptinListener() )
    sub_180095420(a1);
  return a6;
}
