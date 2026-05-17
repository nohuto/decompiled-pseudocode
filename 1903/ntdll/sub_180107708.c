/*
 * XREFs of sub_180107708 @ 0x180107708
 * Callers:
 *     sub_180040B50 @ 0x180040B50 (sub_180040B50.c)
 *     sub_18004D024 @ 0x18004D024 (sub_18004D024.c)
 *     sub_180107BC4 @ 0x180107BC4 (sub_180107BC4.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_180107708(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 38) & 3) != 0 )
    return (((16 * (*(unsigned __int16 *)(a1 + 36) + 256LL)) & 0xFFFFFFFFFFFFF000uLL) + 4096) >> 4;
  else
    return *(unsigned __int16 *)(a1 + 36);
}
