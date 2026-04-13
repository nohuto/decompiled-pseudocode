/*
 * XREFs of ?GetHasMobilityAccount@MobilityExperienceManager@@UEAAJPEAE@Z @ 0x180099570
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000366C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18000480C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??$WaitForCompletion@U?$IAsyncOperationCompletedHandler@PEAU?$IVectorView@PEAVWebAccount@Credentials@Security@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@U?$IAsyncOperation@PEAU?$IVectorView@PEAVWebAccount@Credentials@Security@Windows@@@Collections@Foundation@Windows@@@23@@@YAJPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVWebAccount@Credentials@Security@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z @ 0x180016294 (--$WaitForCompletion@U-$IAsyncOperationCompletedHandler@PEAU-$IVectorView@PEAVWebAccount@Credent.c)
 *     __security_check_cookie @ 0x1800C6A00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C7DF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall MobilityExperienceManager::GetHasMobilityAccount(
        MobilityExperienceManager *this,
        unsigned __int8 *a2)
{
  HRESULT v3; // eax
  int ActivationFactory; // eax
  int v5; // ebx
  int v6; // eax
  HRESULT v7; // edx
  __int64 v8; // r8
  int (__fastcall ***v9)(__int64, GUID *, __int64); // rdi
  int v10; // eax
  __int64 v11; // rcx
  int v12; // eax
  unsigned int v13; // edi
  unsigned int v14; // esi
  int v15; // eax
  int v16; // eax
  HRESULT v17; // eax
  HRESULT v18; // eax
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // rcx
  INT32 result; // [rsp+28h] [rbp-49h] BYREF
  HSTRING string1; // [rsp+30h] [rbp-41h] BYREF
  __int64 v26; // [rsp+38h] [rbp-39h] BYREF
  __int64 v27; // [rsp+40h] [rbp-31h] BYREF
  _QWORD *v28; // [rsp+48h] [rbp-29h] BYREF
  __int64 v29; // [rsp+50h] [rbp-21h]
  unsigned int v30; // [rsp+58h] [rbp-19h] BYREF
  int *v31; // [rsp+60h] [rbp-11h]
  int v32; // [rsp+68h] [rbp-9h] BYREF
  __int64 v33; // [rsp+70h] [rbp-1h] BYREF
  __int64 v34; // [rsp+78h] [rbp+7h] BYREF
  int (__fastcall ***v35[2])(__int64, GUID *, __int64); // [rsp+80h] [rbp+Fh] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+90h] [rbp+1Fh] BYREF
  HSTRING string; // [rsp+A8h] [rbp+37h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  v35[1] = (int (__fastcall ***)(__int64, GUID *, __int64))-2LL;
  *a2 = 0;
  v28 = 0LL;
  string = 0LL;
  v3 = WindowsCreateStringReference(
         L"Windows.Internal.Security.Authentication.Web.TokenBrokerInternal",
         0x40u,
         &hstringHeader,
         &string);
  if ( v3 < 0 )
  {
LABEL_62:
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v3);
    JUMPOUT(0x180099A20LL);
  }
  v28 = 0LL;
  ActivationFactory = RoGetActivationFactory(string, &GUID_07650a66_66ea_489d_aa90_0dabc75f3567, &v28);
  v5 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x34,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\mobilityexperience\\lib\\mobilityexperience.cpp",
      (const char *)(unsigned int)ActivationFactory);
    goto LABEL_58;
  }
  v35[0] = 0LL;
  v6 = (*(__int64 (__fastcall **)(_QWORD *, int (__fastcall ****)(__int64, GUID *, __int64)))(*v28 + 96LL))(v28, v35);
  v5 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x37,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\mobilityexperience\\lib\\mobilityexperience.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_56;
  }
  v34 = 0LL;
  v9 = v35[0];
  v5 = WaitForCompletion<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Foundation::Collections::IVectorView<Windows::Security::Credentials::WebAccount *> *>,Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Security::Credentials::WebAccount *> *>>(
         v35[0],
         v7,
         v8);
  if ( v5 < 0
    || (v5 = ((__int64 (__fastcall *)(int (__fastcall ***)(__int64, GUID *, __int64), __int64 *))(*v9)[8])(v9, &v34),
        v5 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3A,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\mobilityexperience\\lib\\mobilityexperience.cpp",
      (const char *)(unsigned int)v5);
    goto LABEL_54;
  }
  v29 = v34;
  v31 = &v32;
  v32 = 0;
  v33 = 0LL;
  v10 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v34 + 56LL))(v34, &v30);
  *v31 = v10;
  if ( v10 >= 0 && v30 )
  {
    v11 = v33;
    if ( v33 )
    {
      v33 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
    v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v29 + 48LL))(v29, 0LL, &v33);
    *v31 = v12;
  }
  v13 = 0;
  v14 = v30;
  while ( 1 )
  {
    if ( *v31 < 0 || v13 == v14 )
      goto LABEL_39;
    v27 = 0LL;
    v15 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v33 + 48LL))(v33, &v27);
    v5 = v15;
    if ( v15 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x40,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\mobilityexperience\\lib\\mobilityexperience.cpp",
        (const char *)(unsigned int)v15);
      goto LABEL_49;
    }
    v26 = 0LL;
    if ( (**(int (__fastcall ***)(__int64, GUID *, __int64 *))v27)(
           v27,
           &GUID_4a01eb05_4e42_41d4_b518_e008a5163614,
           &v26) < 0 )
      goto LABEL_24;
    string1 = 0LL;
    v16 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v26 + 56LL))(v26, &string1);
    v5 = v16;
    if ( v16 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x45,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\mobilityexperience\\lib\\mobilityexperience.cpp",
        (const char *)(unsigned int)v16);
LABEL_44:
      if ( string1 )
        WindowsDeleteString(string1);
      if ( v26 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
LABEL_49:
      if ( v27 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
      v22 = v33;
      if ( v33 )
      {
        v33 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
      }
      goto LABEL_54;
    }
    result = 0;
    string = 0LL;
    v17 = WindowsCreateStringReference(L"consumers", 9u, &hstringHeader, &string);
    if ( v17 < 0 )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v17);
      goto LABEL_62;
    }
    v18 = WindowsCompareStringOrdinal(string1, string, &result);
    v5 = v18;
    if ( v18 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x48,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\mobilityexperience\\lib\\mobilityexperience.cpp",
        (const char *)(unsigned int)v18);
      string = 0LL;
      goto LABEL_44;
    }
    string = 0LL;
    if ( !result )
      break;
    if ( string1 )
      WindowsDeleteString(string1);
LABEL_24:
    if ( v26 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
    if ( v27 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
    ++v13;
    if ( *v31 >= 0 && v13 < v30 )
    {
      v19 = v33;
      if ( v33 )
      {
        v33 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
      }
      v20 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v29 + 48LL))(v29, v13, &v33);
      *v31 = v20;
    }
  }
  *a2 = 1;
  if ( string1 )
    WindowsDeleteString(string1);
  if ( v26 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
  if ( v27 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
LABEL_39:
  v21 = v33;
  if ( v33 )
  {
    v33 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  }
  v5 = 0;
LABEL_54:
  if ( v34 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
LABEL_56:
  if ( v35[0] )
    (*((void (__fastcall **)(int (__fastcall ***)(__int64, GUID *, __int64)))*v35[0] + 2))(v35[0]);
LABEL_58:
  if ( v28 )
    (*(void (__fastcall **)(_QWORD *, _QWORD))(*v28 + 16LL))(v28, *v28);
  return (unsigned int)v5;
}
