/*
 * XREFs of ?NotifyAudioDGTerminated@CAudioSessionManagerProvider@@QEAAX_N@Z @ 0x18002BF6C
 * Callers:
 *     ?VAD_AudiosrvAudioDGProcessTerminated@@YAX_N@Z @ 0x18002C4D8 (-VAD_AudiosrvAudioDGProcessTerminated@@YAX_N@Z.c)
 * Callees:
 *     ?_Tidy@?$vector@V?$com_ptr_t@VCAudioSessionManager@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAudioSessionManager@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAXXZ @ 0x180034964 (-_Tidy@-$vector@V-$com_ptr_t@VCAudioSessionManager@@Uerr_returncode_policy@wil@@@wil@@V-$allocat.c)
 *     ??$_Emplace_reallocate@AEBV?$com_ptr_t@VCAudioSessionManager@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VCAudioSessionManager@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAudioSessionManager@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@VCAudioSessionManager@@Uerr_returncode_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x18003666C (--$_Emplace_reallocate@AEBV-$com_ptr_t@VCAudioSessionManager@@Uerr_returncode_policy@wil@@@wil@@.c)
 *     ?Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x1800468C0 (-Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIVolumeProvider@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x1800CA084 (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIVolumePr.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CAudioSessionManagerProvider::NotifyAudioDGTerminated(CAudioSessionManagerProvider *this, char a2)
{
  char v2; // r15
  __int64 *v4; // r14
  struct _RTL_CRITICAL_SECTION *v5; // rbx
  __int64 v6; // r8
  const char *v7; // r9
  __int64 *v8; // rsi
  __int64 *v9; // r12
  __int64 *v10; // rdi
  __int64 v11; // rcx
  __int64 *i; // rbx
  __int128 v13; // [rsp+28h] [rbp-40h] BYREF
  __int64 *v14; // [rsp+38h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v2 = a2;
  v13 = 0LL;
  v4 = 0LL;
  v14 = 0LL;
  v5 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  v8 = (__int64 *)*((_QWORD *)this + 7);
  v9 = (__int64 *)*((_QWORD *)this + 8);
  v10 = 0LL;
  try
  {
    while ( v8 != v9 )
    {
      if ( v4 == v10 )
      {
        std::vector<wil::com_ptr_t<CAudioSessionManager,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<CAudioSessionManager,wil::err_returncode_policy> const &>(
          &v13,
          v10,
          v8);
        v4 = v14;
        v10 = (__int64 *)*((_QWORD *)&v13 + 1);
      }
      else
      {
        v11 = *v8;
        *v10 = *v8;
        if ( v11 )
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IVolumeProvider>::InternalAddRef(v11);
        *((_QWORD *)&v13 + 1) = ++v10;
      }
      ++v8;
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
      v7);
    v2 = a2;
    v10 = (__int64 *)*((_QWORD *)&v13 + 1);
  }
  for ( i = (__int64 *)v13; i != v10; ++i )
  {
    LOBYTE(v6) = v2;
    CAudioSessionManager::Disconnect(*i, 6LL, v6);
  }
  std::vector<wil::com_ptr_t<CAudioSessionManager,wil::err_returncode_policy>>::_Tidy(&v13);
}
