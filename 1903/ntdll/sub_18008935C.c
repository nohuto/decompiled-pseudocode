/*
 * XREFs of sub_18008935C @ 0x18008935C
 * Callers:
 *     sub_180009B8C @ 0x180009B8C (sub_180009B8C.c)
 *     sub_18000A590 @ 0x18000A590 (sub_18000A590.c)
 *     sub_18007D494 @ 0x18007D494 (sub_18007D494.c)
 *     sub_180083BF4 @ 0x180083BF4 (sub_180083BF4.c)
 *     sub_1800CFD74 @ 0x1800CFD74 (sub_1800CFD74.c)
 *     sub_1800CFE80 @ 0x1800CFE80 (sub_1800CFE80.c)
 *     sub_1800D0184 @ 0x1800D0184 (sub_1800D0184.c)
 *     sub_1800D03F8 @ 0x1800D03F8 (sub_1800D03F8.c)
 *     sub_1800D0528 @ 0x1800D0528 (sub_1800D0528.c)
 *     sub_1800D062C @ 0x1800D062C (sub_1800D062C.c)
 *     sub_1800D070C @ 0x1800D070C (sub_1800D070C.c)
 *     sub_1800D07EC @ 0x1800D07EC (sub_1800D07EC.c)
 *     sub_180107238 @ 0x180107238 (sub_180107238.c)
 *     sub_180107294 @ 0x180107294 (sub_180107294.c)
 *     sub_1801072F0 @ 0x1801072F0 (sub_1801072F0.c)
 *     sub_1801073CC @ 0x1801073CC (sub_1801073CC.c)
 * Callees:
 *     EtwEventWriteTransfer @ 0x180052CF0 (EtwEventWriteTransfer.c)
 */

__int64 __fastcall sub_18008935C(__int64 a1, unsigned __int8 *a2, __int64 a3, __int64 a4, int a5, __int64 a6)
{
  _DWORD v7[2]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v8; // [rsp+38h] [rbp-10h]

  v7[0] = *a2 << 24;
  v7[1] = *(unsigned __int16 *)(a2 + 1);
  v8 = *(_QWORD *)(a2 + 3);
  *(_QWORD *)a6 = *(_QWORD *)(a1 + 8);
  *(_DWORD *)(a6 + 8) = **(unsigned __int16 **)(a1 + 8);
  *(_QWORD *)(a6 + 16) = a2 + 11;
  *(_DWORD *)(a6 + 12) = 2;
  *(_DWORD *)(a6 + 24) = *(unsigned __int16 *)(a2 + 11);
  *(_DWORD *)(a6 + 28) = 1;
  return EtwEventWriteTransfer(*(_QWORD *)(a1 + 32), (int)v7, 0LL, 0LL, a5, a6);
}
