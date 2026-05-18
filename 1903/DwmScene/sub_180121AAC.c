/*
 * XREFs of sub_180121AAC @ 0x180121AAC
 * Callers:
 *     sub_18011FBAC @ 0x18011FBAC (sub_18011FBAC.c)
 *     sub_18011FDF4 @ 0x18011FDF4 (sub_18011FDF4.c)
 *     sub_180120040 @ 0x180120040 (sub_180120040.c)
 *     sub_180120324 @ 0x180120324 (sub_180120324.c)
 *     sub_180122630 @ 0x180122630 (sub_180122630.c)
 *     sub_180122920 @ 0x180122920 (sub_180122920.c)
 * Callees:
 *     sub_18008D748 @ 0x18008D748 (sub_18008D748.c)
 *     sub_1801207EC @ 0x1801207EC (sub_1801207EC.c)
 *     sub_180121120 @ 0x180121120 (sub_180121120.c)
 */

__int64 __fastcall sub_180121AAC(__int64 **a1, __int64 a2, char *a3)
{
  __int64 *v3; // rdi
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF
  char *v11; // [rsp+68h] [rbp+20h] BYREF

  v3 = *a1;
  v7 = (*a1)[1];
  while ( !*(_BYTE *)(v7 + 25) )
  {
    if ( (int)sub_18008D748((char *)(v7 + 32), (__int64)a3) >= 0 )
    {
      v3 = (__int64 *)v7;
      v7 = *(_QWORD *)v7;
    }
    else
    {
      v7 = *(_QWORD *)(v7 + 16);
    }
  }
  if ( v3 == *a1 || (int)sub_18008D748(a3, (__int64)(v3 + 4)) < 0 )
  {
    v11 = a3;
    v8 = sub_1801207EC((__int64)a1, (__int64)&unk_18021243A, (__int64 *)&v11);
    sub_180121120(a1, &v10, v3, (char *)(v8 + 32), (_QWORD *)v8);
    *(_QWORD *)a2 = v10;
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v3;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
