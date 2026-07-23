/*
 * XREFs of sub_18004EFA4 @ 0x18004EFA4
 * Callers:
 *     sub_18004C9D8 @ 0x18004C9D8 (sub_18004C9D8.c)
 *     sub_180050520 @ 0x180050520 (sub_180050520.c)
 * Callees:
 *     sub_180044E1C @ 0x180044E1C (sub_180044E1C.c)
 *     sub_180047490 @ 0x180047490 (sub_180047490.c)
 *     sub_18004CC7C @ 0x18004CC7C (sub_18004CC7C.c)
 *     sub_1800515E8 @ 0x1800515E8 (sub_1800515E8.c)
 */

__int64 __fastcall sub_18004EFA4(unsigned __int64 a1, int a2, unsigned __int64 a3, __int128 *a4, int a5)
{
  char *v8; // rbx
  int v9; // eax
  __int64 v10; // rbx
  __int64 v11; // rax
  unsigned __int64 v12; // rbp
  int v13; // r9d
  __int64 v15; // rax
  __int128 v16; // [rsp+30h] [rbp-18h] BYREF

  v16 = *a4;
  v8 = sub_18004CC7C(&v16);
  if ( (_WORD)a1 )
  {
    v9 = 0;
  }
  else
  {
    v15 = sub_1800515E8(&qword_180166A60, 2 * ((a1 - qword_180166A58) >> 20));
    if ( v15 )
      v9 = v15 - 1;
    else
      v9 = 2;
  }
  v10 = 192LL * v9 + *(_QWORD *)v8;
  v11 = sub_180044E1C(v10 + 256, a1);
  v12 = a3 >> 12;
  v13 = -(int)v12;
  if ( a5 )
    v13 = v12;
  return sub_180047490(v10 + 256, v11, (unsigned int)(a2 - a1) >> 12, v13, 0, 0LL);
}
