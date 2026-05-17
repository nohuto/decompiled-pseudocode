/*
 * XREFs of sub_1800CF68C @ 0x1800CF68C
 * Callers:
 *     sub_18002105C @ 0x18002105C (sub_18002105C.c)
 *     sub_1800CF794 @ 0x1800CF794 (sub_1800CF794.c)
 *     sub_1800CFA48 @ 0x1800CFA48 (sub_1800CFA48.c)
 * Callees:
 *     sub_1800D09E4 @ 0x1800D09E4 (sub_1800D09E4.c)
 */

unsigned __int64 __fastcall sub_1800CF68C(__int64 a1, _WORD *a2, unsigned int a3, int *a4)
{
  unsigned __int64 result; // rax
  int v7; // ecx
  __int64 v8; // [rsp+30h] [rbp-18h] BYREF
  int v9; // [rsp+50h] [rbp+8h] BYREF

  result = (unsigned __int64)a2;
  if ( a1 && *(_WORD *)a1 )
  {
    sub_1800D09E4((_DWORD)a2, a3 >> 1, *(_QWORD *)(a1 + 8), (unsigned int)&v8, (__int64)&v9);
    result = (unsigned int)(1 - v9);
    v7 = a3 + 2 * result;
  }
  else
  {
    v7 = 2;
    if ( a3 < 2 )
      v7 = 0;
    else
      *a2 = 0;
  }
  *a4 = v7;
  return result;
}
