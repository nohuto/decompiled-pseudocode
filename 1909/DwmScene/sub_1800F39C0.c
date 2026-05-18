/*
 * XREFs of sub_1800F39C0 @ 0x1800F39C0
 * Callers:
 *     sub_180091AE8 @ 0x180091AE8 (sub_180091AE8.c)
 *     sub_180093FEC @ 0x180093FEC (sub_180093FEC.c)
 *     sub_1800EA350 @ 0x1800EA350 (sub_1800EA350.c)
 *     sub_1800EC790 @ 0x1800EC790 (sub_1800EC790.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800F39C0(__int64 a1, unsigned __int16 a2, int a3)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 104);
  *(_DWORD *)(result
            + 40LL * *(unsigned int *)(56LL * *(unsigned __int16 *)(a1 + 2LL * a2 + 128) + *(_QWORD *)(a1 + 56) + 40)
            + 32) = a3;
  return result;
}
