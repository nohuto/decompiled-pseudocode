/*
 * XREFs of sub_1800A8FC4 @ 0x1800A8FC4
 * Callers:
 *     sub_1800A4154 @ 0x1800A4154 (sub_1800A4154.c)
 * Callees:
 *     sub_1800F58EC @ 0x1800F58EC (sub_1800F58EC.c)
 */

__int64 __fastcall sub_1800A8FC4(__int64 a1)
{
  _QWORD *v1; // rbx
  _QWORD *v2; // rdi
  __int64 result; // rax

  v1 = (_QWORD *)(a1 + 256);
  v2 = (_QWORD *)(a1 + 416);
  while ( v1 != v2 )
  {
    if ( *v1 )
      result = sub_1800F58EC();
    v1 += 2;
  }
  return result;
}
