/*
 * XREFs of ?GetWindowsInternal@CImmersiveApp@@UEAAJW4IMMERSIVE_APPLICATION_GET_WINDOWS_FILTER@@AEBU_GUID@@PEAPEAX@Z @ 0x180039340
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?Attach@?$ComPtr@VSizeConversionViewInfo@@@WRL@Microsoft@@QEAAXPEAVSizeConversionViewInfo@@@Z @ 0x1800E5FEC (-Attach@-$ComPtr@VSizeConversionViewInfo@@@WRL@Microsoft@@QEAAXPEAVSizeConversionViewInfo@@@Z.c)
 *     ?CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z @ 0x1800ED150 (-CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z.c)
 *     ?_GetWindow@CImmersiveWindowCollection@CImmersiveApp@@AEBAJAEBVCTaskWindowFinder@@PEAPEAUITaskWindow@@PEA_K@Z @ 0x180121AC4 (-_GetWindow@CImmersiveWindowCollection@CImmersiveApp@@AEBAJAEBVCTaskWindowFinder@@PEAPEAUITaskWi.c)
 *     ?CImmersiveApplicationWindow_CreateInstance@@YAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z @ 0x180125920 (-CImmersiveApplicationWindow_CreateInstance@@YAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CImmersiveApp::GetWindowsInternal(_QWORD *a1, unsigned int a2, _QWORD *a3, _QWORD *a4)
{
  _QWORD *v4; // r13
  void *v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rax
  int v11; // r14d
  char v12; // di
  char v13; // al
  HWND v14; // rcx
  struct ITaskWindow *v15; // rdi
  __int64 v16; // rax
  _QWORD *v17; // rax
  _QWORD *v18; // rdi
  __int64 v19; // rcx
  LPUNKNOWN v20; // rcx
  void *v21; // rdi
  char v22; // di
  void *v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 (__fastcall **v26)(void *, _QWORD *, _QWORD *); // rax
  void *v27; // rcx
  struct ITaskWindow *v28; // rcx
  void *v29; // rcx
  _QWORD *v31; // rax
  _QWORD *v32; // rdi
  __int64 v33; // rcx
  LPUNKNOWN v34; // rcx
  void *v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rax
  struct ITaskWindow *v38; // rcx
  __int64 v39; // rax
  HWND v40; // rax
  const struct _GUID *v41; // rdx
  int v42; // ecx
  __int64 v43; // rcx
  const struct _GUID *v44; // rdx
  struct ITaskWindow *v45; // [rsp+30h] [rbp-71h] BYREF
  HWND v46; // [rsp+38h] [rbp-69h]
  void *v47; // [rsp+40h] [rbp-61h] BYREF
  void *v48; // [rsp+48h] [rbp-59h] BYREF
  void *v49; // [rsp+50h] [rbp-51h] BYREF
  void *v50; // [rsp+58h] [rbp-49h] BYREF
  LPUNKNOWN v51; // [rsp+60h] [rbp-41h] BYREF
  __int64 v52; // [rsp+68h] [rbp-39h] BYREF
  LPUNKNOWN ppunkMarshal; // [rsp+70h] [rbp-31h] BYREF
  void *v54; // [rsp+78h] [rbp-29h] BYREF
  HWND v55; // [rsp+80h] [rbp-21h] BYREF
  _QWORD *v56; // [rsp+88h] [rbp-19h]
  __int64 v57; // [rsp+90h] [rbp-11h]
  unsigned __int64 v58; // [rsp+98h] [rbp-9h]
  HWND v59; // [rsp+A0h] [rbp-1h] BYREF
  __int64 v60; // [rsp+A8h] [rbp+7h] BYREF
  char v61; // [rsp+B0h] [rbp+Fh]
  __int64 v62; // [rsp+B8h] [rbp+17h]
  unsigned __int64 v63[3]; // [rsp+C0h] [rbp+1Fh] BYREF

  v62 = -2LL;
  v4 = a4;
  *a4 = 0LL;
  v48 = 0LL;
  v8 = 0LL;
  v54 = 0LL;
  v45 = 0LL;
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
      v37 = *a3 - *(_QWORD *)&GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee.Data1;
      if ( *a3 == *(_QWORD *)&GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee.Data1 )
        v37 = a3[1] - *(_QWORD *)GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee.Data4;
      if ( v37 )
      {
        v11 = -2147467262;
        goto LABEL_51;
      }
      v11 = -2147019873;
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))(*a1 + 408LL))(a1) )
        v11 = 0;
    }
    else if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))(*a1 + 408LL))(a1) || a2 == 5 )
    {
      v11 = 0;
    }
    else
    {
      v11 = -2147019873;
    }
  }
  else
  {
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v48);
    v11 = CEnumerableObjectCollection::CreateInstance(v42, v41, &v48);
  }
  if ( v11 < 0 )
    goto LABEL_51;
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
        goto LABEL_13;
      v12 = 0;
      v52 = 0LL;
      v11 = (*(__int64 (__fastcall **)(_QWORD *, __int64 *))(*a1 + 496LL))(a1, &v52);
      if ( v11 >= 0 )
      {
        v11 = (*(__int64 (__fastcall **)(__int64, HWND *))(*(_QWORD *)v52 + 24LL))(v52, &v55);
        if ( v11 >= 0 )
        {
          v46 = v55;
          v49 = 0LL;
          v56 = 0LL;
          v31 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
          v32 = v31;
          if ( !v31 )
            goto LABEL_106;
          *v31 = &CActivatedEventArgsBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
          v31[3] = 0LL;
          v51 = 0LL;
          if ( CoCreateFreeThreadedMarshaler(0LL, &v51) >= 0 )
          {
            v33 = v32[3];
            if ( v33 )
            {
              v32[3] = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
            }
            ((void (__fastcall *)(LPUNKNOWN, GUID *, _QWORD *))v51->lpVtbl->QueryInterface)(
              v51,
              &GUID_00000003_0000_0000_c000_000000000046,
              v32 + 3);
          }
          v34 = v51;
          if ( v51 )
          {
            v51 = 0LL;
            ((void (__fastcall *)(LPUNKNOWN))v34->lpVtbl->Release)(v34);
          }
          *((_DWORD *)v32 + 11) = 1;
          *v32 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IImmersiveApplicationWindow>::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IImmersiveApplicationWindow>>'};
          v32[4] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IImmersiveApplicationWindow>::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IImmersiveApplicationWindow>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IImmersiveApplicationWindow>>'};
          if ( Microsoft::WRL::Details::ModuleBase::module_ )
            (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                 + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
          *v32 = &CImmersiveApplicationWindow::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IImmersiveApplicationWindow>>'};
          v32[4] = &CImmersiveApplicationWindow::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IImmersiveApplicationWindow>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IImmersiveApplicationWindow>>'};
          v32[6] = v46;
          v56 = v32;
          if ( v32 )
          {
            v11 = (*(__int64 (__fastcall **)(_QWORD *, GUID *, void **))*v32)(
                    v32,
                    &GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891,
                    &v49);
            v56 = 0LL;
            (*(void (__fastcall **)(_QWORD *))(*v32 + 16LL))(v32);
            if ( v11 >= 0 )
            {
              v8 = v49;
              v49 = 0LL;
              v54 = v8;
            }
          }
          else
          {
LABEL_106:
            v11 = -2147024882;
          }
          v35 = v49;
          if ( v49 )
          {
            v49 = 0LL;
            (*(void (__fastcall **)(void *))(*(_QWORD *)v35 + 16LL))(v35);
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
      v36 = v52;
      if ( v52 )
      {
        v52 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
      }
LABEL_78:
      if ( v12 )
      {
LABEL_13:
        v13 = 1;
        v58 = a1[41];
        v14 = 0LL;
        v46 = 0LL;
        if ( !v58 )
          goto LABEL_41;
        while ( 1 )
        {
          if ( !v13 )
          {
LABEL_40:
            v4 = a4;
            goto LABEL_41;
          }
          v15 = *(struct ITaskWindow **)(a1[40] + 8LL * (_QWORD)v14);
          if ( a2 > 2 )
          {
            v11 = -2147418113;
            goto LABEL_38;
          }
          v16 = *a3 - *(_QWORD *)&GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee.Data1;
          if ( *a3 == *(_QWORD *)&GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee.Data1 )
            v16 = a3[1] - *(_QWORD *)GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee.Data4;
          if ( v16 )
            break;
          if ( v45 == v15 )
            goto LABEL_38;
          if ( v15 )
            (*(void (__fastcall **)(struct ITaskWindow *))(*(_QWORD *)v15 + 8LL))(v15);
          v38 = v45;
          v45 = v15;
          if ( v38 )
            (*(void (__fastcall **)(struct ITaskWindow *))(*(_QWORD *)v38 + 16LL))(v38);
LABEL_37:
          v14 = v46;
LABEL_38:
          v13 = 0;
LABEL_39:
          v14 = (HWND)((char *)v14 + 1);
          v46 = v14;
          if ( (unsigned __int64)v14 >= v58 )
            goto LABEL_40;
        }
        v47 = 0LL;
        v57 = (*(__int64 (__fastcall **)(struct ITaskWindow *))(*(_QWORD *)v15 + 32LL))(v15);
        v47 = 0LL;
        v63[1] = 0LL;
        v17 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
        v18 = v17;
        if ( !v17 )
          goto LABEL_115;
        *v17 = &CActivatedEventArgsBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
        v17[3] = 0LL;
        ppunkMarshal = 0LL;
        if ( CoCreateFreeThreadedMarshaler(0LL, &ppunkMarshal) >= 0 )
        {
          v19 = v18[3];
          if ( v19 )
          {
            v18[3] = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
          }
          ((void (__fastcall *)(LPUNKNOWN, GUID *, _QWORD *))ppunkMarshal->lpVtbl->QueryInterface)(
            ppunkMarshal,
            &GUID_00000003_0000_0000_c000_000000000046,
            v18 + 3);
        }
        v20 = ppunkMarshal;
        if ( ppunkMarshal )
        {
          ppunkMarshal = 0LL;
          ((void (__fastcall *)(LPUNKNOWN))v20->lpVtbl->Release)(v20);
        }
        *((_DWORD *)v18 + 11) = 1;
        *v18 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IImmersiveApplicationWindow>::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IImmersiveApplicationWindow>>'};
        v18[4] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IImmersiveApplicationWindow>::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IImmersiveApplicationWindow>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IImmersiveApplicationWindow>>'};
        if ( Microsoft::WRL::Details::ModuleBase::module_ )
          (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                               + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
        *v18 = &CImmersiveApplicationWindow::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IImmersiveApplicationWindow>>'};
        v18[4] = &CImmersiveApplicationWindow::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IImmersiveApplicationWindow>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IImmersiveApplicationWindow>>'};
        v18[6] = v57;
        if ( v18 )
        {
          v11 = (*(__int64 (__fastcall **)(_QWORD *, GUID *, void **))*v18)(
                  v18,
                  &GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891,
                  &v47);
          (*(void (__fastcall **)(_QWORD *))(*v18 + 16LL))(v18);
          if ( v11 >= 0 )
          {
            if ( !v48 )
            {
              v21 = v47;
              v47 = 0LL;
              if ( v8 )
                (*(void (__fastcall **)(void *))(*(_QWORD *)v8 + 16LL))(v8);
              v8 = v21;
              v54 = v21;
              v22 = 0;
LABEL_34:
              v23 = v47;
              if ( v47 )
              {
                v47 = 0LL;
                (*(void (__fastcall **)(void *))(*(_QWORD *)v23 + 16LL))(v23);
              }
              if ( v22 && v11 >= 0 )
              {
                v13 = 1;
                v14 = v46;
                goto LABEL_39;
              }
              goto LABEL_37;
            }
            v11 = (*(__int64 (__fastcall **)(void *, void *))(*(_QWORD *)v48 + 40LL))(v48, v47);
          }
        }
        else
        {
LABEL_115:
          v11 = -2147024882;
        }
        v22 = 1;
        goto LABEL_34;
      }
      goto LABEL_41;
    }
  }
  v40 = (HWND)a1[36];
  v55 = v40;
  if ( !v40 )
    goto LABEL_78;
  v43 = *a3 - *(_QWORD *)&GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee.Data1;
  if ( *a3 == *(_QWORD *)&GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee.Data1 )
    v43 = a3[1] - *(_QWORD *)GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee.Data4;
  if ( v43 )
  {
    v50 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v50);
    v11 = CImmersiveApplicationWindow_CreateInstance(v55, v44, &v50);
    if ( v11 >= 0 )
    {
      v50 = 0LL;
      Microsoft::WRL::ComPtr<SizeConversionViewInfo>::Attach(&v54);
      v12 = 0;
      v8 = v54;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v50);
    goto LABEL_78;
  }
  v59 = v40;
  v60 = 0LL;
  v61 = 0;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v45);
  CImmersiveApp::CImmersiveWindowCollection::_GetWindow(
    (CImmersiveApp::CImmersiveWindowCollection *)(a1 + 19),
    (const struct CTaskWindowFinder *)&v59,
    &v45,
    v63);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v60);
LABEL_41:
  if ( v11 < 0 )
    goto LABEL_51;
  v24 = *a3 - *(_QWORD *)&GUID_5632b1a4_e38a_400a_928a_d4cd63230295.Data1;
  if ( *a3 == *(_QWORD *)&GUID_5632b1a4_e38a_400a_928a_d4cd63230295.Data1 )
    v24 = a3[1] - *(_QWORD *)GUID_5632b1a4_e38a_400a_928a_d4cd63230295.Data4;
  if ( !v24 )
  {
    v27 = v48;
    goto LABEL_95;
  }
  v25 = *a3 - *(_QWORD *)&GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891.Data1;
  if ( *a3 == *(_QWORD *)&GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891.Data1 )
    v25 = a3[1] - *(_QWORD *)GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891.Data4;
  if ( !v25 )
  {
    if ( v8 )
    {
      v26 = *(__int64 (__fastcall ***)(void *, _QWORD *, _QWORD *))v8;
      v27 = v8;
LABEL_50:
      v11 = (*v26)(v27, a3, v4);
      goto LABEL_51;
    }
    goto LABEL_120;
  }
  v39 = *a3 - *(_QWORD *)&GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee.Data1;
  if ( *a3 == *(_QWORD *)&GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee.Data1 )
    v39 = a3[1] - *(_QWORD *)GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee.Data4;
  if ( !v39 )
  {
    v27 = v45;
    if ( !v45 )
    {
LABEL_120:
      v11 = -2147019873;
      goto LABEL_51;
    }
LABEL_95:
    v26 = *(__int64 (__fastcall ***)(void *, _QWORD *, _QWORD *))v27;
    goto LABEL_50;
  }
LABEL_51:
  v28 = v45;
  if ( v45 )
  {
    v45 = 0LL;
    (*(void (__fastcall **)(struct ITaskWindow *))(*(_QWORD *)v28 + 16LL))(v28);
  }
  if ( v8 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v8 + 16LL))(v8);
  v29 = v48;
  if ( v48 )
  {
    v48 = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v29 + 16LL))(v29);
  }
  return (unsigned int)v11;
}
