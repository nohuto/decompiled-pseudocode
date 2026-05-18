/*
 * XREFs of sub_1801219EC @ 0x1801219EC
 * Callers:
 *     sub_18011ECFC @ 0x18011ECFC (sub_18011ECFC.c)
 *     sub_18011F05C @ 0x18011F05C (sub_18011F05C.c)
 *     sub_18011F458 @ 0x18011F458 (sub_18011F458.c)
 *     sub_18011F918 @ 0x18011F918 (sub_18011F918.c)
 *     sub_1801222A0 @ 0x1801222A0 (sub_1801222A0.c)
 * Callees:
 *     sub_18008D748 @ 0x18008D748 (sub_18008D748.c)
 *     sub_1801208AC @ 0x1801208AC (sub_1801208AC.c)
 *     sub_180121120 @ 0x180121120 (sub_180121120.c)
 */

__int64 __fastcall sub_1801219EC(__int64 **a1, __int64 a2, char *a3)
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
    v8 = sub_1801208AC((__int64)a1, (__int64)&unk_18021243A, (__int64 *)&v11);
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
