/*
 * XREFs of _lambda_91da0398866e2bc6f1173300c449b4ce_::operator() @ 0x18000E5D4
 * Callers:
 *     Windows::Internal::COperationLambdaVar_0__lambda_91da0398866e2bc6f1173300c449b4ce__Windows::Internal::CHSTRINGResult_::Run @ 0x180018B50 (Windows--Internal--COperationLambdaVar_0__lambda_91da0398866e2bc6f1173300c449b4ce__Windows--Inte.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003584 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18000482C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18001563C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??$WaitForCompletion@U?$IAsyncOperationCompletedHandler@PEAU?$IVectorView@PEAVWebAccount@Credentials@Security@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@U?$IAsyncOperation@PEAU?$IVectorView@PEAVWebAccount@Credentials@Security@Windows@@@Collections@Foundation@Windows@@@23@@@YAJPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVWebAccount@Credentials@Security@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z @ 0x180016944 (--$WaitForCompletion@U-$IAsyncOperationCompletedHandler@PEAU-$IVectorView@PEAVWebAccount@Credent.c)
 *     ??$WaitForCompletion@PEAU?$IAsyncOperation@PEAVWebTokenRequestResult@Core@Web@Authentication@Security@Windows@@@Foundation@Windows@@@details@wil@@YAJPEAU?$IAsyncOperation@PEAVWebTokenRequestResult@Core@Web@Authentication@Security@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x18001BDE8 (--$WaitForCompletion@PEAU-$IAsyncOperation@PEAVWebTokenRequestResult@Core@Web@Authentication@Sec.c)
 *     __security_check_cookie @ 0x1800CAA90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBEA0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=17
__int64 __fastcall lambda_91da0398866e2bc6f1173300c449b4ce_::operator()(__int64 a1, __int64 a2)
{
  int v4; // esi
  HRESULT v5; // eax
  int ActivationFactory; // eax
  int v7; // ebx
  __int64 v8; // rax
  int v9; // eax
  int v10; // eax
  __int64 v11; // rdx
  __int64 (__fastcall *v12)(__int64, __int64 **); // rdi
  unsigned int v13; // r14d
  __int64 v14; // rax
  int v15; // eax
  __int64 v16; // rax
  int v17; // eax
  __int64 (__fastcall **v18)(__int64, GUID *, __int64 *); // rax
  int v19; // eax
  __int64 v20; // rbx
  __int64 (__fastcall *v21)(__int64, HSTRING *); // rdi
  int v22; // eax
  const WCHAR *StringRawBuffer; // rax
  HRESULT v24; // eax
  __int64 *v25; // rcx
  int v26; // eax
  HRESULT v27; // eax
  __int64 v28; // rcx
  int v29; // eax
  __int64 v30; // rax
  int v31; // eax
  __int64 v32; // rbx
  __int64 (__fastcall *v33)(__int64, __int64, _QWORD, _QWORD, _DWORD, _QWORD **); // rsi
  __int64 v34; // rdi
  _QWORD *v35; // rcx
  int v36; // eax
  __int64 v37; // rax
  int v38; // eax
  __int64 *v39; // rcx
  __int64 v40; // rdi
  __int64 v41; // rax
  int v42; // eax
  HSTRING v43; // rdi
  HSTRING *v44; // rbx
  __int64 v46; // rdx
  __int64 *v47; // rcx
  __int64 v48; // rax
  int v49; // eax
  __int64 v50; // r9
  __int64 v51; // rdx
  int v52; // eax
  __int64 v53; // rax
  int v54; // eax
  __int64 v55; // rdx
  HSTRING v56; // rdi
  HSTRING *v57; // rbx
  __int64 v58; // rdx
  unsigned __int64 v59; // r9
  __int64 *v60; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v61; // [rsp+50h] [rbp-B8h] BYREF
  HSTRING v62; // [rsp+58h] [rbp-B0h] BYREF
  __int64 *v63; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD *v64; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v65; // [rsp+70h] [rbp-98h] BYREF
  __int64 *v66; // [rsp+78h] [rbp-90h] BYREF
  __int64 *v67; // [rsp+80h] [rbp-88h] BYREF
  int v68; // [rsp+88h] [rbp-80h] BYREF
  __int64 *v69; // [rsp+90h] [rbp-78h] BYREF
  __int64 *v70; // [rsp+98h] [rbp-70h] BYREF
  __int64 v71; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v72; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v73; // [rsp+B0h] [rbp-58h] BYREF
  __int64 (__fastcall ***v74)(__int64, GUID *, __int64 *); // [rsp+B8h] [rbp-50h] BYREF
  __int64 v75; // [rsp+C0h] [rbp-48h] BYREF
  _QWORD *v76; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v77; // [rsp+D0h] [rbp-38h] BYREF
  int v78; // [rsp+D8h] [rbp-30h] BYREF
  int v79; // [rsp+DCh] [rbp-2Ch] BYREF
  HSTRING v80[2]; // [rsp+E0h] [rbp-28h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+F0h] [rbp-18h] BYREF
  HSTRING string; // [rsp+108h] [rbp+0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+150h] [rbp+48h]

  v80[1] = (HSTRING)-2LL;
  v80[0] = 0LL;
  v4 = 0;
  v76 = 0LL;
  string = 0LL;
  v5 = WindowsCreateStringReference(
         L"Windows.Internal.Security.Authentication.Web.TokenBrokerInternal",
         0x40u,
         &hstringHeader,
         &string);
  if ( v5 < 0 )
    goto LABEL_130;
  v76 = 0LL;
  ActivationFactory = RoGetActivationFactory(string, &GUID_07650a66_66ea_489d_aa90_0dabc75f3567, &v76);
  v7 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x21C,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)ActivationFactory);
    goto LABEL_70;
  }
  v75 = 0LL;
  v8 = *v76;
  v75 = 0LL;
  v9 = (*(__int64 (__fastcall **)(_QWORD *, __int64 *))(v8 + 96))(v76, &v75);
  v7 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x21F,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v9);
    goto LABEL_68;
  }
  v67 = 0LL;
  v10 = WaitForCompletion<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Foundation::Collections::IVectorView<Windows::Security::Credentials::WebAccount *> *>,Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Security::Credentials::WebAccount *> *>>(v75);
  v7 = v10;
  if ( v10 < 0 )
  {
    v11 = 546LL;
LABEL_12:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v10);
    goto LABEL_66;
  }
  v12 = *(__int64 (__fastcall **)(__int64, __int64 **))(*(_QWORD *)v75 + 64LL);
  v67 = 0LL;
  v10 = v12(v75, &v67);
  v7 = v10;
  if ( v10 < 0 )
  {
    v11 = 548LL;
    goto LABEL_12;
  }
  LODWORD(v61) = 0;
  v10 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(*v67 + 56))(v67, &v61);
  v7 = v10;
  if ( v10 < 0 )
  {
    v11 = 550LL;
    goto LABEL_12;
  }
  v13 = 0;
  if ( !(_DWORD)v61 )
  {
LABEL_62:
    v43 = v80[0];
    v44 = (HSTRING *)(a2 + 16);
    if ( !v80[0] || v80[0] != *v44 )
    {
      WindowsDeleteString(*v44);
      *v44 = 0LL;
      WindowsDuplicateString(v43, (HSTRING *)(a2 + 16));
    }
    v7 = v4;
    goto LABEL_66;
  }
  while ( 1 )
  {
    v63 = 0LL;
    v14 = *v67;
    v63 = 0LL;
    v15 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64 **))(v14 + 48))(v67, v13, &v63);
    v7 = v15;
    if ( v15 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x22B,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
        (const char *)(unsigned int)v15);
      goto LABEL_127;
    }
    v74 = 0LL;
    v16 = *v63;
    v74 = 0LL;
    v17 = (*(__int64 (__fastcall **)(__int64 *, __int64 (__fastcall ****)(__int64, GUID *, __int64 *)))(v16 + 48))(
            v63,
            &v74);
    v7 = v17;
    if ( v17 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x22E,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
        (const char *)(unsigned int)v17);
      goto LABEL_124;
    }
    v73 = 0LL;
    v18 = *v74;
    v73 = 0LL;
    v19 = (*v18)((__int64)v74, &GUID_4a01eb05_4e42_41d4_b518_e008a5163614, &v73);
    v7 = v19;
    if ( v19 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x231,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
        (const char *)(unsigned int)v19);
      goto LABEL_121;
    }
    v62 = 0LL;
    v20 = v73;
    v21 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v73 + 56LL);
    WindowsDeleteString(0LL);
    v62 = 0LL;
    v22 = v21(v20, &v62);
    v7 = v22;
    if ( v22 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x234,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
        (const char *)(unsigned int)v22);
      goto LABEL_119;
    }
    StringRawBuffer = WindowsGetStringRawBuffer(v62, 0LL);
    if ( CompareStringOrdinal(StringRawBuffer, -1, L"consumers", -1, 0) == 2 )
      break;
LABEL_55:
    WindowsDeleteString(v62);
    v62 = 0LL;
    if ( v73 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v73 + 16LL))(v73);
    if ( v74 )
      ((void (__fastcall *)(__int64 (__fastcall ***)(__int64, GUID *, __int64 *)))(*v74)[2])(v74);
    if ( v63 )
      (*(void (__fastcall **)(__int64 *))(*v63 + 16))(v63);
    if ( ++v13 >= (unsigned int)v61 )
      goto LABEL_62;
  }
  v66 = 0LL;
  string = 0LL;
  v24 = WindowsCreateStringReference(
          L"Windows.Security.Authentication.Web.Core.WebAuthenticationCoreManager",
          0x45u,
          &hstringHeader,
          &string);
  if ( v24 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v24);
LABEL_130:
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v5);
LABEL_131:
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v27);
    JUMPOUT(0x18000EFD0LL);
  }
  v25 = v66;
  v66 = 0LL;
  if ( v25 )
    (*(void (__fastcall **)(__int64 *))(*v25 + 16))(v25);
  v26 = RoGetActivationFactory(string, &GUID_6aca7c92_a581_4479_9c10_752eff44fd34, &v66);
  v7 = v26;
  if ( v26 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x239,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v26);
    goto LABEL_116;
  }
  v65 = 0LL;
  string = 0LL;
  v27 = WindowsCreateStringReference(
          L"Windows.Security.Authentication.Web.Core.WebTokenRequest",
          0x38u,
          &hstringHeader,
          &string);
  if ( v27 < 0 )
    goto LABEL_131;
  v28 = v65;
  v65 = 0LL;
  if ( v28 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
  v29 = RoGetActivationFactory(string, &GUID_6cf2141c_0ff0_4c67_b84f_99ddbe4a72c9, &v65);
  v7 = v29;
  if ( v29 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x23C,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v29);
    goto LABEL_113;
  }
  v72 = 0LL;
  v30 = *v63;
  v72 = 0LL;
  v31 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v30 + 48))(v63, &v72);
  v7 = v31;
  if ( v31 >= 0 )
  {
    v64 = 0LL;
    v60 = 0LL;
    v32 = v65;
    v33 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, _DWORD, _QWORD **))(*(_QWORD *)v65 + 56LL);
    v34 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, &off_1800D86A0);
    v35 = v64;
    v64 = 0LL;
    if ( v35 )
      (*(void (__fastcall **)(_QWORD *, _QWORD))(*v35 + 16LL))(v35, *v35);
    v36 = v33(v32, v72, *(_QWORD *)(a1 + 8), *(_QWORD *)(v34 + 24), 0, &v64);
    v7 = v36;
    if ( v36 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x243,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
        (const char *)(unsigned int)v36);
LABEL_105:
      if ( v60 )
        (*(void (__fastcall **)(__int64 *))(*v60 + 16))(v60);
      if ( v64 )
        (*(void (__fastcall **)(_QWORD *))(*v64 + 16LL))(v64);
      goto LABEL_110;
    }
    v71 = 0LL;
    v37 = *v66;
    v71 = 0LL;
    v38 = (*(__int64 (__fastcall **)(__int64 *, _QWORD *, __int64 *, __int64 *))(v37 + 56))(v66, v64, v63, &v71);
    v7 = v38;
    if ( v38 < 0 )
    {
      v58 = 582LL;
    }
    else
    {
      v39 = v60;
      v60 = 0LL;
      if ( v39 )
        (*(void (__fastcall **)(__int64 *))(*v39 + 16))(v39);
      v40 = v71;
      v7 = wil::details::WaitForCompletion<Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Web::Core::WebTokenRequestResult *> *>(v71);
      if ( v7 >= 0 )
        v7 = (*(__int64 (__fastcall **)(__int64, __int64 **))(*(_QWORD *)v40 + 64LL))(v40, &v60);
      if ( v7 < 0 )
      {
        v59 = (unsigned int)v7;
        v58 = 584LL;
LABEL_101:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v58,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
          (const char *)v59);
LABEL_102:
        if ( v71 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v71 + 16LL))(v71);
        goto LABEL_105;
      }
      v38 = (*(__int64 (__fastcall **)(__int64 *, int *))(*v60 + 56))(v60, &v78);
      v7 = v38;
      if ( v38 >= 0 )
      {
        if ( v78 )
        {
          v69 = 0LL;
          v41 = *v60;
          v69 = 0LL;
          v42 = (*(__int64 (__fastcall **)(__int64 *, __int64 **))(v41 + 64))(v60, &v69);
          v7 = v42;
          if ( v42 < 0 )
          {
            v46 = 605LL;
          }
          else
          {
            v42 = (*(__int64 (__fastcall **)(__int64 *, int *))(*v69 + 48))(v69, &v79);
            v7 = v42;
            if ( v42 >= 0 )
            {
              v4 = v79;
              if ( v69 )
                (*(void (__fastcall **)(__int64 *))(*v69 + 16))(v69);
              if ( v71 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v71 + 16LL))(v71);
              if ( v60 )
                (*(void (__fastcall **)(__int64 *))(*v60 + 16))(v60);
              if ( v64 )
                (*(void (__fastcall **)(_QWORD *))(*v64 + 16LL))(v64);
              if ( v72 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v72 + 16LL))(v72);
              if ( v65 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v65 + 16LL))(v65);
              if ( v66 )
                (*(void (__fastcall **)(__int64 *))(*v66 + 16))(v66);
              goto LABEL_55;
            }
            v46 = 607LL;
          }
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v46,
            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
            (const char *)(unsigned int)v42);
          v47 = v69;
          goto LABEL_95;
        }
        v70 = 0LL;
        v48 = *v60;
        v70 = 0LL;
        v49 = (*(__int64 (__fastcall **)(__int64 *, __int64 **))(v48 + 48))(v60, &v70);
        v7 = v49;
        if ( v49 < 0 )
        {
          v50 = (unsigned int)v49;
          v51 = 591LL;
LABEL_82:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v51,
            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
            (const char *)v50);
LABEL_94:
          v47 = v70;
LABEL_95:
          if ( v47 )
            (*(void (__fastcall **)(__int64 *))(*v47 + 16))(v47);
          goto LABEL_102;
        }
        v68 = 0;
        v52 = (*(__int64 (__fastcall **)(__int64 *, int *))(*v70 + 56))(v70, &v68);
        v7 = v52;
        if ( v52 < 0 )
        {
          v50 = (unsigned int)v52;
          v51 = 593LL;
          goto LABEL_82;
        }
        if ( v68 != 1 )
        {
          v7 = -2147418113;
          v50 = 2147549183LL;
          v51 = 594LL;
          goto LABEL_82;
        }
        v77 = 0LL;
        v53 = *v70;
        v77 = 0LL;
        v54 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64 *))(v53 + 48))(v70, 0LL, &v77);
        v7 = v54;
        if ( v54 >= 0 )
        {
          v54 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v77 + 48LL))(v77, v80);
          v7 = v54;
          if ( v54 >= 0 )
          {
            v56 = v80[0];
            v57 = (HSTRING *)(a2 + 16);
            if ( !v80[0] || v80[0] != *v57 )
            {
              WindowsDeleteString(*v57);
              *v57 = 0LL;
              WindowsDuplicateString(v56, (HSTRING *)(a2 + 16));
            }
            v7 = 0;
            goto LABEL_92;
          }
          v55 = 597LL;
        }
        else
        {
          v55 = 596LL;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v55,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
          (const char *)(unsigned int)v54);
LABEL_92:
        if ( v77 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v77 + 16LL))(v77);
        goto LABEL_94;
      }
      v58 = 587LL;
    }
    v59 = (unsigned int)v38;
    goto LABEL_101;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x23F,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
    (const char *)(unsigned int)v31);
LABEL_110:
  if ( v72 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v72 + 16LL))(v72);
LABEL_113:
  if ( v65 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v65 + 16LL))(v65);
LABEL_116:
  if ( v66 )
    (*(void (__fastcall **)(__int64 *))(*v66 + 16))(v66);
LABEL_119:
  WindowsDeleteString(v62);
  v62 = 0LL;
LABEL_121:
  if ( v73 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v73 + 16LL))(v73);
LABEL_124:
  if ( v74 )
    ((void (__fastcall *)(__int64 (__fastcall ***)(__int64, GUID *, __int64 *)))(*v74)[2])(v74);
LABEL_127:
  if ( v63 )
    (*(void (__fastcall **)(__int64 *))(*v63 + 16))(v63);
LABEL_66:
  if ( v67 )
    (*(void (__fastcall **)(__int64 *))(*v67 + 16))(v67);
LABEL_68:
  if ( v75 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v75 + 16LL))(v75);
LABEL_70:
  if ( v76 )
    (*(void (__fastcall **)(_QWORD *, _QWORD))(*v76 + 16LL))(v76, *v76);
  return (unsigned int)v7;
}
