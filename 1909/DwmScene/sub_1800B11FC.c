/*
 * XREFs of sub_1800B11FC @ 0x1800B11FC
 * Callers:
 *     sub_1800190D0 @ 0x1800190D0 (sub_1800190D0.c)
 *     sub_1800DD144 @ 0x1800DD144 (sub_1800DD144.c)
 *     sub_1801012B0 @ 0x1801012B0 (sub_1801012B0.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1800B11FC(__int64 a1, _OWORD *a2)
{
  *(_OWORD *)(a1 + 372) = *a2;
  *(_BYTE *)(a1 + 388) = 1;
}
