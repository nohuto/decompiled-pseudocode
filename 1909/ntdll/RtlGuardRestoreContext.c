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
  int v4; // eax
  unsigned __int64 v5; // rdi
  int v6; // eax
  int v7; // eax
  BOOL v8; // eax
  unsigned __int64 v9; // rcx

  if ( !ExceptionRecord )
    goto LABEL_4;
  if ( ExceptionRecord->ExceptionCode != -2147483610 )
  {
    if ( ExceptionRecord->ExceptionCode == -2147483607 )
    {
      if ( ExceptionRecord->NumberParameters )
      {
        LOBYTE(v7) = LdrControlFlowGuardEnforced();
        if ( v7 )
        {
          v8 = LdrControlFlowGuardEnforcedWithExportSuppression();
          v9 = ExceptionRecord->ExceptionInformation[0];
          if ( v8 )
            LdrpValidateUserCallTargetES(v9);
          else
            LdrpValidateUserCallTarget(v9);
        }
      }
    }
LABEL_4:
    LOBYTE(v4) = LdrControlFlowGuardEnforced();
    if ( v4 && !(unsigned int)RtlGuardIsValidStackPointer(ContextRecord->Rsp) )
      goto LABEL_6;
    goto LABEL_10;
  }
  v5 = ExceptionRecord->ExceptionInformation[0];
  LOBYTE(v6) = LdrControlFlowGuardEnforced();
  if ( v6 && !(unsigned int)RtlGuardIsValidStackPointer(*(_QWORD *)(v5 + 16)) )
LABEL_6:
    __fastfail(0xDu);
  RtlGuardCheckLongJumpTarget(*(PVOID *)(v5 + 80), 0, 0LL);
LABEL_10:
  RtlRestoreContext(ContextRecord, ExceptionRecord);
}
