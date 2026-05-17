/*
 * XREFs of sub_180009360 @ 0x180009360
 * Callers:
 *     sub_180008A20 @ 0x180008A20 (sub_180008A20.c)
 *     sub_1800FF0C8 @ 0x1800FF0C8 (sub_1800FF0C8.c)
 * Callees:
 *     sub_1800156DC @ 0x1800156DC (sub_1800156DC.c)
 */

__int64 __fastcall sub_180009360(int a1)
{
  int v1; // ebx
  __int64 result; // rax
  int v3; // [rsp+40h] [rbp+8h] BYREF

  v1 = 4;
  if ( a1 >= 1 )
    v1 = a1;
  result = sub_1800156DC(16, v1, 12, 0, 0, (__int64)&v3);
  if ( result )
  {
    *(_DWORD *)result = v3;
    *(_QWORD *)(result + 8) = result + 16;
    *(_WORD *)(result + 4) = 0;
    *(_WORD *)(result + 6) = v1;
  }
  return result;
}
