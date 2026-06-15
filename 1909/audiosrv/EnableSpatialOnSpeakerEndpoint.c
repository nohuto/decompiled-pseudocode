/*
 * XREFs of EnableSpatialOnSpeakerEndpoint @ 0x18000570C
 * Callers:
 *     ReconsiderSpatialOnComboEndpoints @ 0x180005594 (ReconsiderSpatialOnComboEndpoints.c)
 *     DisableSpatialOnInternalSpeakers @ 0x18011C9EC (DisableSpatialOnInternalSpeakers.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800034B4 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A58 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18003E870 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     ?LogPolicySpatialOnSpeakerEndpointEnabled@@YAXPEBG0_N@Z @ 0x18011CE9C (-LogPolicySpatialOnSpeakerEndpointEnabled@@YAXPEBG0_N@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall EnableSpatialOnSpeakerEndpoint(__int64 a1, const unsigned __int16 *a2, bool a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // edi
  int v10; // eax
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
      (void *)0x113,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\spatialpolicy.cpp",
      (const char *)(unsigned int)v6,
      -2);
    goto LABEL_6;
  }
  pvar = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  v8 = (*(__int64 (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v16 + 40LL))(
         v16,
         &PKEY_Endpoint_SpatialNotAllowed,
         &pvar);
  if ( v8 < 0 || (_WORD)pvar == 11 && (_WORD)v12 == a3 - 1 )
    goto LABEL_5;
  PropVariantClear(&pvar);
  LOWORD(pvar) = 11;
  LOWORD(v12) = a3 - 1;
  v8 = (*(__int64 (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v16 + 48LL))(
         v16,
         &PKEY_Endpoint_SpatialNotAllowed,
         &pvar);
  if ( v8 < 0 )
    goto LABEL_5;
  pv = 0LL;
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
    &pv,
    0LL);
  v10 = (*(__int64 (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)a1 + 40LL))(a1, &pv);
  v7 = v10;
  if ( v10 >= 0 )
  {
    LogPolicySpatialOnSpeakerEndpointEnabled((const unsigned __int16 *)pv, a2, a3);
    if ( pv )
      CoTaskMemFree(pv);
LABEL_5:
    v7 = v8;
    goto LABEL_6;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x12A,
    (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\spatialpolicy.cpp",
    (const char *)(unsigned int)v10,
    -2);
  if ( pv )
    CoTaskMemFree(pv);
LABEL_6:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v16);
  return v7;
}
