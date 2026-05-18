/*
 * XREFs of sub_1800F38B0 @ 0x1800F38B0
 * Callers:
 *     sub_1800919D8 @ 0x1800919D8 (sub_1800919D8.c)
 *     sub_180093EDC @ 0x180093EDC (sub_180093EDC.c)
 *     sub_1800EA240 @ 0x1800EA240 (sub_1800EA240.c)
 *     sub_1800EC680 @ 0x1800EC680 (sub_1800EC680.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800F38B0(__int64 a1, unsigned __int16 a2, int a3)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 104);
  *(_DWORD *)(result
            + 40LL * *(unsigned int *)(56LL * *(unsigned __int16 *)(a1 + 2LL * a2 + 128) + *(_QWORD *)(a1 + 56) + 40)
            + 32) = a3;
  return result;
}
