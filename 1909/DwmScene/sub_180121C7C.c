/*
 * XREFs of sub_180121C7C @ 0x180121C7C
 * Callers:
 *     sub_18011ED4C @ 0x18011ED4C (sub_18011ED4C.c)
 *     sub_18011F0A0 @ 0x18011F0A0 (sub_18011F0A0.c)
 *     sub_18011F480 @ 0x18011F480 (sub_18011F480.c)
 *     sub_18011F964 @ 0x18011F964 (sub_18011F964.c)
 * Callees:
 *     sub_180120AA8 @ 0x180120AA8 (sub_180120AA8.c)
 *     sub_180120D38 @ 0x180120D38 (sub_180120D38.c)
 *     sub_1801238A8 @ 0x1801238A8 (sub_1801238A8.c)
 */

__int64 __fastcall sub_180121C7C(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v6; // rdx
  __int64 v7; // rdx
  __int64 *v9; // [rsp+50h] [rbp+8h] BYREF
  __int64 v10; // [rsp+68h] [rbp+20h] BYREF

  v9 = 0LL;
  sub_1801238A8(a1, &v9);
  v6 = *(__int64 **)(a1 + 8);
  if ( v9 == v6 )
  {
    v7 = *v6;
    v10 = a3;
    sub_180120D38(a1 + 8, v7, (__int64)&unk_18021343A, &v10, (__int64)&v9);
    sub_180120AA8((_QWORD *)a1, a2, (unsigned __int64 *)(**(_QWORD **)(a1 + 8) + 16LL), **(_QWORD **)(a1 + 8));
  }
  else
  {
    *(_QWORD *)a2 = v9;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
