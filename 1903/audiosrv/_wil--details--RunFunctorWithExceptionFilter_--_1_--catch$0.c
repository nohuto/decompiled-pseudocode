/*
 * XREFs of _wil::details::RunFunctorWithExceptionFilter_::_1_::catch$0 @ 0x180072F43
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall wil::details::RunFunctorWithExceptionFilter_::_1_::catch_0(__int64 a1, __int64 a2)
{
  *(_DWORD *)(a2 + 72) = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a2 + 72) + 8LL))(
                           *(_QWORD *)(a2 + 72),
                           *(_QWORD *)(a2 + 80));
  return &loc_1800445C2;
}
