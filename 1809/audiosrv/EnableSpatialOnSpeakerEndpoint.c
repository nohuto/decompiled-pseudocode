/*
 * XREFs of EnableSpatialOnSpeakerEndpoint @ 0x18010F954
 * Callers:
 *     DisableSpatialOnInternalSpeakers @ 0x18010F82C (DisableSpatialOnInternalSpeakers.c)
 *     ReconsiderSpatialOnComboEndpoints @ 0x180110244 (ReconsiderSpatialOnComboEndpoints.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000FCFC (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18004C07C (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?LogPolicySpatialOnSpeakerEndpointEnabled@@YAXPEBG0_N@Z @ 0x180110AC0 (-LogPolicySpatialOnSpeakerEndpointEnabled@@YAXPEBG0_N@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall EnableSpatialOnSpeakerEndpoint(__int64 a1, const unsigned __int16 *a2, bool a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // edi
  int v9; // eax
  PROPVARIANT pvar; // [rsp+28h] [rbp-18h] BYREF
  __int64 v12; // [rsp+30h] [rbp-10h]
  __int64 v13; // [rsp+38h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  LPVOID pv; // [rsp+70h] [rbp+30h] BYREF
  __int64 v16; // [rsp+88h] [rbp+48h] BYREF

  v16 = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)a1 + 32LL))(a1, 2LL, &v16);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      361LL,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\spatialpolicy.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_13;
  }
  pvar = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  v8 = (*(__int64 (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v16 + 40LL))(
         v16,
         &PKEY_Endpoint_SpatialNotAllowed,
         &pvar);
  if ( v8 < 0
    || (_WORD)pvar == 11 && (_WORD)v12 == a3 - 1
    || (PropVariantClear(&pvar),
        LOWORD(pvar) = 11,
        LOWORD(v12) = a3 - 1,
        v8 = (*(__int64 (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v16 + 48LL))(
               v16,
               &PKEY_Endpoint_SpatialNotAllowed,
               &pvar),
        v8 < 0) )
  {
LABEL_12:
    v7 = v8;
    goto LABEL_13;
  }
  pv = 0LL;
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>::reset(
    &pv,
    0LL);
  v9 = (*(__int64 (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)a1 + 40LL))(a1, &pv);
  v7 = v9;
  if ( v9 >= 0 )
  {
    LogPolicySpatialOnSpeakerEndpointEnabled((const unsigned __int16 *)pv, a2, a3);
    if ( pv )
      CoTaskMemFree(pv);
    goto LABEL_12;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    384LL,
    (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\spatialpolicy.cpp",
    (const char *)(unsigned int)v9);
  if ( pv )
    CoTaskMemFree(pv);
LABEL_13:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v16);
  return v7;
}
