/*
 * XREFs of _dynamic_atexit_destructor_for__ISMStatics::s_inputSystemBamoConnection__ @ 0x180136C60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

void dynamic_atexit_destructor_for__ISMStatics::s_inputSystemBamoConnection__()
{
  __int64 v0; // rcx
  void (__fastcall ***v1)(_QWORD); // rax

  v0 = ISMStatics::s_inputSystemBamoConnection;
  if ( ISMStatics::s_inputSystemBamoConnection )
  {
    ISMStatics::s_inputSystemBamoConnection = 0LL;
    v1 = (void (__fastcall ***)(_QWORD))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v0 + 24LL))(v0);
    (**v1)(v1);
  }
}
