/*
 * XREFs of RtlRestoreContext @ 0x18001EE50
 * Callers:
 *     RtlUnwindEx @ 0x18001D490 (RtlUnwindEx.c)
 *     KiUserExceptionDispatcher @ 0x1800A0490 (KiUserExceptionDispatcher.c)
 * Callees:
 *     sub_18001AE58 @ 0x18001AE58 (sub_18001AE58.c)
 *     LdrControlFlowGuardEnforced @ 0x18001AE90 (LdrControlFlowGuardEnforced.c)
 *     sub_18001EF14 @ 0x18001EF14 (sub_18001EF14.c)
 *     RtlGuardCheckLongJumpTarget @ 0x180078390 (RtlGuardCheckLongJumpTarget.c)
 *     sub_18008CAF0 @ 0x18008CAF0 (sub_18008CAF0.c)
 *     sub_18008CB40 @ 0x18008CB40 (sub_18008CB40.c)
 */

void __cdecl RtlRestoreContext(PCONTEXT ContextRecord, struct _EXCEPTION_RECORD *ExceptionRecord)
{
  ULONG_PTR v4; // rdi
  BOOL v5; // eax
  ULONG_PTR v6; // rcx

  if ( !ExceptionRecord )
    goto LABEL_4;
  if ( ExceptionRecord->ExceptionCode != -2147483610 )
  {
    if ( ExceptionRecord->ExceptionCode == -2147483607
      && ExceptionRecord->NumberParameters
      && (unsigned int)LdrControlFlowGuardEnforced() )
    {
      v5 = sub_18001AE58();
      v6 = ExceptionRecord->ExceptionInformation[0];
      if ( v5 )
        sub_18008CB40(v6);
      else
        sub_18008CAF0(v6);
    }
LABEL_4:
    if ( (unsigned int)LdrControlFlowGuardEnforced() && !(unsigned int)sub_18001EF14(ContextRecord->Rsp) )
      goto LABEL_6;
    goto LABEL_10;
  }
  v4 = ExceptionRecord->ExceptionInformation[0];
  if ( (unsigned int)LdrControlFlowGuardEnforced() && !(unsigned int)sub_18001EF14(*(_QWORD *)(v4 + 16)) )
LABEL_6:
    __fastfail(0xDu);
  RtlGuardCheckLongJumpTarget(*(_QWORD *)(v4 + 80), 0LL, 0LL);
LABEL_10:
  sub_1800A0960(ContextRecord, ExceptionRecord);
}
