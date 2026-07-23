/*
 * XREFs of HvIsInPlaceBaseBlockValid @ 0x1407FBD80
 * Callers:
 *     HvHiveStartMemoryBacked @ 0x14073DCFC (HvHiveStartMemoryBacked.c)
 * Callees:
 *     HvpHeaderCheckSum @ 0x1405A74F0 (HvpHeaderCheckSum.c)
 */

bool __fastcall HvIsInPlaceBaseBlockValid(_DWORD *a1)
{
  unsigned int v2; // ecx
  int v3; // eax
  __int64 v4; // r9
  bool result; // al

  result = 0;
  if ( *a1 == 1718052210 && !a1[7] && a1[5] <= 1u && (unsigned int)(a1[6] - 3) <= 3 && a1[8] == 1 )
  {
    v2 = a1[10];
    if ( v2 )
    {
      if ( (v2 & 0xFFF) == 0 && v2 <= 0x7FFFE000 )
      {
        v3 = HvpHeaderCheckSum(a1);
        if ( v3 == *(_DWORD *)(v4 + 508) )
          return 1;
      }
    }
  }
  return result;
}
