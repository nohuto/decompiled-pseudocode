/*
 * XREFs of _anonymous_namespace_::GetKeyboardProcessor @ 0x1C0091EF8
 * Callers:
 *     GetKeyboardInputRoutingPolicy @ 0x1C0091EE0 (GetKeyboardInputRoutingPolicy.c)
 *     NtMITSetKeyboardOverriderState @ 0x1C01151C0 (NtMITSetKeyboardOverriderState.c)
 *     SetKeyboardInputRoutingPolicy @ 0x1C0184854 (SetKeyboardInputRoutingPolicy.c)
 *     xxxKeyEventEx @ 0x1C01861D0 (xxxKeyEventEx.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 */

__int64 anonymous_namespace_::GetKeyboardProcessor()
{
  if ( qword_1C020B048 )
    return (*(__int64 (__fastcall **)(CKeyboardSensor *))(*(_QWORD *)qword_1C020B048 + 8LL))(qword_1C020B048);
  else
    return 0LL;
}
