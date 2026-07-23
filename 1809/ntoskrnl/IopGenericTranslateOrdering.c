/*
 * XREFs of IopGenericTranslateOrdering @ 0x140752020
 * Callers:
 *     <none>
 * Callees:
 *     IopTranslateBusAddress @ 0x1407520AC (IopTranslateBusAddress.c)
 */

__int64 __fastcall IopGenericTranslateOrdering(__int64 a1, __int64 a2)
{
  char v4; // di
  char v6; // [rsp+30h] [rbp+8h]

  *(_OWORD *)a1 = *(_OWORD *)a2;
  *(_OWORD *)(a1 + 16) = *(_OWORD *)(a2 + 16);
  v4 = *(_BYTE *)(a2 + 1);
  if ( ((v4 - 1) & 0xF9) == 0 && v4 != 5 )
  {
    if ( (int)IopTranslateBusAddress(*(PHYSICAL_ADDRESS *)(a2 + 16)) < 0
      || (int)IopTranslateBusAddress(*(PHYSICAL_ADDRESS *)(a2 + 24)) < 0 )
    {
      *(_BYTE *)(a1 + 1) = 0;
    }
    else
    {
      *(_BYTE *)(a1 + 1) = v6;
    }
  }
  return 0LL;
}
