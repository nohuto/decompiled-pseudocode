/*
 * XREFs of sub_1800F2F48 @ 0x1800F2F48
 * Callers:
 *     sub_1800F5478 @ 0x1800F5478 (sub_1800F5478.c)
 *     sub_1800F5820 @ 0x1800F5820 (sub_1800F5820.c)
 *     sub_1800F597C @ 0x1800F597C (sub_1800F597C.c)
 *     sub_1800F5E20 @ 0x1800F5E20 (sub_1800F5E20.c)
 *     sub_1800F609C @ 0x1800F609C (sub_1800F609C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800F2F48(__int64 a1, unsigned __int16 a2)
{
  return *(_QWORD *)(a1 + 56) + 56LL * *(unsigned __int16 *)(a1 + 2LL * a2 + 128);
}
