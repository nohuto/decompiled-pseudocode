/*
 * XREFs of sub_18004B760 @ 0x18004B760
 * Callers:
 *     sub_18003C350 @ 0x18003C350 (sub_18003C350.c)
 * Callees:
 *     sub_18004B4D4 @ 0x18004B4D4 (sub_18004B4D4.c)
 *     sub_180083A14 @ 0x180083A14 (sub_180083A14.c)
 */

int __fastcall sub_18004B760(__int64 a1)
{
  int result; // eax

  result = *(_DWORD *)(a1 + 120);
  if ( (result & 0x20000000) != 0 )
  {
    result &= ~0x20000000u;
    *(_DWORD *)(a1 + 120) = result;
    if ( (dword_180166554 & 1) == 0 )
    {
      sub_18004B4D4(a1);
      result = *(_DWORD *)(a1 + 120);
    }
  }
  if ( (result & 0x10000000) != 0 )
  {
    *(_DWORD *)(a1 + 120) = result & 0xEFFFFFFF;
    result = sub_180083A14(a1);
    *(_DWORD *)(a1 + 120) &= ~0x10000000u;
  }
  return result;
}
