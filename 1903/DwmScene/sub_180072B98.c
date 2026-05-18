/*
 * XREFs of sub_180072B98 @ 0x180072B98
 * Callers:
 *     sub_18006EB30 @ 0x18006EB30 (sub_18006EB30.c)
 *     sub_1800B9778 @ 0x1800B9778 (sub_1800B9778.c)
 * Callees:
 *     sub_18006F200 @ 0x18006F200 (sub_18006F200.c)
 *     sub_1800711E4 @ 0x1800711E4 (sub_1800711E4.c)
 *     sub_18007F5B8 @ 0x18007F5B8 (sub_18007F5B8.c)
 *     __std_type_info_compare @ 0x180125AA2 (__std_type_info_compare.c)
 */

__int64 __fastcall sub_180072B98(__int64 **a1, __int64 a2, _QWORD *a3)
{
  __int64 *v6; // rbx
  _QWORD *v7; // rax
  __int64 *v9; // [rsp+50h] [rbp+8h] BYREF
  _QWORD *v10; // [rsp+68h] [rbp+20h] BYREF

  v9 = 0LL;
  sub_18007F5B8(a1, &v9);
  v6 = v9;
  if ( v9 == *a1 || (int)_std_type_info_compare(*a3 + 8LL, v9[4] + 8) < 0 )
  {
    v10 = a3;
    v7 = sub_18006F200(a1, (__int64)&unk_1801DFD04, &v10);
    sub_1800711E4(a1, &v9, v6, v7 + 4, v7);
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
