/*
 * XREFs of _anonymous_namespace_::GetKeyboardProcessor @ 0x1C008DF68
 * Callers:
 *     GetKeyboardInputRoutingPolicy @ 0x1C008DF50 (GetKeyboardInputRoutingPolicy.c)
 *     NtMITSetKeyboardOverriderState @ 0x1C0112850 (NtMITSetKeyboardOverriderState.c)
 *     SetKeyboardInputRoutingPolicy @ 0x1C0182664 (SetKeyboardInputRoutingPolicy.c)
 *     xxxKeyEventEx @ 0x1C0183FE0 (xxxKeyEventEx.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00BF5D0 (_guard_dispatch_icall_nop.c)
 */

__int64 anonymous_namespace_::GetKeyboardProcessor()
{
  if ( qword_1C0208048 )
    return (*(__int64 (__fastcall **)(CKeyboardSensor *))(*(_QWORD *)qword_1C0208048 + 8LL))(qword_1C0208048);
  else
    return 0LL;
}
