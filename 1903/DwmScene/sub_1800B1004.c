/*
 * XREFs of sub_1800B1004 @ 0x1800B1004
 * Callers:
 *     sub_180018FC0 @ 0x180018FC0 (sub_180018FC0.c)
 *     sub_1800C2900 @ 0x1800C2900 (sub_1800C2900.c)
 *     sub_1800C460C @ 0x1800C460C (sub_1800C460C.c)
 *     sub_1800C9428 @ 0x1800C9428 (sub_1800C9428.c)
 *     sub_1800CA73C @ 0x1800CA73C (sub_1800CA73C.c)
 *     sub_1801007B0 @ 0x1801007B0 (sub_1801007B0.c)
 *     sub_1801011A0 @ 0x1801011A0 (sub_1801011A0.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1800B1004(__int64 a1, int a2)
{
  *(_DWORD *)(a1 + 544) |= a2;
  if ( (a2 & 4) != 0 )
    *(_BYTE *)(a1 + 1612) = 1;
}
