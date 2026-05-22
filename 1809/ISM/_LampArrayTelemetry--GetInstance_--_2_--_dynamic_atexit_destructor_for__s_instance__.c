/*
 * XREFs of _LampArrayTelemetry::GetInstance_::_2_::_dynamic_atexit_destructor_for__s_instance__ @ 0x180136E80
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall LampArrayTelemetry::GetInstance_::_2_::_dynamic_atexit_destructor_for__s_instance__()
{
  volatile signed __int32 *v0; // rbx

  v0 = (volatile signed __int32 *)qword_180193D48;
  if ( qword_180193D48 )
  {
    qword_180193D48 = 0LL;
    if ( _InterlockedExchangeAdd(v0 + 2, 0xFFFFFFFF) == 1 )
    {
      *((_DWORD *)v0 + 2) = 1;
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v0 + 32LL))(v0);
      *((_DWORD *)v0 + 2) = 0;
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v0 + 24LL))(v0, 1LL);
    }
  }
}
