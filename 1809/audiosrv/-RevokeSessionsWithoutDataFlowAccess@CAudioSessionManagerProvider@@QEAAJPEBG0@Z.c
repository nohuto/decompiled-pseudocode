/*
 * XREFs of ?RevokeSessionsWithoutDataFlowAccess@CAudioSessionManagerProvider@@QEAAJPEBG0@Z @ 0x1800CA9AC
 * Callers:
 *     ?HandleAccessChangeNotification@@YAJPEBG0@Z @ 0x1800CA65C (-HandleAccessChangeNotification@@YAJPEBG0@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003DCC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy@?$vector@V?$com_ptr_t@VCAudioSessionManager@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAudioSessionManager@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAXXZ @ 0x180016110 (-_Tidy@-$vector@V-$com_ptr_t@VCAudioSessionManager@@Uerr_returncode_policy@wil@@@wil@@V-$allocat.c)
 *     ??$_Emplace_reallocate@AEBV?$com_ptr_t@VCAudioSessionManager@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VCAudioSessionManager@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAudioSessionManager@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@VCAudioSessionManager@@Uerr_returncode_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x18001D334 (--$_Emplace_reallocate@AEBV-$com_ptr_t@VCAudioSessionManager@@Uerr_returncode_policy@wil@@@wil@@.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIVolumeProvider@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x1800BBE04 (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIVolumePr.c)
 *     ?RevokeSessionsWithoutDataFlowAccess@CAudioSessionManager@@QEAAJPEBG0W4AudioServerSessionDisconnectReason@@_N@Z @ 0x1800C9448 (-RevokeSessionsWithoutDataFlowAccess@CAudioSessionManager@@QEAAJPEBG0W4AudioServerSessionDisconn.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAudioSessionManagerProvider::RevokeSessionsWithoutDataFlowAccess(
        CAudioSessionManagerProvider *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3)
{
  const unsigned __int16 *v3; // r15
  const unsigned __int16 *v4; // r12
  __int64 *v6; // r14
  struct _RTL_CRITICAL_SECTION *v7; // rbx
  volatile int *v8; // rdx
  const char *v9; // r9
  __int64 *v10; // rsi
  __int64 *v11; // r13
  __int64 *v12; // rdi
  __int64 v13; // rcx
  __int64 *i; // rbx
  int v15; // eax
  bool v17; // [rsp+20h] [rbp-68h]
  __int128 v18; // [rsp+38h] [rbp-50h] BYREF
  __int64 *v19; // [rsp+48h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v3 = a3;
  v4 = a2;
  v18 = 0LL;
  v6 = 0LL;
  v19 = 0LL;
  v7 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  v10 = (__int64 *)*((_QWORD *)this + 7);
  v11 = (__int64 *)*((_QWORD *)this + 8);
  v12 = 0LL;
  try
  {
    while ( v10 != v11 )
    {
      v13 = *v10;
      if ( *(_DWORD *)(*v10 + 312) == 1 )
      {
        if ( v6 == v12 )
        {
          std::vector<wil::com_ptr_t<CAudioSessionManager,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<CAudioSessionManager,wil::err_returncode_policy> const &>(
            (__int64 *)&v18,
            v12,
            v10);
          v6 = v19;
          v12 = (__int64 *)*((_QWORD *)&v18 + 1);
        }
        else
        {
          *v12 = v13;
          if ( v13 )
            Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IVolumeProvider>::InternalAddRef(
              v13,
              v8);
          *((_QWORD *)&v18 + 1) = ++v12;
        }
      }
      ++v10;
    }
    if ( v7 )
      LeaveCriticalSection(v7);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x184,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanagerprovider.cpp",
      v9);
    v3 = a3;
    v4 = a2;
    v12 = (__int64 *)*((_QWORD *)&v18 + 1);
  }
  for ( i = (__int64 *)v18; i != v12; ++i )
  {
    v15 = CAudioSessionManager::RevokeSessionsWithoutDataFlowAccess(*i, v4, v3, (__int64)v9, v17);
    if ( v15 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x188,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanagerprovider.cpp",
        (const char *)(unsigned int)v15);
  }
  std::vector<wil::com_ptr_t<CAudioSessionManager,wil::err_returncode_policy>>::_Tidy((__int64)&v18);
  return 0LL;
}
