/*
 * XREFs of sub_180121AFC @ 0x180121AFC
 * Callers:
 *     sub_18011EE0C @ 0x18011EE0C (sub_18011EE0C.c)
 *     sub_18011F16C @ 0x18011F16C (sub_18011F16C.c)
 *     sub_18011F568 @ 0x18011F568 (sub_18011F568.c)
 *     sub_18011FA28 @ 0x18011FA28 (sub_18011FA28.c)
 *     sub_1801223B0 @ 0x1801223B0 (sub_1801223B0.c)
 * Callees:
 *     sub_18008D858 @ 0x18008D858 (sub_18008D858.c)
 *     sub_1801209BC @ 0x1801209BC (sub_1801209BC.c)
 *     sub_180121230 @ 0x180121230 (sub_180121230.c)
 */

__int64 __fastcall sub_180121AFC(__int64 **a1, __int64 a2, char *a3)
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
    v8 = sub_1801209BC((__int64)a1, (__int64)&unk_18021343A, (__int64 *)&v11);
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
