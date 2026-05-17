/*
 * XREFs of sub_18010A6F0 @ 0x18010A6F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetSuiteMask @ 0x18002DCA0 (RtlGetSuiteMask.c)
 */

__int64 __fastcall sub_18010A6F0(__int64 a1)
{
  __int64 result; // rax

  result = RtlGetSuiteMask(a1);
  if ( (result & 0x10000) != 0 )
    dword_18016273C |= 6u;
  return result;
}
