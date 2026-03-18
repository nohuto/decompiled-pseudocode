/*
 * XREFs of ?ReportFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBGW4ReportFailureOptions@12@@Z @ 0x1400079B4
 * Callers:
 *     ?ReportFailure_GetLastError@details@wil@@YAKPEAXIPEBD110W4FailureType@2@@Z @ 0x140007AC4 (-ReportFailure_GetLastError@details@wil@@YAKPEAXIPEBD110W4FailureType@2@@Z.c)
 *     ?ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z @ 0x140007B74 (-ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x140003000 (__security_check_cookie.c)
 *     _alloca_probe @ 0x140004A10 (_alloca_probe.c)
 *     _guard_dispatch_icall_nop @ 0x140004A90 (_guard_dispatch_icall_nop.c)
 *     ?LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBG_NPEAG_KPEAD6PEAUFailureInfo@2@@Z @ 0x140007618 (-LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBG_NPEAG_KPEAD6PEAUFailureInfo@2@@Z.c)
 *     ?WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x1400082C8 (-WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 */

void __fastcall wil::details::ReportFailure(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        unsigned int a8)
{
  bool v8; // bl
  const struct wil::FailureInfo *v9; // rdx
  __int64 v10; // [rsp+48h] [rbp-14F0h]
  __int64 v11; // [rsp+58h] [rbp-14E0h]
  __int64 v12; // [rsp+68h] [rbp-14D0h]
  _BYTE v13[144]; // [rsp+80h] [rbp-14B8h] BYREF
  _BYTE v14[1024]; // [rsp+110h] [rbp-1428h] BYREF
  WCHAR v15[2048]; // [rsp+510h] [rbp-1028h] BYREF

  v8 = !a7 && g_pfnThrowPlatformException;
  wil::details::LogFailure(a1, a2, a3, a4, a5, a6, a7, a8, 0LL, v10, v15, v11, v14, v12, (unsigned __int64)v13);
  if ( a7 == 3 )
LABEL_11:
    wil::details::WilFailFast((wil::details *)v13, v9);
  if ( !a7 )
  {
    if ( v8 )
      ((void (__fastcall *)(_BYTE *, WCHAR *))g_pfnThrowPlatformException)(v13, v15);
    if ( wil::details::g_pfnThrowResultException )
      wil::details::g_pfnThrowResultException((const struct wil::FailureInfo *)v13);
    goto LABEL_11;
  }
}
