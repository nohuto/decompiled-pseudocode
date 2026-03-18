/*
 * XREFs of RtlInitNlsTables @ 0x140783F00
 * Callers:
 *     Phase1InitializationDiscard @ 0x140A07008 (Phase1InitializationDiscard.c)
 *     InitBootProcessor @ 0x140A0816C (InitBootProcessor.c)
 * Callees:
 *     RtlInitCodePageTable @ 0x140783F60 (RtlInitCodePageTable.c)
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
  qword_140A507C0 = (__int64)(CaseTableBase + 2);
  qword_140A507C8 = (__int64)&CaseTableBase[v6 + 1];
}
