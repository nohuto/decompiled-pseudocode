/*
 * XREFs of RtlGuardRestoreContext @ 0x18001EE50
 * Callers:
 *     RtlUnwindEx @ 0x18001D490 (RtlUnwindEx.c)
 *     KiUserExceptionDispatcher @ 0x1800A0C40 (KiUserExceptionDispatcher.c)
 * Callees:
 *     LdrControlFlowGuardEnforcedWithExportSuppression @ 0x18001AE58 (LdrControlFlowGuardEnforcedWithExportSuppression.c)
 *     LdrControlFlowGuardEnforced @ 0x18001AE90 (LdrControlFlowGuardEnforced.c)
 *     RtlGuardIsValidStackPointer @ 0x18001EF14 (RtlGuardIsValidStackPointer.c)
 *     RtlGuardCheckLongJumpTarget @ 0x180078810 (RtlGuardCheckLongJumpTarget.c)
 *     LdrpValidateUserCallTarget @ 0x18008D190 (LdrpValidateUserCallTarget.c)
 *     LdrpValidateUserCallTargetES @ 0x18008D1E0 (LdrpValidateUserCallTargetES.c)
 */

void __cdecl RtlGuardRestoreContext(PCONTEXT ContextRecord, struct _EXCEPTION_RECORD *ExceptionRecord)
{
  unsigned __int64 v4; // rdi
  BOOL v5; // eax
  unsigned __int64 v6; // rcx

  if ( !ExceptionRecord )
    goto LABEL_4;
  if ( ExceptionRecord->ExceptionCode != -2147483610 )
  {
    if ( ExceptionRecord->ExceptionCode == -2147483607
      && ExceptionRecord->NumberParameters
      && (unsigned int)LdrControlFlowGuardEnforced() )
    {
      v5 = LdrControlFlowGuardEnforcedWithExportSuppression();
      v6 = ExceptionRecord->ExceptionInformation[0];
      if ( v5 )
        LdrpValidateUserCallTargetES(v6);
      else
        LdrpValidateUserCallTarget(v6);
    }
LABEL_4:
    if ( (unsigned int)LdrControlFlowGuardEnforced() && !(unsigned int)RtlGuardIsValidStackPointer(ContextRecord->Rsp) )
      goto LABEL_6;
    goto LABEL_10;
  }
  v4 = ExceptionRecord->ExceptionInformation[0];
  if ( (unsigned int)LdrControlFlowGuardEnforced() && !(unsigned int)RtlGuardIsValidStackPointer(*(_QWORD *)(v4 + 16)) )
LABEL_6:
    __fastfail(0xDu);
  RtlGuardCheckLongJumpTarget(*(_QWORD *)(v4 + 80), 0LL, 0LL);
LABEL_10:
  RtlRestoreContext(ContextRecord, ExceptionRecord);
}
