/*
 * XREFs of KeInitializeTriageDumpDataArray @ 0x140292430
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall KeInitializeTriageDumpDataArray(PKTRIAGE_DUMP_DATA_ARRAY KtriageDumpDataArray, ULONG Size)
{
  NTSTATUS result; // eax

  if ( !KtriageDumpDataArray )
    return -1073741811;
  if ( Size < 0x38 )
    return -1073741789;
  KtriageDumpDataArray->List.Blink = &KtriageDumpDataArray->List;
  KtriageDumpDataArray->List.Flink = &KtriageDumpDataArray->List;
  KtriageDumpDataArray->NumBlocksTotal = (Size - 40) >> 4;
  result = 0;
  KtriageDumpDataArray->NumBlocksUsed = 0;
  *(_QWORD *)&KtriageDumpDataArray->VirtMemSize = 0LL;
  KtriageDumpDataArray->ComponentName = 0LL;
  return result;
}
