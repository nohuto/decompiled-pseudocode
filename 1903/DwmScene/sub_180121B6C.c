/*
 * XREFs of sub_180121B6C @ 0x180121B6C
 * Callers:
 *     sub_18011EC3C @ 0x18011EC3C (sub_18011EC3C.c)
 *     sub_18011EF90 @ 0x18011EF90 (sub_18011EF90.c)
 *     sub_18011F370 @ 0x18011F370 (sub_18011F370.c)
 *     sub_18011F854 @ 0x18011F854 (sub_18011F854.c)
 * Callees:
 *     sub_180120998 @ 0x180120998 (sub_180120998.c)
 *     sub_180120C28 @ 0x180120C28 (sub_180120C28.c)
 *     sub_180123798 @ 0x180123798 (sub_180123798.c)
 */

__int64 __fastcall sub_180121B6C(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v6; // rdx
  __int64 v7; // rdx
  __int64 *v9; // [rsp+50h] [rbp+8h] BYREF
  __int64 v10; // [rsp+68h] [rbp+20h] BYREF

  v9 = 0LL;
  sub_180123798(a1, &v9);
  v6 = *(__int64 **)(a1 + 8);
  if ( v9 == v6 )
  {
    v7 = *v6;
    v10 = a3;
    sub_180120C28(a1 + 8, v7, (__int64)&unk_18021243A, &v10, (__int64)&v9);
    sub_180120998((_QWORD *)a1, a2, (unsigned __int64 *)(**(_QWORD **)(a1 + 8) + 16LL), **(_QWORD **)(a1 + 8));
  }
  else
  {
    *(_QWORD *)a2 = v9;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
