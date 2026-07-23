/*
 * XREFs of RtlGuardRestoreContext @ 0x180003240
 * Callers:
 *     KiUserExceptionDispatcher @ 0x1800A4090 (KiUserExceptionDispatcher.c)
 * Callees:
 *     RtlGuardCheckLongJumpTarget @ 0x180002F20 (RtlGuardCheckLongJumpTarget.c)
 *     RtlGuardIsValidStackPointer @ 0x18000375C (RtlGuardIsValidStackPointer.c)
 *     LdrControlFlowGuardEnforcedWithExportSuppression @ 0x180009B04 (LdrControlFlowGuardEnforcedWithExportSuppression.c)
 *     LdrControlFlowGuardEnforced @ 0x180041DE0 (LdrControlFlowGuardEnforced.c)
 *     LdrpValidateUserCallTarget @ 0x180090210 (LdrpValidateUserCallTarget.c)
 *     LdrpValidateUserCallTargetES @ 0x180090260 (LdrpValidateUserCallTargetES.c)
 */

void __cdecl RtlGuardRestoreContext(PCONTEXT ContextRecord, struct _EXCEPTION_RECORD *ExceptionRecord)
{
  int v4; // eax
  int v5; // eax
  int v6; // eax
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rdi
  int v9; // eax

  if ( ExceptionRecord )
  {
    if ( ExceptionRecord->ExceptionCode == -2147483610 )
    {
      v8 = ExceptionRecord->ExceptionInformation[0];
      LOBYTE(v9) = LdrControlFlowGuardEnforced();
      if ( !v9 || (unsigned int)RtlGuardIsValidStackPointer(*(_QWORD *)(v8 + 16)) )
      {
        RtlGuardCheckLongJumpTarget(*(PVOID *)(v8 + 80), 0, 0LL);
        goto LABEL_4;
      }
LABEL_15:
      __fastfail(0xDu);
    }
    if ( ExceptionRecord->ExceptionCode == -2147483607 )
    {
      if ( ExceptionRecord->NumberParameters )
      {
        LOBYTE(v5) = LdrControlFlowGuardEnforced();
        if ( v5 )
        {
          v6 = LdrControlFlowGuardEnforcedWithExportSuppression();
          v7 = ExceptionRecord->ExceptionInformation[0];
          if ( v6 )
            LdrpValidateUserCallTargetES(v7);
          else
            LdrpValidateUserCallTarget(v7);
        }
      }
    }
  }
  LOBYTE(v4) = LdrControlFlowGuardEnforced();
  if ( v4 && !(unsigned int)RtlGuardIsValidStackPointer(ContextRecord->Rsp) )
    goto LABEL_15;
LABEL_4:
  RtlRestoreContext(ContextRecord, ExceptionRecord);
}
