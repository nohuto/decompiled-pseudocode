/*
 * XREFs of RtlGuardRestoreContext @ 0x180003240
 * Callers:
 *     KiUserExceptionDispatcher @ 0x1800A4070 (KiUserExceptionDispatcher.c)
 * Callees:
 *     RtlGuardCheckLongJumpTarget @ 0x180002F20 (RtlGuardCheckLongJumpTarget.c)
 *     RtlGuardIsValidStackPointer @ 0x18000375C (RtlGuardIsValidStackPointer.c)
 *     LdrControlFlowGuardEnforcedWithExportSuppression @ 0x180009B04 (LdrControlFlowGuardEnforcedWithExportSuppression.c)
 *     LdrControlFlowGuardEnforced @ 0x180041DE0 (LdrControlFlowGuardEnforced.c)
 *     LdrpValidateUserCallTarget @ 0x180090200 (LdrpValidateUserCallTarget.c)
 *     LdrpValidateUserCallTargetES @ 0x180090250 (LdrpValidateUserCallTargetES.c)
 */

void __cdecl RtlGuardRestoreContext(PCONTEXT ContextRecord, struct _EXCEPTION_RECORD *ExceptionRecord)
{
  int v4; // eax
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rdi

  if ( ExceptionRecord )
  {
    if ( ExceptionRecord->ExceptionCode == -2147483610 )
    {
      v6 = ExceptionRecord->ExceptionInformation[0];
      if ( !(unsigned int)LdrControlFlowGuardEnforced()
        || (unsigned int)RtlGuardIsValidStackPointer(*(_QWORD *)(v6 + 16)) )
      {
        RtlGuardCheckLongJumpTarget(*(_QWORD *)(v6 + 80), 0, 0LL);
        goto LABEL_4;
      }
LABEL_15:
      __fastfail(0xDu);
    }
    if ( ExceptionRecord->ExceptionCode == -2147483607
      && ExceptionRecord->NumberParameters
      && (unsigned int)LdrControlFlowGuardEnforced() )
    {
      v4 = LdrControlFlowGuardEnforcedWithExportSuppression();
      v5 = ExceptionRecord->ExceptionInformation[0];
      if ( v4 )
        LdrpValidateUserCallTargetES(v5);
      else
        LdrpValidateUserCallTarget(v5);
    }
  }
  if ( (unsigned int)LdrControlFlowGuardEnforced() && !(unsigned int)RtlGuardIsValidStackPointer(ContextRecord->Rsp) )
    goto LABEL_15;
LABEL_4:
  RtlRestoreContext(ContextRecord, ExceptionRecord);
}
