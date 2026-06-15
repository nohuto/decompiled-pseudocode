/*
 * XREFs of ?PruneTerminatedOwningProcesses@CAudioSession@@QEAAXXZ @ 0x1800283F0
 * Callers:
 *     ?StateCheckExpiredCallback@CAudioSession@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180028560 (-StateCheckExpiredCallback@CAudioSession@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000FCFC (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?_Tidy@?$vector@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAXXZ @ 0x180013C94 (-_Tidy@-$vector@V-$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@V-$c.c)
 *     _lambda_8309522674f697363d2ec6af0121dec6_::operator()_wil::com_ptr_t_IAudioProcess_wil::err_returncode_policy___ @ 0x180064234 (_lambda_8309522674f697363d2ec6af0121dec6_--operator()_wil--com_ptr_t_IAudioProcess_wil--err_retu.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ??4?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800BE640 (--4-$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CAudioSession::PruneTerminatedOwningProcesses(CAudioSession *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  __int64 *v3; // r14
  __int64 *v4; // rsi
  __int64 *v5; // rdi
  __int64 *v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 *i; // r14
  _QWORD *j; // rbx
  _QWORD *v11; // rdi
  const char *v12; // r9
  __int128 v13; // [rsp+28h] [rbp-40h] BYREF
  __int64 v14; // [rsp+38h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  __int128 *v16; // [rsp+70h] [rbp+8h] BYREF
  __int128 *v17; // [rsp+78h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v18; // [rsp+80h] [rbp+18h]

  v13 = 0LL;
  v14 = 0LL;
  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 776);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 776));
  v18 = v2;
  v3 = (__int64 *)*((_QWORD *)this + 103);
  v17 = &v13;
  v16 = &v13;
  v4 = (__int64 *)*((_QWORD *)this + 102);
  try
  {
    while ( v4 != v3
         && !(unsigned __int8)lambda_8309522674f697363d2ec6af0121dec6_::operator()_wil::com_ptr_t_IAudioProcess_wil::err_returncode_policy___(
                                &v16,
                                v4) )
      ++v4;
    v5 = v4;
    if ( v4 != v3 )
    {
      while ( ++v4 != v3 )
      {
        if ( !(unsigned __int8)lambda_8309522674f697363d2ec6af0121dec6_::operator()_wil::com_ptr_t_IAudioProcess_wil::err_returncode_policy___(
                                 &v17,
                                 v4) )
          wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>::operator=(v5++, v4);
      }
    }
    if ( v5 != v3 )
    {
      v6 = (__int64 *)*((_QWORD *)this + 103);
      if ( v3 != v6 )
      {
        do
        {
          v7 = *v3;
          *v3 = 0LL;
          v8 = *v5;
          *v5 = v7;
          if ( v8 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
          ++v5;
          ++v3;
        }
        while ( v3 != v6 );
        v6 = (__int64 *)*((_QWORD *)this + 103);
      }
      for ( i = v5; i != v6; ++i )
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(i);
      *((_QWORD *)this + 103) = v5;
    }
    if ( v2 )
      LeaveCriticalSection(v2);
    v11 = (_QWORD *)*((_QWORD *)&v13 + 1);
    for ( j = (_QWORD *)v13; j != v11; ++j )
      (*(void (__fastcall **)(_QWORD, CAudioSession *))(*(_QWORD *)*j + 32LL))(*j, this);
    std::vector<wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>>::_Tidy((__int64)&v13);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x7E2,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
      v12);
  }
}
