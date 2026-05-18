/*
 * XREFs of sub_1800B1114 @ 0x1800B1114
 * Callers:
 *     sub_1800190D0 @ 0x1800190D0 (sub_1800190D0.c)
 *     sub_1800C2A10 @ 0x1800C2A10 (sub_1800C2A10.c)
 *     sub_1800C471C @ 0x1800C471C (sub_1800C471C.c)
 *     sub_1800C9538 @ 0x1800C9538 (sub_1800C9538.c)
 *     sub_1800CA84C @ 0x1800CA84C (sub_1800CA84C.c)
 *     sub_1801008C0 @ 0x1801008C0 (sub_1801008C0.c)
 *     sub_1801012B0 @ 0x1801012B0 (sub_1801012B0.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1800B1114(__int64 a1, int a2)
{
  *(_DWORD *)(a1 + 544) |= a2;
  if ( (a2 & 4) != 0 )
    *(_BYTE *)(a1 + 1612) = 1;
}
