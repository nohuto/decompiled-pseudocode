/*
 * XREFs of ?RuntimeClassInitialize@CMultitaskingViewFrameElement@@QEAAJAEBUFrameMetrics@@PEAUHWND__@@AEBVAsyncFrameEvents@@PEAUISwitchThumbnailFactory@@PEAUIMultitaskingViewElement@@4PEAUIAnimationCoordinator@@@Z @ 0x18036CEC4
 * Callers:
 *     ??$MakeAndInitialize@VCMultitaskingViewFrameElement@@UIMultitaskingViewElement@@AEBUFrameMetrics@@AEAPEAUHWND__@@AEBVAsyncFrameEvents@@AEAPEAUISwitchThumbnailFactory@@AEAPEAU2@AEAPEAU2@AEAPEAUIAnimationCoordinator@@@Details@WRL@Microsoft@@YAJPEAPEAUIMultitaskingViewElement@@AEBUFrameMetrics@@AEAPEAUHWND__@@AEBVAsyncFrameEvents@@AEAPEAUISwitchThumbnailFactory@@AEAPEAU3@5AEAPEAUIAnimationCoordinator@@@Z @ 0x18036B7A8 (--$MakeAndInitialize@VCMultitaskingViewFrameElement@@UIMultitaskingViewElement@@AEBUFrameMetrics.c)
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x18000E500 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180103910 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180129204 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?Contains@CRect@Geometry@@QEBA_NAEBUtagPOINT@@@Z @ 0x180362678 (-Contains@CRect@Geometry@@QEBA_NAEBUtagPOINT@@@Z.c)
 *     ??B?$HighContrastAwareOpacity@N@@QEBANXZ @ 0x18036A9D0 (--B-$HighContrastAwareOpacity@N@@QEBANXZ.c)
 *     ??B?$HighContrastAwareOpacity@M@@QEBAMXZ @ 0x18036BBA0 (--B-$HighContrastAwareOpacity@M@@QEBAMXZ.c)
 *     ?CreateContentDimmingLayerThumbnail@CMultitaskingViewFrameElement@@AEAAJUCSize@Geometry@@PEAUIDCompThumbnail@@1PEAPEAU4@2@Z @ 0x18036C098 (-CreateContentDimmingLayerThumbnail@CMultitaskingViewFrameElement@@AEAAJUCSize@Geometry@@PEAUIDC.c)
 *     ?ScreenToClient@CPoint@Geometry@@SA?AU12@PEAUHWND__@@AEBUtagPOINT@@@Z @ 0x18036D6F8 (-ScreenToClient@CPoint@Geometry@@SA-AU12@PEAUHWND__@@AEBUtagPOINT@@@Z.c)
 *     ?_CreateDesktopBackgroundThumbnail@CMultitaskingViewFrameElement@@AEAAJAEBUCRect@Geometry@@PEAPEAUIDCompThumbnail@@@Z @ 0x18036D834 (-_CreateDesktopBackgroundThumbnail@CMultitaskingViewFrameElement@@AEAAJAEBUCRect@Geometry@@PEAPE.c)
 *     ?_GetWallpaperSrcRect@CMultitaskingViewFrameElement@@AEAAJAEBUtagRECT@@PEAU2@@Z @ 0x18036D95C (-_GetWallpaperSrcRect@CMultitaskingViewFrameElement@@AEAAJAEBUtagRECT@@PEAU2@@Z.c)
 *     ?_SetContentThumbnailRects@CMultitaskingViewFrameElement@@AEAAJPEAUIDCompThumbnail@@0@Z @ 0x18036DCA4 (-_SetContentThumbnailRects@CMultitaskingViewFrameElement@@AEAAJPEAUIDCompThumbnail@@0@Z.c)
 *     ?s_CreateDimmingLayerThumbnail@CMultitaskingViewFrameElement@@CAJPEAUISwitchThumbnailFactory@@NPEAUIDCompThumbnail@@PEAPEAU3@@Z @ 0x18036DDA0 (-s_CreateDimmingLayerThumbnail@CMultitaskingViewFrameElement@@CAJPEAUISwitchThumbnailFactory@@NP.c)
 *     ?LightDismissElement_CreateInstance@@YAJPEAUILightDismissElementHost@@IAEBU_GUID@@PEAPEAX@Z @ 0x18037E0FC (-LightDismissElement_CreateInstance@@YAJPEAUILightDismissElementHost@@IAEBU_GUID@@PEAPEAX@Z.c)
 *     ?InputEaterElement_CreateInstance@@YAJPEAUIInputEaterElementNotifications@@AEBU_GUID@@PEAPEAX@Z @ 0x18037E484 (-InputEaterElement_CreateInstance@@YAJPEAUIInputEaterElementNotifications@@AEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall CMultitaskingViewFrameElement::RuntimeClassInitialize(
        CMultitaskingViewFrameElement *this,
        const struct FrameMetrics *a2,
        HWND a3,
        const struct AsyncFrameEvents *a4,
        struct ISwitchThumbnailFactory *a5,
        struct IMultitaskingViewElement *a6,
        struct IMultitaskingViewElement *a7,
        struct IAnimationCoordinator *a8)
{
  __int128 v8; // xmm0
  _OWORD *v10; // rcx
  __int128 v11; // xmm1
  HWND v12; // rcx
  const char *v13; // r9
  __int64 v14; // rdx
  HWND v16; // rcx
  __int64 v17; // rbx
  _QWORD *v18; // r13
  int v19; // eax
  unsigned int v20; // ebx
  int WallpaperSrcRect; // eax
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rdi
  int DimmingLayerThumbnail; // eax
  __int64 v26; // rdx
  struct IDCompThumbnail *v27; // rbx
  double v28; // xmm0_8
  struct IDCompThumbnail *v29; // rbx
  struct IDCompThumbnail *v30; // rsi
  int Instance; // eax
  __int64 v32; // rdx
  __int64 v33; // rdx
  int v34; // eax
  const struct _GUID *v35; // r8
  int v36; // eax
  __int64 v37; // rdx
  __int64 v38; // rsi
  __int64 v39; // rdi
  int v40; // eax
  __int64 v41; // rdx
  __int64 v42; // [rsp+38h] [rbp-99h] BYREF
  void *v43; // [rsp+40h] [rbp-91h] BYREF
  struct IDCompThumbnail *v44; // [rsp+48h] [rbp-89h] BYREF
  struct tagPOINT Point; // [rsp+50h] [rbp-81h] BYREF
  __int64 v46; // [rsp+58h] [rbp-79h] BYREF
  struct IDCompThumbnail *v47; // [rsp+60h] [rbp-71h] BYREF
  struct IDCompThumbnail *v48; // [rsp+68h] [rbp-69h] BYREF
  struct IAnimationCoordinator *v49; // [rsp+70h] [rbp-61h]
  struct IMultitaskingViewElement *v50; // [rsp+78h] [rbp-59h]
  const struct AsyncFrameEvents *v51; // [rsp+80h] [rbp-51h]
  struct tagRECT v52; // [rsp+88h] [rbp-49h] BYREF
  int v53[2]; // [rsp+98h] [rbp-39h] BYREF
  int v54; // [rsp+A0h] [rbp-31h]
  int v55; // [rsp+A4h] [rbp-2Dh]
  struct tagRECT Rect; // [rsp+A8h] [rbp-29h] BYREF
  struct IMultitaskingViewElement *v57; // [rsp+B8h] [rbp-19h] BYREF
  int v58; // [rsp+C0h] [rbp-11h]
  int v59; // [rsp+C4h] [rbp-Dh]
  struct tagRECT v60; // [rsp+C8h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+110h] [rbp+3Fh]

  v8 = *(_OWORD *)a2;
  v50 = a7;
  v10 = (_OWORD *)((char *)this + 296);
  *v10 = v8;
  v57 = a6;
  v11 = *((_OWORD *)a2 + 1);
  v51 = a4;
  v49 = a8;
  v10[1] = v11;
  v10[2] = *((_OWORD *)a2 + 2);
  v10[3] = *((_OWORD *)a2 + 3);
  v10[4] = *((_OWORD *)a2 + 4);
  v10[5] = *((_OWORD *)a2 + 5);
  v10[6] = *((_OWORD *)a2 + 6);
  v10 += 8;
  *(v10 - 1) = *((_OWORD *)a2 + 7);
  *v10 = *((_OWORD *)a2 + 8);
  v10[1] = *((_OWORD *)a2 + 9);
  *((_QWORD *)v10 + 4) = *((_QWORD *)a2 + 20);
  *((_QWORD *)this + 58) = a3;
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 25, (__int64)a8);
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 60, (__int64)a5);
  v12 = (HWND)*((_QWORD *)this + 58);
  Rect = 0LL;
  if ( !GetWindowRect(v12, &Rect) )
  {
    v14 = 140LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v14,
             (__int64)"pcshell\\twinui\\multitaskingview\\lib\\frameelement.cpp",
             v13);
  }
  v16 = (HWND)*((_QWORD *)this + 58);
  *(_QWORD *)&v60.left = 0LL;
  *(_QWORD *)&v60.right = 0LL;
  if ( !GetClientRect(v16, &v60) )
  {
    v14 = 143LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v14,
             (__int64)"pcshell\\twinui\\multitaskingview\\lib\\frameelement.cpp",
             v13);
  }
  v17 = *((_QWORD *)this + 60);
  v18 = (_QWORD *)((char *)this + 488);
  *(_QWORD *)&v52.left = 0x100000001LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 61);
  v19 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, GUID *, char *))(*(_QWORD *)v17 + 112LL))(
          v17,
          0LL,
          0x100000001LL,
          &GUID_47267895_a4f8_4012_9e98_087c619e7cfc,
          (char *)this + 488);
  v20 = v19;
  if ( v19 >= 0 )
  {
    v48 = 0LL;
    if ( *((_BYTE *)this + 336) )
    {
      v52 = 0LL;
      WallpaperSrcRect = CMultitaskingViewFrameElement::_GetWallpaperSrcRect(this, &Rect, &v52);
      if ( WallpaperSrcRect < 0 )
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x99,
          (__int64)"pcshell\\twinui\\multitaskingview\\lib\\frameelement.cpp",
          (const char *)(unsigned int)WallpaperSrcRect);
        v52 = Rect;
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v48);
      v22 = CMultitaskingViewFrameElement::_CreateDesktopBackgroundThumbnail(
              this,
              (const struct Geometry::CRect *)&v52,
              &v48);
      v20 = v22;
      if ( v22 < 0 )
      {
        v23 = 160LL;
LABEL_15:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v23,
          (__int64)"pcshell\\twinui\\multitaskingview\\lib\\frameelement.cpp",
          (const char *)(unsigned int)v22);
LABEL_70:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v48);
        return v20;
      }
      v53[0] = v52.left - Rect.left;
      v54 = v52.right - Rect.left;
      v53[1] = v52.top - Rect.top;
      v55 = v52.bottom - Rect.top;
      v22 = (*(__int64 (__fastcall **)(struct IDCompThumbnail *, int *, _QWORD, _QWORD))(*(_QWORD *)v48 + 24LL))(
              v48,
              v53,
              0LL,
              0LL);
      v20 = v22;
      if ( v22 < 0 )
      {
        v23 = 161LL;
        goto LABEL_15;
      }
    }
    v44 = 0LL;
    v24 = 0LL;
    *(_QWORD *)&v52.left = 0LL;
    if ( HighContrastAwareOpacity<double>::operator double((double *)this + 47) != 0.0 )
    {
      *(_QWORD *)v53 = 0x100000001LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v44);
      DimmingLayerThumbnail = (*(__int64 (__fastcall **)(struct ISwitchThumbnailFactory *, _QWORD, _QWORD, GUID *, struct IDCompThumbnail **))(*(_QWORD *)a5 + 112LL))(
                                a5,
                                *v18,
                                *(_QWORD *)v53,
                                &GUID_47267895_a4f8_4012_9e98_087c619e7cfc,
                                &v44);
      v20 = DimmingLayerThumbnail;
      if ( DimmingLayerThumbnail < 0 )
      {
        v26 = 170LL;
LABEL_21:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v26,
          (__int64)"pcshell\\twinui\\multitaskingview\\lib\\frameelement.cpp",
          (const char *)(unsigned int)DimmingLayerThumbnail);
LABEL_69:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v44);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v52.left);
        goto LABEL_70;
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v52.left);
      v27 = v44;
      v28 = HighContrastAwareOpacity<double>::operator double((double *)this + 47);
      DimmingLayerThumbnail = CMultitaskingViewFrameElement::s_CreateDimmingLayerThumbnail(
                                a5,
                                v28,
                                v27,
                                (struct IDCompThumbnail **)&v52);
      v20 = DimmingLayerThumbnail;
      if ( DimmingLayerThumbnail < 0 )
      {
        v26 = 176LL;
        goto LABEL_21;
      }
      v24 = *(_QWORD *)&v52.left;
    }
    v29 = 0LL;
    v46 = 0LL;
    v30 = 0LL;
    *(_QWORD *)v53 = 0LL;
    v47 = 0LL;
    if ( HighContrastAwareOpacity<float>::operator float((float *)this + 85) != 0.0 || *((_DWORD *)this + 87) )
    {
      if ( !v44 )
      {
        v43 = (void *)0x100000001LL;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v44);
        Instance = (*(__int64 (__fastcall **)(struct ISwitchThumbnailFactory *, _QWORD, __int64, GUID *, struct IDCompThumbnail **))(*(_QWORD *)a5 + 112LL))(
                     a5,
                     *v18,
                     0x100000001LL,
                     &GUID_47267895_a4f8_4012_9e98_087c619e7cfc,
                     &v44);
        v20 = Instance;
        if ( Instance < 0 )
        {
          v32 = 188LL;
LABEL_49:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v32,
            (__int64)"pcshell\\twinui\\multitaskingview\\lib\\frameelement.cpp",
            (const char *)(unsigned int)Instance);
LABEL_68:
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v46);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v47);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v53);
          goto LABEL_69;
        }
      }
      v43 = (void *)0x100000001LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v46);
      Instance = (*(__int64 (__fastcall **)(struct ISwitchThumbnailFactory *, struct IDCompThumbnail *, __int64, GUID *, __int64 *))(*(_QWORD *)a5 + 112LL))(
                   a5,
                   v44,
                   0x100000001LL,
                   &GUID_47267895_a4f8_4012_9e98_087c619e7cfc,
                   &v46);
      v20 = Instance;
      if ( Instance < 0 )
      {
        v32 = 191LL;
        goto LABEL_49;
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v47);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v53);
      Instance = CMultitaskingViewFrameElement::CreateContentDimmingLayerThumbnail(
                   (__int64)this,
                   v33,
                   v44,
                   v46,
                   v53,
                   &v47);
      v20 = Instance;
      if ( Instance < 0 )
      {
        v32 = 198LL;
        goto LABEL_49;
      }
      v29 = *(struct IDCompThumbnail **)v53;
      v30 = v47;
    }
    if ( v24 || v29 )
    {
      LOBYTE(v42) = 1;
      if ( v49 )
      {
        v34 = (*(__int64 (__fastcall **)(struct IAnimationCoordinator *, __int64, struct IDCompThumbnail *, __int64 *))(*(_QWORD *)v49 + 24LL))(
                v49,
                5LL,
                v44,
                &v42);
        if ( v34 >= 0 )
        {
          if ( !(_BYTE)v42 )
            goto LABEL_45;
        }
        else
        {
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0xCE,
            (__int64)"pcshell\\twinui\\multitaskingview\\lib\\frameelement.cpp",
            (const char *)(unsigned int)v34);
        }
      }
      if ( v29 )
      {
        Instance = CMultitaskingViewFrameElement::_SetContentThumbnailRects(this, v29, v30);
        v20 = Instance;
        if ( Instance < 0 )
        {
          v32 = 211LL;
          goto LABEL_49;
        }
      }
      if ( v24 )
      {
        Instance = (*(__int64 (__fastcall **)(__int64, struct tagRECT *, _QWORD, _QWORD))(*(_QWORD *)v24 + 24LL))(
                     v24,
                     &Rect,
                     0LL,
                     0LL);
        v20 = Instance;
        if ( Instance < 0 )
        {
          v32 = 216LL;
          goto LABEL_49;
        }
      }
    }
LABEL_45:
    v43 = (void *)0x100000001LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 11);
    Instance = (*(__int64 (__fastcall **)(struct ISwitchThumbnailFactory *, _QWORD, void *, GUID *, char *))(*(_QWORD *)a5 + 112LL))(
                 a5,
                 *v18,
                 v43,
                 &GUID_47267895_a4f8_4012_9e98_087c619e7cfc,
                 (char *)this + 88);
    v20 = Instance;
    if ( Instance < 0 )
    {
      v32 = 221LL;
      goto LABEL_49;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 35);
    Instance = LightDismissElement_CreateInstance(
                 (struct ILightDismissElementHost *)(((unsigned __int128)-(__int128)(unsigned __int64)this >> 64) & ((unsigned __int64)this + 240)),
                 (unsigned __int128)-(__int128)(unsigned __int64)this >> 64,
                 v35,
                 (void **)this + 35);
    v20 = Instance;
    if ( Instance < 0 )
    {
      v32 = 223LL;
      goto LABEL_49;
    }
    v36 = (*(__int64 (__fastcall **)(CMultitaskingViewFrameElement *, _QWORD))(*(_QWORD *)this + 64LL))(
            this,
            *((_QWORD *)this + 35));
    v20 = v36;
    if ( v36 < 0 )
    {
      v37 = 235LL;
LABEL_58:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v37,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\frameelement.cpp",
        (const char *)(unsigned int)v36);
LABEL_65:
      (*(void (__fastcall **)(CMultitaskingViewFrameElement *))(*(_QWORD *)this + 80LL))(this);
      goto LABEL_68;
    }
    v38 = (__int64)v50;
    if ( v50 )
    {
      v36 = (*(__int64 (__fastcall **)(CMultitaskingViewFrameElement *, struct IMultitaskingViewElement *))(*(_QWORD *)this + 64LL))(
              this,
              v50);
      v20 = v36;
      if ( v36 < 0 )
      {
        v37 = 239LL;
        goto LABEL_58;
      }
    }
    v39 = (__int64)v57;
    if ( v57 )
    {
      v36 = (*(__int64 (__fastcall **)(CMultitaskingViewFrameElement *, struct IMultitaskingViewElement *))(*(_QWORD *)this + 64LL))(
              this,
              v57);
      v20 = v36;
      if ( v36 < 0 )
      {
        v37 = 244LL;
        goto LABEL_58;
      }
    }
    Point = 0LL;
    GetCursorPos(&Point);
    Point = *(struct tagPOINT *)Geometry::CPoint::ScreenToClient(&v57, *((_QWORD *)this + 58), &Point);
    if ( Geometry::CRect::Contains((Geometry::CRect *)&v60, &Point) )
    {
      v43 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v43);
      v40 = InputEaterElement_CreateInstance(
              (struct IInputEaterElementNotifications *)(((unsigned __int128)-(__int128)(unsigned __int64)this >> 64) & ((unsigned __int64)this + 224)),
              (const struct _GUID *)((unsigned __int128)-(__int128)(unsigned __int64)this >> 64),
              &v43);
      v20 = v40;
      if ( v40 < 0 )
      {
        v41 = 253LL;
LABEL_64:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v41,
          (__int64)"pcshell\\twinui\\multitaskingview\\lib\\frameelement.cpp",
          (const char *)(unsigned int)v40);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v43);
        goto LABEL_65;
      }
      v40 = (*(__int64 (__fastcall **)(CMultitaskingViewFrameElement *, void *))(*(_QWORD *)this + 64LL))(this, v43);
      v20 = v40;
      if ( v40 < 0 )
      {
        v41 = 254LL;
        goto LABEL_64;
      }
      v57 = (struct IMultitaskingViewElement *)Point;
      v58 = Point.x + 1;
      v59 = Point.y + 1;
      (*(void (__fastcall **)(void *, struct IMultitaskingViewElement **))(*(_QWORD *)v43 + 104LL))(v43, &v57);
      Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)this + 32, (__int64 *)&v43);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v43);
    }
    Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 33, v39);
    Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 34, v38);
    *((_QWORD *)this + 36) = v51;
    Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)this + 62, (__int64 *)&v48);
    Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)this + 63, (__int64 *)v53);
    Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)this + 64, (__int64 *)&v47);
    Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)this + 65, (__int64 *)&v44);
    Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)this + 66, &v46);
    Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)this + 67, (__int64 *)&v52.left);
    v20 = 0;
    goto LABEL_68;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x92,
    (__int64)"pcshell\\twinui\\multitaskingview\\lib\\frameelement.cpp",
    (const char *)(unsigned int)v19);
  return v20;
}
