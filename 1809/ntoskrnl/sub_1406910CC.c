/*
 * XREFs of sub_1406910CC @ 0x1406910CC
 * Callers:
 *     WbInitializeEncryptionSegment @ 0x140584B2C (WbInitializeEncryptionSegment.c)
 *     sub_1406901F0 @ 0x1406901F0 (sub_1406901F0.c)
 * Callees:
 *     RtlCompareMemory @ 0x1401C5BB0 (RtlCompareMemory.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     WbHashData @ 0x140691168 (WbHashData.c)
 */

__int64 __fastcall sub_1406910CC(UCHAR *Source1, unsigned int a2)
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
