/*
 * XREFs of sub_1801244DC @ 0x1801244DC
 * Callers:
 *     sub_180124658 @ 0x180124658 (sub_180124658.c)
 * Callees:
 *     sub_180120AA8 @ 0x180120AA8 (sub_180120AA8.c)
 *     sub_1801238A8 @ 0x1801238A8 (sub_1801238A8.c)
 *     sub_180124464 @ 0x180124464 (sub_180124464.c)
 */

__int64 __fastcall sub_1801244DC(__int64 a1, __int64 a2, unsigned __int64 *a3)
{
  _QWORD **v6; // rdx
  _QWORD *v7; // rdx
  _QWORD **v9; // [rsp+50h] [rbp+8h] BYREF
  unsigned __int64 *v10; // [rsp+68h] [rbp+20h] BYREF

  v9 = 0LL;
  sub_1801238A8((_QWORD *)a1, &v9, a3);
  v6 = *(_QWORD ***)(a1 + 8);
  if ( v9 == v6 )
  {
    v7 = *v6;
    v10 = a3;
    sub_180124464(a1 + 8, v7, (__int64)&unk_180214C4B, (__int64 *)&v10, (__int64)&v9);
    sub_180120AA8((_QWORD *)a1, a2, (unsigned __int64 *)(**(_QWORD **)(a1 + 8) + 16LL), **(_QWORD **)(a1 + 8));
  }
  else
  {
    *(_QWORD *)a2 = v9;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
