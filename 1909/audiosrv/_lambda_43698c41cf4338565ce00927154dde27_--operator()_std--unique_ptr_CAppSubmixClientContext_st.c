/*
 * XREFs of _lambda_43698c41cf4338565ce00927154dde27_::operator()_std::unique_ptr_CAppSubmixClientContext_std::default_delete_CAppSubmixClientContext____const__ @ 0x1800FC1EC
 * Callers:
 *     ?OnNewProcessSubmix@CProcessSubmixManager@@UEAAJPEAUIProcessSubmixProxy@@@Z @ 0x180043BC0 (-OnNewProcessSubmix@CProcessSubmixManager@@UEAAJPEAUIProcessSubmixProxy@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800034B4 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??0?$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@@@Z @ 0x180059474 (--0-$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     ??$_Emplace_reallocate@V?$com_ptr_t@UIAudioStreamVolumeCallback@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIAudioStreamVolumeCallback@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAudioStreamVolumeCallback@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@UIAudioStreamVolumeCallback@@Uerr_returncode_policy@wil@@@wil@@QEAV23@$$QEAV23@@Z @ 0x1800D9710 (--$_Emplace_reallocate@V-$com_ptr_t@UIAudioStreamVolumeCallback@@Uerr_returncode_policy@wil@@@wi.c)
 *     ?NotifySubmixClient@CAppSubmixClient@@QEAAXW4ProcessSubmix_NotificationType@@_K@Z @ 0x1800FD6C8 (-NotifySubmixClient@CAppSubmixClient@@QEAAXW4ProcessSubmix_NotificationType@@_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_43698c41cf4338565ce00927154dde27_::operator()_std::unique_ptr_CAppSubmixClientContext_std::default_delete_CAppSubmixClientContext____const__(
        __int64 **a1,
        __int64 *a2)
{
  __int64 v4; // rcx
  char *v5; // rdx
  __int64 v6; // rsi
  __int64 v7; // rax
  __int64 result; // rax
  __int64 *v9; // r14
  __int64 *v10; // rbx
  unsigned __int64 v11; // rbp
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // [rsp+50h] [rbp+8h] BYREF

  ATL::CComPtrBase<CMonitorManager::CaptureMonitor>::CComPtrBase<CMonitorManager::CaptureMonitor>(&v14, **a1);
  v4 = *a2 + 24;
  v5 = *(char **)(*a2 + 32);
  v6 = 0LL;
  if ( *(char **)(*a2 + 40) == v5 )
  {
    std::vector<wil::com_ptr_t<IAudioStreamVolumeCallback,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<IAudioStreamVolumeCallback,wil::err_returncode_policy>>(
      (char **)v4,
      v5,
      &v14);
  }
  else
  {
    v7 = v14;
    v14 = 0LL;
    *(_QWORD *)v5 = v7;
    *(_QWORD *)(v4 + 8) += 8LL;
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v14);
  result = *a2;
  v9 = *(__int64 **)(*a2 + 48);
  v10 = *a1;
  v11 = (unsigned __int64)(*(_QWORD *)(result + 56) - (_QWORD)v9 + 7LL) >> 3;
  if ( (unsigned __int64)v9 > *(_QWORD *)(result + 56) )
    v11 = 0LL;
  if ( v11 )
  {
    do
    {
      v12 = *v9;
      v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*v10 + 184LL))(*v10);
      result = CAppSubmixClient::NotifySubmixClient(v12, 0LL, v13);
      ++v9;
      ++v6;
    }
    while ( v6 != v11 );
  }
  return result;
}
