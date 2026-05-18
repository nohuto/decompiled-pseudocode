/*
 * XREFs of sub_180072CA8 @ 0x180072CA8
 * Callers:
 *     sub_18006EC40 @ 0x18006EC40 (sub_18006EC40.c)
 *     sub_1800B9888 @ 0x1800B9888 (sub_1800B9888.c)
 * Callees:
 *     sub_18006F310 @ 0x18006F310 (sub_18006F310.c)
 *     sub_1800712F4 @ 0x1800712F4 (sub_1800712F4.c)
 *     sub_18007F6C8 @ 0x18007F6C8 (sub_18007F6C8.c)
 *     __std_type_info_compare @ 0x180125BB2 (__std_type_info_compare.c)
 */

__int64 __fastcall sub_180072CA8(__int64 **a1, __int64 a2, _QWORD *a3)
{
  __int64 *v6; // rbx
  _QWORD *v7; // rax
  __int64 *v9; // [rsp+50h] [rbp+8h] BYREF
  _QWORD *v10; // [rsp+68h] [rbp+20h] BYREF

  v9 = 0LL;
  sub_18007F6C8(a1, &v9);
  v6 = v9;
  if ( v9 == *a1 || (int)_std_type_info_compare(*a3 + 8LL, v9[4] + 8) < 0 )
  {
    v10 = a3;
    v7 = sub_18006F310(a1, (__int64)&unk_1801E0D04, &v10);
    sub_1800712F4(a1, &v9, v6, v7 + 4, v7);
    *(_QWORD *)a2 = v9;
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v6;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
