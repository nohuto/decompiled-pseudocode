/*
 * XREFs of sub_180063358 @ 0x180063358
 * Callers:
 *     sub_18007632C @ 0x18007632C (sub_18007632C.c)
 *     sub_180076608 @ 0x180076608 (sub_180076608.c)
 *     sub_180077A9C @ 0x180077A9C (sub_180077A9C.c)
 *     sub_180077B7C @ 0x180077B7C (sub_180077B7C.c)
 *     sub_180077BF4 @ 0x180077BF4 (sub_180077BF4.c)
 *     sub_180077CCC @ 0x180077CCC (sub_180077CCC.c)
 *     sub_180077D74 @ 0x180077D74 (sub_180077D74.c)
 *     sub_180079B84 @ 0x180079B84 (sub_180079B84.c)
 *     sub_18007B178 @ 0x18007B178 (sub_18007B178.c)
 *     sub_18007B208 @ 0x18007B208 (sub_18007B208.c)
 *     sub_18007B724 @ 0x18007B724 (sub_18007B724.c)
 * Callees:
 *     sub_180062C9C @ 0x180062C9C (sub_180062C9C.c)
 *     sub_180062E50 @ 0x180062E50 (sub_180062E50.c)
 *     sub_180063624 @ 0x180063624 (sub_180063624.c)
 */

// Hidden C++ exception states: #wind=2
__int64 *__fastcall sub_180063358(__int64 a1, __int64 *a2)
{
  __int64 v4; // rdx

  *a2 = 0LL;
  a2[1] = 0LL;
  *a2 = 0LL;
  *((_BYTE *)a2 + 8) = 0;
  if ( !(unsigned __int8)sub_180063624(a1, 0LL) )
  {
    LOBYTE(v4) = 1;
    if ( !(unsigned __int8)sub_180063624(a1, v4) )
    {
      sub_180062C9C(a1, 0);
      if ( *((_BYTE *)a2 + 8) )
        sub_180062E50(*a2, 0);
      *a2 = a1;
      *((_BYTE *)a2 + 8) = 1;
    }
  }
  return a2;
}
