/*
 * XREFs of ?UpdateAPOEnableStatus@CEndpointCharacteristics@@QEAAJXZ @ 0x18010D678
 * Callers:
 *     ?ProcessPropertyChange@CEndpointCharacteristics@@QEAAXPEAUIPolicyConfig@@AEBU_tagpropertykey@@PEAH@Z @ 0x18001FD48 (-ProcessPropertyChange@CEndpointCharacteristics@@QEAAXPEAUIPolicyConfig@@AEBU_tagpropertykey@@PE.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000FCFC (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     _TlgWrite @ 0x180025550 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800255F0 (_TlgKeywordOn.c)
 *     ?AreEnhancementsEnabled@CEndpointCharacteristics@@QEAAHXZ @ 0x18003DAF8 (-AreEnhancementsEnabled@CEndpointCharacteristics@@QEAAHXZ.c)
 *     _TlgCreateWsz @ 0x18004148C (_TlgCreateWsz.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18004C07C (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?AreAllNonCriticalAPOsDisabled@CEndpointCharacteristics@@QEAAHXZ @ 0x180108D40 (-AreAllNonCriticalAPOsDisabled@CEndpointCharacteristics@@QEAAHXZ.c)
 *     ?InitializeAPOInfo@CEndpointCharacteristics@@AEAAJXZ @ 0x18010BBCC (-InitializeAPOInfo@CEndpointCharacteristics@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CEndpointCharacteristics::UpdateAPOEnableStatus(CEndpointCharacteristics *this)
{
  int v2; // esi
  _DWORD *v3; // r14
  bool v4; // bl
  LPCGUID v5; // r8
  LPCGUID v6; // r9
  __int64 (__fastcall ***v7)(_QWORD, GUID *, __int64 *); // rcx
  int v8; // eax
  unsigned int v9; // ebx
  int v10; // eax
  LPCGUID v11; // r8
  LPCGUID v12; // r9
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // r9
  LPCWSTR pwsz; // [rsp+38h] [rbp-89h] BYREF
  LPCWSTR v18; // [rsp+40h] [rbp-81h] BYREF
  PROPVARIANT pvar; // [rsp+48h] [rbp-79h] BYREF
  __int64 v20; // [rsp+50h] [rbp-71h]
  __int64 v21; // [rsp+58h] [rbp-69h]
  __int64 v22; // [rsp+60h] [rbp-61h] BYREF
  LPCWSTR v23; // [rsp+68h] [rbp-59h] BYREF
  int v24; // [rsp+70h] [rbp-51h] BYREF
  __int64 v25; // [rsp+78h] [rbp-49h]
  PROPVARIANT *p_pvar; // [rsp+80h] [rbp-41h]
  char v27; // [rsp+88h] [rbp-39h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+98h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+B8h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v30; // [rsp+C8h] [rbp+7h] BYREF
  int *v31; // [rsp+D8h] [rbp+17h]
  __int64 v32; // [rsp+E0h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+120h] [rbp+5Fh]

  v25 = -2LL;
  pvar = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  p_pvar = &pvar;
  v27 = 1;
  v2 = 1;
  v3 = (_DWORD *)((char *)this + 220);
  while ( 1 )
  {
    v4 = 0;
    if ( !*((_DWORD *)this + 53) )
    {
      if ( !*((_DWORD *)this + 52) )
        CEndpointCharacteristics::InitializeAPOInfo(this);
      if ( *v3 )
        goto LABEL_30;
    }
    if ( (unsigned int)CEndpointCharacteristics::AreAllNonCriticalAPOsDisabled(this) )
      goto LABEL_30;
    if ( (*(int (__fastcall **)(_QWORD, char *, PROPVARIANT *))(**((_QWORD **)this + 5) + 40LL))(
           *((_QWORD *)this + 5),
           &byte_1801B24F0[20 * v2],
           &pvar) >= 0
      && (_WORD)pvar == 19
      && (unsigned int)v20 >= 0x64 )
    {
      v4 = 1;
    }
    else
    {
      PropVariantClear(&pvar);
      if ( (*(int (__fastcall **)(_QWORD, char *, PROPVARIANT *))(**((_QWORD **)this + 5) + 40LL))(
             *((_QWORD *)this + 5),
             &byte_1801B2540[20 * v2],
             &pvar) >= 0
        && (_WORD)pvar == 19 )
      {
        v4 = (unsigned int)v20 >= 0x64;
      }
    }
    PropVariantClear(&pvar);
    if ( !v4 )
      goto LABEL_30;
    pwsz = 0LL;
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>::reset(
      (void **)&pwsz,
      0LL);
    if ( (*(int (__fastcall **)(_QWORD, LPCWSTR *))(**((_QWORD **)this + 2) + 40LL))(*((_QWORD *)this + 2), &pwsz) >= 0 )
    {
      v23 = 0LL;
      wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>::reset(
        (void **)&v23,
        0LL);
      mmdDevGetInstanceIdFromMMDeviceId(pwsz, &v23);
      if ( (unsigned int)hProvider > 4 && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x200000000000uLL) )
      {
        TlgCreateWsz(&pDesc, pwsz);
        TlgCreateWsz(&v30, v23);
        v24 = v2;
        v31 = &v24;
        v32 = 4LL;
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180174E62, v5, v6, 5u, &pData);
      }
      if ( v23 )
        CoTaskMemFree((LPVOID)v23);
    }
    v7 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 2);
    v22 = 0LL;
    v8 = (**v7)(v7, &GUID_a4566d7a_c8f5_4150_0b7b_4ee7e744fc5c, &v22);
    v9 = v8;
    if ( v8 < 0 )
      break;
    v18 = 0LL;
    v10 = (*(__int64 (__fastcall **)(__int64, __int64, LPCWSTR *))(*(_QWORD *)v22 + 40LL))(v22, 2LL, &v18);
    v9 = v10;
    if ( v10 < 0 )
    {
      v14 = 551LL;
LABEL_48:
      v15 = (unsigned int)v10;
LABEL_49:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        v14,
        (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)v15);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v18);
      goto LABEL_51;
    }
    if ( !v18 )
    {
      v9 = -2147024894;
      v15 = 2147942402LL;
      v14 = 552LL;
      goto LABEL_49;
    }
    LOWORD(pvar) = 19;
    LODWORD(v20) = 1;
    v10 = (*(__int64 (__fastcall **)(LPCWSTR, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v18 + 48LL))(
            v18,
            &PKEY_AudioEndpoint_Disable_SysFx,
            &pvar);
    v9 = v10;
    if ( v10 < 0 )
    {
      v14 = 556LL;
      goto LABEL_48;
    }
    v10 = (*(__int64 (__fastcall **)(_QWORD, void *, PROPVARIANT *))(**((_QWORD **)this + 5) + 48LL))(
            *((_QWORD *)this + 5),
            &PKEY_Endpoint_AllNonCriticalAPOsDisabled,
            &pvar);
    v9 = v10;
    if ( v10 < 0 )
    {
      v14 = 560LL;
      goto LABEL_48;
    }
    if ( !*((_QWORD *)this + 8) )
    {
      v10 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v22 + 40LL))(v22, 0LL);
      v9 = v10;
      if ( v10 < 0 )
      {
        v14 = 565LL;
        goto LABEL_48;
      }
    }
    PropVariantClear(&pvar);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v18);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v22);
    if ( pwsz )
      CoTaskMemFree((LPVOID)pwsz);
LABEL_30:
    ++v2;
    ++v3;
    if ( v2 >= 4 )
    {
      if ( CEndpointCharacteristics::AreEnhancementsEnabled(this)
        && (unsigned int)CEndpointCharacteristics::AreAllNonCriticalAPOsDisabled(this) )
      {
        pwsz = 0LL;
        wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>::reset(
          (void **)&pwsz,
          0LL);
        if ( (*(int (__fastcall **)(_QWORD, LPCWSTR *))(**((_QWORD **)this + 2) + 40LL))(*((_QWORD *)this + 2), &pwsz) >= 0 )
        {
          v18 = 0LL;
          wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>::reset(
            (void **)&v18,
            0LL);
          mmdDevGetInstanceIdFromMMDeviceId(pwsz, &v18);
          if ( (unsigned int)hProvider > 4 && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x200000000000uLL) )
          {
            TlgCreateWsz(&pDesc, pwsz);
            TlgCreateWsz(&v30, v18);
            TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180174E13, v11, v12, 4u, &pData);
          }
          if ( v18 )
            CoTaskMemFree((LPVOID)v18);
        }
        LOWORD(pvar) = 19;
        LODWORD(v20) = 0;
        v13 = (*(__int64 (__fastcall **)(_QWORD, void *, PROPVARIANT *))(**((_QWORD **)this + 5) + 48LL))(
                *((_QWORD *)this + 5),
                &PKEY_Endpoint_AllNonCriticalAPOsDisabled,
                &pvar);
        v9 = v13;
        if ( v13 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            593LL,
            (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
            (const char *)(unsigned int)v13);
          goto LABEL_41;
        }
        PropVariantClear(&pvar);
        if ( pwsz )
          CoTaskMemFree((LPVOID)pwsz);
      }
      v9 = 0;
      goto LABEL_55;
    }
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    549LL,
    (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)(unsigned int)v8);
LABEL_51:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v22);
LABEL_41:
  if ( pwsz )
    CoTaskMemFree((LPVOID)pwsz);
LABEL_55:
  PropVariantClear(&pvar);
  return v9;
}
