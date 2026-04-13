/*
 * XREFs of ?GetMSADeviceTicket@IdentityManager@ContentManagement@@UEAAJPEAUHSTRING__@@PEAPEAU3@@Z @ 0x18000DEF0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003584 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18000482C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??0?$Vector@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@U?$DefaultEqualityPredicate@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@7895@U?$DefaultVectorOptions@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@7895@@Internal@Collections@Foundation@Windows@@QEAA@AEBU?$DefaultEqualityPredicate@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@1234@Upermission@01234@@Z @ 0x180017AB8 (--0-$Vector@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@U-$Defaul.c)
 *     ??$WaitForCompletion@U?$IAsyncOperationCompletedHandler@PEAVUserHostIdentity@WebAuthentication@Security@Internal@Windows@@@Foundation@Windows@@U?$IAsyncOperation@PEAVUserHostIdentity@WebAuthentication@Security@Internal@Windows@@@23@@@YAJPEAU?$IAsyncOperation@PEAVUserHostIdentity@WebAuthentication@Security@Internal@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z @ 0x1800192AC (--$WaitForCompletion@U-$IAsyncOperationCompletedHandler@PEAVUserHostIdentity@WebAuthentication@S.c)
 *     __security_check_cookie @ 0x1800CAA90 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800CAD84 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBEA0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall ContentManagement::IdentityManager::GetMSADeviceTicket(
        ContentManagement::IdentityManager *this,
        HSTRING a2,
        HSTRING *a3)
{
  HRESULT v5; // eax
  int v6; // ebx
  HRESULT v7; // eax
  HSTRING v8; // rbx
  __int64 v9; // rcx
  int ActivationFactory; // eax
  __int64 v11; // rbx
  __int64 (__fastcall *v12)(__int64, HSTRING, HSTRING, _QWORD **); // rdi
  HRESULT v13; // eax
  __int64 v14; // rdx
  _QWORD *v15; // rcx
  int v16; // eax
  void *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  unsigned __int64 v20; // r9
  __int64 v21; // rdx
  int v22; // eax
  int v23; // eax
  unsigned __int64 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // rdi
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
  _QWORD *v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // rcx
  __int64 v41; // [rsp+38h] [rbp-49h] BYREF
  __int64 v42; // [rsp+40h] [rbp-41h] BYREF
  __int64 v43; // [rsp+48h] [rbp-39h]
  _QWORD *v44; // [rsp+50h] [rbp-31h] BYREF
  __int64 v45; // [rsp+58h] [rbp-29h] BYREF
  int v46; // [rsp+60h] [rbp-21h] BYREF
  __int64 v47; // [rsp+68h] [rbp-19h] BYREF
  __int64 v48; // [rsp+70h] [rbp-11h] BYREF
  __int64 v49; // [rsp+78h] [rbp-9h] BYREF
  _QWORD v50[2]; // [rsp+80h] [rbp-1h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+90h] [rbp+Fh] BYREF
  HSTRING string; // [rsp+A8h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]

  v50[1] = -2LL;
  *a3 = 0LL;
  v41 = 0LL;
  string = 0LL;
  v5 = WindowsCreateStringReference(
         L"Windows.Internal.Security.WebAuthentication.AuthenticationManager",
         0x41u,
         &hstringHeader,
         &string);
  if ( v5 < 0 )
  {
LABEL_74:
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v5);
    goto LABEL_75;
  }
  v41 = 0LL;
  v6 = RoActivateInstance(string, v50);
  if ( v6 < 0 )
    goto LABEL_69;
  if ( *(_QWORD *)&GUID_eb2c0c45_76f9_4a0a_bb73_fcf47d73a4eb.Data1 == *(_QWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data1
    && *(_QWORD *)GUID_eb2c0c45_76f9_4a0a_bb73_fcf47d73a4eb.Data4 == *(_QWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4 )
  {
    v41 = v50[0];
  }
  else
  {
    v6 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))v50[0])(
           v50[0],
           &GUID_eb2c0c45_76f9_4a0a_bb73_fcf47d73a4eb,
           &v41);
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v50[0] + 16LL))(v50[0]);
  }
  if ( v6 < 0 )
  {
LABEL_69:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1DC,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_70;
  }
  v45 = 0LL;
  string = 0LL;
  v7 = WindowsCreateStringReference(
         L"Windows.Security.Authentication.OnlineId.OnlineIdServiceTicketRequest",
         0x45u,
         &hstringHeader,
         &string);
  if ( v7 < 0 )
  {
LABEL_75:
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v7);
    JUMPOUT(0x18000E455LL);
  }
  v8 = string;
  v9 = v45;
  if ( v45 )
  {
    v45 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  ActivationFactory = RoGetActivationFactory(v8, &GUID_bebb0a08_9e73_4077_9614_08614c0bc245, &v45);
  v6 = ActivationFactory;
  if ( ActivationFactory >= 0 )
  {
    v44 = 0LL;
    v11 = v45;
    v12 = *(__int64 (__fastcall **)(__int64, HSTRING, HSTRING, _QWORD **))(*(_QWORD *)v45 + 48LL);
    string = 0LL;
    v13 = WindowsCreateStringReference(L"MBI_SSL", 7u, &hstringHeader, &string);
    if ( v13 >= 0 )
    {
      v15 = v44;
      if ( v44 )
      {
        v44 = 0LL;
        (*(void (__fastcall **)(_QWORD *, __int64, _QWORD))(*v15 + 16LL))(v15, v14, *v15);
      }
      v16 = v12(v11, a2, string, &v44);
      v6 = v16;
      if ( v16 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1E7,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
          (const char *)(unsigned int)v16);
LABEL_65:
        v37 = v44;
        if ( v44 )
        {
          v44 = 0LL;
          (*(void (__fastcall **)(_QWORD *))(*v37 + 16LL))(v37);
        }
        goto LABEL_67;
      }
      v43 = 0LL;
      v6 = 0;
      v17 = operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
      v18 = 0LL;
      if ( !v17
        || (v18 = Windows::Foundation::Collections::Internal::Vector<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *>>::Vector<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *>>(
                    v17,
                    0LL)) == 0 )
      {
        v6 = -2147024882;
      }
      if ( v6 < 0 )
      {
        v19 = v43;
      }
      else
      {
        v19 = v18;
        v43 = v18;
        v18 = 0LL;
      }
      if ( v18 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
        v19 = v43;
      }
      if ( v6 < 0 )
      {
        v20 = (unsigned int)v6;
        v21 = 490LL;
LABEL_30:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v21,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
          (const char *)v20);
LABEL_63:
        v36 = v43;
        if ( v43 )
        {
          v43 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
        }
        goto LABEL_65;
      }
      v22 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v19 + 104LL))(v19, v44);
      v6 = v22;
      if ( v22 < 0 )
      {
        v20 = (unsigned int)v22;
        v21 = 491LL;
        goto LABEL_30;
      }
      v49 = 0LL;
      v42 = 0LL;
      v23 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v41 + 64LL))(
              v41,
              (v43 + 16) & -(__int64)(v43 != 0),
              &v49);
      v6 = v23;
      if ( v23 < 0 )
      {
        v24 = (unsigned int)v23;
        v25 = 496LL;
LABEL_58:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v25,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
          (const char *)v24);
LABEL_59:
        v34 = v42;
        if ( v42 )
        {
          v42 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
        }
        v35 = v49;
        if ( v49 )
        {
          v49 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
        }
        goto LABEL_63;
      }
      v26 = v49;
      v27 = v42;
      if ( v42 )
      {
        v42 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
      }
      v6 = WaitForCompletion<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Internal::Security::WebAuthentication::UserHostIdentity *>,Windows::Foundation::IAsyncOperation<Windows::Internal::Security::WebAuthentication::UserHostIdentity *>>(v26);
      if ( v6 < 0 || (v6 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v26 + 64LL))(v26, &v42), v6 < 0) )
      {
        v25 = 497LL;
        goto LABEL_57;
      }
      if ( !v42 )
      {
        v6 = -2147023728;
        v25 = 498LL;
LABEL_57:
        v24 = (unsigned int)v6;
        goto LABEL_58;
      }
      v48 = 0LL;
      v28 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v42 + 48LL))(v42, &v48);
      v6 = v28;
      if ( v28 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1F6,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
          (const char *)(unsigned int)v28);
LABEL_54:
        v33 = v48;
        if ( v48 )
        {
          v48 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
        }
        goto LABEL_59;
      }
      v47 = 0LL;
      v29 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v48 + 48LL))(v48, 0LL, &v47);
      v6 = v29;
      if ( v29 >= 0 )
      {
        v46 = 0;
        v29 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v47 + 64LL))(v47, &v46);
        v6 = v29;
        if ( v29 >= 0 )
        {
          v6 = v46;
          if ( v46 < 0 )
          {
            v31 = (unsigned int)v46;
            v30 = 509LL;
LABEL_50:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v30,
              (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
              (const char *)v31);
            goto LABEL_52;
          }
          v29 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v47 + 48LL))(v47, a3);
          v6 = v29;
          if ( v29 >= 0 )
          {
            v6 = 0;
LABEL_52:
            v32 = v47;
            if ( v47 )
            {
              v47 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
            }
            goto LABEL_54;
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
      goto LABEL_50;
    }
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v13);
    goto LABEL_74;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1E1,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
    (const char *)(unsigned int)ActivationFactory);
LABEL_67:
  v38 = v45;
  if ( v45 )
  {
    v45 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 16LL))(v38);
  }
LABEL_70:
  v39 = v41;
  if ( v41 )
  {
    v41 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 16LL))(v39);
  }
  return (unsigned int)v6;
}
