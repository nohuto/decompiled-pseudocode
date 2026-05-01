/*
 * XREFs of ?Initialize@VirtualDesktopGestureWindow@@QEAAJXZ @ 0x18038F90C
 * Callers:
 *     ?Initialize@VirtualDesktopGestureContext@@QEAAJXZ @ 0x18038F4C8 (-Initialize@VirtualDesktopGestureContext@@QEAAJXZ.c)
 * Callees:
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180017174 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180077188 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     memset_0 @ 0x180084F7A (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x1800F6B54 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 *     ??0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV?$ComPtr@UIDCompBatcher@@@WRL@Microsoft@@AEBU_GUID@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x1802EED50 (--0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV-$ComPtr@UIDCompBatcher@@@WRL@Microsoft@.c)
 *     ??1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ @ 0x1802EEDD4 (--1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ.c)
 *     ?GetTrayWindowForMonitor@TaskbarHelpers@@YAPEAUHWND__@@PEAUHMONITOR__@@@Z @ 0x1802FB73C (-GetTrayWindowForMonitor@TaskbarHelpers@@YAPEAUHWND__@@PEAUHMONITOR__@@@Z.c)
 *     ?GetColor@CImmersiveColor@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z @ 0x180302050 (-GetColor@CImmersiveColor@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z.c)
 *     ??$As@UIVirtualDesktopThumbnail@@@?$ComPtr@UIDCompThumbnail@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIVirtualDesktopThumbnail@@@WRL@Microsoft@@@Details@12@@Z @ 0x180310584 (--$As@UIVirtualDesktopThumbnail@@@-$ComPtr@UIDCompThumbnail@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V.c)
 *     ?MakeBackgroundThumbnail@VirtualDesktopGestureWindow@@AEAAJAEAV?$CCoSimpleArray@V?$ComPtr@UIDCompThumbnail@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIDCompThumbnail@@@WRL@Microsoft@@@@@@PEAPEAUIDCompThumbnail@@@Z @ 0x18039015C (-MakeBackgroundThumbnail@VirtualDesktopGestureWindow@@AEAAJAEAV-$CCoSimpleArray@V-$ComPtr@UIDCom.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall VirtualDesktopGestureWindow::Initialize(VirtualDesktopGestureWindow *this)
{
  const char *v2; // r9
  char v4; // r15
  __int64 v5; // rbx
  __int64 **v6; // r12
  int v7; // eax
  int v8; // edi
  int v9; // ecx
  __int64 *v10; // rsi
  __int64 v11; // rdi
  __int64 v12; // rbx
  unsigned int Color; // eax
  int v14; // eax
  __int64 v15; // rdx
  void *v16; // r8
  __int64 v17; // rdx
  __int64 *v18; // rcx
  unsigned __int64 v19; // r9
  __int64 *v20; // rbx
  int BackgroundThumbnail; // eax
  unsigned __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v24; // rbx
  int v25; // eax
  void *v26; // r8
  __int64 v27; // rdx
  __int64 *v28; // rcx
  __int64 *v29; // rbx
  int v30; // eax
  unsigned __int64 v31; // r9
  __int64 v32; // rdx
  int v33; // eax
  void *v34; // r8
  __int64 v35; // rdx
  __int64 *v36; // rcx
  int v37; // eax
  __int64 v38; // rdx
  HMONITOR v39; // rdx
  HWND TrayWindowForMonitor; // r12
  __int64 v41; // rbx
  __int64 v42; // rdi
  int v43; // eax
  unsigned __int64 v44; // r9
  __int64 v45; // rdx
  int v46; // eax
  void *v47; // r8
  __int64 v48; // rdx
  __int64 *v49; // rcx
  int v50; // eax
  __int64 v51; // [rsp+70h] [rbp-90h] BYREF
  __int64 v52; // [rsp+78h] [rbp-88h] BYREF
  __int64 v53; // [rsp+80h] [rbp-80h] BYREF
  __int64 v54; // [rsp+88h] [rbp-78h] BYREF
  __int64 v55; // [rsp+90h] [rbp-70h] BYREF
  __int64 v56[3]; // [rsp+98h] [rbp-68h] BYREF
  char v57; // [rsp+B0h] [rbp-50h]
  __int64 v58; // [rsp+B8h] [rbp-48h]
  __int64 v59[2]; // [rsp+C0h] [rbp-40h] BYREF
  WNDCLASSW WndClass; // [rsp+D0h] [rbp-30h] BYREF
  struct tagRECT Rect; // [rsp+120h] [rbp+20h] BYREF
  _DWORD v62[4]; // [rsp+130h] [rbp+30h] BYREF
  __int128 v63; // [rsp+140h] [rbp+40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+88h]

  v58 = -2LL;
  memset_0(&WndClass, 0, sizeof(WndClass));
  WndClass.lpszClassName = L"VirtualDesktopGestureSwitcher";
  WndClass.lpfnWndProc = (WNDPROC)CWRLImpWndProc<VirtualDesktopGestureWindow>::s_WndProcBase;
  WndClass.hInstance = &_ImageBase;
  WndClass.hCursor = LoadCursorW(0LL, (LPCWSTR)0x7F00);
  WndClass.cbWndExtra = 8;
  RegisterClassW(&WndClass);
  if ( !CreateWindowInBand(
          136315008LL,
          L"VirtualDesktopGestureSwitcher",
          L"Virtual desktop switching preview",
          2415919104LL,
          *((_DWORD *)this + 42),
          *((_DWORD *)this + 43),
          *((_DWORD *)this + 44) - *((_DWORD *)this + 42),
          *((_DWORD *)this + 45) - *((_DWORD *)this + 43),
          0LL,
          0LL,
          &_ImageBase,
          this,
          2) )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x96,
             (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
             v2);
  v56[2] = (__int64)this;
  v4 = 1;
  v57 = 1;
  v51 = *((_QWORD *)this + 5);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v51);
  DCompThumbnailHelpers::CDCompFactoryBatcher::CDCompFactoryBatcher(v59, &v51, (__int64)&GUID_NULL, 0LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v51);
  v5 = *((_QWORD *)this + 5);
  v6 = (__int64 **)((char *)this + 56);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 7);
  v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, char *))(*(_QWORD *)v5 + 56LL))(
         v5,
         *((_QWORD *)this + 1),
         1LL,
         (char *)this + 56);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v51 = 0LL;
    v62[0] = 0;
    v62[1] = 0;
    v62[2] = *((_DWORD *)this + 44) - *((_DWORD *)this + 42);
    v62[3] = *((_DWORD *)this + 45) - *((_DWORD *)this + 43);
    v54 = 0LL;
    v9 = *((_DWORD *)this + 45) - *((_DWORD *)this + 43);
    LODWORD(v51) = *((_DWORD *)this + 44) - *((_DWORD *)this + 42);
    HIDWORD(v51) = v9;
    v10 = *v6;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v54);
    v11 = *((_QWORD *)this + 20);
    v12 = *v10;
    Color = CImmersiveColor::GetColor(7u);
    v14 = (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD, __int64, GUID *, __int64 *))(v12 + 104))(
            v10,
            v11,
            Color,
            v51,
            &GUID_47267895_a4f8_4012_9e98_087c619e7cfc,
            &v54);
    v8 = v14;
    if ( v14 < 0 )
    {
      v15 = 160LL;
LABEL_17:
      v19 = (unsigned int)v14;
      goto LABEL_18;
    }
    v14 = (*(__int64 (__fastcall **)(__int64, _DWORD *, _QWORD, _QWORD))(*(_QWORD *)v54 + 24LL))(v54, v62, 0LL, 0LL);
    v8 = v14;
    if ( v14 < 0 )
    {
      v15 = 161LL;
      goto LABEL_17;
    }
    v17 = *((_QWORD *)this + 17);
    if ( v17 == *((_QWORD *)this + 19) )
    {
      v8 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
             (__int64)this + 128,
             v17 + 1,
             v16);
      if ( v8 < 0 )
      {
        v19 = (unsigned int)v8;
        v15 = 162LL;
LABEL_18:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v15,
          (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
          (const char *)v19);
LABEL_68:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v54);
        goto LABEL_69;
      }
    }
    v18 = (__int64 *)(*((_QWORD *)this + 16) + 8 * (*((_QWORD *)this + 17))++);
    if ( v18 )
    {
      *v18 = v54;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v18);
    }
    v51 = 0x100000001LL;
    v20 = *v6;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 20);
    v14 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64, GUID *, char *))(*v20 + 112))(
            v20,
            0LL,
            v51,
            &GUID_47267895_a4f8_4012_9e98_087c619e7cfc,
            (char *)this + 160);
    v8 = v14;
    if ( v14 < 0 )
    {
      v15 = 164LL;
      goto LABEL_17;
    }
    v51 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v51);
    BackgroundThumbnail = VirtualDesktopGestureWindow::MakeBackgroundThumbnail(this, (char *)this + 128, &v51);
    v8 = BackgroundThumbnail;
    if ( BackgroundThumbnail < 0 )
    {
      v22 = (unsigned int)BackgroundThumbnail;
      v23 = 167LL;
LABEL_29:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v23,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
        (const char *)v22);
LABEL_67:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v51);
      goto LABEL_68;
    }
    v24 = v51;
    v25 = (*(__int64 (__fastcall **)(__int64, _DWORD *, _QWORD, _QWORD))(*(_QWORD *)v51 + 24LL))(v51, v62, 0LL, 0LL);
    v8 = v25;
    if ( v25 < 0 )
    {
      v22 = (unsigned int)v25;
      v23 = 168LL;
      goto LABEL_29;
    }
    v27 = *((_QWORD *)this + 17);
    if ( v27 == *((_QWORD *)this + 19) )
    {
      v8 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
             (__int64)this + 128,
             v27 + 1,
             v26);
      if ( v8 < 0 )
      {
        v22 = (unsigned int)v8;
        v23 = 169LL;
        goto LABEL_29;
      }
    }
    v28 = (__int64 *)(*((_QWORD *)this + 16) + 8 * (*((_QWORD *)this + 17))++);
    if ( v28 )
    {
      *v28 = v24;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v28);
    }
    v53 = 0LL;
    v63 = *(_OWORD *)((char *)this + 168);
    v29 = *v6;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v53);
    v30 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD, __int128 *, GUID *, __int64 *))(*v29 + 96))(
            v29,
            *((_QWORD *)this + 20),
            0LL,
            &v63,
            &GUID_47267895_a4f8_4012_9e98_087c619e7cfc,
            &v53);
    v8 = v30;
    if ( v30 < 0 )
    {
      v31 = (unsigned int)v30;
      v32 = 172LL;
LABEL_40:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v32,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
        (const char *)v31);
LABEL_66:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v53);
      goto LABEL_67;
    }
    v33 = (*(__int64 (__fastcall **)(__int64, _DWORD *, _QWORD, _QWORD))(*(_QWORD *)v53 + 24LL))(v53, v62, 0LL, 0LL);
    v8 = v33;
    if ( v33 < 0 )
    {
      v31 = (unsigned int)v33;
      v32 = 173LL;
      goto LABEL_40;
    }
    v35 = *((_QWORD *)this + 17);
    if ( v35 == *((_QWORD *)this + 19) )
    {
      v8 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
             (__int64)this + 128,
             v35 + 1,
             v34);
      if ( v8 < 0 )
      {
        v31 = (unsigned int)v8;
        v32 = 174LL;
        goto LABEL_40;
      }
    }
    v36 = (__int64 *)(*((_QWORD *)this + 16) + 8 * (*((_QWORD *)this + 17))++);
    if ( v36 )
    {
      *v36 = v53;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v36);
    }
    v56[0] = 0LL;
    v37 = Microsoft::WRL::ComPtr<IDCompThumbnail>::As<IVirtualDesktopThumbnail>(&v53, v56);
    v8 = v37;
    if ( v37 < 0 )
    {
      v38 = 177LL;
LABEL_45:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v38,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
        (const char *)(unsigned int)v37);
LABEL_65:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v56);
      goto LABEL_66;
    }
    v37 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _DWORD))(*(_QWORD *)v56[0] + 24LL))(
            v56[0],
            0LL,
            0LL,
            0LL,
            0);
    v8 = v37;
    if ( v37 < 0 )
    {
      v38 = 178LL;
      goto LABEL_45;
    }
    TrayWindowForMonitor = TaskbarHelpers::GetTrayWindowForMonitor(*((TaskbarHelpers **)this + 23), v39);
    if ( TrayWindowForMonitor )
    {
      v41 = 0LL;
      v55 = 0LL;
      if ( !*((_BYTE *)this + 206) )
      {
        Microsoft::WRL::ComPtr<IApplicationView>::operator=(&v55, (__int64 *)this + 20);
        v41 = v55;
      }
      Rect = 0LL;
      GetWindowRect(TrayWindowForMonitor, &Rect);
      MapWindowPoints(0LL, *((HWND *)this + 1), (LPPOINT)&Rect, 2u);
      v56[1] = 0LL;
      *(_QWORD *)&v63 = 0LL;
      DWORD2(v63) = Rect.right - Rect.left;
      HIDWORD(v63) = Rect.bottom - Rect.top;
      v52 = 0LL;
      v42 = *((_QWORD *)this + 7);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v52);
      v43 = (*(__int64 (__fastcall **)(__int64, __int64, HWND, _QWORD, _QWORD, __int128 *, GUID *, __int64 *))(*(_QWORD *)v42 + 64LL))(
              v42,
              v41,
              TrayWindowForMonitor,
              0LL,
              0LL,
              &v63,
              &GUID_47267895_a4f8_4012_9e98_087c619e7cfc,
              &v52);
      v8 = v43;
      if ( v43 < 0 )
      {
        v44 = (unsigned int)v43;
        v45 = 198LL;
LABEL_59:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v45,
          (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
          (const char *)v44);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v52);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v55);
        goto LABEL_65;
      }
      v46 = (*(__int64 (__fastcall **)(__int64, struct tagRECT *, _QWORD, _QWORD))(*(_QWORD *)v52 + 24LL))(
              v52,
              &Rect,
              0LL,
              0LL);
      v8 = v46;
      if ( v46 < 0 )
      {
        v44 = (unsigned int)v46;
        v45 = 199LL;
        goto LABEL_59;
      }
      v48 = *((_QWORD *)this + 17);
      if ( v48 == *((_QWORD *)this + 19) )
      {
        v8 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
               (__int64)this + 128,
               v48 + 1,
               v47);
        if ( v8 < 0 )
        {
          v44 = (unsigned int)v8;
          v45 = 200LL;
          goto LABEL_59;
        }
      }
      v49 = (__int64 *)(*((_QWORD *)this + 16) + 8 * (*((_QWORD *)this + 17))++);
      if ( v49 )
      {
        *v49 = v52;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v49);
      }
      if ( !*((_BYTE *)this + 206) )
      {
        v50 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v52 + 168LL))(v52);
        if ( v50 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            207LL,
            (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
            (const char *)(unsigned int)v50);
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v52);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v55);
    }
    v4 = 0;
    v57 = 0;
    v8 = 0;
    goto LABEL_65;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x9B,
    (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
    (const char *)(unsigned int)v7);
LABEL_69:
  DCompThumbnailHelpers::CDCompFactoryBatcher::~CDCompFactoryBatcher((DCompThumbnailHelpers::CDCompFactoryBatcher *)v59);
  if ( v4 )
  {
    v57 = 0;
    DestroyWindow(*((HWND *)this + 1));
  }
  return (unsigned int)v8;
}
