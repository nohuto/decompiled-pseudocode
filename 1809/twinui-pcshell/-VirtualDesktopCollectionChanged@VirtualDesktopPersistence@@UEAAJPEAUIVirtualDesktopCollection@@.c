/*
 * XREFs of ?VirtualDesktopCollectionChanged@VirtualDesktopPersistence@@UEAAJPEAUIVirtualDesktopCollection@@@Z @ 0x180382D40
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@VLayoutItem@GridLayoutFactory@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@VLayoutItem@GridLayoutFactory@@@@V?$CSimpleArrayStandardCompareHelper@VLayoutItem@GridLayoutFactory@@@@V?$CSimpleArrayStandardMergeHelper@VLayoutItem@GridLayoutFactory@@@@@@QEAAJ_K0@Z @ 0x1800FC68C (-_EnsureCapacity@-$CTSimpleArray@VLayoutItem@GridLayoutFactory@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@.c)
 *     ??0?$ObjectArrayAdapterImpl@UIApplicationView@@V?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@@details@@QEAA@PEAUIObjectArray@@@Z @ 0x18010768C (--0-$ObjectArrayAdapterImpl@UIApplicationView@@V-$com_ptr_t@UIApplicationView@@Uerr_returncode_p.c)
 *     ??0Iterator@?$ObjectArrayAdapterImpl@UIVirtualDesktop@@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@details@@QEAA@QEAV12@I@Z @ 0x1802D58A8 (--0Iterator@-$ObjectArrayAdapterImpl@UIVirtualDesktop@@V-$ComPtr@UIVirtualDesktop@@@WRL@Microsof.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIVirtualDesktop@@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x1802D61C0 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIVirtualDesktop@@V-$ComPtr@UIVirtualDesktop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall VirtualDesktopPersistence::VirtualDesktopCollectionChanged(
        VirtualDesktopPersistence *this,
        struct IVirtualDesktopCollection *a2)
{
  int v4; // eax
  int v5; // ebx
  unsigned __int64 v6; // r14
  void *v7; // r8
  int v8; // eax
  char *v9; // rsi
  __int64 v10; // rdi
  __int64 v11; // rbx
  int v12; // eax
  void *v13; // r8
  char *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r9
  __int64 v17; // rdx
  int v18; // eax
  unsigned __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v22; // [rsp+48h] [rbp-59h] BYREF
  __int64 v23; // [rsp+50h] [rbp-51h] BYREF
  LPVOID pv; // [rsp+58h] [rbp-49h] BYREF
  __int64 v25; // [rsp+60h] [rbp-41h]
  __int64 v26; // [rsp+68h] [rbp-39h]
  __int64 v27; // [rsp+70h] [rbp-31h]
  __int64 v28; // [rsp+78h] [rbp-29h] BYREF
  int v29; // [rsp+80h] [rbp-21h]
  __int64 v30; // [rsp+88h] [rbp-19h] BYREF
  __int64 v31[2]; // [rsp+90h] [rbp-11h] BYREF
  int v32; // [rsp+A0h] [rbp-1h] BYREF
  __int64 v33[3]; // [rsp+A8h] [rbp+7h] BYREF
  __int128 v34; // [rsp+C0h] [rbp+1Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+100h] [rbp+5Fh]

  v33[2] = -2LL;
  v22 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
  v4 = (*(__int64 (__fastcall **)(struct IVirtualDesktopCollection *, GUID *, __int64 *))(*(_QWORD *)a2 + 40LL))(
         a2,
         &GUID_92ca9dcd_5622_4bba_a805_5e9f541bd8c9,
         &v22);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v6 = (*(__int64 (__fastcall **)(struct IVirtualDesktopCollection *))(*(_QWORD *)a2 + 24LL))(a2);
    pv = 0LL;
    v25 = 0LL;
    v26 = 0LL;
    v27 = 0LL;
    v8 = CTSimpleArray<GridLayoutFactory::LayoutItem,4294967294,CTPolicyCoTaskMem<GridLayoutFactory::LayoutItem>,CSimpleArrayStandardCompareHelper<GridLayoutFactory::LayoutItem>,CSimpleArrayStandardMergeHelper<GridLayoutFactory::LayoutItem>>::_EnsureCapacity(
           (__int64)&pv,
           v6,
           v7);
    v5 = v8;
    if ( v8 >= 0 )
    {
      details::ObjectArrayAdapterImpl<IApplicationView,wil::com_ptr_t<IApplicationView,wil::err_returncode_policy>>::ObjectArrayAdapterImpl<IApplicationView,wil::com_ptr_t<IApplicationView,wil::err_returncode_policy>>(
        (__int64)&v28,
        v22);
      details::ObjectArrayAdapterImpl<IVirtualDesktop,Microsoft::WRL::ComPtr<IVirtualDesktop>>::Iterator::Iterator(
        (__int64)&v30,
        (__int64)&v28,
        0);
      details::ObjectArrayAdapterImpl<IVirtualDesktop,Microsoft::WRL::ComPtr<IVirtualDesktop>>::Iterator::Iterator(
        (__int64)&v32,
        (__int64)&v28,
        v29);
      v10 = v25;
      v9 = (char *)pv;
      while ( (_DWORD)v30 != v32 || v31[1] != v33[1] )
      {
        v11 = v31[0];
        v23 = v31[0];
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v23);
        v12 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v11 + 32LL))(v11, &v34);
        v5 = v12;
        if ( v12 < 0 )
        {
          v19 = (unsigned int)v12;
          v20 = 44LL;
          goto LABEL_22;
        }
        if ( v10 == v27 )
        {
          v5 = CTSimpleArray<GridLayoutFactory::LayoutItem,4294967294,CTPolicyCoTaskMem<GridLayoutFactory::LayoutItem>,CSimpleArrayStandardCompareHelper<GridLayoutFactory::LayoutItem>,CSimpleArrayStandardMergeHelper<GridLayoutFactory::LayoutItem>>::_EnsureCapacity(
                 (__int64)&pv,
                 v10 + 1,
                 v13);
          v9 = (char *)pv;
          if ( v5 < 0 )
          {
            v19 = (unsigned int)v5;
            v20 = 45LL;
LABEL_22:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v20,
              (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
              (const char *)v19);
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v33);
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v31);
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v28);
            goto LABEL_23;
          }
          v10 = v25;
        }
        v25 = ++v10;
        v14 = &v9[16 * v10 - 16];
        if ( v14 )
          *(_OWORD *)v14 = v34;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
        LODWORD(v30) = v30 + 1;
        details::ObjectArrayAdapterImpl<IVirtualDesktop,Microsoft::WRL::ComPtr<IVirtualDesktop>>::Iterator::GetCurrentObject(&v30);
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v33);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v31);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v28);
      if ( v10 == v6 )
      {
        LOBYTE(v15) = 1;
        v18 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, const wchar_t *, int, char *, unsigned __int64))(**((_QWORD **)this + 2) + 32LL))(
                *((_QWORD *)this + 2),
                v15,
                0LL,
                L"VirtualDesktopIDs",
                3,
                v9,
                16 * v6);
        v5 = v18;
        if ( v18 >= 0 )
          goto LABEL_23;
        v16 = (unsigned int)v18;
        v17 = 48LL;
      }
      else
      {
        v5 = -2147467259;
        v16 = 2147500037LL;
        v17 = 47LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v17,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
        (const char *)v16);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x28,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
        (const char *)(unsigned int)v8);
      v9 = (char *)pv;
    }
LABEL_23:
    if ( v9 )
      CoTaskMemFree(v9);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x23,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
      (const char *)(unsigned int)v4);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
  return (unsigned int)v5;
}
