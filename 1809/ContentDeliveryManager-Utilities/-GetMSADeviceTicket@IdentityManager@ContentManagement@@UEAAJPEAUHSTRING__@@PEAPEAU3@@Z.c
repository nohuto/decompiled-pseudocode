/*
 * XREFs of ?GetMSADeviceTicket@IdentityManager@ContentManagement@@UEAAJPEAUHSTRING__@@PEAPEAU3@@Z @ 0x18000D910
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000366C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18000480C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??0?$Vector@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@U?$DefaultEqualityPredicate@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@7895@U?$DefaultVectorOptions@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@7895@@Internal@Collections@Foundation@Windows@@QEAA@AEBU?$DefaultEqualityPredicate@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@1234@Upermission@01234@@Z @ 0x180017398 (--0-$Vector@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@U-$Defaul.c)
 *     ??$WaitForCompletion@U?$IAsyncOperationCompletedHandler@PEAVUserHostIdentity@WebAuthentication@Security@Internal@Windows@@@Foundation@Windows@@U?$IAsyncOperation@PEAVUserHostIdentity@WebAuthentication@Security@Internal@Windows@@@23@@@YAJPEAU?$IAsyncOperation@PEAVUserHostIdentity@WebAuthentication@Security@Internal@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z @ 0x180018B64 (--$WaitForCompletion@U-$IAsyncOperationCompletedHandler@PEAVUserHostIdentity@WebAuthentication@S.c)
 *     __security_check_cookie @ 0x1800C6A00 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800C6CF4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C7DF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall ContentManagement::IdentityManager::GetMSADeviceTicket(
        ContentManagement::IdentityManager *this,
        HSTRING a2,
        HSTRING *a3)
{
  HRESULT v5; // eax
  signed int v6; // edi
  HRESULT v7; // eax
  HSTRING v8; // rbx
  __int64 v9; // rcx
  int ActivationFactory; // eax
  __int64 v11; // rbx
  HRESULT v12; // eax
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rbx
  void *v16; // rax
  __int64 v17; // rsi
  __int64 v18; // rcx
  __int64 v19; // r14
  unsigned __int64 v20; // r9
  __int64 v21; // rdx
  int v22; // eax
  int v23; // eax
  unsigned __int64 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // rsi
  __int64 v27; // rcx
  int v28; // eax
  int v29; // eax
  __int64 v30; // rdx
  unsigned __int64 v31; // r9
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 v40; // [rsp+38h] [rbp-49h] BYREF
  __int64 v41; // [rsp+40h] [rbp-41h] BYREF
  __int64 v42; // [rsp+48h] [rbp-39h] BYREF
  __int64 v43; // [rsp+50h] [rbp-31h] BYREF
  int v44; // [rsp+58h] [rbp-29h] BYREF
  __int64 v45; // [rsp+60h] [rbp-21h] BYREF
  __int64 v46; // [rsp+68h] [rbp-19h] BYREF
  __int64 v47; // [rsp+70h] [rbp-11h] BYREF
  _QWORD v48[2]; // [rsp+78h] [rbp-9h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+88h] [rbp+7h] BYREF
  HSTRING string; // [rsp+A0h] [rbp+1Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]

  v48[1] = -2LL;
  *a3 = 0LL;
  v40 = 0LL;
  string = 0LL;
  v5 = WindowsCreateStringReference(
         L"Windows.Internal.Security.WebAuthentication.AuthenticationManager",
         0x41u,
         &hstringHeader,
         &string);
  if ( v5 < 0 )
  {
LABEL_72:
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v5);
    goto LABEL_73;
  }
  v40 = 0LL;
  v6 = RoActivateInstance(string, &v46);
  if ( v6 < 0 )
    goto LABEL_67;
  if ( *(_QWORD *)&GUID_eb2c0c45_76f9_4a0a_bb73_fcf47d73a4eb.Data1 == *(_QWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data1
    && *(_QWORD *)GUID_eb2c0c45_76f9_4a0a_bb73_fcf47d73a4eb.Data4 == *(_QWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4 )
  {
    v40 = v46;
  }
  else
  {
    v6 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v46)(
           v46,
           &GUID_eb2c0c45_76f9_4a0a_bb73_fcf47d73a4eb,
           &v40);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v46 + 16LL))(v46);
  }
  if ( v6 < 0 )
  {
LABEL_67:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1DC,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_68;
  }
  v43 = 0LL;
  string = 0LL;
  v7 = WindowsCreateStringReference(
         L"Windows.Security.Authentication.OnlineId.OnlineIdServiceTicketRequest",
         0x45u,
         &hstringHeader,
         &string);
  if ( v7 < 0 )
  {
LABEL_73:
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v7);
    JUMPOUT(0x18000DE72LL);
  }
  v8 = string;
  v9 = v43;
  if ( v43 )
  {
    v43 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  ActivationFactory = RoGetActivationFactory(v8, &GUID_bebb0a08_9e73_4077_9614_08614c0bc245, &v43);
  v6 = ActivationFactory;
  if ( ActivationFactory >= 0 )
  {
    v42 = 0LL;
    v11 = v43;
    string = 0LL;
    v12 = WindowsCreateStringReference(L"MBI_SSL", 7u, &hstringHeader, &string);
    if ( v12 >= 0 )
    {
      v13 = v42;
      if ( v42 )
      {
        v42 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
      }
      v14 = (*(__int64 (__fastcall **)(__int64, HSTRING, HSTRING, __int64 *))(*(_QWORD *)v11 + 48LL))(
              v11,
              a2,
              string,
              &v42);
      v6 = v14;
      if ( v14 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1E7,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
          (const char *)(unsigned int)v14);
LABEL_63:
        v36 = v42;
        if ( v42 )
        {
          v42 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
        }
        goto LABEL_65;
      }
      v15 = 0LL;
      v46 = 0LL;
      v16 = operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
      v17 = 0LL;
      if ( v16 )
        v17 = Windows::Foundation::Collections::Internal::Vector<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *>>::Vector<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *>>(v16);
      v6 = v17 == 0 ? 0x8007000E : 0;
      v18 = v17;
      v19 = 0LL;
      if ( v17 )
      {
        v15 = v17;
        v46 = v17;
        v18 = 0LL;
        v19 = v17;
      }
      if ( v18 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
      if ( !v17 )
      {
        v20 = (unsigned int)v6;
        v21 = 490LL;
LABEL_28:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v21,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
          (const char *)v20);
LABEL_61:
        if ( v15 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
        goto LABEL_63;
      }
      v22 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v15 + 104LL))(v15, v42);
      v6 = v22;
      if ( v22 < 0 )
      {
        v20 = (unsigned int)v22;
        v21 = 491LL;
        goto LABEL_28;
      }
      v48[0] = 0LL;
      v41 = 0LL;
      v23 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD *))(*(_QWORD *)v40 + 64LL))(v40, v19 + 16, v48);
      v6 = v23;
      if ( v23 < 0 )
      {
        v24 = (unsigned int)v23;
        v25 = 496LL;
LABEL_56:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v25,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
          (const char *)v24);
LABEL_57:
        v34 = v41;
        if ( v41 )
        {
          v41 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
        }
        v35 = v48[0];
        if ( v48[0] )
        {
          v48[0] = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
        }
        goto LABEL_61;
      }
      v26 = v48[0];
      v27 = v41;
      if ( v41 )
      {
        v41 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
      }
      v6 = WaitForCompletion<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Internal::Security::WebAuthentication::UserHostIdentity *>,Windows::Foundation::IAsyncOperation<Windows::Internal::Security::WebAuthentication::UserHostIdentity *>>(v26);
      if ( v6 < 0 || (v6 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v26 + 64LL))(v26, &v41), v6 < 0) )
      {
        v25 = 497LL;
        goto LABEL_55;
      }
      if ( !v41 )
      {
        v6 = -2147023728;
        v25 = 498LL;
LABEL_55:
        v24 = (unsigned int)v6;
        goto LABEL_56;
      }
      v47 = 0LL;
      v28 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v41 + 48LL))(v41, &v47);
      v6 = v28;
      if ( v28 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1F6,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
          (const char *)(unsigned int)v28);
LABEL_52:
        v33 = v47;
        if ( v47 )
        {
          v47 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
        }
        goto LABEL_57;
      }
      v45 = 0LL;
      v29 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v47 + 48LL))(v47, 0LL, &v45);
      v6 = v29;
      if ( v29 >= 0 )
      {
        v44 = 0;
        v29 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v45 + 64LL))(v45, &v44);
        v6 = v29;
        if ( v29 >= 0 )
        {
          v6 = v44;
          if ( v44 < 0 )
          {
            v31 = (unsigned int)v44;
            v30 = 509LL;
LABEL_48:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v30,
              (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
              (const char *)v31);
            goto LABEL_50;
          }
          v29 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v45 + 48LL))(v45, a3);
          v6 = v29;
          if ( v29 >= 0 )
          {
            v6 = 0;
LABEL_50:
            v32 = v45;
            if ( v45 )
            {
              v45 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
            }
            goto LABEL_52;
          }
          v30 = 510LL;
        }
        else
        {
          v30 = 508LL;
        }
      }
      else
      {
        v30 = 505LL;
      }
      v31 = (unsigned int)v29;
      goto LABEL_48;
    }
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v12);
    goto LABEL_72;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1E1,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
    (const char *)(unsigned int)ActivationFactory);
LABEL_65:
  v37 = v43;
  if ( v43 )
  {
    v43 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
  }
LABEL_68:
  v38 = v40;
  if ( v40 )
  {
    v40 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 16LL))(v38);
  }
  return (unsigned int)v6;
}
