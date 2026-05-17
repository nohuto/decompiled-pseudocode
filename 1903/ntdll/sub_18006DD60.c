/*
 * XREFs of sub_18006DD60 @ 0x18006DD60
 * Callers:
 *     sub_18006DAD4 @ 0x18006DAD4 (sub_18006DAD4.c)
 *     sub_18006DB18 @ 0x18006DB18 (sub_18006DB18.c)
 *     sub_18006DD9C @ 0x18006DD9C (sub_18006DD9C.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall sub_18006DD60(unsigned __int64 *a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // r9
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rcx

  v3 = *a1;
  v4 = a2 + a3;
  v5 = *a1 + a1[1];
  return v5 >= v3 && v4 >= a2 && a2 <= v5 && v4 <= v5 && a2 >= v3 && v4 >= v3;
}
