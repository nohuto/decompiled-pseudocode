/*
 * XREFs of sub_180032454 @ 0x180032454
 * Callers:
 *     sub_180032A54 @ 0x180032A54 (sub_180032A54.c)
 *     sub_18003EC50 @ 0x18003EC50 (sub_18003EC50.c)
 *     sub_180072AF4 @ 0x180072AF4 (sub_180072AF4.c)
 *     sub_180094E58 @ 0x180094E58 (sub_180094E58.c)
 *     sub_18009CEBC @ 0x18009CEBC (sub_18009CEBC.c)
 *     sub_18009EE1C @ 0x18009EE1C (sub_18009EE1C.c)
 *     sub_1800AB7B4 @ 0x1800AB7B4 (sub_1800AB7B4.c)
 *     sub_1800BC664 @ 0x1800BC664 (sub_1800BC664.c)
 *     sub_1800CBD78 @ 0x1800CBD78 (sub_1800CBD78.c)
 *     sub_1800CD614 @ 0x1800CD614 (sub_1800CD614.c)
 *     sub_1800CEE34 @ 0x1800CEE34 (sub_1800CEE34.c)
 *     sub_1800CF934 @ 0x1800CF934 (sub_1800CF934.c)
 *     sub_1800D12B0 @ 0x1800D12B0 (sub_1800D12B0.c)
 *     sub_1800F4568 @ 0x1800F4568 (sub_1800F4568.c)
 *     sub_1800F6B0C @ 0x1800F6B0C (sub_1800F6B0C.c)
 * Callees:
 *     sub_180038C64 @ 0x180038C64 (sub_180038C64.c)
 */

__int64 __fastcall sub_180032454(__int64 a1, __int64 a2, _DWORD **a3)
{
  __int64 result; // rax

  result = sub_180038C64(a1);
  *(_WORD *)(result + 24) = 0;
  *(_DWORD *)(result + 32) = **a3;
  *(_QWORD *)(result + 40) = 0LL;
  *(_QWORD *)(result + 48) = 0LL;
  return result;
}
