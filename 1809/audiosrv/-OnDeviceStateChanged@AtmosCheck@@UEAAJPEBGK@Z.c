/*
 * XREFs of ?OnDeviceStateChanged@AtmosCheck@@UEAAJPEBGK@Z @ 0x18013A7F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000FCFC (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??0?$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@@@Z @ 0x180019A54 (--0-$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@.c)
 *     ??$make_unique_string_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x180042B80 (--$make_unique_string_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18004E2A0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$make_shared@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@@wil@@V12@@std@@YA?AV?$shared_ptr@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@0@$$QEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x1800DFF50 (--$make_shared@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$_ea_1800DFF50.c)
 *     ??4?$shared_ptr@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800E0058 (--4-$shared_ptr@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemF.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_1767d809cf1afad7e40eca6e6d461b38___ @ 0x180136620 (Windows--Internal--ComTaskPool--QueueTask__lambda_1767d809cf1afad7e40eca6e6d461b38___.c)
 */

__int64 __fastcall AtmosCheck::OnDeviceStateChanged(AtmosCheck *this, char *a2, int a3)
{
  __int64 *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  std::_Ref_count_base *v7; // rbx
  unsigned int v8; // r8d
  __int64 v10; // [rsp+20h] [rbp-40h] BYREF
  std::_Ref_count_base *v11[2]; // [rsp+28h] [rbp-38h] BYREF
  __int64 v12; // [rsp+38h] [rbp-28h] BYREF
  std::_Ref_count_base *v13; // [rsp+40h] [rbp-20h]
  __int64 v14[2]; // [rsp+48h] [rbp-18h] BYREF
  std::_Ref_count_base *v15; // [rsp+58h] [rbp-8h]
  LPVOID pv; // [rsp+88h] [rbp+28h] BYREF

  if ( a3 == 1 && *((_BYTE *)this + 184) )
  {
    wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>>>(
      &pv,
      a2,
      0xFFFFFFFFFFFFFFFFuLL);
    *(_OWORD *)v11 = 0LL;
    if ( pv )
    {
      v4 = std::make_shared<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>>,wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>>>(
             &v12,
             &pv);
      std::shared_ptr<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>>>::operator=(
        v11,
        v4);
      if ( v13 )
        std::_Ref_count_base::_Decref(v13);
      if ( pv )
        CoTaskMemFree(pv);
    }
    ATL::CComPtrBase<CMonitorManager::CaptureMonitor>::CComPtrBase<CMonitorManager::CaptureMonitor>(&v10, (__int64)this);
    ATL::CComPtrBase<CMonitorManager::CaptureMonitor>::CComPtrBase<CMonitorManager::CaptureMonitor>(v14, v10);
    v7 = v11[1];
    if ( v11[1] )
    {
      _InterlockedIncrement((volatile signed __int32 *)v11[1] + 2);
      v7 = v11[1];
    }
    v8 = *((_DWORD *)this + 47);
    v14[1] = (__int64)v11[0];
    v15 = v7;
    Windows::Internal::ComTaskPool::QueueTask__lambda_1767d809cf1afad7e40eca6e6d461b38___(v6, v5, v8, v14);
    if ( v15 )
      std::_Ref_count_base::_Decref(v15);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v14);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v10);
    if ( v7 )
      std::_Ref_count_base::_Decref(v7);
  }
  return 0LL;
}
