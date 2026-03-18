/*
 * XREFs of ?DxgDbgInit@@YAXXZ @ 0x1C015E3B0
 * Callers:
 *     DriverEntry @ 0x1C02D5158 (DriverEntry.c)
 * Callees:
 *     <none>
 */

void __fastcall DxgDbgInit(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rax

  if ( byte_1C00A2D05 )
  {
    v4 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v4 + 24) = 137LL;
    WdLogEvent5_WdAssertion(v4);
  }
  CallbackRecord.State = 0;
  xmmword_1C00A2D18 = WdDxgkSecondaryDataGUID;
  strcpy((char *)&Component, "\\Device\\DxgKrnl");
  byte_1C00A2D05 = KeRegisterBugCheckReasonCallback(
                     &CallbackRecord,
                     (PKBUGCHECK_REASON_CALLBACK_ROUTINE)DxgDbgBugcheckCallback,
                     KbCallbackSecondaryDumpData,
                     &Component);
  if ( !byte_1C00A2D05 )
  {
    v5 = WdLogNewEntry5_WdAssertion(v3, v2);
    *(_QWORD *)(v5 + 24) = 154LL;
    WdLogEvent5_WdAssertion(v5);
  }
}
