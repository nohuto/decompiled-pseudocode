/*
 * XREFs of ?NotifyAudioDGTerminated@CAudioSessionManagerProvider@@QEAAX_N@Z @ 0x1800209D8
 * Callers:
 *     ?VAD_AudiosrvAudioDGProcessTerminated@@YAX_N@Z @ 0x180020460 (-VAD_AudiosrvAudioDGProcessTerminated@@YAX_N@Z.c)
 * Callees:
 *     ?Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x180003514 (-Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 *     ?_Tidy@?$vector@V?$com_ptr_t@VCAudioSessionManager@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAudioSessionManager@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAXXZ @ 0x180016110 (-_Tidy@-$vector@V-$com_ptr_t@VCAudioSessionManager@@Uerr_returncode_policy@wil@@@wil@@V-$allocat.c)
 *     ??$_Emplace_reallocate@AEBV?$com_ptr_t@VCAudioSessionManager@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VCAudioSessionManager@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAudioSessionManager@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@VCAudioSessionManager@@Uerr_returncode_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x18001D334 (--$_Emplace_reallocate@AEBV-$com_ptr_t@VCAudioSessionManager@@Uerr_returncode_policy@wil@@@wil@@.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIVolumeProvider@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x1800BBE04 (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIVolumePr.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CAudioSessionManagerProvider::NotifyAudioDGTerminated(CAudioSessionManagerProvider *this, char a2)
{
  char v2; // r15
  __int64 *v4; // r14
  struct _RTL_CRITICAL_SECTION *v5; // rbx
  const char *v6; // r9
  __int64 *v7; // rsi
  __int64 *v8; // r12
  __int64 *v9; // rdi
  __int64 v10; // rcx
  __int64 *i; // rbx
  __int128 v12; // [rsp+28h] [rbp-40h] BYREF
  __int64 *v13; // [rsp+38h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v2 = a2;
  v12 = 0LL;
  v4 = 0LL;
  v13 = 0LL;
  v5 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  v7 = (__int64 *)*((_QWORD *)this + 7);
  v8 = (__int64 *)*((_QWORD *)this + 8);
  v9 = 0LL;
  try
  {
    while ( v7 != v8 )
    {
      if ( v4 == v9 )
      {
        std::vector<wil::com_ptr_t<CAudioSessionManager,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<CAudioSessionManager,wil::err_returncode_policy> const &>(
          (__int64 *)&v12,
          v9,
          v7);
        v4 = v13;
        v9 = (__int64 *)*((_QWORD *)&v12 + 1);
      }
      else
      {
        v10 = *v7;
        *v9 = *v7;
        if ( v10 )
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IVolumeProvider>::InternalAddRef(v10);
        *((_QWORD *)&v12 + 1) = ++v9;
      }
      ++v7;
    }
    if ( v5 )
      LeaveCriticalSection(v5);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x160,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanagerprovider.cpp",
      v6);
    v2 = a2;
    v9 = (__int64 *)*((_QWORD *)&v12 + 1);
  }
  for ( i = (__int64 *)v12; i != v9; ++i )
    CAudioSessionManager::Disconnect(*i, 6u, v2);
  std::vector<wil::com_ptr_t<CAudioSessionManager,wil::err_returncode_policy>>::_Tidy((__int64)&v12);
}
