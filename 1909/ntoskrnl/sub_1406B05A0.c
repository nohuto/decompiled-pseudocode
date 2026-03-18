/*
 * XREFs of sub_1406B05A0 @ 0x1406B05A0
 * Callers:
 *     WbInitializeEncryptionSegment @ 0x1405B4710 (WbInitializeEncryptionSegment.c)
 *     WbCreateHeapExecutedBlock @ 0x1406AFEE0 (WbCreateHeapExecutedBlock.c)
 * Callees:
 *     RtlCompareMemory @ 0x1401CCD70 (RtlCompareMemory.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     WbHashData @ 0x1406B063C (WbHashData.c)
 */

__int64 __fastcall sub_1406B05A0(UCHAR *Source1, unsigned int a2)
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
