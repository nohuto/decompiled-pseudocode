/*
 * XREFs of ?CreateAdjacentDesktop@VirtualDesktopGestureWindow@@AEAAJPEA_NIUtagRECT@@@Z @ 0x1803F48B0
 * Callers:
 *     ?CreateAdjacentDesktop@VirtualDesktopGestureContext@@AEAAJPEA_NIH@Z @ 0x1803F47C4 (-CreateAdjacentDesktop@VirtualDesktopGestureContext@@AEAAJPEA_NIH@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18005E750 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RemoveAll@?$CTSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAUHWND__@@@@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@V?$CSimpleArrayStandardMergeHelper@PEAUHWND__@@@@@@QEAAXXZ @ 0x180081A2C (-RemoveAll@-$CTSimpleArray@PEAUHWND__@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@PEAUHWND__@@@@V-$CSimpleA.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180103910 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x18011BE3C (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180129204 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?GetFilterForDesktop@VirtualDesktopHelpers@@YAJPEAUIVirtualDesktop@@PEAUIVirtualDesktopManagerInternal@@AEAV?$CCoSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@@@2@Z @ 0x18034C940 (-GetFilterForDesktop@VirtualDesktopHelpers@@YAJPEAUIVirtualDesktop@@PEAUIVirtualDesktopManagerIn.c)
 *     ??$As@UIVirtualDesktopThumbnail@@@?$ComPtr@UIDCompThumbnail@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIVirtualDesktopThumbnail@@@WRL@Microsoft@@@Details@12@@Z @ 0x180370BD4 (--$As@UIVirtualDesktopThumbnail@@@-$ComPtr@UIDCompThumbnail@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V.c)
 *     ??_GGetTrayBitmapCallbackData@VirtualDesktopGestureWindow@@QEAAPEAXI@Z @ 0x1803F4020 (--_GGetTrayBitmapCallbackData@VirtualDesktopGestureWindow@@QEAAPEAXI@Z.c)
 *     ?MakeBackgroundThumbnail@VirtualDesktopGestureWindow@@AEAAJAEAV?$CCoSimpleArray@V?$ComPtr@UIDCompThumbnail@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIDCompThumbnail@@@WRL@Microsoft@@@@@@PEAPEAUIDCompThumbnail@@@Z @ 0x1803F5EB0 (-MakeBackgroundThumbnail@VirtualDesktopGestureWindow@@AEAAJAEAV-$CCoSimpleArray@V-$ComPtr@UIDCom.c)
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
  __int64 (__fastcall *v20)(__int64, _QWORD, _QWORD, _OWORD *, GUID *, __int64 *); // rbx
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
  WPARAM dwData; // rbx
  volatile signed __int32 *v38; // rcx
  const char *v39; // r9
  __int64 v41; // [rsp+40h] [rbp-79h] BYREF
  __int64 v42; // [rsp+48h] [rbp-71h] BYREF
  __int64 v43; // [rsp+50h] [rbp-69h] BYREF
  __int64 v44; // [rsp+58h] [rbp-61h] BYREF
  __int64 v45; // [rsp+60h] [rbp-59h] BYREF
  __int64 v46; // [rsp+68h] [rbp-51h] BYREF
  int v47[2]; // [rsp+70h] [rbp-49h]
  __int64 v48; // [rsp+78h] [rbp-41h]
  __int64 v49; // [rsp+80h] [rbp-39h]
  __int64 v50; // [rsp+88h] [rbp-31h] BYREF
  __int64 v51; // [rsp+90h] [rbp-29h]
  __int64 v52; // [rsp+98h] [rbp-21h]
  __int64 v53; // [rsp+A0h] [rbp-19h]
  __int64 v54; // [rsp+A8h] [rbp-11h]
  _QWORD *v55; // [rsp+B0h] [rbp-9h]
  _OWORD v56[5]; // [rsp+C0h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+5Fh]

  v54 = -2LL;
  *a2 = 0;
  v45 = 0LL;
  v8 = *((_QWORD *)this + 4);
  v9 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 48LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v45);
  v10 = v9(v8, &v45);
  LastError = v10;
  if ( v10 >= 0 )
  {
    v43 = 0LL;
    v12 = *((_QWORD *)this + 4);
    v13 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64 *))(*(_QWORD *)v12 + 64LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v43);
    v14 = v13(v12, v45, a3, &v43);
    LastError = v14;
    if ( v14 >= 0 )
    {
      v15 = 64LL;
      if ( a3 != 3 )
        v15 = 96LL;
      v16 = (_QWORD *)((char *)this + v15);
      v42 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v42);
      BackgroundThumbnail = VirtualDesktopGestureWindow::MakeBackgroundThumbnail(this, v16, &v42);
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
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v42);
LABEL_59:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v43);
        goto LABEL_60;
      }
      BackgroundThumbnail = (*(__int64 (__fastcall **)(__int64, struct tagRECT *, _QWORD, _QWORD))(*(_QWORD *)v42 + 24LL))(
                              v42,
                              a4,
                              0LL,
                              0LL);
      LastError = BackgroundThumbnail;
      if ( BackgroundThumbnail < 0 )
      {
        v18 = 318LL;
        goto LABEL_10;
      }
      v41 = 0LL;
      v19 = *((_QWORD *)this + 7);
      v20 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _OWORD *, GUID *, __int64 *))(*(_QWORD *)v19 + 96LL);
      v56[0] = *(_OWORD *)((char *)this + 168);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v41);
      v21 = v20(v19, *((_QWORD *)this + 20), 0LL, v56, &GUID_47267895_a4f8_4012_9e98_087c619e7cfc, &v41);
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
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v41);
        goto LABEL_54;
      }
      v21 = (*(__int64 (__fastcall **)(__int64, struct tagRECT *, _QWORD, _QWORD))(*(_QWORD *)v41 + 24LL))(
              v41,
              a4,
              0LL,
              0LL);
      LastError = v21;
      if ( v21 < 0 )
      {
        v22 = 322LL;
        goto LABEL_15;
      }
      v50 = 0LL;
      v51 = 0LL;
      v52 = 0LL;
      v53 = 0LL;
      v46 = 0LL;
      *(_QWORD *)v47 = 0LL;
      v48 = 0LL;
      v49 = 0LL;
      FilterForDesktop = VirtualDesktopHelpers::GetFilterForDesktop(v43, *((_QWORD *)this + 4), &v50, &v46);
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
        CTSimpleArray<HWND__ *,4294967294,CTPolicyCoTaskMem<HWND__ *>,CSimpleArrayStandardCompareHelper<HWND__ *>,CSimpleArrayStandardMergeHelper<HWND__ *>>::RemoveAll((__int64)&v46);
        CTSimpleArray<HWND__ *,4294967294,CTPolicyCoTaskMem<HWND__ *>,CSimpleArrayStandardCompareHelper<HWND__ *>,CSimpleArrayStandardMergeHelper<HWND__ *>>::RemoveAll((__int64)&v50);
        goto LABEL_53;
      }
      v44 = 0LL;
      v24 = Microsoft::WRL::ComPtr<IDCompThumbnail>::As<IVirtualDesktopThumbnail>(&v41, &v44);
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
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v44);
        goto LABEL_52;
      }
      v27 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, int))(*(_QWORD *)v44 + 24LL))(
              v44,
              v50,
              (unsigned int)v51,
              v46,
              v47[0]);
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
          *v31 = v42;
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
            *v34 = v41;
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
            v55 = v36;
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
            v38 = *(volatile signed __int32 **)(dwData + 40);
            if ( v38 != (volatile signed __int32 *)this )
            {
              if ( this )
              {
                _InterlockedIncrement((volatile signed __int32 *)this + 7);
                v38 = *(volatile signed __int32 **)(dwData + 40);
              }
              *(_QWORD *)(dwData + 40) = this;
              if ( v38 )
                Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v38 + 4);
            }
            *(_DWORD *)(dwData + 48) = a4->left;
            Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)(dwData + 8), &v43);
            *(_QWORD *)dwData = *((_QWORD *)this + 23);
            if ( !SendMessageCallbackW(
                    WindowW,
                    0x5C1u,
                    dwData,
                    0LL,
                    VirtualDesktopGestureWindow::s_GetTrayBitmapResult,
                    dwData) )
            {
              VirtualDesktopGestureWindow::GetTrayBitmapCallbackData::`scalar deleting destructor'((VirtualDesktopGestureWindow::GetTrayBitmapCallbackData *)dwData);
              LastError = wil::details::in1diag3::Return_GetLastError(
                            retaddr,
                            (void *)0x161,
                            (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
                            v39);
              goto LABEL_51;
            }
          }
          *a2 = 1;
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v44);
          CTSimpleArray<HWND__ *,4294967294,CTPolicyCoTaskMem<HWND__ *>,CSimpleArrayStandardCompareHelper<HWND__ *>,CSimpleArrayStandardMergeHelper<HWND__ *>>::RemoveAll((__int64)&v46);
          CTSimpleArray<HWND__ *,4294967294,CTPolicyCoTaskMem<HWND__ *>,CSimpleArrayStandardCompareHelper<HWND__ *>,CSimpleArrayStandardMergeHelper<HWND__ *>>::RemoveAll((__int64)&v50);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v41);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v42);
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
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v45);
  return (unsigned int)LastError;
}
