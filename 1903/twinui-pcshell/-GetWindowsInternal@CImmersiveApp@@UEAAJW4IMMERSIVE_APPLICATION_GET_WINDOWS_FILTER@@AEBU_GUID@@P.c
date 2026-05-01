/*
 * XREFs of ?GetWindowsInternal@CImmersiveApp@@UEAAJW4IMMERSIVE_APPLICATION_GET_WINDOWS_FILTER@@AEBU_GUID@@PEAPEAX@Z @ 0x180025B30
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z @ 0x180026898 (-CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?Attach@?$ComPtr@UIObjectArray@@@WRL@Microsoft@@QEAAXPEAUIObjectArray@@@Z @ 0x18010829C (-Attach@-$ComPtr@UIObjectArray@@@WRL@Microsoft@@QEAAXPEAUIObjectArray@@@Z.c)
 *     ?_GetWindow@CImmersiveWindowCollection@CImmersiveApp@@AEBAJAEBVCTaskWindowFinder@@PEAPEAUITaskWindow@@PEA_K@Z @ 0x18014B1C4 (-_GetWindow@CImmersiveWindowCollection@CImmersiveApp@@AEBAJAEBVCTaskWindowFinder@@PEAPEAUITaskWi.c)
 *     ?CImmersiveApplicationWindow_CreateInstance@@YAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z @ 0x18014F040 (-CImmersiveApplicationWindow_CreateInstance@@YAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z.c)
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
  void *v50; // rdx
  struct ITaskWindow *v51; // [rsp+30h] [rbp-91h] BYREF
  void *v52; // [rsp+38h] [rbp-89h] BYREF
  unsigned __int64 v53; // [rsp+40h] [rbp-81h]
  void *v54; // [rsp+48h] [rbp-79h] BYREF
  LPUNKNOWN v55; // [rsp+50h] [rbp-71h] BYREF
  void *v56; // [rsp+58h] [rbp-69h] BYREF
  __int64 v57; // [rsp+60h] [rbp-61h] BYREF
  void *v58; // [rsp+68h] [rbp-59h] BYREF
  LPUNKNOWN ppunkMarshal; // [rsp+70h] [rbp-51h] BYREF
  void *v60; // [rsp+78h] [rbp-49h] BYREF
  HRESULT (__stdcall *v61)(IUnknown *, const IID *const, void **); // [rsp+80h] [rbp-41h]
  _QWORD *v62; // [rsp+88h] [rbp-39h]
  unsigned __int64 v63; // [rsp+90h] [rbp-31h] BYREF
  struct ITaskWindow *v64; // [rsp+98h] [rbp-29h]
  HRESULT (__stdcall *v65)(IUnknown *, const IID *const, void **); // [rsp+A0h] [rbp-21h]
  __int64 v66; // [rsp+A8h] [rbp-19h]
  __int64 v67; // [rsp+B0h] [rbp-11h] BYREF
  __int64 v68; // [rsp+B8h] [rbp-9h] BYREF
  char v69; // [rsp+C0h] [rbp-1h]
  __int64 v70; // [rsp+C8h] [rbp+7h]
  __int64 *v71; // [rsp+D0h] [rbp+Fh]
  LPUNKNOWN *v72; // [rsp+D8h] [rbp+17h]
  unsigned __int64 v73[3]; // [rsp+E0h] [rbp+1Fh] BYREF

  v70 = -2LL;
  v7 = 0LL;
  *a4 = 0LL;
  v54 = 0LL;
  v8 = 0LL;
  v60 = 0LL;
  v51 = 0LL;
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
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v54);
    v11 = CEnumerableObjectCollection::CreateInstance(v47, v46, &v54);
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
      v57 = 0LL;
      v33 = *a1;
      v71 = &v57;
      v11 = (*(__int64 (__fastcall **)(_QWORD *, __int64 *))(v33 + 496))(a1, &v57);
      if ( v11 >= 0 )
      {
        v11 = (*(__int64 (__fastcall **)(__int64, unsigned __int64 *))(*(_QWORD *)v57 + 24LL))(v57, &v63);
        if ( v11 >= 0 )
        {
          v34 = v63;
          v53 = v63;
          v56 = 0LL;
          v62 = 0LL;
          v35 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
          v36 = v35;
          if ( !v35 )
            goto LABEL_106;
          *v35 = &CActivatedEventArgsBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
          v35[3] = 0LL;
          v55 = 0LL;
          v72 = &v55;
          if ( CoCreateFreeThreadedMarshaler(0LL, &v55) >= 0 )
          {
            v37 = v55;
            QueryInterface = v55->lpVtbl->QueryInterface;
            v61 = QueryInterface;
            v39 = v36[3];
            if ( v39 )
            {
              v36[3] = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 16LL))(v39);
              ((void (__fastcall *)(LPUNKNOWN, GUID *, _QWORD *))v61)(
                v37,
                &GUID_00000003_0000_0000_c000_000000000046,
                v36 + 3);
            }
            else
            {
              ((void (__fastcall *)(LPUNKNOWN, GUID *, _QWORD *))QueryInterface)(
                v55,
                &GUID_00000003_0000_0000_c000_000000000046,
                v36 + 3);
            }
            v34 = v53;
          }
          v40 = v55;
          if ( v55 )
          {
            v55 = 0LL;
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
          v62 = v36;
          if ( v36 )
          {
            v11 = (*(__int64 (__fastcall **)(_QWORD *, GUID *, void **))*v36)(
                    v36,
                    &GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891,
                    &v56);
            v7 = 0LL;
            v62 = 0LL;
            (*(void (__fastcall **)(_QWORD *))(*v36 + 16LL))(v36);
            if ( v11 >= 0 )
            {
              v8 = v56;
              v56 = 0LL;
              v60 = v8;
            }
          }
          else
          {
LABEL_106:
            v11 = -2147024882;
            v7 = 0LL;
          }
          v41 = v56;
          if ( v56 )
          {
            v56 = 0LL;
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
      v42 = v57;
      if ( v57 )
      {
        v57 = 0LL;
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
      v67 = a1[40];
      v68 = 0LL;
      v69 = 0;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v51);
      CImmersiveApp::CImmersiveWindowCollection::_GetWindow(
        (CImmersiveApp::CImmersiveWindowCollection *)(a1 + 23),
        (const struct CTaskWindowFinder *)&v67,
        &v51,
        v73);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v68);
      goto LABEL_39;
    }
    v58 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v58);
    v11 = CImmersiveApplicationWindow_CreateInstance(v7, v49, &v58);
    v7 = 0LL;
    if ( v11 >= 0 )
    {
      v50 = v58;
      v58 = 0LL;
      Microsoft::WRL::ComPtr<IObjectArray>::Attach(&v60, v50);
      v12 = 0;
      v8 = v60;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v58);
  }
LABEL_76:
  if ( v12 )
  {
LABEL_12:
    v13 = 1;
    v14 = a1[45];
    v53 = v14;
    v61 = 0LL;
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
        if ( v51 == v15 )
          goto LABEL_37;
        if ( v15 )
          (*(void (__fastcall **)(struct ITaskWindow *))(*(_QWORD *)v15 + 8LL))(v15);
        v44 = v51;
        v64 = v51;
        v51 = v15;
        if ( v64 )
        {
          v64 = 0LL;
          (*(void (__fastcall **)(struct ITaskWindow *))(*(_QWORD *)v44 + 16LL))(v44);
        }
LABEL_36:
        v14 = v53;
LABEL_37:
        v13 = 0;
LABEL_38:
        v7 = (HWND)((char *)v7 + 1);
        v61 = (HRESULT (__stdcall *)(IUnknown *, const IID *const, void **))v7;
        if ( (unsigned __int64)v7 >= v14 )
          goto LABEL_39;
      }
      v52 = 0LL;
      v66 = (*(__int64 (__fastcall **)(struct ITaskWindow *))(*(_QWORD *)v15 + 32LL))(v15);
      v52 = 0LL;
      v73[1] = 0LL;
      v17 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
      v18 = v17;
      if ( !v17 )
        goto LABEL_116;
      *v17 = &CActivatedEventArgsBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
      v17[3] = 0LL;
      ppunkMarshal = 0LL;
      v73[2] = (unsigned __int64)&ppunkMarshal;
      if ( CoCreateFreeThreadedMarshaler(0LL, &ppunkMarshal) >= 0 )
      {
        v19 = ppunkMarshal;
        v20 = ppunkMarshal->lpVtbl->QueryInterface;
        v65 = v20;
        v21 = v18[3];
        if ( v21 )
        {
          v18[3] = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
          ((void (__fastcall *)(LPUNKNOWN, GUID *, _QWORD *))v65)(
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
        v7 = (HWND)v61;
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
      v18[6] = v66;
      if ( v18 )
      {
        v11 = (*(__int64 (__fastcall **)(_QWORD *, GUID *, void **))*v18)(
                v18,
                &GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891,
                &v52);
        (*(void (__fastcall **)(_QWORD *))(*v18 + 16LL))(v18);
        if ( v11 >= 0 )
        {
          if ( !v54 )
          {
            v23 = v52;
            v52 = 0LL;
            if ( v8 )
              (*(void (__fastcall **)(void *))(*(_QWORD *)v8 + 16LL))(v8);
            v8 = v23;
            v60 = v23;
            v24 = 0;
LABEL_33:
            v25 = v52;
            if ( v52 )
            {
              v52 = 0LL;
              (*(void (__fastcall **)(void *))(*(_QWORD *)v25 + 16LL))(v25);
            }
            if ( v24 && v11 >= 0 )
            {
              v13 = 1;
              v14 = v53;
              goto LABEL_38;
            }
            goto LABEL_36;
          }
          v11 = (*(__int64 (__fastcall **)(void *, void *))(*(_QWORD *)v54 + 40LL))(v54, v52);
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
    v29 = v54;
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
    v29 = v51;
    if ( !v51 )
      goto LABEL_104;
LABEL_92:
    v28 = *(__int64 (__fastcall ***)(void *, _QWORD *, _QWORD *))v29;
    goto LABEL_48;
  }
LABEL_49:
  v30 = v51;
  if ( v51 )
  {
    v51 = 0LL;
    (*(void (__fastcall **)(struct ITaskWindow *))(*(_QWORD *)v30 + 16LL))(v30);
  }
  if ( v8 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v8 + 16LL))(v8);
  v31 = v54;
  if ( v54 )
  {
    v54 = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v31 + 16LL))(v31);
  }
  return (unsigned int)v11;
}
