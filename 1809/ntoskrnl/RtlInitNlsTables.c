/*
 * XREFs of RtlInitNlsTables @ 0x14075D0F0
 * Callers:
 *     Phase1InitializationDiscard @ 0x1409B3E10 (Phase1InitializationDiscard.c)
 *     InitBootProcessor @ 0x1409B4EDC (InitBootProcessor.c)
 * Callees:
 *     RtlInitCodePageTable @ 0x14075D150 (RtlInitCodePageTable.c)
 */

void __stdcall RtlInitNlsTables(
        PUSHORT AnsiTableBase,
        PUSHORT OemTableBase,
        PUSHORT CaseTableBase,
        PNLSTABLEINFO NlsTable)
{
  __int64 v6; // rcx

  RtlInitCodePageTable(AnsiTableBase, &CodePageTable);
  RtlInitCodePageTable(OemTableBase, &InitTableInfo);
  v6 = (unsigned __int16)(CaseTableBase[1] + 1);
  qword_140A0A780 = (__int64)(CaseTableBase + 2);
  qword_140A0A788 = (__int64)&CaseTableBase[v6 + 1];
}
