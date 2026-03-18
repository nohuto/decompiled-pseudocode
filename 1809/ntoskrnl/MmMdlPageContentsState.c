/*
 * XREFs of MmMdlPageContentsState @ 0x14011BB30
 * Callers:
 *     SmKmIssueVolumeIo @ 0x140307424 (SmKmIssueVolumeIo.c)
 *     MdlInvariantPostProcessing1 @ 0x14030A54C (MdlInvariantPostProcessing1.c)
 *     MdlInvariantPreProcessing1 @ 0x14030A740 (MdlInvariantPreProcessing1.c)
 *     SmKmStoreFileWriteHeader @ 0x1408AE470 (SmKmStoreFileWriteHeader.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmMdlPageContentsState(__int64 a1, unsigned int a2)
{
  unsigned __int16 v2; // r8
  __int16 v3; // ax
  __int16 v4; // r8
  __int64 result; // rax

  v2 = *(_WORD *)(a1 + 10);
  if ( a2 == 2 )
    return (v2 >> 14) & 1;
  v3 = v2 & 0xBFFF;
  v4 = v2 | 0x4000;
  if ( a2 != 1 )
    v4 = v3;
  result = a2;
  *(_WORD *)(a1 + 10) = v4;
  return result;
}
