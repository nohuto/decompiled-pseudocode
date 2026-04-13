/*
 * XREFs of std::_dynamic_atexit_destructor_for__classic_locale__ @ 0x1800D5D60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CBD10 (_guard_dispatch_icall_nop.c)
 */

void std::_dynamic_atexit_destructor_for__classic_locale__()
{
  void (__fastcall ***v0)(_QWORD, __int64); // rax

  if ( qword_18018E450 )
  {
    v0 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)qword_18018E450 + 16LL))(qword_18018E450);
    if ( v0 )
      (**v0)(v0, 1LL);
  }
}
