/*
 * XREFs of ?OnDeviceStateChanged@CommunicationsRemapPolicyRule@@UEAAJPEBGKPEAW4RuleAction@@@Z @ 0x180120AE0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000FCFC (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?GetDefaultEndpoint@CDefaultDeviceManager@@QEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEAV?$CAtlList@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@@ATL@@PEAPEAUIMMDevice@@@Z @ 0x180031B70 (-GetDefaultEndpoint@CDefaultDeviceManager@@QEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?reset@?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800C36C0 (-reset@-$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wi.c)
 */

__int64 __fastcall CommunicationsRemapPolicyRule::OnDeviceStateChanged(
        CommunicationsRemapPolicyRule *this,
        char *a2,
        int a3,
        enum RuleAction *a4)
{
  HRESULT Instance; // eax
  unsigned int v8; // ebx
  __int64 v9; // rdx
  struct IUnknown *v10; // rcx
  LPVOID v11; // rbx
  struct IUnknown *v13; // rcx
  unsigned int v14; // edx
  struct IUnknown *v15; // rcx
  void *v16; // rcx
  unsigned __int16 *v17; // rax
  signed __int64 v18; // rsi
  int v19; // r8d
  int v20; // edx
  int v21; // eax
  LPVOID pv; // [rsp+30h] [rbp-20h] BYREF
  __int64 v23; // [rsp+38h] [rbp-18h] BYREF
  LPVOID ppv[2]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  unsigned int v26; // [rsp+70h] [rbp+20h] BYREF
  struct IUnknown *v27; // [rsp+88h] [rbp+38h] BYREF

  *(_DWORD *)a4 = 1;
  if ( (*((_BYTE *)this + 80) & 1) != 0 && a3 == 1 )
  {
    ppv[0] = 0LL;
    v27 = 0LL;
    v23 = 0LL;
    pv = 0LL;
    wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::reset((__int64 *)ppv);
    Instance = CoCreateInstance(
                 &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
                 0LL,
                 0x17u,
                 &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
                 ppv);
    v8 = Instance;
    if ( Instance < 0 )
    {
      v9 = 107LL;
LABEL_13:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        v9,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\defaultdevice\\remappolicyrule.cpp",
        (const char *)(unsigned int)Instance);
      CoTaskMemFree(pv);
      pv = 0LL;
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v23);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v27);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)ppv);
      return v8;
    }
    v10 = v27;
    v27 = 0LL;
    v11 = ppv[0];
    if ( v10 )
      ((void (__fastcall *)(struct IUnknown *))v10->lpVtbl->Release)(v10);
    Instance = (*(__int64 (__fastcall **)(LPVOID, char *, struct IUnknown **))(*(_QWORD *)v11 + 40LL))(v11, a2, &v27);
    v8 = Instance;
    if ( Instance < 0 )
    {
      v9 = 110LL;
      goto LABEL_13;
    }
    wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::reset(&v23);
    Instance = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *))v27->lpVtbl->QueryInterface)(
                 v27,
                 &GUID_1be09788_6894_4089_8586_9a2a6c265ac5,
                 &v23);
    v8 = Instance;
    if ( Instance < 0 )
    {
      v9 = 111LL;
      goto LABEL_13;
    }
    Instance = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v23 + 24LL))(v23, &v26);
    v8 = Instance;
    if ( Instance < 0 )
    {
      v9 = 112LL;
      goto LABEL_13;
    }
    v13 = v27;
    v27 = 0LL;
    if ( v13 )
      ((void (__fastcall *)(struct IUnknown *))v13->lpVtbl->Release)(v13);
    wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::reset(&v23);
    v14 = v26;
    if ( *((_DWORD *)this + 17) != 2 && v26 != *((_DWORD *)this + 17) )
      goto LABEL_27;
    v15 = v27;
    v27 = 0LL;
    if ( v15 )
    {
      ((void (__fastcall *)(struct IUnknown *, _QWORD))v15->lpVtbl->Release)(v15, v26);
      v14 = v26;
    }
    if ( (int)CDefaultDeviceManager::GetDefaultEndpoint((__int64)v15, v14, *((_DWORD *)this + 16), 0LL, &v27) >= 0
      && ((int (__fastcall *)(struct IUnknown *, LPVOID *))v27->lpVtbl[1].Release)(v27, &pv) >= 0 )
    {
      v16 = pv;
      v17 = (unsigned __int16 *)pv;
      v18 = a2 - (_BYTE *)pv;
      do
      {
        v19 = *(unsigned __int16 *)((char *)v17 + v18);
        v20 = *v17 - v19;
        if ( v20 )
          break;
        ++v17;
      }
      while ( v19 );
      if ( !v20 )
      {
        *((_DWORD *)this + 19) = *((_DWORD *)this + 16);
        v21 = *((_DWORD *)this + 17) - 2;
        *((_BYTE *)this + 344) = 1;
        *(_DWORD *)a4 = 4 - (v21 != 0);
      }
    }
    else
    {
LABEL_27:
      v16 = pv;
    }
    CoTaskMemFree(v16);
    pv = 0LL;
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v23);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v27);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)ppv);
  }
  return 0LL;
}
