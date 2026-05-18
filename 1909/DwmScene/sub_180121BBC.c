/*
 * XREFs of sub_180121BBC @ 0x180121BBC
 * Callers:
 *     sub_18011FCBC @ 0x18011FCBC (sub_18011FCBC.c)
 *     sub_18011FF04 @ 0x18011FF04 (sub_18011FF04.c)
 *     sub_180120150 @ 0x180120150 (sub_180120150.c)
 *     sub_180120434 @ 0x180120434 (sub_180120434.c)
 *     sub_180122740 @ 0x180122740 (sub_180122740.c)
 *     sub_180122A30 @ 0x180122A30 (sub_180122A30.c)
 * Callees:
 *     sub_18008D858 @ 0x18008D858 (sub_18008D858.c)
 *     sub_1801208FC @ 0x1801208FC (sub_1801208FC.c)
 *     sub_180121230 @ 0x180121230 (sub_180121230.c)
 */

__int64 __fastcall sub_180121BBC(__int64 **a1, __int64 a2, char *a3)
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
    if ( (int)sub_18008D858((char *)(v7 + 32), (__int64)a3) >= 0 )
    {
      v3 = (__int64 *)v7;
      v7 = *(_QWORD *)v7;
    }
    else
    {
      v7 = *(_QWORD *)(v7 + 16);
    }
  }
  if ( v3 == *a1 || (int)sub_18008D858(a3, (__int64)(v3 + 4)) < 0 )
  {
    v11 = a3;
    v8 = sub_1801208FC((__int64)a1, (__int64)&unk_18021343A, (__int64 *)&v11);
    sub_180121230(a1, &v10, v3, (char *)(v8 + 32), (_QWORD *)v8);
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
