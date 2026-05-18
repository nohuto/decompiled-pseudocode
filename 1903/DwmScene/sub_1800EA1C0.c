/*
 * XREFs of sub_1800EA1C0 @ 0x1800EA1C0
 * Callers:
 *     sub_1800C3634 @ 0x1800C3634 (sub_1800C3634.c)
 *     sub_1800EA240 @ 0x1800EA240 (sub_1800EA240.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800EA1C0(float a1, float a2, float a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax

  result = a5;
  *(float *)(a4 + 4) = -a1;
  *(_DWORD *)a4 = 0;
  *(_DWORD *)(a4 + 12) = 0;
  *(float *)(a4 + 8) = -(float)(a1 + a2);
  *(_DWORD *)(a5 + 12) = 0;
  *(float *)(a5 + 4) = 1.0 / a2;
  *(float *)a5 = 1.0 / a1;
  *(float *)(a5 + 8) = 1.0 / a3;
  return result;
}
