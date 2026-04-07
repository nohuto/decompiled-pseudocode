/*
 * XREFs of ?FailFastIfAccessDenied@@YAJJ@Z @ 0x18002CA8C
 * Callers:
 *     ?CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ @ 0x18002A878 (-CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ.c)
 *     ?GetDcompTargetsForNewGroup@CDesktopManager@@AEAAJPEAV?$DynArray@PEAUIDCompositionRenderTargetPartner@@$0A@@@PEAPEBVCDWMDisplay@@PEA_N2PEAH3@Z @ 0x18002AA24 (-GetDcompTargetsForNewGroup@CDesktopManager@@AEAAJPEAV-$DynArray@PEAUIDCompositionRenderTargetPa.c)
 *     ?EnsureDesktopRenderTarget@CDesktopManager@@AEAAJXZ @ 0x18004C190 (-EnsureDesktopRenderTarget@CDesktopManager@@AEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18004E0C0 (__security_check_cookie.c)
 *     memset_0 @ 0x18004FB12 (memset_0.c)
 */

__int64 __fastcall FailFastIfAccessDenied(unsigned int a1)
{
  _EXCEPTION_RECORD pExceptionRecord; // [rsp+20h] [rbp-B8h] BYREF

  if ( a1 == -2147024891 )
  {
    memset_0(&pExceptionRecord.ExceptionFlags, 0, 0x94uLL);
    pExceptionRecord.ExceptionCode = -2147024891;
    RaiseFailFastException(&pExceptionRecord, 0LL, 0);
  }
  return a1;
}
