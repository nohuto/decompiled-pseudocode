/*
 * XREFs of RtlComputeCrc32 @ 0x14015B4F0
 * Callers:
 *     SmDecompressBuffer @ 0x1400E281C (SmDecompressBuffer.c)
 *     ?StDmpSinglePageAdd@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_WORK_ITEM@1@PEAK@Z @ 0x140148C10 (-StDmpSinglePageAdd@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_W.c)
 *     ?ReadEntries@SC_GPT@@AEAAJPEAVGPT_HEADER@@PEAU_GPT_ENTRY@@@Z @ 0x140329E4C (-ReadEntries@SC_GPT@@AEAAJPEAVGPT_HEADER@@PEAU_GPT_ENTRY@@@Z.c)
 *     ?ReadHeader@SC_GPT@@AEAAJKPEAVGPT_HEADER@@@Z @ 0x140329ED4 (-ReadHeader@SC_GPT@@AEAAJKPEAVGPT_HEADER@@@Z.c)
 *     ?VerifyPartitionTable@SC_GPT@@QEAAJE@Z @ 0x14032A350 (-VerifyPartitionTable@SC_GPT@@QEAAJE@Z.c)
 *     ?WritePartitionTable@SC_GPT@@QEAAJPEAVSC_DISK_LAYOUT@@E@Z @ 0x14032A638 (-WritePartitionTable@SC_GPT@@QEAAJPEAVSC_DISK_LAYOUT@@E@Z.c)
 *     PopWriteBsdPowerTransition @ 0x14071C488 (PopWriteBsdPowerTransition.c)
 *     PoClearTransitionMarker @ 0x140744FE0 (PoClearTransitionMarker.c)
 *     SmKmStoreFileWriteHeader @ 0x1408AE470 (SmKmStoreFileWriteHeader.c)
 *     ExpSingleStringCheck @ 0x1409D55FC (ExpSingleStringCheck.c)
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
