/*
 * XREFs of RtlComputeCrc32 @ 0x140114880
 * Callers:
 *     SmDecompressBuffer @ 0x140107918 (SmDecompressBuffer.c)
 *     ?StDmpSinglePageAdd@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_WORK_ITEM@1@PEAK@Z @ 0x14014FD00 (-StDmpSinglePageAdd@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_W.c)
 *     ?ReadEntries@SC_GPT@@AEAAJPEAVGPT_HEADER@@PEAU_GPT_ENTRY@@@Z @ 0x14034C070 (-ReadEntries@SC_GPT@@AEAAJPEAVGPT_HEADER@@PEAU_GPT_ENTRY@@@Z.c)
 *     ?ReadHeader@SC_GPT@@AEAAJKPEAVGPT_HEADER@@@Z @ 0x14034C0F8 (-ReadHeader@SC_GPT@@AEAAJKPEAVGPT_HEADER@@@Z.c)
 *     ?VerifyPartitionTable@SC_GPT@@QEAAJE@Z @ 0x14034C4F4 (-VerifyPartitionTable@SC_GPT@@QEAAJE@Z.c)
 *     ?WritePartitionTable@SC_GPT@@QEAAJPEAVSC_DISK_LAYOUT@@E@Z @ 0x14034C7CC (-WritePartitionTable@SC_GPT@@QEAAJPEAVSC_DISK_LAYOUT@@E@Z.c)
 *     PopBsdUpdateWorker @ 0x1405B18D0 (PopBsdUpdateWorker.c)
 *     PoClearTransitionMarker @ 0x140769D38 (PoClearTransitionMarker.c)
 *     PopUpdateBsdPowerTransitionReferenceTime @ 0x1408A283C (PopUpdateBsdPowerTransitionReferenceTime.c)
 *     SmKmStoreFileWriteHeader @ 0x1408EB438 (SmKmStoreFileWriteHeader.c)
 *     ExpSingleStringCheck @ 0x140A184B0 (ExpSingleStringCheck.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall RtlComputeCrc32(ULONG InitialCrc, PUCHAR Buffer, ULONG Length)
{
  ULONG v4; // ecx
  __int64 v5; // r10
  char v6; // al

  v4 = ~InitialCrc;
  if ( Length )
  {
    v5 = Length;
    do
    {
      v6 = *Buffer++;
      v4 = (v4 >> 8) ^ RtlCrc32Table[(unsigned __int8)(v6 ^ v4)];
      --v5;
    }
    while ( v5 );
  }
  return ~v4;
}
