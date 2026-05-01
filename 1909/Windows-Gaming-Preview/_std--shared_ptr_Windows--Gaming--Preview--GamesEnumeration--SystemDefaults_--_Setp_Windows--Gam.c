/*
 * XREFs of _std::shared_ptr_Windows::Gaming::Preview::GamesEnumeration::SystemDefaults_::_Setp_Windows::Gaming::Preview::GamesEnumeration::SystemDefaults__::_1_::catch$1 @ 0x18004553D
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x180043BA0 (_CxxThrowException_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800443E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall __noreturn std::shared_ptr_Windows::Gaming::Preview::GamesEnumeration::SystemDefaults_::_Setp_Windows::Gaming::Preview::GamesEnumeration::SystemDefaults__::_1_::catch_1(
        __int64 a1,
        __int64 a2)
{
  void (__fastcall ***v2)(_QWORD, __int64); // rcx

  v2 = *(void (__fastcall ****)(_QWORD, __int64))(a2 + 72);
  if ( v2 )
    (**v2)(v2, 1LL);
  throw;
}
