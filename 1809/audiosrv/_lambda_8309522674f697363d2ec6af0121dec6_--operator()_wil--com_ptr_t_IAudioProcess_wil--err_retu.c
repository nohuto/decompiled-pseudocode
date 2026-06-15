/*
 * XREFs of _lambda_8309522674f697363d2ec6af0121dec6_::operator()_wil::com_ptr_t_IAudioProcess_wil::err_returncode_policy___ @ 0x180064234
 * Callers:
 *     ?PruneTerminatedOwningProcesses@CAudioSession@@QEAAXXZ @ 0x1800283F0 (-PruneTerminatedOwningProcesses@CAudioSession@@QEAAXXZ.c)
 * Callees:
 *     ??0?$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@@@Z @ 0x180019A54 (--0-$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@.c)
 *     ??$_Emplace_reallocate@AEBV?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x18001CB0C (--$_Emplace_reallocate@AEBV-$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@-$vect.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_d @ 0x1800B3E9C (WPP_SF_d.c)
 */

char __fastcall lambda_8309522674f697363d2ec6af0121dec6_::operator()_wil::com_ptr_t_IAudioProcess_wil::err_returncode_policy___(
        __int64 *a1,
        __int64 *a2)
{
  unsigned int v4; // eax
  __int64 v5; // rbx

  if ( !(*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)*a2 + 248LL))(*a2) )
    return 0;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*a2 + 40LL))(*a2);
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 40LL, &WPP_753fb3ff45c7308b48420cd59c2f48a5_Traceguids, v4);
  }
  v5 = *a1;
  if ( *(_QWORD *)(v5 + 16) == *(_QWORD *)(v5 + 8) )
  {
    std::vector<wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy> const &>(
      (__int64 **)v5,
      *(__int64 **)(v5 + 8),
      a2);
  }
  else
  {
    ATL::CComPtrBase<CMonitorManager::CaptureMonitor>::CComPtrBase<CMonitorManager::CaptureMonitor>(
      *(_QWORD **)(v5 + 8),
      *a2);
    *(_QWORD *)(v5 + 8) += 8LL;
  }
  return 1;
}
