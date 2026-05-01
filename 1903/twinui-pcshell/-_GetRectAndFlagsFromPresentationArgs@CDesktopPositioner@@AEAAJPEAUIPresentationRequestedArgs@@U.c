/*
 * XREFs of ?_GetRectAndFlagsFromPresentationArgs@CDesktopPositioner@@AEAAJPEAUIPresentationRequestedArgs@@UtagRECT@@PEAU3@PEAW4TRY_POSITION_VIEW_FLAGS@@PEAPEAUIImmersiveMonitor@@@Z @ 0x18007B108
 * Callers:
 *     ?InitializePositionHelper@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@PEAK@Z @ 0x18009F4A4 (-InitializePositionHelper@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPres.c)
 *     ?PresentationChangedForView@CDesktopPositioner@@UEAAJPEAUIApplicationView@@PEAUIInspectable@@@Z @ 0x1803A3580 (-PresentationChangedForView@CDesktopPositioner@@UEAAJPEAUIApplicationView@@PEAUIInspectable@@@Z.c)
 * Callees:
 *     ??0?$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarController@@@Z @ 0x18000B7EC (--0-$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarControll.c)
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B924 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18002758C (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?_CreateTitlebarConfiguration@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x18003D3A4 (-_CreateTitlebarConfiguration@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplication.c)
 *     ?_GetMonitorFromRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAPEAUIImmersiveMonitor@@@Z @ 0x180055ABC (-_GetMonitorFromRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAPEAUIImmersiveMonitor@@@Z.c)
 *     ?GetScaleFactorForRect@@YA?AW4DEVICE_SCALE_FACTOR@@AEBUtagRECT@@@Z @ 0x180056A0C (-GetScaleFactorForRect@@YA-AW4DEVICE_SCALE_FACTOR@@AEBUtagRECT@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x180082E6C (-reset@-$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ??$query@U?$IVectorView@I@Collections@Foundation@Windows@@@?$com_ptr_t@UIInspectable@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@U?$IVectorView@I@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x18009F140 (--$query@U-$IVectorView@I@Collections@Foundation@Windows@@@-$com_ptr_t@UIInspectable@@Uerr_excep.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_LightweightWindows@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180132300 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_LightweightWindows@@@wil@@CAX_NW4Rep.c)
 *     ?_AdjustSizeForMonitorChange@CDesktopPositioner@@AEAAJPEAUIImmersiveMonitor@@0PEAUtagSIZE@@PEAW4TRY_POSITION_VIEW_FLAGS@@@Z @ 0x1803A5008 (-_AdjustSizeForMonitorChange@CDesktopPositioner@@AEAAJPEAUIImmersiveMonitor@@0PEAUtagSIZE@@PEAW4.c)
 *     ?_MoveRectToMonitor@CDesktopPositioner@@AEAAJPEAUIImmersiveMonitor@@UtagRECT@@PEAU3@@Z @ 0x1803A6158 (-_MoveRectToMonitor@CDesktopPositioner@@AEAAJPEAUIImmersiveMonitor@@UtagRECT@@PEAU3@@Z.c)
 *     ?GetAdjacentPosition@WindowRelativePositioning@@YA?AUtagRECT@@AEBU2@AEBUtagSIZE@@0_NPEBGPEAUIApplicationViewCollection@@0@Z @ 0x1803A7648 (-GetAdjacentPosition@WindowRelativePositioning@@YA-AUtagRECT@@AEBU2@AEBUtagSIZE@@0_NPEBGPEAUIApp.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall CDesktopPositioner::_GetRectAndFlagsFromPresentationArgs(
        CDesktopPositioner *this,
        struct IPresentationRequestedArgs *a2,
        struct tagRECT *a3,
        struct tagRECT *a4,
        enum TRY_POSITION_VIEW_FLAGS *a5,
        struct IImmersiveMonitor **a6)
{
  CDesktopPositioner *v7; // r13
  int v9; // edi
  int MonitorFromRect; // eax
  unsigned int v11; // ebx
  int v12; // r12d
  LONG right; // r14d
  LONG bottom; // r15d
  int (__fastcall *v15)(struct IPresentationRequestedArgs *, LONG *); // rbx
  __int64 v16; // rax
  int (__fastcall *v17)(_QWORD, struct IUnknown **); // r12
  LONG left; // r12d
  LONG top; // r13d
  int v20; // eax
  __int64 v21; // rdx
  CDesktopPositioner *v22; // rcx
  struct IUnknown *v23; // rbx
  struct IImmersiveMonitor *v24; // r8
  CDesktopPositioner *v25; // rcx
  CDesktopPositioner *v26; // rbx
  int ScaleFactorForRect; // eax
  int (__fastcall *v28)(struct IPresentationRequestedArgs *, __int64 *); // rbx
  int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // r9
  __int64 *v32; // rcx
  __int64 v33; // rax
  int v34; // eax
  __int64 v35; // rdx
  __int64 v36; // rbx
  __int64 (__fastcall *v37)(__int64, _QWORD, struct IUnknown **); // r12
  struct IUnknown *v38; // rcx
  int v39; // eax
  __int64 v40; // rdx
  bool v41; // r12
  CDesktopPositioner *v42; // rcx
  LONG cx; // r14d
  LONG cy; // r15d
  CDesktopPositioner *v45; // rcx
  LONG v46; // edi
  LONG v47; // esi
  struct IUnknown *v48; // rcx
  struct tagRECT *v49; // [rsp+20h] [rbp-E0h]
  struct tagRECT *v50; // [rsp+40h] [rbp-C0h] BYREF
  struct IUnknown *v51; // [rsp+48h] [rbp-B8h] BYREF
  bool v52; // [rsp+50h] [rbp-B0h]
  struct tagRECT v53; // [rsp+60h] [rbp-A0h] BYREF
  struct tagSIZE v54; // [rsp+70h] [rbp-90h] BYREF
  struct IUnknown *v55; // [rsp+78h] [rbp-88h] BYREF
  __int64 v56; // [rsp+80h] [rbp-80h] BYREF
  struct tagRECT v57; // [rsp+88h] [rbp-78h] BYREF
  unsigned int v58; // [rsp+98h] [rbp-68h] BYREF
  unsigned int v59; // [rsp+9Ch] [rbp-64h] BYREF
  struct IUnknown *v60; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v61; // [rsp+A8h] [rbp-58h] BYREF
  CDesktopPositioner *v62; // [rsp+B0h] [rbp-50h] BYREF
  int v63; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v64; // [rsp+C0h] [rbp-40h] BYREF
  int v65; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v66; // [rsp+D0h] [rbp-30h] BYREF
  struct tagRECT *v67; // [rsp+D8h] [rbp-28h]
  struct IImmersiveMonitor **v68; // [rsp+E0h] [rbp-20h]
  bool v69[8]; // [rsp+E8h] [rbp-18h] BYREF
  enum TRY_POSITION_VIEW_FLAGS *v70; // [rsp+F0h] [rbp-10h]
  struct tagRECT *v71; // [rsp+F8h] [rbp-8h]
  __int64 v72; // [rsp+100h] [rbp+0h]
  struct tagRECT v73; // [rsp+108h] [rbp+8h] BYREF
  struct tagRECT v74; // [rsp+120h] [rbp+20h] BYREF
  struct tagRECT v75; // [rsp+130h] [rbp+30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+198h] [rbp+98h]

  v72 = -2LL;
  v71 = a4;
  v67 = a3;
  v7 = this;
  v62 = this;
  v70 = a5;
  v68 = a6;
  *(_QWORD *)&v74.left = 0LL;
  *(_QWORD *)&v74.right = 0LL;
  *a4 = 0u;
  *(_DWORD *)a5 = 0;
  *a6 = 0LL;
  if ( !a2 )
    return 2147942487LL;
  v9 = 0;
  HIDWORD(v50) = 0;
  v53 = *a3;
  v55 = 0LL;
  MonitorFromRect = CDesktopPositioner::_GetMonitorFromRect(this, a3, (struct IImmersiveMonitor **)&v55);
  v11 = MonitorFromRect;
  if ( MonitorFromRect >= 0 )
  {
    v66 = 0LL;
    LOBYTE(v50) = 0;
    v12 = 0;
    if ( (*(int (__fastcall **)(struct IPresentationRequestedArgs *, __int64 *))(*(_QWORD *)a2 + 48LL))(a2, &v66) < 0 )
    {
      bottom = v53.bottom;
      right = v53.right;
    }
    else
    {
      right = v53.left + v66;
      v53.right = v53.left + v66;
      bottom = v53.top + HIDWORD(v66);
      v53.bottom = v53.top + HIDWORD(v66);
      v9 = 15;
      HIDWORD(v50) = 15;
      LOBYTE(v50) = 1;
      v12 = 15;
    }
    v61 = 0LL;
    *(_QWORD *)&v57.right = 0LL;
    if ( (*(int (__fastcall **)(struct IPresentationRequestedArgs *, __int64 *))(*(_QWORD *)a2 + 56LL))(a2, &v61) >= 0 )
    {
      v15 = *(int (__fastcall **)(struct IPresentationRequestedArgs *, LONG *))(*(_QWORD *)a2 + 64LL);
      wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset(&v57.right);
      if ( v15(a2, &v57.right) >= 0 )
      {
        if ( (*(int (__fastcall **)(struct IPresentationRequestedArgs *, int *))(*(_QWORD *)a2 + 96LL))(a2, &v65) < 0
          || v65 )
        {
          v9 = v12 | 2;
          HIDWORD(v50) = v12 | 2;
        }
        v63 = 0;
        v56 = 0LL;
        *(_QWORD *)&v75.left = 0LL;
        *(_QWORD *)&v75.right = 0LL;
        v51 = 0LL;
        *(_QWORD *)&v73.left = 0LL;
        *(_QWORD *)&v73.right = 0LL;
        v16 = **(_QWORD **)&v57.right;
        v56 = 0LL;
        if ( (*(int (__fastcall **)(_QWORD, GUID *, __int64 *))(v16 + 104))(
               *(_QWORD *)&v57.right,
               &GUID_3fc0257d_21c2_4ad3_8fb0_fd481cd204e2,
               &v56) >= 0
          && (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v56 + 32LL))(v56, &v63) >= 0
          && v63 == 2
          && (*(int (__fastcall **)(__int64, struct tagRECT *))(*(_QWORD *)v56 + 24LL))(v56, &v75) >= 0 )
        {
          v17 = *(int (__fastcall **)(_QWORD, struct IUnknown **))(**(_QWORD **)&v57.right + 80LL);
          v51 = 0LL;
          if ( v17(*(_QWORD *)&v57.right, &v51) >= 0
            && ((int (__fastcall *)(struct IUnknown *, struct tagRECT *))v51->lpVtbl[3].QueryInterface)(v51, &v73) >= 0 )
          {
            left = right - v53.left;
            v57.left = right - v53.left;
            top = bottom - v53.top;
            v57.top = bottom - v53.top;
            v60 = 0LL;
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v60);
            v20 = CDesktopPositioner::_GetMonitorFromRect(v62, v67, (struct IImmersiveMonitor **)&v60);
            v11 = v20;
            if ( v20 < 0 )
            {
              v21 = 3201LL;
LABEL_29:
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)v21,
                (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
                (const char *)(unsigned int)v20);
              Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v60);
              wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v51);
              wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v56);
LABEL_89:
              wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v57.right);
              goto LABEL_90;
            }
            v52 = (unsigned int)SHIsSameObject(v51, v60) != 0;
            v23 = v55;
            v24 = (struct IImmersiveMonitor *)v51;
            v55 = v51;
            if ( v51 )
            {
              ((void (__fastcall *)(struct IUnknown *))v51->lpVtbl->AddRef)(v51);
              v24 = (struct IImmersiveMonitor *)v51;
            }
            if ( v23 )
            {
              ((void (__fastcall *)(struct IUnknown *))v23->lpVtbl->Release)(v23);
              v24 = (struct IImmersiveMonitor *)v51;
            }
            if ( !v52 && !(_BYTE)v50 )
            {
              v20 = CDesktopPositioner::_AdjustSizeForMonitorChange(
                      v22,
                      (struct IImmersiveMonitor *)v60,
                      v24,
                      (struct tagSIZE *)&v57,
                      (enum TRY_POSITION_VIEW_FLAGS *)((char *)&v50 + 4));
              v11 = v20;
              if ( v20 < 0 )
              {
                v21 = 3210LL;
                goto LABEL_29;
              }
              v9 = HIDWORD(v50);
              top = v57.top;
              left = v57.left;
            }
            if ( (*(int (__fastcall **)(struct IPresentationRequestedArgs *, unsigned int *))(*(_QWORD *)a2 + 104LL))(
                   a2,
                   &v58) >= 0
              && v58 )
            {
              *(_QWORD *)&v74.left = 0LL;
              *(_QWORD *)&v74.right = 0LL;
              v54 = 0LL;
              if ( (*(int (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)&v57.right + 392LL))(
                     *(_QWORD *)&v57.right,
                     &v59) >= 0 )
              {
                Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v54);
                if ( (int)CDesktopPositioner::_CreateTitlebarConfiguration(
                            v25,
                            *(struct IApplicationView **)&v57.right,
                            (struct IApplicationViewTitlebarConfiguration **)&v54) >= 0 )
                {
                  v26 = v62;
                  if ( (*(int (__fastcall **)(_QWORD, struct IUnknown *, _QWORD, __int64, int, struct tagSIZE, struct tagRECT *))(**((_QWORD **)v62 + 33) + 72LL))(
                         *((_QWORD *)v62 + 33),
                         v51,
                         0LL,
                         1LL,
                         1,
                         v54,
                         &v74) >= 0
                    && (*(int (__fastcall **)(_QWORD, bool *))(**(_QWORD **)&v57.right + 136LL))(
                         *(_QWORD *)&v57.right,
                         v69) >= 0 )
                  {
                    LOBYTE(v49) = v59 != 0;
                    v53 = *WindowRelativePositioning::GetAdjacentPosition(
                             (WindowRelativePositioning *)&v53,
                             &v75,
                             &v57,
                             (const struct tagSIZE *)&v74,
                             v49,
                             v69[0],
                             *((const unsigned __int16 **)v26 + 34),
                             &v73,
                             v50);
                    v9 |= 1u;
                    HIDWORD(v50) = v9;
                    bottom = v53.bottom;
                    right = v53.right;
                  }
                }
              }
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v54);
            }
            else
            {
              ScaleFactorForRect = GetScaleFactorForRect(&v73);
              v53.left = v75.left + ScaleFactorForRect * (int)v61 / 100;
              v53.top = ScaleFactorForRect * HIDWORD(v61) / 100 + v75.top;
              right = v53.left + left;
              v53.right = v53.left + left;
              bottom = v53.top + top;
              v53.bottom = v53.top + top;
              v9 |= 1u;
              HIDWORD(v50) = v9;
            }
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v60);
            v7 = v62;
          }
        }
        wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v51);
        wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v56);
      }
    }
    v64 = 0LL;
    v28 = *(int (__fastcall **)(struct IPresentationRequestedArgs *, __int64 *))(*(_QWORD *)a2 + 32LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v64);
    if ( v28(a2, &v64) >= 0 )
    {
      wil::com_ptr_t<ITitleBarController,wil::err_exception_policy>::com_ptr_t<ITitleBarController,wil::err_exception_policy>(
        &v62,
        v64);
      wil::com_ptr_t<IInspectable,wil::err_exception_policy>::query<Windows::Foundation::Collections::IVectorView<unsigned int>>(
        &v62,
        &v56);
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v62);
      v29 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v56 + 56LL))(v56, &v59);
      v11 = v29;
      if ( v29 < 0 )
      {
        v30 = 3261LL;
LABEL_50:
        v31 = (unsigned int)v29;
        goto LABEL_51;
      }
      if ( v59 )
      {
        if ( v59 > 1 )
        {
          v11 = -2147024809;
          v31 = 2147942487LL;
          v30 = 3265LL;
LABEL_51:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v30,
            (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
            (const char *)v31);
LABEL_78:
          wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v56);
LABEL_88:
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v64);
          goto LABEL_89;
        }
        v29 = (*(__int64 (__fastcall **)(__int64, _QWORD, unsigned int *))(*(_QWORD *)v56 + 48LL))(v56, 0LL, &v58);
        v11 = v29;
        if ( v29 < 0 )
        {
          v30 = 3268LL;
          goto LABEL_50;
        }
        *(_QWORD *)&v57.left = 0LL;
        v32 = (__int64 *)*((_QWORD *)v7 + 40);
        v33 = *v32;
        *(_QWORD *)&v57.left = 0LL;
        v34 = (*(__int64 (__fastcall **)(__int64 *, __int64, struct tagRECT *))(v33 + 32))(v32, 1LL, &v57);
        v11 = v34;
        if ( v34 < 0 )
        {
          v35 = 3271LL;
LABEL_58:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v35,
            (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
            (const char *)(unsigned int)v34);
LABEL_77:
          wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v57.left);
          goto LABEL_78;
        }
        v36 = *(_QWORD *)&v57.left;
        v37 = *(__int64 (__fastcall **)(__int64, _QWORD, struct IUnknown **))(**(_QWORD **)&v57.left + 88LL);
        v38 = v55;
        v55 = 0LL;
        if ( v38 )
          ((void (__fastcall *)(struct IUnknown *))v38->lpVtbl->Release)(v38);
        v34 = v37(v36, v58, &v55);
        v11 = v34;
        if ( v34 < 0 )
        {
          v35 = 3272LL;
          goto LABEL_58;
        }
        v51 = 0LL;
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v51);
        v39 = CDesktopPositioner::_GetMonitorFromRect(v7, v67, (struct IImmersiveMonitor **)&v51);
        v11 = v39;
        if ( v39 < 0 )
        {
          v40 = 3275LL;
LABEL_76:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v40,
            (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
            (const char *)(unsigned int)v39);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v51);
          goto LABEL_77;
        }
        v41 = (unsigned int)SHIsSameObject(v55, v51) != 0;
        if ( (*(int (__fastcall **)(struct IPresentationRequestedArgs *, __int64 *))(*(_QWORD *)a2 + 56LL))(a2, &v61) < 0 )
        {
          if ( !v41 )
          {
            v74 = v53;
            v39 = CDesktopPositioner::_MoveRectToMonitor(v7, (struct IImmersiveMonitor *)v55, &v74, &v53);
            v11 = v39;
            if ( v39 < 0 )
            {
              v40 = 3312LL;
              goto LABEL_76;
            }
            v9 |= 3u;
            HIDWORD(v50) = v9;
            if ( !(_BYTE)v50 )
            {
              v46 = v53.left;
              v54.cx = v53.right - v53.left;
              v47 = v53.top;
              v54.cy = v53.bottom - v53.top;
              v39 = CDesktopPositioner::_AdjustSizeForMonitorChange(
                      v45,
                      (struct IImmersiveMonitor *)v51,
                      (struct IImmersiveMonitor *)v55,
                      &v54,
                      (enum TRY_POSITION_VIEW_FLAGS *)((char *)&v50 + 4));
              v11 = v39;
              if ( v39 < 0 )
              {
                v40 = 3320LL;
                goto LABEL_76;
              }
              v53.right = v46 + v54.cx;
              v53.bottom = v47 + v54.cy;
              v9 = HIDWORD(v50);
            }
          }
        }
        else
        {
          wil::Feature<__WilFeatureTraits_Feature_LightweightWindows>::ReportUsageToService();
          *(_QWORD *)&v73.left = 0LL;
          *(_QWORD *)&v73.right = 0LL;
          v39 = ((__int64 (__fastcall *)(struct IUnknown *, struct tagRECT *))v55->lpVtbl[3].Release)(v55, &v73);
          v11 = v39;
          if ( v39 < 0 )
          {
            v40 = 3282LL;
            goto LABEL_76;
          }
          cx = right - v53.left;
          v54.cx = cx;
          cy = bottom - v53.top;
          v54.cy = cy;
          if ( !v41 && !(_BYTE)v50 )
          {
            v39 = CDesktopPositioner::_AdjustSizeForMonitorChange(
                    v42,
                    (struct IImmersiveMonitor *)v51,
                    (struct IImmersiveMonitor *)v55,
                    &v54,
                    (enum TRY_POSITION_VIEW_FLAGS *)((char *)&v50 + 4));
            v11 = v39;
            if ( v39 < 0 )
            {
              v40 = 3295LL;
              goto LABEL_76;
            }
            v9 = HIDWORD(v50);
            cy = v54.cy;
            cx = v54.cx;
          }
          v53.left = v61 + v73.left;
          v53.top = HIDWORD(v61) + v73.top;
          v53.right = cx + v61 + v73.left;
          v53.bottom = cy + HIDWORD(v61) + v73.top;
          v9 |= 3u;
        }
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v51);
        wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v57.left);
      }
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v56);
    }
    v48 = v55;
    if ( v55 )
    {
      *v68 = (struct IImmersiveMonitor *)v55;
      ((void (__fastcall *)(struct IUnknown *))v48->lpVtbl->AddRef)(v48);
    }
    else
    {
      *v68 = 0LL;
    }
    *(_DWORD *)v70 = v9;
    *v71 = v53;
    if ( v9 )
    {
      v11 = 0;
    }
    else
    {
      v11 = -2147467260;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xD08,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)0x80004004LL);
    }
    goto LABEL_88;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xC48,
    (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
    (const char *)(unsigned int)MonitorFromRect);
LABEL_90:
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v55);
  return v11;
}
