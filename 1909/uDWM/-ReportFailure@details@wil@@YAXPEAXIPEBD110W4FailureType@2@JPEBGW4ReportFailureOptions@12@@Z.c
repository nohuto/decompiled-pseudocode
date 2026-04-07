/*
 * XREFs of ?ReportFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBGW4ReportFailureOptions@12@@Z @ 0x180077B2C
 * Callers:
 *     ?ReportFailure_GetLastError@details@wil@@YAKPEAXIPEBD110W4FailureType@2@@Z @ 0x180077C64 (-ReportFailure_GetLastError@details@wil@@YAKPEAXIPEBD110W4FailureType@2@@Z.c)
 *     ?ReportFailure_GetLastErrorHr@details@wil@@YAJPEAXIPEBD110W4FailureType@2@@Z @ 0x180077D04 (-ReportFailure_GetLastErrorHr@details@wil@@YAJPEAXIPEBD110W4FailureType@2@@Z.c)
 *     ?ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z @ 0x180077D9C (-ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z.c)
 *     ?ReportFailure_Win32@details@wil@@YAJPEAXIPEBD110W4FailureType@2@K@Z @ 0x180079B00 (-ReportFailure_Win32@details@wil@@YAJPEAXIPEBD110W4FailureType@2@K@Z.c)
 *     ?ReportFailure_Msg@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J1PEAD@Z @ 0x18008507C (-ReportFailure_Msg@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J1PEAD@Z.c)
 *     ?ReportFailure_NtStatus@details@wil@@YAJPEAXIPEBD110W4FailureType@2@J@Z @ 0x1800921C8 (-ReportFailure_NtStatus@details@wil@@YAJPEAXIPEBD110W4FailureType@2@J@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18004E0C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 *     _alloca_probe @ 0x18004FB70 (_alloca_probe.c)
 *     ?LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBG_NPEAG_KPEAD6PEAUFailureInfo@2@@Z @ 0x180076EEC (-LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBG_NPEAG_KPEAD6PEAUFailureInfo@2@@Z.c)
 *     ?RethrowCaughtException@wil@@YAXXZ @ 0x180077E3C (-RethrowCaughtException@wil@@YAXXZ.c)
 *     ?WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x180078620 (-WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
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
        _WORD *a9,
        char a10)
{
  bool v10; // di
  const struct wil::FailureInfo *v11; // rdx
  wil *v12; // rcx
  __int64 v13; // [rsp+48h] [rbp-14F0h]
  __int64 v14; // [rsp+58h] [rbp-14E0h]
  __int64 v15; // [rsp+68h] [rbp-14D0h]
  _BYTE v16[144]; // [rsp+80h] [rbp-14B8h] BYREF
  char v17[1024]; // [rsp+110h] [rbp-1428h] BYREF
  _BYTE v18[4096]; // [rsp+510h] [rbp-1028h] BYREF

  v10 = !a7 && (a10 & 4) == 0 && g_pfnThrowPlatformException;
  wil::details::LogFailure(a1, a2, a3, a4, a5, a6, a7, a8, a9, v13, (wil *)v18, v14, v17, v15, (unsigned __int64)v16);
  if ( (a10 & 2) == 0 )
  {
    if ( a7 == 3 )
      goto LABEL_15;
    if ( !a7 )
    {
      if ( v10 )
        ((void (__fastcall *)(_BYTE *, _BYTE *))g_pfnThrowPlatformException)(v16, v18);
      if ( (a10 & 4) != 0 )
        wil::RethrowCaughtException(v12);
      if ( wil::details::g_pfnThrowResultException )
        wil::details::g_pfnThrowResultException((const struct wil::FailureInfo *)v16);
LABEL_15:
      wil::details::WilFailFast((wil::details *)v16, v11);
    }
  }
}
