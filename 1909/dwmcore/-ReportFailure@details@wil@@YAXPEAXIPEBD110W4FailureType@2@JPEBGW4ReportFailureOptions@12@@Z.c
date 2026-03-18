/*
 * XREFs of ?ReportFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBGW4ReportFailureOptions@12@@Z @ 0x180154A7C
 * Callers:
 *     ?ReportFailure_GetLastError@details@wil@@YAKPEAXIPEBD110W4FailureType@2@@Z @ 0x180154B90 (-ReportFailure_GetLastError@details@wil@@YAKPEAXIPEBD110W4FailureType@2@@Z.c)
 *     ?ReportFailure_GetLastErrorHr@details@wil@@YAJPEAXIPEBD110W4FailureType@2@@Z @ 0x180154C2C (-ReportFailure_GetLastErrorHr@details@wil@@YAJPEAXIPEBD110W4FailureType@2@@Z.c)
 *     ?ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z @ 0x180154CC0 (-ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z.c)
 *     ?ReportFailure_Msg@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J1PEAD@Z @ 0x1801B6398 (-ReportFailure_Msg@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J1PEAD@Z.c)
 *     ?ReportFailure_Win32@details@wil@@YAJPEAXIPEBD110W4FailureType@2@K@Z @ 0x1801B6488 (-ReportFailure_Win32@details@wil@@YAJPEAXIPEBD110W4FailureType@2@K@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1800F0100 (_alloca_probe.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBG_NPEAG_KPEAD6PEAUFailureInfo@2@@Z @ 0x180154238 (-LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBG_NPEAG_KPEAD6PEAUFailureInfo@2@@Z.c)
 *     ?WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x180155210 (-WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 */

void __fastcall wil::details::ReportFailure(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        unsigned int a8,
        _WORD *a9)
{
  bool v9; // bl
  const struct wil::FailureInfo *v10; // rdx
  __int64 v11; // [rsp+48h] [rbp-14F0h]
  __int64 v12; // [rsp+58h] [rbp-14E0h]
  __int64 v13; // [rsp+68h] [rbp-14D0h]
  _BYTE v14[144]; // [rsp+80h] [rbp-14B8h] BYREF
  char v15[1024]; // [rsp+110h] [rbp-1428h] BYREF
  _BYTE v16[4096]; // [rsp+510h] [rbp-1028h] BYREF

  v9 = !a7 && g_pfnThrowPlatformException;
  wil::details::LogFailure(a1, a2, a3, a4, a5, a6, a7, a8, a9, v11, (wil *)v16, v12, v15, v13, (unsigned __int64)v14);
  if ( a7 == 3 )
LABEL_11:
    wil::details::WilFailFast((wil::details *)v14, v10);
  if ( !a7 )
  {
    if ( v9 )
      ((void (__fastcall *)(_BYTE *, _BYTE *))g_pfnThrowPlatformException)(v14, v16);
    if ( wil::details::g_pfnThrowResultException )
      wil::details::g_pfnThrowResultException((const struct wil::FailureInfo *)v14);
    goto LABEL_11;
  }
}
