/*
 * XREFs of sub_1801243CC @ 0x1801243CC
 * Callers:
 *     sub_180124548 @ 0x180124548 (sub_180124548.c)
 * Callees:
 *     sub_180120998 @ 0x180120998 (sub_180120998.c)
 *     sub_180123798 @ 0x180123798 (sub_180123798.c)
 *     sub_180124354 @ 0x180124354 (sub_180124354.c)
 */

__int64 __fastcall sub_1801243CC(__int64 a1, __int64 a2, unsigned __int64 *a3)
{
  _QWORD **v6; // rdx
  _QWORD *v7; // rdx
  _QWORD **v9; // [rsp+50h] [rbp+8h] BYREF
  unsigned __int64 *v10; // [rsp+68h] [rbp+20h] BYREF

  v9 = 0LL;
  sub_180123798((_QWORD *)a1, &v9, a3);
  v6 = *(_QWORD ***)(a1 + 8);
  if ( v9 == v6 )
  {
    v7 = *v6;
    v10 = a3;
    sub_180124354(a1 + 8, v7, (__int64)&unk_180213C4B, (__int64 *)&v10, (__int64)&v9);
    sub_180120998((_QWORD *)a1, a2, (unsigned __int64 *)(**(_QWORD **)(a1 + 8) + 16LL), **(_QWORD **)(a1 + 8));
  }
  else
  {
    *(_QWORD *)a2 = v9;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
