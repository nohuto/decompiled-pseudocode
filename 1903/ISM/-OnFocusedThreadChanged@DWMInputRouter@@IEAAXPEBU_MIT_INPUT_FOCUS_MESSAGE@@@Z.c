/*
 * XREFs of ?OnFocusedThreadChanged@DWMInputRouter@@IEAAXPEBU_MIT_INPUT_FOCUS_MESSAGE@@@Z @ 0x18000AFF0
 * Callers:
 *     ?OnFocusedThreadChangedStatic@DWMInputRouter@@KAJPEAXPEBXH@Z @ 0x18000AF70 (-OnFocusedThreadChangedStatic@DWMInputRouter@@KAJPEAXPEBXH@Z.c)
 *     _lambda_d6825bbef0718a568adec6fcdf443266_::operator() @ 0x18003585C (_lambda_d6825bbef0718a568adec6fcdf443266_--operator().c)
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180002344 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ @ 0x18000DD7C (-GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ.c)
 *     ?GetViewHierarchy@ISMStatics@@SAPEAUIViewHierarchy@@XZ @ 0x18000DF64 (-GetViewHierarchy@ISMStatics@@SAPEAUIViewHierarchy@@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@VInputSite@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x180027178 (--4-$ComPtr@VInputSite@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ??1?$ComPtr@VNonBamoInputDeliveryServer@@@WRL@Microsoft@@QEAA@XZ @ 0x18002B3A4 (--1-$ComPtr@VNonBamoInputDeliveryServer@@@WRL@Microsoft@@QEAA@XZ.c)
 *     memset_0 @ 0x18002C3EE (memset_0.c)
 *     _CxxThrowException_0 @ 0x18002CA9A (_CxxThrowException_0.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002E124 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetInputSiteFromId@InputSiteManager@@QEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSiteIdNamespace@@_KK@Z @ 0x18002F390 (-GetInputSiteFromId@InputSiteManager@@QEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSiteIdN.c)
 *     ?GetViewInstanceId@LegacyInputSinkData@@QEBAAEBIXZ @ 0x18002FA00 (-GetViewInstanceId@LegacyInputSinkData@@QEBAAEBIXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180056650 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetProcessIdFromViewId@ViewHelper@@SAKPEAUIViewHierarchy@@I@Z @ 0x180058690 (-GetProcessIdFromViewId@ViewHelper@@SAKPEAUIViewHierarchy@@I@Z.c)
 *     ?GetWindowIdFromViewId@ViewHelper@@SA_KPEAUIViewHierarchy@@I@Z @ 0x1800589F8 (-GetWindowIdFromViewId@ViewHelper@@SA_KPEAUIViewHierarchy@@I@Z.c)
 */

// Hidden C++ exception states: #wind=8
void __fastcall DWMInputRouter::OnFocusedThreadChanged(DWMInputRouter *this, const struct _MIT_INPUT_FOCUS_MESSAGE *a2)
{
  __int64 (__fastcall ***v4)(_QWORD, GUID *, __int64 *); // rcx
  __int64 (__fastcall **v5)(_QWORD, GUID *, __int64 *); // rax
  int v6; // eax
  wil::details::in1diag3 *v7; // rcx
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  bool v15; // di
  __int64 v16; // rcx
  int v17; // edi
  int v18; // r15d
  __int64 v19; // r12
  int v20; // r13d
  int v21; // ebx
  __int64 **v22; // rcx
  __int64 *i; // rax
  __int64 v24; // rsi
  _QWORD *v25; // rax
  int v26; // ebx
  int v27; // eax
  _QWORD *v28; // rcx
  int v29; // eax
  void *v30; // rax
  __int64 v31; // rbx
  __int64 *v32; // r15
  __int64 v33; // rcx
  char *v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rcx
  int v38; // ebx
  struct InputSiteManager *InputSiteManager; // rax
  __int64 *v40; // rdi
  __int64 *v41; // r12
  __int64 v42; // rdi
  __int64 v43; // rcx
  struct IViewHierarchy *ViewHierarchy; // rax
  int WindowIdFromViewId; // edi
  struct IViewHierarchy *v46; // rax
  unsigned int ProcessIdFromViewId; // ebx
  unsigned int v48; // eax
  __int64 InputSiteFromId; // rax
  __int64 v50; // rcx
  int v51; // [rsp+20h] [rbp-89h]
  __int64 v52; // [rsp+30h] [rbp-79h] BYREF
  _QWORD *v53; // [rsp+38h] [rbp-71h] BYREF
  int v54; // [rsp+40h] [rbp-69h] BYREF
  int v55; // [rsp+44h] [rbp-65h] BYREF
  int v56; // [rsp+48h] [rbp-61h] BYREF
  int v57; // [rsp+4Ch] [rbp-5Dh]
  int v58; // [rsp+50h] [rbp-59h]
  __int64 v59; // [rsp+58h] [rbp-51h] BYREF
  __int64 v60; // [rsp+60h] [rbp-49h] BYREF
  __int64 v61; // [rsp+68h] [rbp-41h] BYREF
  __int64 v62; // [rsp+70h] [rbp-39h] BYREF
  __int64 v63; // [rsp+78h] [rbp-31h]
  __int64 v64; // [rsp+80h] [rbp-29h] BYREF
  __int64 v65[8]; // [rsp+88h] [rbp-21h] BYREF
  char v66; // [rsp+C8h] [rbp+1Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+5Fh]
  int v68; // [rsp+118h] [rbp+6Fh] BYREF
  int v69; // [rsp+120h] [rbp+77h] BYREF
  int v70; // [rsp+128h] [rbp+7Fh] BYREF

  v65[4] = -2LL;
  if ( !*(_DWORD *)a2 )
  {
    if ( !*((_QWORD *)this + 40) )
      return;
    v29 = (*(__int64 (__fastcall **)(DWMInputRouter *, _QWORD))(*(_QWORD *)this + 112LL))(this, 0LL);
    if ( v29 >= 0 )
      return;
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x754,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v29,
      v51);
    goto LABEL_61;
  }
  v4 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 40);
  if ( !v4 )
  {
LABEL_18:
    v53 = 0LL;
    v65[6] = (__int64)&v53;
    v17 = *((_DWORD *)a2 + 8);
    v18 = *((_DWORD *)a2 + 7);
    v19 = *((_QWORD *)a2 + 2);
    v20 = *((_DWORD *)a2 + 6);
    v58 = *((_DWORD *)a2 + 2);
    v57 = *((_DWORD *)a2 + 1);
    v21 = *(_DWORD *)a2;
    v22 = (__int64 **)*((_QWORD *)this + 12);
    for ( i = *v22; ; i = (__int64 *)*i )
    {
      if ( i == (__int64 *)v22 )
      {
        v24 = 0LL;
        goto LABEL_23;
      }
      if ( *((_DWORD *)i + 4) == v21 )
        break;
    }
    v24 = i[7];
LABEL_23:
    v64 = v24;
    if ( v24 )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v24 + 8LL))(v24, 0LL);
    v53 = 0LL;
    if ( v24 )
    {
      v30 = malloc(0x68uLL);
      v31 = (__int64)v30;
      v63 = (__int64)v30;
      if ( v30 )
        memset_0(v30, 0, 0x68uLL);
      v65[7] = v31;
      if ( v31 )
      {
        *(_QWORD *)(v31 + 40) = &RefCountedObject::`vftable';
        *(_DWORD *)(v31 + 48) = 1;
        *(_QWORD *)v31 = &DWMFocusedInputTarget::`vftable'{for `IInputTarget'};
        *(_QWORD *)(v31 + 8) = &DWMFocusedInputTarget::`vftable'{for `IInputTarget2'};
        *(_QWORD *)(v31 + 16) = &DWMFocusedInputTarget::`vftable'{for `IFocusInputTarget'};
        *(_QWORD *)(v31 + 24) = &DWMFocusedInputTarget::`vftable'{for `IDCompInputTarget'};
        *(_QWORD *)(v31 + 32) = &DWMFocusedInputTarget::`vftable'{for `IInputSiteTarget'};
        *(_QWORD *)(v31 + 40) = &DWMFocusedInputTarget::`vftable'{for `RefCountedObject'};
        *(_QWORD *)(v31 + 56) = v24;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 8LL))(v24);
        *(_DWORD *)(v31 + 64) = v57;
        *(_DWORD *)(v31 + 68) = v58;
        *(_DWORD *)(v31 + 72) = v20;
        *(_QWORD *)(v31 + 80) = v19;
        *(_DWORD *)(v31 + 88) = v18;
        *(_DWORD *)(v31 + 92) = v17;
        v32 = (__int64 *)(v31 + 96);
        *(_QWORD *)(v31 + 96) = 0LL;
        (**(void (__fastcall ***)(__int64, GUID *, __int64 *))v24)(
          v24,
          &GUID_6ca15b7f_63da_4e23_abb3_68f3d29d27ea,
          &v59);
        v33 = v59;
        if ( v59 )
        {
          v34 = (char *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v59 + 24LL))(v59, &v61);
          v35 = 0LL;
          if ( &v66 != v34 )
          {
            v35 = *(_QWORD *)v34;
            *(_QWORD *)v34 = 0LL;
          }
          v36 = *v32;
          *v32 = v35;
          if ( v36 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
          v37 = v61;
          if ( v61 )
          {
            v61 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
          }
          v33 = v59;
        }
        if ( v33 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
        if ( !*v32 && *(_DWORD *)(v31 + 68) )
        {
          InputSiteManager = ISMStatics::GetInputSiteManager();
          v40 = (__int64 *)*((_QWORD *)InputSiteManager + 7);
          v41 = (__int64 *)*((_QWORD *)InputSiteManager + 8);
          if ( v40 != v41 )
          {
            while ( !*(_BYTE *)(*v40 + 384)
                 || *LegacyInputSinkData::GetViewInstanceId((LegacyInputSinkData *)(*v40 + 32)) != *(_DWORD *)(v31 + 68) )
            {
              if ( ++v40 == v41 )
                goto LABEL_78;
            }
            v42 = *v40;
            if ( *v32 != v42 )
            {
              v65[0] = v42;
              wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(v65);
              v43 = *v32;
              *v32 = v42;
              if ( v43 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v43 + 16LL))(v43);
            }
          }
LABEL_78:
          if ( !*v32 )
          {
            ViewHierarchy = ISMStatics::GetViewHierarchy();
            WindowIdFromViewId = ViewHelper::GetWindowIdFromViewId(ViewHierarchy, *(_DWORD *)(v31 + 68));
            v46 = ISMStatics::GetViewHierarchy();
            ProcessIdFromViewId = ViewHelper::GetProcessIdFromViewId(v46, *(_DWORD *)(v31 + 68));
            v48 = (unsigned int)ISMStatics::GetInputSiteManager();
            InputSiteFromId = InputSiteManager::GetInputSiteFromId(
                                v48,
                                (unsigned int)&v62,
                                1,
                                WindowIdFromViewId,
                                ProcessIdFromViewId);
            Microsoft::WRL::ComPtr<InputSite>::operator=(v32, InputSiteFromId);
            v50 = v62;
            if ( v62 )
            {
              v62 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v50 + 16LL))(v50);
            }
            v31 = v63;
          }
        }
      }
      else
      {
        v31 = 0LL;
      }
      if ( v31 )
      {
        v53 = (_QWORD *)v31;
        v38 = 0;
      }
      else
      {
        v38 = -2147024882;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x59,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwmfocusedinputtarget.cpp",
          (const char *)0x8007000ELL,
          v51);
      }
      if ( v38 >= 0 )
        goto LABEL_29;
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x38C,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v38,
        v51);
      Microsoft::WRL::ComPtr<NonBamoInputDeliveryServer>::~ComPtr<NonBamoInputDeliveryServer>(&v64);
    }
    else
    {
      v25 = malloc(0x48uLL);
      if ( v25 )
      {
        *v25 = 0LL;
        v25[1] = 0LL;
        v25[2] = 0LL;
        v25[4] = 0LL;
        v25[5] = 0LL;
        v25[6] = 0LL;
        v25[7] = 0LL;
        v25[8] = 0LL;
        v25[3] = &RefCountedObject::`vftable';
        *((_DWORD *)v25 + 8) = 1;
        *v25 = &DWMLegacyInputTarget::`vftable'{for `IInputTarget'};
        v25[1] = &DWMLegacyInputTarget::`vftable'{for `IInputTarget2'};
        v25[2] = &DWMLegacyInputTarget::`vftable'{for `IFocusInputTarget'};
        v25[3] = &DWMLegacyInputTarget::`vftable'{for `RefCountedObject'};
        *((_DWORD *)v25 + 10) = v21;
        *((_DWORD *)v25 + 11) = v57;
        *((_DWORD *)v25 + 12) = v58;
        *((_DWORD *)v25 + 13) = v20;
        v25[7] = v19;
        *((_DWORD *)v25 + 16) = v18;
        *((_DWORD *)v25 + 17) = v17;
        v53 = v25;
        v26 = 0;
      }
      else
      {
        v26 = -2147024882;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x43,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwmlegacyinputtarget.cpp",
          (const char *)0x8007000ELL,
          v51);
      }
      if ( v26 >= 0 )
      {
LABEL_29:
        if ( v24 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
        goto LABEL_31;
      }
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x398,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v26,
        v51);
      Microsoft::WRL::ComPtr<NonBamoInputDeliveryServer>::~ComPtr<NonBamoInputDeliveryServer>(&v64);
    }
LABEL_31:
    v27 = (*(__int64 (__fastcall **)(DWMInputRouter *, _QWORD *))(*(_QWORD *)this + 112LL))(this, v53);
    if ( v27 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x78C,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v27,
        v51);
      __debugbreak();
    }
    v28 = v53;
    if ( v53 )
    {
      v53 = 0LL;
      (*(void (__fastcall **)(_QWORD *))(*v28 + 16LL))(v28);
    }
    return;
  }
  v68 = 0;
  v69 = 0;
  v70 = 0;
  v54 = 0;
  v60 = 0LL;
  v55 = 0;
  v56 = 0;
  v52 = 0LL;
  v5 = *v4;
  v65[5] = (__int64)&v52;
  v6 = (*v5)(v4, &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59, &v52);
  v7 = retaddr;
  if ( v6 < 0 )
  {
LABEL_61:
    wil::details::in1diag3::FailFast_Hr(
      v7,
      (void *)0x769,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v6,
      v51);
    __debugbreak();
  }
  v8 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v52 + 32LL))(v52, &v68);
  if ( v8 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x76B,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v8,
      v51);
    __debugbreak();
  }
  v9 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v52 + 40LL))(v52, &v69);
  if ( v9 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x76C,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v9,
      v51);
    __debugbreak();
  }
  v10 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v52 + 48LL))(v52, &v70);
  if ( v10 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x76D,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v10,
      v51);
    __debugbreak();
  }
  v11 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v52 + 56LL))(v52, &v54);
  if ( v11 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x76E,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v11,
      v51);
    __debugbreak();
  }
  v12 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v52 + 64LL))(v52, &v60);
  if ( v12 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x76F,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v12,
      v51);
    __debugbreak();
  }
  v13 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v52 + 72LL))(v52, &v55);
  if ( v13 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x770,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v13,
      v51);
    __debugbreak();
  }
  v14 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v52 + 80LL))(v52, &v56);
  if ( v14 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x771,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v14,
      v51);
    __debugbreak();
  }
  v15 = *(_DWORD *)a2 == v68
     && *((_DWORD *)a2 + 1) == v69
     && *((_DWORD *)a2 + 2) == v70
     && *((_DWORD *)a2 + 6) == v54
     && *((_QWORD *)a2 + 2) == v60
     && *((_DWORD *)a2 + 7) == v55
     && *((_DWORD *)a2 + 8) == v56;
  v16 = v52;
  if ( v52 )
  {
    v52 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  }
  if ( !v15 )
    goto LABEL_18;
}
