/*
 * XREFs of sub_1800AB6F8 @ 0x1800AB6F8
 * Callers:
 *     sub_1800B1100 @ 0x1800B1100 (sub_1800B1100.c)
 * Callees:
 *     sub_1800AA520 @ 0x1800AA520 (sub_1800AA520.c)
 *     sub_1800AA7E8 @ 0x1800AA7E8 (sub_1800AA7E8.c)
 *     sub_1800AB138 @ 0x1800AB138 (sub_1800AB138.c)
 */

__int64 __fastcall sub_1800AB6F8(__int64 **a1, __int64 a2, _DWORD *a3)
{
  __int64 *v3; // rdi
  __int64 v7; // rbx
  _QWORD *v8; // rax
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF
  _DWORD *v11; // [rsp+68h] [rbp+20h] BYREF

  v3 = *a1;
  v7 = (*a1)[1];
  while ( !*(_BYTE *)(v7 + 25) )
  {
    if ( sub_1800AA520((_DWORD *)(v7 + 32), (__int64)a3) )
    {
      v7 = *(_QWORD *)(v7 + 16);
    }
    else
    {
      v3 = (__int64 *)v7;
      v7 = *(_QWORD *)v7;
    }
  }
  if ( v3 == *a1 || sub_1800AA520(a3, (__int64)(v3 + 4)) )
  {
    v11 = a3;
    v8 = sub_1800AA7E8(a1, (__int64)&unk_1801F1F58, &v11);
    sub_1800AB138(a1, &v10, v3, (_DWORD *)v8 + 8, v8);
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
