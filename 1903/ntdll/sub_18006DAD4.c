/*
 * XREFs of sub_18006DAD4 @ 0x18006DAD4
 * Callers:
 *     sub_18006DB18 @ 0x18006DB18 (sub_18006DB18.c)
 * Callees:
 *     sub_18006DD60 @ 0x18006DD60 (sub_18006DD60.c)
 */

__int64 __fastcall sub_18006DAD4(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rdx

  if ( a3 < *(unsigned __int16 *)(a2 + 12) + (unsigned int)*(unsigned __int16 *)(a2 + 14)
    && (unsigned int)sub_18006DD60(a1, a2 + 8LL * a3 + 16, 8LL) )
  {
    return v3;
  }
  else
  {
    return 0LL;
  }
}
