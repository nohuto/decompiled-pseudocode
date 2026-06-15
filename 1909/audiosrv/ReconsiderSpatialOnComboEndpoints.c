/*
 * XREFs of ReconsiderSpatialOnComboEndpoints @ 0x180005594
 * Callers:
 *     ?OnPropertyChange@SpatialPolicy@@SAJPEAUIMMDevice@@AEBU_tagpropertykey@@@Z @ 0x18001FA08 (-OnPropertyChange@SpatialPolicy@@SAJPEAUIMMDevice@@AEBU_tagpropertykey@@@Z.c)
 *     std::_Func_impl_no_alloc__lambda_8da706c8feaf042eaa6260cdea38ce5d__void_::_Do_call @ 0x18011CB30 (std--_Func_impl_no_alloc__lambda_8da706c8feaf042eaa6260cdea38ce5d__void_--_Do_call.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800034B4 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     SearchForHeadphones @ 0x180005424 (SearchForHeadphones.c)
 *     EnableSpatialOnSpeakerEndpoint @ 0x18000570C (EnableSpatialOnSpeakerEndpoint.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A58 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     VerifyCriticalProcessing @ 0x1800060A4 (VerifyCriticalProcessing.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     DisableSpatialOnInternalSpeakers @ 0x18011C9EC (DisableSpatialOnInternalSpeakers.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall ReconsiderSpatialOnComboEndpoints(int a1, __int64 a2)
{
  HRESULT v4; // eax
  int v5; // edi
  int v6; // eax
  __int64 v7; // rbx
  int v8; // eax
  __int64 v9; // r8
  const wchar_t *v10; // rdx
  __int64 v12; // rdx
  int ppv; // [rsp+20h] [rbp-30h]
  __int64 v14; // [rsp+30h] [rbp-20h] BYREF
  LPVOID v15; // [rsp+38h] [rbp-18h] BYREF
  __int64 v16[2]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  char v18; // [rsp+80h] [rbp+30h] BYREF
  __int64 v19; // [rsp+88h] [rbp+38h] BYREF

  v16[1] = -2LL;
  v15 = 0LL;
  v4 = CoCreateInstance(
         &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
         0LL,
         0x17u,
         &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
         &v15);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1A2,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\spatialpolicy.cpp",
      (const char *)(unsigned int)v4,
      ppv);
    goto LABEL_14;
  }
  v14 = 0LL;
  v6 = (*(__int64 (__fastcall **)(LPVOID, _QWORD, __int64, __int64 *))(*(_QWORD *)v15 + 24LL))(v15, 0LL, 15LL, &v14);
  v5 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1A5,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\spatialpolicy.cpp",
      (const char *)(unsigned int)v6,
      ppv);
    goto LABEL_13;
  }
  if ( a1 == 3 )
  {
    DisableSpatialOnInternalSpeakers(v14);
    goto LABEL_12;
  }
  v19 = 0LL;
  v5 = (*(__int64 (__fastcall **)(PVOID, __int64, __int64))(*(_QWORD *)g_pEndpointCharacteristicsCache + 24LL))(
         g_pEndpointCharacteristicsCache,
         a2,
         1LL);
  if ( v5 < 0 )
  {
LABEL_24:
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v19);
    goto LABEL_13;
  }
  v7 = *(_QWORD *)(v19 + 16);
  v16[0] = v7;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  v8 = SearchForHeadphones(v14, &v18);
  v5 = v8;
  if ( v8 < 0 )
  {
    v12 = 440LL;
    goto LABEL_22;
  }
  if ( !v18 )
  {
    v5 = VerifyCriticalProcessing(v19, v7, &v18);
    if ( v5 < 0 )
    {
LABEL_23:
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v16);
      goto LABEL_24;
    }
    v10 = L"No-HP";
    LOBYTE(v9) = v18;
    if ( !v18 )
      v10 = L"CritFilter";
    v8 = EnableSpatialOnSpeakerEndpoint(v7, v10, v9);
    v5 = v8;
    if ( v8 >= 0 )
      goto LABEL_11;
    v12 = 454LL;
LABEL_22:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\spatialpolicy.cpp",
      (const char *)(unsigned int)v8,
      (int)&v19);
    goto LABEL_23;
  }
  v8 = EnableSpatialOnSpeakerEndpoint(v7, L"HP", 0LL);
  v5 = v8;
  if ( v8 < 0 )
  {
    v12 = 444LL;
    goto LABEL_22;
  }
LABEL_11:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v16);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v19);
LABEL_12:
  v5 = 0;
LABEL_13:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v14);
LABEL_14:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v15);
  return (unsigned int)v5;
}
