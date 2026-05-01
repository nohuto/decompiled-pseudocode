/*
 * XREFs of ?CreateAdjacentDesktop@VirtualDesktopGestureWindow@@AEAAJPEA_NIUtagRECT@@@Z @ 0x18038EB60
 * Callers:
 *     ?CreateAdjacentDesktop@VirtualDesktopGestureContext@@AEAAJPEA_NIH@Z @ 0x18038EA74 (-CreateAdjacentDesktop@VirtualDesktopGestureContext@@AEAAJPEA_NIH@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000F540 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180017174 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180077188 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?RemoveAll@?$CTSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAUHWND__@@@@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@V?$CSimpleArrayStandardMergeHelper@PEAUHWND__@@@@@@QEAAXXZ @ 0x18007F4AC (-RemoveAll@-$CTSimpleArray@PEAUHWND__@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@PEAUHWND__@@@@V-$CSimpleA.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicationViewIconLoaderNotifications@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x1800E6520 (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicat.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x1800F6B54 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 *     ?GetFilterForDesktop@VirtualDesktopHelpers@@YAJPEAUIVirtualDesktop@@PEAUIVirtualDesktopManagerInternal@@AEAV?$CCoSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@@@2@Z @ 0x1802EBE60 (-GetFilterForDesktop@VirtualDesktopHelpers@@YAJPEAUIVirtualDesktop@@PEAUIVirtualDesktopManagerIn.c)
 *     ??$As@UIVirtualDesktopThumbnail@@@?$ComPtr@UIDCompThumbnail@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIVirtualDesktopThumbnail@@@WRL@Microsoft@@@Details@12@@Z @ 0x180310584 (--$As@UIVirtualDesktopThumbnail@@@-$ComPtr@UIDCompThumbnail@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V.c)
 *     ??_GGetTrayBitmapCallbackData@VirtualDesktopGestureWindow@@QEAAPEAXI@Z @ 0x18038E2D0 (--_GGetTrayBitmapCallbackData@VirtualDesktopGestureWindow@@QEAAPEAXI@Z.c)
 *     ?MakeBackgroundThumbnail@VirtualDesktopGestureWindow@@AEAAJAEAV?$CCoSimpleArray@V?$ComPtr@UIDCompThumbnail@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIDCompThumbnail@@@WRL@Microsoft@@@@@@PEAPEAUIDCompThumbnail@@@Z @ 0x18039015C (-MakeBackgroundThumbnail@VirtualDesktopGestureWindow@@AEAAJAEAV-$CCoSimpleArray@V-$ComPtr@UIDCom.c)
 */

// Hidden C++ exception states: #wind=24
__int64 __fastcall VirtualDesktopGestureWindow::CreateAdjacentDesktop(
        VirtualDesktopGestureWindow *this,
        bool *a2,
        unsigned int a3,
        struct tagRECT *a4)
{
  __int64 v8; // rbx
  int v9; // eax
  int LastError; // edi
  __int64 v11; // rbx
  int v12; // eax
  __int64 v13; // rsi
  _QWORD *v14; // rsi
  int BackgroundThumbnail; // eax
  __int64 v16; // rdx
  __int64 v17; // rbx
  __int64 v18; // rdi
  int v19; // eax
  __int64 v20; // rdx
  int FilterForDesktop; // eax
  int v22; // eax
  unsigned __int64 v23; // r9
  __int64 v24; // rdx
  int v25; // eax
  void *v26; // r8
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 *v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 *v32; // rcx
  HWND WindowW; // rdi
  _QWORD *v34; // rax
  volatile int *v35; // rdx
  WPARAM dwData; // rbx
  volatile int *v37; // rdx
  __int64 v38; // rcx
  volatile int *v39; // rdx
  const char *v40; // r9
  __int64 v42; // [rsp+40h] [rbp-79h] BYREF
  __int64 v43; // [rsp+48h] [rbp-71h] BYREF
  __int64 v44; // [rsp+50h] [rbp-69h] BYREF
  __int64 v45; // [rsp+58h] [rbp-61h] BYREF
  __int64 v46; // [rsp+60h] [rbp-59h] BYREF
  __int64 v47; // [rsp+68h] [rbp-51h] BYREF
  int v48[2]; // [rsp+70h] [rbp-49h]
  __int64 v49; // [rsp+78h] [rbp-41h]
  __int64 v50; // [rsp+80h] [rbp-39h]
  __int64 v51; // [rsp+88h] [rbp-31h] BYREF
  __int64 v52; // [rsp+90h] [rbp-29h]
  __int64 v53; // [rsp+98h] [rbp-21h]
  __int64 v54; // [rsp+A0h] [rbp-19h]
  __int128 v55; // [rsp+B0h] [rbp-9h] BYREF
  __int64 v56; // [rsp+C0h] [rbp+7h]
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+5Fh]

  v56 = -2LL;
  *a2 = 0;
  v46 = 0LL;
  v8 = *((_QWORD *)this + 4);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v46);
  v9 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 48LL))(v8, &v46);
  LastError = v9;
  if ( v9 >= 0 )
  {
    v44 = 0LL;
    v11 = *((_QWORD *)this + 4);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v44);
    v12 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64 *))(*(_QWORD *)v11 + 64LL))(v11, v46, a3, &v44);
    LastError = v12;
    if ( v12 >= 0 )
    {
      v13 = 64LL;
      if ( a3 != 3 )
        v13 = 96LL;
      v14 = (_QWORD *)((char *)this + v13);
      v43 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v43);
      BackgroundThumbnail = VirtualDesktopGestureWindow::MakeBackgroundThumbnail(this, v14, &v43);
      LastError = BackgroundThumbnail;
      if ( BackgroundThumbnail < 0 )
      {
        v16 = 317LL;
LABEL_10:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v16,
          (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
          (const char *)(unsigned int)BackgroundThumbnail);
LABEL_52:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v43);
LABEL_57:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v44);
        goto LABEL_58;
      }
      v17 = v43;
      BackgroundThumbnail = (*(__int64 (__fastcall **)(__int64, struct tagRECT *, _QWORD, _QWORD))(*(_QWORD *)v43 + 24LL))(
                              v43,
                              a4,
                              0LL,
                              0LL);
      LastError = BackgroundThumbnail;
      if ( BackgroundThumbnail < 0 )
      {
        v16 = 318LL;
        goto LABEL_10;
      }
      v42 = 0LL;
      v55 = *(_OWORD *)((char *)this + 168);
      v18 = *((_QWORD *)this + 7);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v42);
      v19 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int128 *, GUID *, __int64 *))(*(_QWORD *)v18 + 96LL))(
              v18,
              *((_QWORD *)this + 20),
              0LL,
              &v55,
              &GUID_47267895_a4f8_4012_9e98_087c619e7cfc,
              &v42);
      LastError = v19;
      if ( v19 < 0 )
      {
        v20 = 321LL;
LABEL_15:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v20,
          (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
          (const char *)(unsigned int)v19);
LABEL_51:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v42);
        goto LABEL_52;
      }
      v19 = (*(__int64 (__fastcall **)(__int64, struct tagRECT *, _QWORD, _QWORD))(*(_QWORD *)v42 + 24LL))(
              v42,
              a4,
              0LL,
              0LL);
      LastError = v19;
      if ( v19 < 0 )
      {
        v20 = 322LL;
        goto LABEL_15;
      }
      v51 = 0LL;
      v52 = 0LL;
      v53 = 0LL;
      v54 = 0LL;
      v47 = 0LL;
      *(_QWORD *)v48 = 0LL;
      v49 = 0LL;
      v50 = 0LL;
      FilterForDesktop = VirtualDesktopHelpers::GetFilterForDesktop(v44, *((_QWORD *)this + 4), &v51, &v47);
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
LABEL_50:
        CTSimpleArray<HWND__ *,4294967294,CTPolicyCoTaskMem<HWND__ *>,CSimpleArrayStandardCompareHelper<HWND__ *>,CSimpleArrayStandardMergeHelper<HWND__ *>>::RemoveAll((__int64)&v47);
        CTSimpleArray<HWND__ *,4294967294,CTPolicyCoTaskMem<HWND__ *>,CSimpleArrayStandardCompareHelper<HWND__ *>,CSimpleArrayStandardMergeHelper<HWND__ *>>::RemoveAll((__int64)&v51);
        goto LABEL_51;
      }
      v45 = 0LL;
      v22 = Microsoft::WRL::ComPtr<IDCompThumbnail>::As<IVirtualDesktopThumbnail>(&v42, &v45);
      LastError = v22;
      if ( v22 < 0 )
      {
        v23 = (unsigned int)v22;
        v24 = 329LL;
LABEL_43:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v24,
          (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
          (const char *)v23);
LABEL_49:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v45);
        goto LABEL_50;
      }
      v25 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, int))(*(_QWORD *)v45 + 24LL))(
              v45,
              v51,
              (unsigned int)v52,
              v47,
              v48[0]);
      LastError = v25;
      if ( v25 < 0 )
      {
        v23 = (unsigned int)v25;
        v24 = 334LL;
        goto LABEL_43;
      }
      v27 = v14[1];
      if ( v27 == v14[3]
        && (LastError = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                          (__int64)v14,
                          v27 + 1,
                          v26),
            LastError < 0) )
      {
        v24 = 336LL;
      }
      else
      {
        v28 = v14[1] + 1LL;
        v14[1] = v28;
        v29 = (__int64 *)(*v14 - 8LL + 8 * v28);
        if ( v29 )
        {
          *v29 = v17;
          Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v29);
        }
        v30 = v14[1];
        if ( v30 != v14[3]
          || (LastError = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                            (__int64)v14,
                            v30 + 1,
                            v26),
              LastError >= 0) )
        {
          v31 = v14[1] + 1LL;
          v14[1] = v31;
          v32 = (__int64 *)(*v14 - 8LL + 8 * v31);
          if ( v32 )
          {
            *v32 = v42;
            Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v32);
          }
          if ( !*((_BYTE *)this + 206) )
          {
            WindowW = FindWindowW(L"Shell_TrayWnd", 0LL);
            if ( !WindowW )
            {
              LastError = -2147467259;
              v24 = 342LL;
              goto LABEL_42;
            }
            v34 = operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
            dwData = (WPARAM)v34;
            *(_QWORD *)&v55 = v34;
            if ( v34 )
            {
              v34[1] = 0LL;
              v34[2] = 0LL;
              v34[5] = 0LL;
              *((_DWORD *)v34 + 12) = 0;
              v34[7] = v14;
            }
            else
            {
              dwData = 0LL;
            }
            if ( !dwData )
            {
              LastError = -2147024882;
              v24 = 345LL;
              goto LABEL_42;
            }
            if ( *(VirtualDesktopGestureWindow **)(dwData + 40) != this )
            {
              Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IApplicationViewIconLoaderNotifications>::InternalAddRef(
                (__int64)this + 16,
                v35);
              v38 = *(_QWORD *)(dwData + 40);
              *(_QWORD *)(dwData + 40) = this;
              if ( v38 )
                Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(
                  v38 + 16,
                  v37);
            }
            *(_DWORD *)(dwData + 48) = a4->left;
            Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)(dwData + 8), &v44);
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
                v39);
              LastError = wil::details::in1diag3::Return_GetLastError(
                            retaddr,
                            (void *)0x161,
                            (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
                            v40);
              goto LABEL_49;
            }
          }
          *a2 = 1;
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v45);
          CTSimpleArray<HWND__ *,4294967294,CTPolicyCoTaskMem<HWND__ *>,CSimpleArrayStandardCompareHelper<HWND__ *>,CSimpleArrayStandardMergeHelper<HWND__ *>>::RemoveAll((__int64)&v47);
          CTSimpleArray<HWND__ *,4294967294,CTPolicyCoTaskMem<HWND__ *>,CSimpleArrayStandardCompareHelper<HWND__ *>,CSimpleArrayStandardMergeHelper<HWND__ *>>::RemoveAll((__int64)&v51);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v42);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v43);
LABEL_56:
          LastError = 0;
          goto LABEL_57;
        }
        v24 = 337LL;
      }
LABEL_42:
      v23 = (unsigned int)LastError;
      goto LABEL_43;
    }
    if ( v12 != -2147316575 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x16A,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
        (const char *)(unsigned int)v12);
      goto LABEL_57;
    }
    goto LABEL_56;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x135,
    (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
    (const char *)(unsigned int)v9);
LABEL_58:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v46);
  return (unsigned int)LastError;
}
