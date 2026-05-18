/*
 * XREFs of sub_180063468 @ 0x180063468
 * Callers:
 *     sub_18007643C @ 0x18007643C (sub_18007643C.c)
 *     sub_180076718 @ 0x180076718 (sub_180076718.c)
 *     sub_180077BAC @ 0x180077BAC (sub_180077BAC.c)
 *     sub_180077C8C @ 0x180077C8C (sub_180077C8C.c)
 *     sub_180077D04 @ 0x180077D04 (sub_180077D04.c)
 *     sub_180077DDC @ 0x180077DDC (sub_180077DDC.c)
 *     sub_180077E84 @ 0x180077E84 (sub_180077E84.c)
 *     sub_180079C94 @ 0x180079C94 (sub_180079C94.c)
 *     sub_18007B288 @ 0x18007B288 (sub_18007B288.c)
 *     sub_18007B318 @ 0x18007B318 (sub_18007B318.c)
 *     sub_18007B834 @ 0x18007B834 (sub_18007B834.c)
 * Callees:
 *     sub_180062DAC @ 0x180062DAC (sub_180062DAC.c)
 *     sub_180062F60 @ 0x180062F60 (sub_180062F60.c)
 *     sub_180063734 @ 0x180063734 (sub_180063734.c)
 */

// Hidden C++ exception states: #wind=2
__int64 *__fastcall sub_180063468(__int64 a1, __int64 *a2)
{
  __int64 v4; // rdx

  *a2 = 0LL;
  a2[1] = 0LL;
  *a2 = 0LL;
  *((_BYTE *)a2 + 8) = 0;
  if ( !(unsigned __int8)sub_180063734(a1, 0LL) )
  {
    LOBYTE(v4) = 1;
    if ( !(unsigned __int8)sub_180063734(a1, v4) )
    {
      sub_180062DAC(a1, 0);
      if ( *((_BYTE *)a2 + 8) )
        sub_180062F60(*a2, 0);
      *a2 = a1;
      *((_BYTE *)a2 + 8) = 1;
    }
  }
  return a2;
}
