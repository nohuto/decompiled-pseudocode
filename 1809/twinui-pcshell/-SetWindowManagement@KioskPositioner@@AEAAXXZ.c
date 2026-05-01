/*
 * XREFs of ?SetWindowManagement@KioskPositioner@@AEAAXXZ @ 0x180099ED8
 * Callers:
 *     ?PerformDelayedInitialization@KioskPositioner@@UEAAJXZ @ 0x180099540 (-PerformDelayedInitialization@KioskPositioner@@UEAAJXZ.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

void __fastcall KioskPositioner::SetWindowManagement(KioskPositioner *this)
{
  int v1; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)this + 28) + 56LL))(
         *((_QWORD *)this + 28),
         17LL,
         17LL);
  if ( v1 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      1154LL,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
      (const char *)(unsigned int)v1);
    JUMPOUT(0x180099F1ALL);
  }
}
