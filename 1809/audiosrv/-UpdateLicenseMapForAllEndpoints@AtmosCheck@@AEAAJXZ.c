/*
 * XREFs of ?UpdateLicenseMapForAllEndpoints@AtmosCheck@@AEAAJXZ @ 0x18013C370
 * Callers:
 *     ?RefreshSpatialAudioLicenseModelState@AtmosCheck@@AEAAJPEA_N@Z @ 0x180068220 (-RefreshSpatialAudioLicenseModelState@AtmosCheck@@AEAAJPEA_N@Z.c)
 *     ?StaticDeviceIdRetryTimerCallback@AtmosCheck@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x18013C050 (-StaticDeviceIdRetryTimerCallback@AtmosCheck@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@.c)
 * Callees:
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@@std@@@std@@@std@@@2@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@@Z @ 0x18000FA70 (-lower_bound@-$_Hash@V-$_Umap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@st.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000FCFC (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800161F4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _TlgWrite @ 0x180025550 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x18004148C (_TlgCreateWsz.c)
 *     ?AddArrayToLicenseMap@AtmosCheck@@AEAAJPEBG@Z @ 0x18004AF88 (-AddArrayToLicenseMap@AtmosCheck@@AEAAJPEBG@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18004C07C (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x18004D6E0 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ??$emplace@PEAGPEAG@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@std@@@std@@@std@@_N@1@$$QEAPEAG0@Z @ 0x180136F00 (--$emplace@PEAGPEAG@-$_Hash@V-$_Umap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@.c)
 *     ?GetDeviceInterfaceIdFromMMDevice@@YAJPEAUIMMDevice@@PEAPEAG@Z @ 0x180138C24 (-GetDeviceInterfaceIdFromMMDevice@@YAJPEAUIMMDevice@@PEAPEAG@Z.c)
 *     ?StartDeviceIdRecheckTimer@AtmosCheck@@AEAAJXZ @ 0x18013BF34 (-StartDeviceIdRecheckTimer@AtmosCheck@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall AtmosCheck::UpdateLicenseMapForAllEndpoints(char *pv)
{
  _WORD *v2; // rbx
  __int64 result; // rax
  __int64 v4; // rcx
  int v5; // eax
  unsigned int v6; // edi
  const char *v7; // r9
  int v8; // eax
  unsigned int v9; // edi
  char v10; // r15
  unsigned int i; // r14d
  struct IMMDevice *v12; // rdi
  int DeviceInterfaceIdFromMMDevice; // eax
  unsigned __int16 *v14; // rdi
  LPCGUID v15; // r8
  LPCGUID v16; // r9
  int v17; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v18; // [rsp+38h] [rbp-D0h] BYREF
  LPCWSTR pwsz; // [rsp+40h] [rbp-C8h] BYREF
  unsigned int v20; // [rsp+48h] [rbp-C0h] BYREF
  LPVOID pva; // [rsp+50h] [rbp-B8h] BYREF
  struct IMMDevice *v22; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v23; // [rsp+60h] [rbp-A8h] BYREF
  unsigned __int16 *v24; // [rsp+68h] [rbp-A0h] BYREF
  _WORD *v25[3]; // [rsp+70h] [rbp-98h] BYREF
  char v26[24]; // [rsp+88h] [rbp-80h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+A0h] [rbp-68h] BYREF
  unsigned __int64 v28; // [rsp+B8h] [rbp-50h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+C0h] [rbp-48h] BYREF
  int *v30; // [rsp+D0h] [rbp-38h]
  int v31; // [rsp+D8h] [rbp-30h]
  int v32; // [rsp+DCh] [rbp-2Ch]
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+0h]

  v25[1] = (_WORD *)-2LL;
  v2 = pv + 32;
  EnterCriticalSection((LPCRITICAL_SECTION)(pv + 32));
  v25[2] = v2;
  if ( pv[184] )
  {
    v4 = *((_QWORD *)pv + 24);
    v18 = 0LL;
    try
    {
      v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 24LL))(v4);
      v6 = v5;
      if ( v5 >= 0 )
      {
        v20 = 0;
        v8 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v18 + 24LL))(v18, &v20);
        v9 = v8;
        if ( v8 >= 0 )
        {
          v10 = 0;
          for ( i = 0; i < v20; ++i )
          {
            v22 = 0LL;
            if ( (*(int (__fastcall **)(__int64, _QWORD, struct IMMDevice **))(*(_QWORD *)v18 + 32LL))(v18, i, &v22) >= 0 )
            {
              pwsz = 0LL;
              v12 = v22;
              wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>::reset(
                (void **)&pwsz,
                0LL);
              ((void (__fastcall *)(struct IMMDevice *, LPCWSTR *))v12->lpVtbl->GetId)(v12, &pwsz);
              pva = 0LL;
              wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>::reset(
                &pva,
                0LL);
              DeviceInterfaceIdFromMMDevice = GetDeviceInterfaceIdFromMMDevice(v22, (unsigned __int16 **)&pva);
              v17 = DeviceInterfaceIdFromMMDevice;
              v14 = (unsigned __int16 *)pva;
              if ( DeviceInterfaceIdFromMMDevice >= 0 && pva )
              {
                std::wstring::wstring(&pData, pwsz);
                std::_Hash<std::_Umap_traits<std::wstring,wistd::unique_ptr<AtmosCheck::EndpointSpecificSpatialTechInfo [0],wistd::default_delete<AtmosCheck::EndpointSpecificSpatialTechInfo [0]>>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,wistd::unique_ptr<AtmosCheck::EndpointSpecificSpatialTechInfo [0],wistd::default_delete<AtmosCheck::EndpointSpecificSpatialTechInfo [0]>>>>,0>>::lower_bound(
                  (_QWORD *)pv + 50,
                  &v23,
                  (char *)&pData);
                if ( v28 >= 8 )
                  std::_Deallocate<16,0>((void *)pData.Ptr, (const struct std::nothrow_t *)(2 * v28 + 2));
                if ( v23 == *((_QWORD *)pv + 51) )
                {
                  AtmosCheck::AddArrayToLicenseMap((AtmosCheck *)pv, v14);
                  v24 = v14;
                  v25[0] = pwsz;
                  std::_Hash<std::_Umap_traits<std::wstring,std::wstring,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,std::wstring>>,0>>::emplace<unsigned short *,unsigned short *>(
                    (__int64)(pv + 464),
                    (__int64)v26,
                    v25,
                    &v24);
                }
              }
              else if ( DeviceInterfaceIdFromMMDevice == -2147023728 )
              {
                if ( *((_DWORD *)pv + 50) < 0x14u )
                  v10 = 1;
              }
              else if ( (unsigned int)dword_1801B1580 > 5 )
              {
                TlgCreateWsz(&pDesc, pwsz);
                v30 = &v17;
                v31 = 4;
                v32 = 0;
                TlgWrite((TraceLoggingHProvider)&dword_1801B1580, &unk_18017835D, v15, v16, 4u, &pData);
              }
              if ( v14 )
                CoTaskMemFree(v14);
              if ( pwsz )
                CoTaskMemFree((LPVOID)pwsz);
            }
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v22);
          }
          if ( v10 )
          {
            AtmosCheck::StartDeviceIdRecheckTimer(pv);
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v18);
            if ( v2 )
              LeaveCriticalSection((LPCRITICAL_SECTION)v2);
            result = 2147943568LL;
          }
          else
          {
            *((_DWORD *)pv + 50) = 0;
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v18);
            if ( v2 )
              LeaveCriticalSection((LPCRITICAL_SECTION)v2);
            result = 0LL;
          }
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            837LL,
            (__int64)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
            (const char *)(unsigned int)v8);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v18);
          if ( v2 )
            LeaveCriticalSection((LPCRITICAL_SECTION)v2);
          result = v9;
        }
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          834LL,
          (__int64)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
          (const char *)(unsigned int)v5);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v18);
        if ( v2 )
          LeaveCriticalSection((LPCRITICAL_SECTION)v2);
        result = v6;
      }
    }
    catch ( ... )
    {
      return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                             retaddr,
                             (void *)0x38C,
                             (__int64)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
                             v7);
    }
  }
  else
  {
    if ( v2 )
      LeaveCriticalSection((LPCRITICAL_SECTION)v2);
    return 0LL;
  }
  return result;
}
