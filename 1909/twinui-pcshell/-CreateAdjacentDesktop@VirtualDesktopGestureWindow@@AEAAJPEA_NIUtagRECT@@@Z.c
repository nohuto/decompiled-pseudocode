/*
 * XREFs of ?CreateAdjacentDesktop@VirtualDesktopGestureWindow@@AEAAJPEA_NIUtagRECT@@@Z @ 0x180414010
 * Callers:
 *     ?CreateAdjacentDesktop@VirtualDesktopGestureContext@@AEAAJPEA_NIH@Z @ 0x180413F24 (-CreateAdjacentDesktop@VirtualDesktopGestureContext@@AEAAJPEA_NIH@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180050DC0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006EC20 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RemoveAll@?$CTSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAUHWND__@@@@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@V?$CSimpleArrayStandardMergeHelper@PEAUHWND__@@@@@@QEAAXXZ @ 0x1800846AC (-RemoveAll@-$CTSimpleArray@PEAUHWND__@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@PEAUHWND__@@@@V-$CSimpleA.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180089C34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicationViewIconLoaderNotifications@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x1800A8AA0 (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicat.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180122920 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x18013B2DC (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180148704 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?GetFilterForDesktop@VirtualDesktopHelpers@@YAJPEAUIVirtualDesktop@@PEAUIVirtualDesktopManagerInternal@@AEAV?$CCoSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@@@2@Z @ 0x18036C110 (-GetFilterForDesktop@VirtualDesktopHelpers@@YAJPEAUIVirtualDesktop@@PEAUIVirtualDesktopManagerIn.c)
 *     ??$As@UIVirtualDesktopThumbnail@@@?$ComPtr@UIDCompThumbnail@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIVirtualDesktopThumbnail@@@WRL@Microsoft@@@Details@12@@Z @ 0x1803904B4 (--$As@UIVirtualDesktopThumbnail@@@-$ComPtr@UIDCompThumbnail@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V.c)
 *     ??_GGetTrayBitmapCallbackData@VirtualDesktopGestureWindow@@QEAAPEAXI@Z @ 0x180413780 (--_GGetTrayBitmapCallbackData@VirtualDesktopGestureWindow@@QEAAPEAXI@Z.c)
 *     ?MakeBackgroundThumbnail@VirtualDesktopGestureWindow@@AEAAJAEAV?$CCoSimpleArray@V?$ComPtr@UIDCompThumbnail@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIDCompThumbnail@@@WRL@Microsoft@@@@@@PEAPEAUIDCompThumbnail@@@Z @ 0x180415620 (-MakeBackgroundThumbnail@VirtualDesktopGestureWindow@@AEAAJAEAV-$CCoSimpleArray@V-$ComPtr@UIDCom.c)
 */

// Hidden C++ exception states: #wind=24
__int64 __fastcall VirtualDesktopGestureWindow::CreateAdjacentDesktop(
        VirtualDesktopGestureWindow *this,
        bool *a2,
        unsigned int a3,
        struct tagRECT *a4)
{
  __int64 v8; // rdi
  __int64 (__fastcall *v9)(__int64, __int64 *); // rbx
  int v10; // eax
  int LastError; // ebx
  __int64 v12; // rdi
  __int64 (__fastcall *v13)(__int64, __int64, _QWORD, __int64 *); // rbx
  int v14; // eax
  __int64 v15; // rsi
  _QWORD *v16; // rsi
  int BackgroundThumbnail; // eax
  __int64 v18; // rdx
  __int64 v19; // rdi
  __int64 (__fastcall *v20)(__int64, _QWORD, _QWORD, __int128 *, GUID *, __int64 *); // rbx
  int v21; // eax
  __int64 v22; // rdx
  int FilterForDesktop; // eax
  int v24; // eax
  unsigned __int64 v25; // r9
  __int64 v26; // rdx
  int v27; // eax
  void *v28; // r8
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 *v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 *v34; // rcx
  HWND WindowW; // rdi
  _QWORD *v36; // rax
  volatile int *v37; // rdx
  WPARAM dwData; // rbx
  VirtualDesktopGestureWindow *v39; // rcx
  volatile int *v40; // rdx
  const char *v41; // r9
  __int64 v43; // [rsp+40h] [rbp-79h] BYREF
  __int64 v44; // [rsp+48h] [rbp-71h] BYREF
  __int64 v45; // [rsp+50h] [rbp-69h] BYREF
  __int64 v46; // [rsp+58h] [rbp-61h] BYREF
  __int64 v47; // [rsp+60h] [rbp-59h] BYREF
  __int64 v48; // [rsp+68h] [rbp-51h] BYREF
  int v49[2]; // [rsp+70h] [rbp-49h]
  __int64 v50; // [rsp+78h] [rbp-41h]
  __int64 v51; // [rsp+80h] [rbp-39h]
  __int64 v52; // [rsp+88h] [rbp-31h] BYREF
  __int64 v53; // [rsp+90h] [rbp-29h]
  __int64 v54; // [rsp+98h] [rbp-21h]
  __int64 v55; // [rsp+A0h] [rbp-19h]
  __int128 v56; // [rsp+B0h] [rbp-9h] BYREF
  __int64 v57; // [rsp+C0h] [rbp+7h]
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+5Fh]

  v57 = -2LL;
  *a2 = 0;
  v47 = 0LL;
  v8 = *((_QWORD *)this + 4);
  v9 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 48LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v47);
  v10 = v9(v8, &v47);
  LastError = v10;
  if ( v10 >= 0 )
  {
    v45 = 0LL;
    v12 = *((_QWORD *)this + 4);
    v13 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64 *))(*(_QWORD *)v12 + 64LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v45);
    v14 = v13(v12, v47, a3, &v45);
    LastError = v14;
    if ( v14 >= 0 )
    {
      v15 = 64LL;
      if ( a3 != 3 )
        v15 = 96LL;
      v16 = (_QWORD *)((char *)this + v15);
      v44 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v44);
      BackgroundThumbnail = VirtualDesktopGestureWindow::MakeBackgroundThumbnail(this, v16, &v44);
      LastError = BackgroundThumbnail;
      if ( BackgroundThumbnail < 0 )
      {
        v18 = 317LL;
LABEL_10:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v18,
          (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
          (const char *)(unsigned int)BackgroundThumbnail);
LABEL_54:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v44);
LABEL_59:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v45);
        goto LABEL_60;
      }
      BackgroundThumbnail = (*(__int64 (__fastcall **)(__int64, struct tagRECT *, _QWORD, _QWORD))(*(_QWORD *)v44 + 24LL))(
                              v44,
                              a4,
                              0LL,
                              0LL);
      LastError = BackgroundThumbnail;
      if ( BackgroundThumbnail < 0 )
      {
        v18 = 318LL;
        goto LABEL_10;
      }
      v43 = 0LL;
      v19 = *((_QWORD *)this + 7);
      v20 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int128 *, GUID *, __int64 *))(*(_QWORD *)v19 + 96LL);
      v56 = *(_OWORD *)((char *)this + 168);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v43);
      v21 = v20(v19, *((_QWORD *)this + 20), 0LL, &v56, &GUID_47267895_a4f8_4012_9e98_087c619e7cfc, &v43);
      LastError = v21;
      if ( v21 < 0 )
      {
        v22 = 321LL;
LABEL_15:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v22,
          (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
          (const char *)(unsigned int)v21);
LABEL_53:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v43);
        goto LABEL_54;
      }
      v21 = (*(__int64 (__fastcall **)(__int64, struct tagRECT *, _QWORD, _QWORD))(*(_QWORD *)v43 + 24LL))(
              v43,
              a4,
              0LL,
              0LL);
      LastError = v21;
      if ( v21 < 0 )
      {
        v22 = 322LL;
        goto LABEL_15;
      }
      v52 = 0LL;
      v53 = 0LL;
      v54 = 0LL;
      v55 = 0LL;
      v48 = 0LL;
      *(_QWORD *)v49 = 0LL;
      v50 = 0LL;
      v51 = 0LL;
      FilterForDesktop = VirtualDesktopHelpers::GetFilterForDesktop(v45, *((_QWORD *)this + 4), &v52, &v48);
      LastError = FilterForDesktop;
      if ( FilterForDesktop < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x128,
          (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
          (const char *)(unsigned int)FilterForDesktop);
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x146,
          (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
          (const char *)(unsigned int)LastError);
LABEL_52:
        CTSimpleArray<HWND__ *,4294967294,CTPolicyCoTaskMem<HWND__ *>,CSimpleArrayStandardCompareHelper<HWND__ *>,CSimpleArrayStandardMergeHelper<HWND__ *>>::RemoveAll((__int64)&v48);
        CTSimpleArray<HWND__ *,4294967294,CTPolicyCoTaskMem<HWND__ *>,CSimpleArrayStandardCompareHelper<HWND__ *>,CSimpleArrayStandardMergeHelper<HWND__ *>>::RemoveAll((__int64)&v52);
        goto LABEL_53;
      }
      v46 = 0LL;
      v24 = Microsoft::WRL::ComPtr<IDCompThumbnail>::As<IVirtualDesktopThumbnail>(&v43, &v46);
      LastError = v24;
      if ( v24 < 0 )
      {
        v25 = (unsigned int)v24;
        v26 = 329LL;
LABEL_43:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v26,
          (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
          (const char *)v25);
LABEL_51:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v46);
        goto LABEL_52;
      }
      v27 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, int))(*(_QWORD *)v46 + 24LL))(
              v46,
              v52,
              (unsigned int)v53,
              v48,
              v49[0]);
      LastError = v27;
      if ( v27 < 0 )
      {
        v25 = (unsigned int)v27;
        v26 = 334LL;
        goto LABEL_43;
      }
      v29 = v16[1];
      if ( v29 == v16[3]
        && (LastError = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                          (__int64)v16,
                          v29 + 1,
                          v28),
            LastError < 0) )
      {
        v26 = 336LL;
      }
      else
      {
        v30 = v16[1] + 1LL;
        v16[1] = v30;
        v31 = (__int64 *)(*v16 - 8LL + 8 * v30);
        if ( v31 )
        {
          *v31 = v44;
          Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v31);
        }
        v32 = v16[1];
        if ( v32 != v16[3]
          || (LastError = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                            (__int64)v16,
                            v32 + 1,
                            v28),
              LastError >= 0) )
        {
          v33 = v16[1] + 1LL;
          v16[1] = v33;
          v34 = (__int64 *)(*v16 - 8LL + 8 * v33);
          if ( v34 )
          {
            *v34 = v43;
            Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v34);
          }
          if ( !*((_BYTE *)this + 206) )
          {
            WindowW = FindWindowW(L"Shell_TrayWnd", 0LL);
            if ( !WindowW )
            {
              LastError = -2147467259;
              v26 = 342LL;
              goto LABEL_42;
            }
            v36 = operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
            dwData = (WPARAM)v36;
            *(_QWORD *)&v56 = v36;
            if ( v36 )
            {
              v36[1] = 0LL;
              v36[2] = 0LL;
              v36[5] = 0LL;
              *((_DWORD *)v36 + 12) = 0;
              v36[7] = v16;
            }
            else
            {
              dwData = 0LL;
            }
            if ( !dwData )
            {
              LastError = -2147024882;
              v26 = 345LL;
              goto LABEL_42;
            }
            v39 = *(VirtualDesktopGestureWindow **)(dwData + 40);
            if ( v39 != this )
            {
              if ( this )
              {
                Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IApplicationViewIconLoaderNotifications>::InternalAddRef(
                  (__int64)this + 16,
                  v37);
                v39 = *(VirtualDesktopGestureWindow **)(dwData + 40);
              }
              *(_QWORD *)(dwData + 40) = this;
              if ( v39 )
                Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(
                  (__int64)v39 + 16,
                  v37);
            }
            *(_DWORD *)(dwData + 48) = a4->left;
            Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)(dwData + 8), &v45);
            *(_QWORD *)dwData = *((_QWORD *)this + 23);
            if ( !SendMessageCallbackW(
                    WindowW,
                    0x5C1u,
                    dwData,
                    0LL,
                    VirtualDesktopGestureWindow::s_GetTrayBitmapResult,
                    dwData) )
            {
              VirtualDesktopGestureWindow::GetTrayBitmapCallbackData::`scalar deleting destructor'(
                (VirtualDesktopGestureWindow::GetTrayBitmapCallbackData *)dwData,
                v40);
              LastError = wil::details::in1diag3::Return_GetLastError(
                            retaddr,
                            (void *)0x161,
                            (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
                            v41);
              goto LABEL_51;
            }
          }
          *a2 = 1;
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v46);
          CTSimpleArray<HWND__ *,4294967294,CTPolicyCoTaskMem<HWND__ *>,CSimpleArrayStandardCompareHelper<HWND__ *>,CSimpleArrayStandardMergeHelper<HWND__ *>>::RemoveAll((__int64)&v48);
          CTSimpleArray<HWND__ *,4294967294,CTPolicyCoTaskMem<HWND__ *>,CSimpleArrayStandardCompareHelper<HWND__ *>,CSimpleArrayStandardMergeHelper<HWND__ *>>::RemoveAll((__int64)&v52);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v43);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v44);
LABEL_58:
          LastError = 0;
          goto LABEL_59;
        }
        v26 = 337LL;
      }
LABEL_42:
      v25 = (unsigned int)LastError;
      goto LABEL_43;
    }
    if ( v14 != -2147316575 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x16A,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
        (const char *)(unsigned int)v14);
      goto LABEL_59;
    }
    goto LABEL_58;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x135,
    (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
    (const char *)(unsigned int)v10);
LABEL_60:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v47);
  return (unsigned int)LastError;
}
