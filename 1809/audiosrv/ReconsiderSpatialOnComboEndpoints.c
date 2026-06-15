/*
 * XREFs of ReconsiderSpatialOnComboEndpoints @ 0x180110244
 * Callers:
 *     ?OnPropertyChange@SpatialPolicy@@SAJPEAUIMMDevice@@AEBU_tagpropertykey@@@Z @ 0x18001E45C (-OnPropertyChange@SpatialPolicy@@SAJPEAUIMMDevice@@AEBU_tagpropertykey@@@Z.c)
 *     std::_Func_impl_no_alloc__lambda_8da706c8feaf042eaa6260cdea38ce5d__void_::_Do_call @ 0x180110690 (std--_Func_impl_no_alloc__lambda_8da706c8feaf042eaa6260cdea38ce5d__void_--_Do_call.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000FCFC (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     DisableSpatialOnInternalSpeakers @ 0x18010F82C (DisableSpatialOnInternalSpeakers.c)
 *     EnableSpatialOnSpeakerEndpoint @ 0x18010F954 (EnableSpatialOnSpeakerEndpoint.c)
 *     SearchForHeadphones @ 0x18011046C (SearchForHeadphones.c)
 *     VerifyCriticalProcessing @ 0x180110564 (VerifyCriticalProcessing.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall ReconsiderSpatialOnComboEndpoints(int a1, __int64 a2)
{
  HRESULT v4; // eax
  int v5; // edi
  int v6; // eax
  __int64 v7; // rbx
  int v8; // eax
  __int64 v9; // rdx
  const unsigned __int16 *v10; // rdx
  __int64 v12; // [rsp+30h] [rbp-20h] BYREF
  LPVOID ppv; // [rsp+38h] [rbp-18h] BYREF
  __int64 v14[2]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  bool v16; // [rsp+80h] [rbp+30h] BYREF
  __int64 v17; // [rsp+88h] [rbp+38h] BYREF

  v14[1] = -2LL;
  ppv = 0LL;
  v4 = CoCreateInstance(
         &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
         0LL,
         0x17u,
         &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
         &ppv);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v12 = 0LL;
    v6 = (*(__int64 (__fastcall **)(LPVOID, _QWORD, __int64, __int64 *))(*(_QWORD *)ppv + 24LL))(ppv, 0LL, 15LL, &v12);
    v5 = v6;
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        507LL,
        (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\spatialpolicy.cpp",
        (const char *)(unsigned int)v6);
LABEL_23:
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v12);
      goto LABEL_24;
    }
    if ( a1 == 3 )
    {
      DisableSpatialOnInternalSpeakers(v12);
LABEL_22:
      v5 = 0;
      goto LABEL_23;
    }
    v17 = 0LL;
    v5 = (*(__int64 (__fastcall **)(PVOID, __int64, __int64))(*(_QWORD *)g_pEndpointCharacteristicsCache + 24LL))(
           g_pEndpointCharacteristicsCache,
           a2,
           1LL);
    if ( v5 < 0 )
    {
LABEL_20:
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v17);
      goto LABEL_23;
    }
    v7 = *(_QWORD *)(v17 + 16);
    v14[0] = v7;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
    v8 = SearchForHeadphones(v12, &v16);
    v5 = v8;
    if ( v8 < 0 )
    {
      v9 = 526LL;
LABEL_18:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        v9,
        (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\spatialpolicy.cpp",
        (const char *)(unsigned int)v8);
      goto LABEL_19;
    }
    if ( v16 )
    {
      v8 = EnableSpatialOnSpeakerEndpoint(v7, L"HP", 0);
      v5 = v8;
      if ( v8 < 0 )
      {
        v9 = 530LL;
        goto LABEL_18;
      }
    }
    else
    {
      v5 = VerifyCriticalProcessing(v17, v7, &v16);
      if ( v5 < 0 )
      {
LABEL_19:
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v14);
        goto LABEL_20;
      }
      v10 = L"No-HP";
      if ( !v16 )
        v10 = L"CritFilter";
      v8 = EnableSpatialOnSpeakerEndpoint(v7, v10, v16);
      v5 = v8;
      if ( v8 < 0 )
      {
        v9 = 540LL;
        goto LABEL_18;
      }
    }
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v14);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v17);
    goto LABEL_22;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    504LL,
    (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\spatialpolicy.cpp",
    (const char *)(unsigned int)v4);
LABEL_24:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&ppv);
  return (unsigned int)v5;
}
