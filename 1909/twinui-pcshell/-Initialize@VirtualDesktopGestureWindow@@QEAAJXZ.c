/*
 * XREFs of ?Initialize@VirtualDesktopGestureWindow@@QEAAJXZ @ 0x180414DD4
 * Callers:
 *     ?Initialize@VirtualDesktopGestureContext@@QEAAJXZ @ 0x180414990 (-Initialize@VirtualDesktopGestureContext@@QEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006EC20 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     memset_0 @ 0x18008A73A (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180122920 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x18013B2DC (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180148704 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?GetTrayWindowForMonitor@TaskbarHelpers@@YAPEAUHWND__@@PEAUHMONITOR__@@@Z @ 0x1801DBFC0 (-GetTrayWindowForMonitor@TaskbarHelpers@@YAPEAUHWND__@@PEAUHMONITOR__@@@Z.c)
 *     ??0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV?$ComPtr@UIDCompBatcher@@@WRL@Microsoft@@AEBU_GUID@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x18036F010 (--0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV-$ComPtr@UIDCompBatcher@@@WRL@Microsoft@.c)
 *     ??1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ @ 0x18036F094 (--1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ.c)
 *     ?GetColor@CImmersiveColor@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z @ 0x1803821E0 (-GetColor@CImmersiveColor@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z.c)
 *     ??$As@UIVirtualDesktopThumbnail@@@?$ComPtr@UIDCompThumbnail@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIVirtualDesktopThumbnail@@@WRL@Microsoft@@@Details@12@@Z @ 0x1803904B4 (--$As@UIVirtualDesktopThumbnail@@@-$ComPtr@UIDCompThumbnail@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V.c)
 *     ?MakeBackgroundThumbnail@VirtualDesktopGestureWindow@@AEAAJAEAV?$CCoSimpleArray@V?$ComPtr@UIDCompThumbnail@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIDCompThumbnail@@@WRL@Microsoft@@@@@@PEAPEAUIDCompThumbnail@@@Z @ 0x180415620 (-MakeBackgroundThumbnail@VirtualDesktopGestureWindow@@AEAAJAEAV-$CCoSimpleArray@V-$ComPtr@UIDCom.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall VirtualDesktopGestureWindow::Initialize(VirtualDesktopGestureWindow *this)
{
  const char *v2; // r9
  char v4; // r12
  __int64 v5; // rdi
  __int64 (__fastcall *v6)(__int64, _QWORD, __int64, char *); // rbx
  char *v7; // r13
  int v8; // eax
  int v9; // ebx
  __int64 v10; // rsi
  __int64 (__fastcall *v11)(__int64, __int64, _QWORD, __int64, GUID *, __int64 *); // rdi
  int v12; // ecx
  __int64 v13; // rbx
  unsigned int Color; // eax
  int v15; // eax
  __int64 v16; // rdx
  void *v17; // r8
  __int64 v18; // rdx
  __int64 *v19; // rcx
  unsigned __int64 v20; // r9
  __int64 v21; // rdi
  __int64 (__fastcall *v22)(__int64, _QWORD, __int64, GUID *, char *); // rbx
  int BackgroundThumbnail; // eax
  unsigned __int64 v24; // r9
  __int64 v25; // rdx
  int v26; // eax
  void *v27; // r8
  __int64 v28; // rdx
  __int64 *v29; // rcx
  __int64 v30; // rdi
  __int64 (__fastcall *v31)(__int64, _QWORD, _QWORD, __int128 *, GUID *, __int64 *); // rbx
  int v32; // eax
  unsigned __int64 v33; // r9
  __int64 v34; // rdx
  int v35; // eax
  void *v36; // r8
  __int64 v37; // rdx
  __int64 *v38; // rcx
  int v39; // eax
  __int64 v40; // rdx
  HMONITOR v41; // rdx
  HWND TrayWindowForMonitor; // r13
  __int64 v43; // rbx
  __int64 v44; // rsi
  __int64 (__fastcall *v45)(__int64, __int64, HWND, _QWORD, _QWORD, __int128 *, GUID *, __int64 *); // rdi
  int v46; // eax
  unsigned __int64 v47; // r9
  __int64 v48; // rdx
  int v49; // eax
  void *v50; // r8
  __int64 v51; // rdx
  __int64 *v52; // rcx
  int v53; // eax
  __int64 v54; // [rsp+70h] [rbp-90h] BYREF
  __int64 v55; // [rsp+78h] [rbp-88h] BYREF
  __int64 v56; // [rsp+80h] [rbp-80h] BYREF
  __int64 v57; // [rsp+88h] [rbp-78h] BYREF
  __int64 v58; // [rsp+90h] [rbp-70h] BYREF
  __int64 v59[2]; // [rsp+98h] [rbp-68h] BYREF
  char v60; // [rsp+A8h] [rbp-58h]
  __int64 v61; // [rsp+B0h] [rbp-50h]
  __int64 v62[3]; // [rsp+B8h] [rbp-48h] BYREF
  WNDCLASSW WndClass; // [rsp+D0h] [rbp-30h] BYREF
  struct tagRECT Rect; // [rsp+120h] [rbp+20h] BYREF
  __int64 v65; // [rsp+130h] [rbp+30h] BYREF
  int v66; // [rsp+138h] [rbp+38h]
  int v67; // [rsp+13Ch] [rbp+3Ch]
  __int128 v68; // [rsp+140h] [rbp+40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+88h]

  v61 = -2LL;
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
  v59[1] = (__int64)this;
  v4 = 1;
  v60 = 1;
  v54 = *((_QWORD *)this + 5);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v54);
  DCompThumbnailHelpers::CDCompFactoryBatcher::CDCompFactoryBatcher(v62, &v54, (__int64)&GUID_NULL, 0LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v54);
  v5 = *((_QWORD *)this + 5);
  v6 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, char *))(*(_QWORD *)v5 + 56LL);
  v7 = (char *)this + 56;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 7);
  v8 = v6(v5, *((_QWORD *)this + 1), 1LL, (char *)this + 56);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v65 = 0LL;
    v66 = *((_DWORD *)this + 44) - *((_DWORD *)this + 42);
    v67 = *((_DWORD *)this + 45) - *((_DWORD *)this + 43);
    v58 = 0LL;
    v10 = *(_QWORD *)v7;
    v11 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, GUID *, __int64 *))(**(_QWORD **)v7 + 104LL);
    v12 = *((_DWORD *)this + 45) - *((_DWORD *)this + 43);
    LODWORD(v54) = *((_DWORD *)this + 44) - *((_DWORD *)this + 42);
    HIDWORD(v54) = v12;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v58);
    v13 = *((_QWORD *)this + 20);
    Color = CImmersiveColor::GetColor(7u);
    v15 = v11(v10, v13, Color, v54, &GUID_47267895_a4f8_4012_9e98_087c619e7cfc, &v58);
    v9 = v15;
    if ( v15 < 0 )
    {
      v16 = 160LL;
LABEL_17:
      v20 = (unsigned int)v15;
      goto LABEL_18;
    }
    v15 = (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD, _QWORD))(*(_QWORD *)v58 + 24LL))(v58, &v65, 0LL, 0LL);
    v9 = v15;
    if ( v15 < 0 )
    {
      v16 = 161LL;
      goto LABEL_17;
    }
    v18 = *((_QWORD *)this + 17);
    if ( v18 == *((_QWORD *)this + 19) )
    {
      v9 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
             (__int64)this + 128,
             v18 + 1,
             v17);
      if ( v9 < 0 )
      {
        v20 = (unsigned int)v9;
        v16 = 162LL;
LABEL_18:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v16,
          (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
          (const char *)v20);
LABEL_68:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v58);
        goto LABEL_69;
      }
    }
    v19 = (__int64 *)(*((_QWORD *)this + 16) + 8 * (*((_QWORD *)this + 17))++);
    if ( v19 )
    {
      *v19 = v58;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v19);
    }
    v21 = *(_QWORD *)v7;
    v22 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, GUID *, char *))(**(_QWORD **)v7 + 112LL);
    v54 = 0x100000001LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 20);
    v15 = v22(v21, 0LL, v54, &GUID_47267895_a4f8_4012_9e98_087c619e7cfc, (char *)this + 160);
    v9 = v15;
    if ( v15 < 0 )
    {
      v16 = 164LL;
      goto LABEL_17;
    }
    v57 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v57);
    BackgroundThumbnail = VirtualDesktopGestureWindow::MakeBackgroundThumbnail(this, (char *)this + 128, &v57);
    v9 = BackgroundThumbnail;
    if ( BackgroundThumbnail < 0 )
    {
      v24 = (unsigned int)BackgroundThumbnail;
      v25 = 167LL;
LABEL_29:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v25,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
        (const char *)v24);
LABEL_67:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v57);
      goto LABEL_68;
    }
    v26 = (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD, _QWORD))(*(_QWORD *)v57 + 24LL))(v57, &v65, 0LL, 0LL);
    v9 = v26;
    if ( v26 < 0 )
    {
      v24 = (unsigned int)v26;
      v25 = 168LL;
      goto LABEL_29;
    }
    v28 = *((_QWORD *)this + 17);
    if ( v28 == *((_QWORD *)this + 19) )
    {
      v9 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
             (__int64)this + 128,
             v28 + 1,
             v27);
      if ( v9 < 0 )
      {
        v24 = (unsigned int)v9;
        v25 = 169LL;
        goto LABEL_29;
      }
    }
    v29 = (__int64 *)(*((_QWORD *)this + 16) + 8 * (*((_QWORD *)this + 17))++);
    if ( v29 )
    {
      *v29 = v57;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v29);
    }
    v56 = 0LL;
    v30 = *(_QWORD *)v7;
    v31 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int128 *, GUID *, __int64 *))(**(_QWORD **)v7 + 96LL);
    v68 = *(_OWORD *)((char *)this + 168);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v56);
    v32 = v31(v30, *((_QWORD *)this + 20), 0LL, &v68, &GUID_47267895_a4f8_4012_9e98_087c619e7cfc, &v56);
    v9 = v32;
    if ( v32 < 0 )
    {
      v33 = (unsigned int)v32;
      v34 = 172LL;
LABEL_40:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v34,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
        (const char *)v33);
LABEL_66:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v56);
      goto LABEL_67;
    }
    v35 = (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD, _QWORD))(*(_QWORD *)v56 + 24LL))(v56, &v65, 0LL, 0LL);
    v9 = v35;
    if ( v35 < 0 )
    {
      v33 = (unsigned int)v35;
      v34 = 173LL;
      goto LABEL_40;
    }
    v37 = *((_QWORD *)this + 17);
    if ( v37 == *((_QWORD *)this + 19) )
    {
      v9 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
             (__int64)this + 128,
             v37 + 1,
             v36);
      if ( v9 < 0 )
      {
        v33 = (unsigned int)v9;
        v34 = 174LL;
        goto LABEL_40;
      }
    }
    v38 = (__int64 *)(*((_QWORD *)this + 16) + 8 * (*((_QWORD *)this + 17))++);
    if ( v38 )
    {
      *v38 = v56;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v38);
    }
    v59[0] = 0LL;
    v39 = Microsoft::WRL::ComPtr<IDCompThumbnail>::As<IVirtualDesktopThumbnail>(&v56, v59);
    v9 = v39;
    if ( v39 < 0 )
    {
      v40 = 177LL;
LABEL_45:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v40,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
        (const char *)(unsigned int)v39);
LABEL_65:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v59);
      goto LABEL_66;
    }
    v39 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _DWORD))(*(_QWORD *)v59[0] + 24LL))(
            v59[0],
            0LL,
            0LL,
            0LL,
            0);
    v9 = v39;
    if ( v39 < 0 )
    {
      v40 = 178LL;
      goto LABEL_45;
    }
    TrayWindowForMonitor = TaskbarHelpers::GetTrayWindowForMonitor(*((TaskbarHelpers **)this + 23), v41);
    if ( TrayWindowForMonitor )
    {
      v43 = 0LL;
      v54 = 0LL;
      if ( !*((_BYTE *)this + 206) )
      {
        Microsoft::WRL::ComPtr<IApplicationView>::operator=(&v54, (__int64 *)this + 20);
        v43 = v54;
      }
      Rect = 0LL;
      GetWindowRect(TrayWindowForMonitor, &Rect);
      MapWindowPoints(0LL, *((HWND *)this + 1), (LPPOINT)&Rect, 2u);
      *(_QWORD *)&v68 = 0LL;
      DWORD2(v68) = Rect.right - Rect.left;
      HIDWORD(v68) = Rect.bottom - Rect.top;
      v55 = 0LL;
      v44 = *((_QWORD *)this + 7);
      v45 = *(__int64 (__fastcall **)(__int64, __int64, HWND, _QWORD, _QWORD, __int128 *, GUID *, __int64 *))(*(_QWORD *)v44 + 64LL);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v55);
      v46 = v45(v44, v43, TrayWindowForMonitor, 0LL, 0LL, &v68, &GUID_47267895_a4f8_4012_9e98_087c619e7cfc, &v55);
      v9 = v46;
      if ( v46 < 0 )
      {
        v47 = (unsigned int)v46;
        v48 = 198LL;
LABEL_59:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v48,
          (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
          (const char *)v47);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v55);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v54);
        goto LABEL_65;
      }
      v49 = (*(__int64 (__fastcall **)(__int64, struct tagRECT *, _QWORD, _QWORD))(*(_QWORD *)v55 + 24LL))(
              v55,
              &Rect,
              0LL,
              0LL);
      v9 = v49;
      if ( v49 < 0 )
      {
        v47 = (unsigned int)v49;
        v48 = 199LL;
        goto LABEL_59;
      }
      v51 = *((_QWORD *)this + 17);
      if ( v51 == *((_QWORD *)this + 19) )
      {
        v9 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
               (__int64)this + 128,
               v51 + 1,
               v50);
        if ( v9 < 0 )
        {
          v47 = (unsigned int)v9;
          v48 = 200LL;
          goto LABEL_59;
        }
      }
      v52 = (__int64 *)(*((_QWORD *)this + 16) + 8 * (*((_QWORD *)this + 17))++);
      if ( v52 )
      {
        *v52 = v55;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v52);
      }
      if ( !*((_BYTE *)this + 206) )
      {
        v53 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v55 + 168LL))(v55);
        if ( v53 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0xCF,
            (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
            (const char *)(unsigned int)v53);
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v55);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v54);
    }
    v4 = 0;
    v60 = 0;
    v9 = 0;
    goto LABEL_65;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x9B,
    (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
    (const char *)(unsigned int)v8);
LABEL_69:
  DCompThumbnailHelpers::CDCompFactoryBatcher::~CDCompFactoryBatcher((DCompThumbnailHelpers::CDCompFactoryBatcher *)v62);
  if ( v4 )
  {
    v60 = 0;
    DestroyWindow(*((HWND *)this + 1));
  }
  return (unsigned int)v9;
}
