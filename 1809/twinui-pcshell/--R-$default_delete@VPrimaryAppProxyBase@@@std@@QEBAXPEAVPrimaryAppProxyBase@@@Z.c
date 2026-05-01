/*
 * XREFs of ??R?$default_delete@VPrimaryAppProxyBase@@@std@@QEBAXPEAVPrimaryAppProxyBase@@@Z @ 0x180096EC4
 * Callers:
 *     ??1KioskPositioner@@UEAA@XZ @ 0x180096CDC (--1KioskPositioner@@UEAA@XZ.c)
 *     ?LoadShellLauncherConfiguration@KioskPositioner@@AEAAXXZ @ 0x180098D14 (-LoadShellLauncherConfiguration@KioskPositioner@@AEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::default_delete<PrimaryAppProxyBase>::operator()(
        __int64 a1,
        __int64 (__fastcall ***a2)(_QWORD, __int64))
{
  __int64 result; // rax

  if ( a2 )
    return (**a2)(a2, 1LL);
  return result;
}
