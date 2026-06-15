/*
 * XREFs of ?NotifyAudioDGTerminated@CAudioSessionManagerProvider@@QEAAX_N@Z @ 0x1800291B4
 * Callers:
 *     ?VAD_AudiosrvAudioDGProcessTerminated@@YAX_N@Z @ 0x180029648 (-VAD_AudiosrvAudioDGProcessTerminated@@YAX_N@Z.c)
 * Callees:
 *     ??$_Emplace_reallocate@AEBV?$com_ptr_t@VCAudioSessionManager@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VCAudioSessionManager@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAudioSessionManager@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@VCAudioSessionManager@@Uerr_returncode_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x180009BCC (--$_Emplace_reallocate@AEBV-$com_ptr_t@VCAudioSessionManager@@Uerr_returncode_policy@wil@@@wil@@.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISessionInternalEvents@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180009F50 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISessionInternal.c)
 *     ?Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x1800423A0 (-Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180044928 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CAudioSessionManagerProvider::NotifyAudioDGTerminated(CAudioSessionManagerProvider *this, char a2)
{
  char v2; // r15
  __int64 v4; // rsi
  struct _RTL_CRITICAL_SECTION *v5; // r12
  __int64 v6; // r8
  const char *v7; // r9
  struct _RTL_CRITICAL_SECTION *v8; // rbx
  __int64 *v9; // r14
  __int64 *v10; // r13
  __int64 *v11; // rdi
  __int64 *i; // rbx
  volatile signed __int32 **j; // rbx
  __int64 v14; // rax
  __int64 v15; // [rsp+28h] [rbp-40h] BYREF
  __int128 v16; // [rsp+30h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v2 = a2;
  v4 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  v5 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  v8 = v5;
  v9 = (__int64 *)*((_QWORD *)this + 7);
  v10 = (__int64 *)*((_QWORD *)this + 8);
  v11 = 0LL;
  while ( v9 != v10 )
  {
    try
    {
      if ( *((__int64 **)&v16 + 1) == v11 )
      {
        std::vector<wil::com_ptr_t<CAudioSessionManager,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<CAudioSessionManager,wil::err_returncode_policy> const &>(
          &v15,
          v11,
          v9);
        v11 = (__int64 *)v16;
        v4 = v15;
      }
      else
      {
        v14 = *v9;
        *v11 = *v9;
        if ( v14 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v14 + 12));
          v11 = (__int64 *)v16;
          v4 = v15;
          v8 = v5;
        }
        *(_QWORD *)&v16 = ++v11;
      }
      ++v9;
    }
    catch ( ... )
    {
      wil::details::in1diag3::Log_CaughtException(
        retaddr,
        (void *)0x160,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanagerprovider.cpp",
        v7);
      v2 = a2;
      v11 = (__int64 *)v16;
      v4 = v15;
      goto LABEL_5;
    }
  }
  if ( v5 )
    LeaveCriticalSection(v8);
LABEL_5:
  for ( i = (__int64 *)v4; i != v11; ++i )
  {
    LOBYTE(v6) = v2;
    CAudioSessionManager::Disconnect(*i, 6LL, v6);
  }
  if ( v4 )
  {
    for ( j = (volatile signed __int32 **)v4; j != (volatile signed __int32 **)v11; ++j )
    {
      if ( *j )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ISessionInternalEvents>::Release(*j);
    }
    std::_Deallocate<16,0>(v4, (*((_QWORD *)&v16 + 1) - v4) & 0xFFFFFFFFFFFFFFF8uLL);
  }
}
