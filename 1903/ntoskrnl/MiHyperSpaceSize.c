/*
 * XREFs of MiHyperSpaceSize @ 0x140075C50
 * Callers:
 *     MiSystemFault @ 0x140075120 (MiSystemFault.c)
 *     MiStealPage @ 0x1400A0834 (MiStealPage.c)
 *     MiInitializeWalkBounds @ 0x14012A000 (MiInitializeWalkBounds.c)
 *     MiRealVaToFlushType @ 0x140173FA0 (MiRealVaToFlushType.c)
 *     MiQueryLeafPte @ 0x1402D8A10 (MiQueryLeafPte.c)
 *     MiDeleteVadBitmap @ 0x1406708B8 (MiDeleteVadBitmap.c)
 *     MiAssignTopLevelRanges @ 0x1409F06A0 (MiAssignTopLevelRanges.c)
 *     MiAddSubRegionEntropy @ 0x1409F0A04 (MiAddSubRegionEntropy.c)
 * Callees:
 *     <none>
 */

__int64 MiHyperSpaceSize()
{
  __int64 result; // rax
  unsigned __int64 v1; // r8
  unsigned int v2; // r9d
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // rcx

  result = qword_140465EE8;
  if ( !qword_140465EE8 )
  {
    result = 0x10000000LL;
    v1 = 0x4000000LL;
    v2 = 0;
    do
    {
      v3 = (result + 4095) & 0xFFFFFFFFFFFFF000uLL;
      qword_140465EF0[1 - v2++] = v3;
      v4 = (v1 >> 6) + ((v1 & 0x3F) != 0);
      v1 >>= 9;
      result = v3 + 8 * v4;
    }
    while ( v2 < 2 );
    qword_140465EE8 = v3 + 8 * v4;
  }
  return result;
}
