/*
 * XREFs of ?_GetDefaultSizeForRect@CDesktopPositioner@@AEAAJW4DefaultSizeOptions@@PEBUtagRECT@@PEAUtagSIZE@@@Z @ 0x180057308
 * Callers:
 *     ?_GetDefaultRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@W4DefaultSizeOptions@@PEAU2@@Z @ 0x180057028 (-_GetDefaultRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@W4DefaultSizeOptions@@PEAU2@@Z.c)
 * Callees:
 *     ?_CreateTitlebarConfiguration@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x180028B94 (-_CreateTitlebarConfiguration@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplication.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_GetWorkAreaSizeFromRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAUtagSIZE@@@Z @ 0x180057478 (-_GetWorkAreaSizeFromRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAUtagSIZE@@@Z.c)
 *     ?_GetMonitorFromRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAPEAUIImmersiveMonitor@@@Z @ 0x1800575E0 (-_GetMonitorFromRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAPEAUIImmersiveMonitor@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CDesktopPositioner::_GetDefaultSizeForRect(
        CDesktopPositioner *a1,
        int a2,
        const struct tagRECT *a3,
        _QWORD *a4)
{
  CDesktopPositioner *v7; // rcx
  int v8; // eax
  unsigned int v9; // edi
  int MonitorFromRect; // eax
  int v11; // esi
  struct IApplicationViewTitlebarConfiguration *v12; // rbx
  LONG cy; // r15d
  __int64 v15; // rdx
  struct IImmersiveMonitor *v16; // [rsp+40h] [rbp-29h] BYREF
  struct IApplicationViewTitlebarConfiguration *v17; // [rsp+48h] [rbp-21h] BYREF
  struct tagSIZE v18; // [rsp+50h] [rbp-19h] BYREF
  _QWORD v19[2]; // [rsp+58h] [rbp-11h] BYREF
  __int64 v20; // [rsp+68h] [rbp-1h]
  int v21; // [rsp+70h] [rbp+7h]
  int v22; // [rsp+74h] [rbp+Bh]
  __m128i si128; // [rsp+78h] [rbp+Fh]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  v19[1] = -2LL;
  v20 = 0x1F4000001F4LL;
  if ( a2 == 1 )
  {
    v21 = 900;
    v22 = 640;
  }
  else
  {
    v21 = 800;
    v22 = 600;
  }
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v17 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
  v8 = CDesktopPositioner::_CreateTitlebarConfiguration(v7, 0LL, &v17);
  v9 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x53A,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)v8);
  }
  else
  {
    v16 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
    MonitorFromRect = CDesktopPositioner::_GetMonitorFromRect(a1, a3, &v16);
    v9 = MonitorFromRect;
    if ( MonitorFromRect < 0 )
    {
      v15 = 1341LL;
    }
    else
    {
      MonitorFromRect = CDesktopPositioner::_GetWorkAreaSizeFromRect(a1, a3, &v18);
      v9 = MonitorFromRect;
      if ( MonitorFromRect < 0 )
      {
        v15 = 1344LL;
      }
      else
      {
        v11 = 3;
        v12 = v17;
        cy = v18.cy;
        while ( 1 )
        {
          MonitorFromRect = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, struct IImmersiveMonitor *, _QWORD, int, struct IApplicationViewTitlebarConfiguration *, _QWORD *))(**((_QWORD **)a1 + 33) + 48LL))(
                              *((_QWORD **)a1 + 33),
                              *(&v20 + v11),
                              v16,
                              0LL,
                              1,
                              v12,
                              v19);
          v9 = MonitorFromRect;
          if ( MonitorFromRect < 0 )
            break;
          if ( (v18.cx < SLODWORD(v19[0]) || cy < SHIDWORD(v19[0])) && --v11 >= 0 )
            continue;
          *a4 = v19[0];
          v9 = 0;
          goto LABEL_13;
        }
        v15 = 1350LL;
      }
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)MonitorFromRect);
LABEL_13:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
  return v9;
}
