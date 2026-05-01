/*
 * XREFs of ?_GetDefaultSizeForRect@CDesktopPositioner@@AEAAJW4DefaultSizeOptions@@PEBUtagRECT@@PEAUtagSIZE@@@Z @ 0x180051F14
 * Callers:
 *     ?_GetDefaultRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@W4DefaultSizeOptions@@PEAU2@@Z @ 0x180056A44 (-_GetDefaultRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@W4DefaultSizeOptions@@PEAU2@@Z.c)
 * Callees:
 *     ?_CreateTitlebarConfiguration@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x18003D3A4 (-_CreateTitlebarConfiguration@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplication.c)
 *     ?_GetWorkAreaSizeFromRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAUtagSIZE@@@Z @ 0x180054A1C (-_GetWorkAreaSizeFromRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAUtagSIZE@@@Z.c)
 *     ?_GetMonitorFromRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAPEAUIImmersiveMonitor@@@Z @ 0x180055ABC (-_GetMonitorFromRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAPEAUIImmersiveMonitor@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
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
  unsigned int v9; // ebx
  int MonitorFromRect; // eax
  int v11; // edi
  LONG cy; // r14d
  __int64 v14; // rdx
  int v15; // [rsp+28h] [rbp-39h]
  struct IImmersiveMonitor *v16; // [rsp+48h] [rbp-19h] BYREF
  struct IApplicationViewTitlebarConfiguration *v17; // [rsp+50h] [rbp-11h] BYREF
  struct tagSIZE v18; // [rsp+58h] [rbp-9h] BYREF
  __int64 v19; // [rsp+60h] [rbp-1h]
  __int64 v20; // [rsp+68h] [rbp+7h]
  __int64 v21; // [rsp+70h] [rbp+Fh]
  int v22; // [rsp+78h] [rbp+17h]
  int v23; // [rsp+7Ch] [rbp+1Bh]
  __m128i si128; // [rsp+80h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]

  v20 = -2LL;
  v21 = 0x1F4000001F4LL;
  if ( a2 == 1 )
  {
    v22 = 900;
    v23 = 640;
  }
  else
  {
    v22 = 800;
    v23 = 600;
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
      (void *)0x515,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)v8,
      v15);
  }
  else
  {
    v16 = 0LL;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v16);
    MonitorFromRect = CDesktopPositioner::_GetMonitorFromRect(a1, a3, &v16);
    v9 = MonitorFromRect;
    if ( MonitorFromRect < 0 )
    {
      v14 = 1304LL;
    }
    else
    {
      MonitorFromRect = CDesktopPositioner::_GetWorkAreaSizeFromRect(a1, a3, &v18);
      v9 = MonitorFromRect;
      if ( MonitorFromRect < 0 )
      {
        v14 = 1307LL;
      }
      else
      {
        v11 = 3;
        cy = v18.cy;
        while ( 1 )
        {
          v15 = 1;
          MonitorFromRect = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, struct IImmersiveMonitor *, _QWORD))(**((_QWORD **)a1 + 33) + 48LL))(
                              *((_QWORD **)a1 + 33),
                              *(&v21 + v11),
                              v16,
                              0LL);
          v9 = MonitorFromRect;
          if ( MonitorFromRect < 0 )
            break;
          if ( (v18.cx < (int)v19 || cy < SHIDWORD(v19)) && --v11 >= 0 )
            continue;
          *a4 = v19;
          v9 = 0;
          goto LABEL_13;
        }
        v14 = 1313LL;
      }
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)MonitorFromRect,
      v15);
LABEL_13:
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v16);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
  return v9;
}
