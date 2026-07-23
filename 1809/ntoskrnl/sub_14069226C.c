/*
 * XREFs of sub_14069226C @ 0x14069226C
 * Callers:
 *     WbInitializeEncryptionSegment @ 0x140585B2C (WbInitializeEncryptionSegment.c)
 *     sub_140691390 @ 0x140691390 (sub_140691390.c)
 * Callees:
 *     RtlCompareMemory @ 0x1401C5D30 (RtlCompareMemory.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     WbHashData @ 0x140692308 (WbHashData.c)
 */

__int64 __fastcall sub_14069226C(UCHAR *Source1, unsigned int a2)
{
  int v2; // ebx

  if ( Source1 && a2 > 0x20 )
  {
    v2 = WbHashData(Source1 + 32, a2 - 32);
    if ( v2 >= 0 )
      return (unsigned int)-1073741811;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v2;
}
