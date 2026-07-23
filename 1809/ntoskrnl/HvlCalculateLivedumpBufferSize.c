/*
 * XREFs of HvlCalculateLivedumpBufferSize @ 0x14027A89C
 * Callers:
 *     HvlCalculateLivedumpSize @ 0x1402779C0 (HvlCalculateLivedumpSize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvlCalculateLivedumpBufferSize(__int64 a1, _QWORD *a2)
{
  if ( (unsigned __int64)(a1 + 256) > 0xFFFFF )
    return 3221225485LL;
  *a2 = (((unsigned __int64)(a1 + 767) >> 9)
       + ((((unsigned __int64)(a1 + 767) >> 9) + 511) >> 9)
       + ((((((unsigned __int64)(a1 + 767) >> 9) + 511) >> 9) + 511) >> 9)
       + a1
       + 257) << 12;
  return 0LL;
}
