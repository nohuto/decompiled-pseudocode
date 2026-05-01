/*
 * XREFs of ?GetWindowsInternal@CImmersiveApp@@UEAAJW4IMMERSIVE_APPLICATION_GET_WINDOWS_FILTER@@AEBU_GUID@@PEAPEAX@Z @ 0x18002EED0
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z @ 0x18002FC38 (-CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180089C34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?Attach@?$ComPtr@UIObjectArray@@@WRL@Microsoft@@QEAAXPEAUIObjectArray@@@Z @ 0x1801272CC (-Attach@-$ComPtr@UIObjectArray@@@WRL@Microsoft@@QEAAXPEAUIObjectArray@@@Z.c)
 *     ?_GetWindow@CImmersiveWindowCollection@CImmersiveApp@@AEBAJAEBVCTaskWindowFinder@@PEAPEAUITaskWindow@@PEA_K@Z @ 0x18016A434 (-_GetWindow@CImmersiveWindowCollection@CImmersiveApp@@AEBAJAEBVCTaskWindowFinder@@PEAPEAUITaskWi.c)
 *     ?CImmersiveApplicationWindow_CreateInstance@@YAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z @ 0x18016E260 (-CImmersiveApplicationWindow_CreateInstance@@YAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CImmersiveApp::GetWindowsInternal(_QWORD *a1, unsigned int a2, _QWORD *a3, _QWORD *a4)
{
  HWND v7; // r14
  void *v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rax
  int v11; // esi
  char v12; // di
  char v13; // al
  unsigned __int64 v14; // rcx
  struct ITaskWindow *v15; // rdi
  __int64 v16; // rax
  _QWORD *v17; // rax
  _QWORD *v18; // rdi
  LPUNKNOWN v19; // r14
  HRESULT (__stdcall *v20)(IUnknown *, const IID *const, void **); // rax
  __int64 v21; // rcx
  LPUNKNOWN v22; // rcx
  void *v23; // rdi
  char v24; // di
  void *v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 (__fastcall **v28)(void *, _QWORD *, _QWORD *); // rax
  void *v29; // rcx
  struct ITaskWindow *v30; // rcx
  void *v31; // rcx
  __int64 v33; // rax
  unsigned __int64 v34; // r14
  _QWORD *v35; // rax
  _QWORD *v36; // rdi
  LPUNKNOWN v37; // r14
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // rax
  __int64 v39; // rcx
  LPUNKNOWN v40; // rcx
  void *v41; // rcx
  __int64 v42; // rcx
  __int64 v43; // rax
  struct ITaskWindow *v44; // rcx
  __int64 v45; // rax
  const struct _GUID *v46; // rdx
  int v47; // ecx
  __int64 v48; // rax
  const struct _GUID *v49; // rdx
  struct ITaskWindow *v50; // [rsp+30h] [rbp-91h] BYREF
  void *v51; // [rsp+38h] [rbp-89h] BYREF
  unsigned __int64 v52; // [rsp+40h] [rbp-81h]
  void *v53; // [rsp+48h] [rbp-79h] BYREF
  LPUNKNOWN v54; // [rsp+50h] [rbp-71h] BYREF
  void *v55; // [rsp+58h] [rbp-69h] BYREF
  __int64 v56; // [rsp+60h] [rbp-61h] BYREF
  void *v57; // [rsp+68h] [rbp-59h] BYREF
  LPUNKNOWN ppunkMarshal; // [rsp+70h] [rbp-51h] BYREF
  void *v59; // [rsp+78h] [rbp-49h] BYREF
  HRESULT (__stdcall *v60)(IUnknown *, const IID *const, void **); // [rsp+80h] [rbp-41h]
  _QWORD *v61; // [rsp+88h] [rbp-39h]
  unsigned __int64 v62; // [rsp+90h] [rbp-31h] BYREF
  struct ITaskWindow *v63; // [rsp+98h] [rbp-29h]
  HRESULT (__stdcall *v64)(IUnknown *, const IID *const, void **); // [rsp+A0h] [rbp-21h]
  __int64 v65; // [rsp+A8h] [rbp-19h]
  __int64 v66; // [rsp+B0h] [rbp-11h] BYREF
  __int64 v67; // [rsp+B8h] [rbp-9h] BYREF
  char v68; // [rsp+C0h] [rbp-1h]
  __int64 v69; // [rsp+C8h] [rbp+7h]
  __int64 *v70; // [rsp+D0h] [rbp+Fh]
  LPUNKNOWN *v71; // [rsp+D8h] [rbp+17h]
  unsigned __int64 v72[3]; // [rsp+E0h] [rbp+1Fh] BYREF

  v69 = -2LL;
  v7 = 0LL;
  *a4 = 0LL;
  v53 = 0LL;
  v8 = 0LL;
  v59 = 0LL;
  v50 = 0LL;
  v9 = *a3 - *(_QWORD *)&GUID_5632b1a4_e38a_400a_928a_d4cd63230295.Data1;
  if ( *a3 == *(_QWORD *)&GUID_5632b1a4_e38a_400a_928a_d4cd63230295.Data1 )
    v9 = a3[1] - *(_QWORD *)GUID_5632b1a4_e38a_400a_928a_d4cd63230295.Data4;
  if ( v9 )
  {
    v10 = *a3 - *(_QWORD *)&GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891.Data1;
    if ( *a3 == *(_QWORD *)&GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891.Data1 )
      v10 = a3[1] - *(_QWORD *)GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891.Data4;
    if ( v10 )
    {
      v43 = *a3 - *(_QWORD *)&GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee.Data1;
      if ( *a3 == *(_QWORD *)&GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee.Data1 )
        v43 = a3[1] - *(_QWORD *)GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee.Data4;
      if ( v43 )
      {
        v11 = -2147467262;
        goto LABEL_49;
      }
      if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *))(*a1 + 408LL))(a1) )
        goto LABEL_104;
    }
    else if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *))(*a1 + 408LL))(a1) && a2 != 5 )
    {
      goto LABEL_104;
    }
    v11 = 0;
  }
  else
  {
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v53);
    v11 = CEnumerableObjectCollection::CreateInstance(v47, v46, &v53);
    if ( v11 < 0 )
      goto LABEL_49;
  }
  if ( a2 == 3 )
  {
    v12 = 0;
  }
  else
  {
    v12 = 1;
    if ( a2 != 2 )
    {
      if ( a2 - 4 > 1 )
        goto LABEL_12;
      v12 = 0;
      v56 = 0LL;
      v33 = *a1;
      v70 = &v56;
      v11 = (*(__int64 (__fastcall **)(_QWORD *, __int64 *))(v33 + 496))(a1, &v56);
      if ( v11 >= 0 )
      {
        v11 = (*(__int64 (__fastcall **)(__int64, unsigned __int64 *))(*(_QWORD *)v56 + 24LL))(v56, &v62);
        if ( v11 >= 0 )
        {
          v34 = v62;
          v52 = v62;
          v55 = 0LL;
          v61 = 0LL;
          v35 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
          v36 = v35;
          if ( !v35 )
            goto LABEL_106;
          *v35 = &CActivatedEventArgsBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
          v35[3] = 0LL;
          v54 = 0LL;
          v71 = &v54;
          if ( CoCreateFreeThreadedMarshaler(0LL, &v54) >= 0 )
          {
            v37 = v54;
            QueryInterface = v54->lpVtbl->QueryInterface;
            v60 = QueryInterface;
            v39 = v36[3];
            if ( v39 )
            {
              v36[3] = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 16LL))(v39);
              ((void (__fastcall *)(LPUNKNOWN, GUID *, _QWORD *))v60)(
                v37,
                &GUID_00000003_0000_0000_c000_000000000046,
                v36 + 3);
            }
            else
            {
              ((void (__fastcall *)(LPUNKNOWN, GUID *, _QWORD *))QueryInterface)(
                v54,
                &GUID_00000003_0000_0000_c000_000000000046,
                v36 + 3);
            }
            v34 = v52;
          }
          v40 = v54;
          if ( v54 )
          {
            v54 = 0LL;
            ((void (__fastcall *)(LPUNKNOWN))v40->lpVtbl->Release)(v40);
          }
          *((_DWORD *)v36 + 11) = 1;
          *v36 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IImmersiveApplicationWindow>::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IImmersiveApplicationWindow>>'};
          v36[4] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IImmersiveApplicationWindow>::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IImmersiveApplicationWindow>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IImmersiveApplicationWindow>>'};
          if ( Microsoft::WRL::Details::ModuleBase::module_ )
            (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                 + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
          *v36 = &CImmersiveApplicationWindow::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IImmersiveApplicationWindow>>'};
          v36[4] = &CImmersiveApplicationWindow::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IImmersiveApplicationWindow>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IImmersiveApplicationWindow>>'};
          v36[6] = v34;
          v61 = v36;
          if ( v36 )
          {
            v11 = (*(__int64 (__fastcall **)(_QWORD *, GUID *, void **))*v36)(
                    v36,
                    &GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891,
                    &v55);
            v7 = 0LL;
            v61 = 0LL;
            (*(void (__fastcall **)(_QWORD *))(*v36 + 16LL))(v36);
            if ( v11 >= 0 )
            {
              v8 = v55;
              v55 = 0LL;
              v59 = v8;
            }
          }
          else
          {
LABEL_106:
            v11 = -2147024882;
            v7 = 0LL;
          }
          v41 = v55;
          if ( v55 )
          {
            v55 = 0LL;
            (*(void (__fastcall **)(void *))(*(_QWORD *)v41 + 16LL))(v41);
          }
          v12 = 0;
        }
      }
      if ( a2 == 4 && (*(unsigned __int8 (__fastcall **)(_QWORD *))(*a1 + 408LL))(a1) && v11 < 0 )
      {
        v11 = 0;
        a2 = 0;
        v12 = 1;
      }
      v42 = v56;
      if ( v56 )
      {
        v56 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v42 + 16LL))(v42);
      }
      goto LABEL_76;
    }
  }
  v7 = (HWND)a1[40];
  if ( v7 )
  {
    v48 = *a3 - *(_QWORD *)&GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee.Data1;
    if ( *a3 == *(_QWORD *)&GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee.Data1 )
      v48 = a3[1] - *(_QWORD *)GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee.Data4;
    if ( !v48 )
    {
      v66 = a1[40];
      v67 = 0LL;
      v68 = 0;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v50);
      CImmersiveApp::CImmersiveWindowCollection::_GetWindow(
        (CImmersiveApp::CImmersiveWindowCollection *)(a1 + 23),
        (const struct CTaskWindowFinder *)&v66,
        &v50,
        v72);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v67);
      goto LABEL_39;
    }
    v57 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v57);
    v11 = CImmersiveApplicationWindow_CreateInstance(v7, v49, &v57);
    v7 = 0LL;
    if ( v11 >= 0 )
    {
      v57 = 0LL;
      Microsoft::WRL::ComPtr<IObjectArray>::Attach(&v59);
      v12 = 0;
      v8 = v59;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v57);
  }
LABEL_76:
  if ( v12 )
  {
LABEL_12:
    v13 = 1;
    v14 = a1[45];
    v52 = v14;
    v60 = 0LL;
    if ( v14 )
    {
      while ( 1 )
      {
        if ( !v13 )
          goto LABEL_39;
        v15 = *(struct ITaskWindow **)(a1[44] + 8LL * (_QWORD)v7);
        if ( a2 > 2 )
        {
          v11 = -2147418113;
          goto LABEL_37;
        }
        v16 = *a3 - *(_QWORD *)&GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee.Data1;
        if ( *a3 == *(_QWORD *)&GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee.Data1 )
          v16 = a3[1] - *(_QWORD *)GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee.Data4;
        if ( v16 )
          break;
        if ( v50 == v15 )
          goto LABEL_37;
        if ( v15 )
          (*(void (__fastcall **)(struct ITaskWindow *))(*(_QWORD *)v15 + 8LL))(v15);
        v44 = v50;
        v63 = v50;
        v50 = v15;
        if ( v63 )
        {
          v63 = 0LL;
          (*(void (__fastcall **)(struct ITaskWindow *))(*(_QWORD *)v44 + 16LL))(v44);
        }
LABEL_36:
        v14 = v52;
LABEL_37:
        v13 = 0;
LABEL_38:
        v7 = (HWND)((char *)v7 + 1);
        v60 = (HRESULT (__stdcall *)(IUnknown *, const IID *const, void **))v7;
        if ( (unsigned __int64)v7 >= v14 )
          goto LABEL_39;
      }
      v51 = 0LL;
      v65 = (*(__int64 (__fastcall **)(struct ITaskWindow *))(*(_QWORD *)v15 + 32LL))(v15);
      v51 = 0LL;
      v72[1] = 0LL;
      v17 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
      v18 = v17;
      if ( !v17 )
        goto LABEL_116;
      *v17 = &CActivatedEventArgsBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
      v17[3] = 0LL;
      ppunkMarshal = 0LL;
      v72[2] = (unsigned __int64)&ppunkMarshal;
      if ( CoCreateFreeThreadedMarshaler(0LL, &ppunkMarshal) >= 0 )
      {
        v19 = ppunkMarshal;
        v20 = ppunkMarshal->lpVtbl->QueryInterface;
        v64 = v20;
        v21 = v18[3];
        if ( v21 )
        {
          v18[3] = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
          ((void (__fastcall *)(LPUNKNOWN, GUID *, _QWORD *))v64)(
            v19,
            &GUID_00000003_0000_0000_c000_000000000046,
            v18 + 3);
        }
        else
        {
          ((void (__fastcall *)(LPUNKNOWN, GUID *, _QWORD *))v20)(
            ppunkMarshal,
            &GUID_00000003_0000_0000_c000_000000000046,
            v18 + 3);
        }
        v7 = (HWND)v60;
      }
      v22 = ppunkMarshal;
      if ( ppunkMarshal )
      {
        ppunkMarshal = 0LL;
        ((void (__fastcall *)(LPUNKNOWN))v22->lpVtbl->Release)(v22);
      }
      *((_DWORD *)v18 + 11) = 1;
      *v18 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IImmersiveApplicationWindow>::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IImmersiveApplicationWindow>>'};
      v18[4] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IImmersiveApplicationWindow>::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IImmersiveApplicationWindow>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IImmersiveApplicationWindow>>'};
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
      *v18 = &CImmersiveApplicationWindow::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IImmersiveApplicationWindow>>'};
      v18[4] = &CImmersiveApplicationWindow::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IImmersiveApplicationWindow>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IImmersiveApplicationWindow>>'};
      v18[6] = v65;
      if ( v18 )
      {
        v11 = (*(__int64 (__fastcall **)(_QWORD *, GUID *, void **))*v18)(
                v18,
                &GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891,
                &v51);
        (*(void (__fastcall **)(_QWORD *))(*v18 + 16LL))(v18);
        if ( v11 >= 0 )
        {
          if ( !v53 )
          {
            v23 = v51;
            v51 = 0LL;
            if ( v8 )
              (*(void (__fastcall **)(void *))(*(_QWORD *)v8 + 16LL))(v8);
            v8 = v23;
            v59 = v23;
            v24 = 0;
LABEL_33:
            v25 = v51;
            if ( v51 )
            {
              v51 = 0LL;
              (*(void (__fastcall **)(void *))(*(_QWORD *)v25 + 16LL))(v25);
            }
            if ( v24 && v11 >= 0 )
            {
              v13 = 1;
              v14 = v52;
              goto LABEL_38;
            }
            goto LABEL_36;
          }
          v11 = (*(__int64 (__fastcall **)(void *, void *))(*(_QWORD *)v53 + 40LL))(v53, v51);
        }
      }
      else
      {
LABEL_116:
        v11 = -2147024882;
      }
      v24 = 1;
      goto LABEL_33;
    }
  }
LABEL_39:
  if ( v11 < 0 )
    goto LABEL_49;
  v26 = *a3 - *(_QWORD *)&GUID_5632b1a4_e38a_400a_928a_d4cd63230295.Data1;
  if ( *a3 == *(_QWORD *)&GUID_5632b1a4_e38a_400a_928a_d4cd63230295.Data1 )
    v26 = a3[1] - *(_QWORD *)GUID_5632b1a4_e38a_400a_928a_d4cd63230295.Data4;
  if ( !v26 )
  {
    v29 = v53;
    goto LABEL_92;
  }
  v27 = *a3 - *(_QWORD *)&GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891.Data1;
  if ( *a3 == *(_QWORD *)&GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891.Data1 )
    v27 = a3[1] - *(_QWORD *)GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891.Data4;
  if ( !v27 )
  {
    if ( v8 )
    {
      v28 = *(__int64 (__fastcall ***)(void *, _QWORD *, _QWORD *))v8;
      v29 = v8;
LABEL_48:
      v11 = (*v28)(v29, a3, a4);
      goto LABEL_49;
    }
LABEL_104:
    v11 = -2147019873;
    goto LABEL_49;
  }
  v45 = *a3 - *(_QWORD *)&GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee.Data1;
  if ( *a3 == *(_QWORD *)&GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee.Data1 )
    v45 = a3[1] - *(_QWORD *)GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee.Data4;
  if ( !v45 )
  {
    v29 = v50;
    if ( !v50 )
      goto LABEL_104;
LABEL_92:
    v28 = *(__int64 (__fastcall ***)(void *, _QWORD *, _QWORD *))v29;
    goto LABEL_48;
  }
LABEL_49:
  v30 = v50;
  if ( v50 )
  {
    v50 = 0LL;
    (*(void (__fastcall **)(struct ITaskWindow *))(*(_QWORD *)v30 + 16LL))(v30);
  }
  if ( v8 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v8 + 16LL))(v8);
  v31 = v53;
  if ( v53 )
  {
    v53 = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v31 + 16LL))(v31);
  }
  return (unsigned int)v11;
}
