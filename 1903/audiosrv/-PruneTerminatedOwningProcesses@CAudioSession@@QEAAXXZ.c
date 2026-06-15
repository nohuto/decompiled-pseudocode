/*
 * XREFs of ?PruneTerminatedOwningProcesses@CAudioSession@@QEAAXXZ @ 0x18001F360
 * Callers:
 *     ?StateCheckExpiredCallback@CAudioSession@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18001FB40 (-StateCheckExpiredCallback@CAudioSession@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ??$_Emplace_reallocate@AEBV?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x18003A0C8 (--$_Emplace_reallocate@AEBV-$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@-$vect.c)
 *     ?_Tidy@?$vector@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAXXZ @ 0x180040874 (-_Tidy@-$vector@V-$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@V-$c.c)
 *     ??0?$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@@@Z @ 0x1800513D4 (--0-$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_d @ 0x1800C2644 (WPP_SF_d.c)
 *     _lambda_bd83ce2b5745fe94b238edc07ed8abe2_::operator()_wil::com_ptr_t_IAudioProcess_wil::err_returncode_policy___ @ 0x1800CCA90 (_lambda_bd83ce2b5745fe94b238edc07ed8abe2_--operator()_wil--com_ptr_t_IAudioProcess_wil--err_retu.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CAudioSession::PruneTerminatedOwningProcesses(CAudioSession *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  __int64 *v3; // rsi
  __int64 *v4; // rdi
  __int64 *v5; // r14
  _QWORD *j; // rbx
  _QWORD *v7; // rdi
  const char *v8; // r9
  __int64 *v9; // r12
  __int64 *i; // rdi
  unsigned int v11; // eax
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int128 v16; // [rsp+28h] [rbp-40h] BYREF
  __int64 v17; // [rsp+38h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  __int128 *v19; // [rsp+70h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v20; // [rsp+78h] [rbp+10h]

  v16 = 0LL;
  v17 = 0LL;
  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 736);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 736));
  v20 = v2;
  v3 = (__int64 *)*((_QWORD *)this + 98);
  v19 = &v16;
  v4 = (__int64 *)*((_QWORD *)this + 97);
  try
  {
    while ( v4 != v3 )
    {
      if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)*v4 + 248LL))(*v4) )
      {
        if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
          && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*v4 + 40LL))(*v4);
          WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 40LL, &WPP_7f1ef5860f2032d8a1536e1a5abdceb7_Traceguids, v11);
        }
        if ( v17 == *((_QWORD *)&v16 + 1) )
        {
          std::vector<wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy> const &>(
            &v16,
            *((_QWORD *)&v16 + 1),
            v4);
        }
        else
        {
          ATL::CComPtrBase<CMonitorManager::CaptureMonitor>::CComPtrBase<CMonitorManager::CaptureMonitor>(
            *((_QWORD *)&v16 + 1),
            *v4);
          *((_QWORD *)&v16 + 1) += 8LL;
        }
        break;
      }
      ++v4;
    }
    v5 = v4;
    if ( v4 != v3 )
    {
      while ( ++v4 != v3 )
      {
        if ( !(unsigned __int8)lambda_bd83ce2b5745fe94b238edc07ed8abe2_::operator()_wil::com_ptr_t_IAudioProcess_wil::err_returncode_policy___(
                                 &v19,
                                 v4) )
        {
          v12 = *v4;
          *v4 = 0LL;
          v13 = *v5;
          *v5 = v12;
          if ( v13 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
          ++v5;
        }
      }
    }
    if ( v5 != v3 )
    {
      v9 = (__int64 *)*((_QWORD *)this + 98);
      if ( v3 != v9 )
      {
        do
        {
          v14 = *v3;
          *v3 = 0LL;
          v15 = *v5;
          *v5 = v14;
          if ( v15 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
          ++v5;
          ++v3;
        }
        while ( v3 != v9 );
        v9 = (__int64 *)*((_QWORD *)this + 98);
      }
      for ( i = v5; i != v9; ++i )
      {
        if ( *i )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)*i + 16LL))(*i);
      }
      *((_QWORD *)this + 98) = v5;
    }
    if ( v2 )
      LeaveCriticalSection(v2);
    v7 = (_QWORD *)*((_QWORD *)&v16 + 1);
    for ( j = (_QWORD *)v16; j != v7; ++j )
      (*(void (__fastcall **)(_QWORD, CAudioSession *))(*(_QWORD *)*j + 32LL))(*j, this);
    std::vector<wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>>::_Tidy(&v16);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x7E1,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
      v8);
  }
}
