/*
 * XREFs of ?RevokeSessionsWithoutDataFlowAccess@CAudioSessionManagerProvider@@QEAAJPEBG0@Z @ 0x1800D935C
 * Callers:
 *     ?HandleAccessChangeNotification@@YAJPEBG0@Z @ 0x1800D900C (-HandleAccessChangeNotification@@YAJPEBG0@Z.c)
 * Callees:
 *     ??$_Emplace_reallocate@AEBV?$com_ptr_t@VCAudioSessionManager@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VCAudioSessionManager@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAudioSessionManager@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@VCAudioSessionManager@@Uerr_returncode_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x180009BCC (--$_Emplace_reallocate@AEBV-$com_ptr_t@VCAudioSessionManager@@Uerr_returncode_policy@wil@@@wil@@.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISessionInternalEvents@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180009F50 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISessionInternal.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003A220 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180044928 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?RevokeSessionsWithoutDataFlowAccess@CAudioSessionManager@@QEAAJPEBG0W4AudioServerSessionDisconnectReason@@_N@Z @ 0x1800D7F38 (-RevokeSessionsWithoutDataFlowAccess@CAudioSessionManager@@QEAAJPEBG0W4AudioServerSessionDisconn.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAudioSessionManagerProvider::RevokeSessionsWithoutDataFlowAccess(
        CAudioSessionManagerProvider *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3)
{
  const unsigned __int16 *v3; // r15
  const unsigned __int16 *v4; // r12
  __int64 *v6; // rsi
  struct _RTL_CRITICAL_SECTION *v7; // r13
  const char *v8; // r9
  struct _RTL_CRITICAL_SECTION *v9; // rbx
  __int64 *v10; // r14
  __int64 *v11; // rax
  __int64 *v12; // rdi
  __int64 v13; // rax
  __int64 *i; // rbx
  int v15; // eax
  volatile signed __int32 **v16; // rbx
  bool v18; // [rsp+20h] [rbp-68h]
  __int64 *v19; // [rsp+38h] [rbp-50h] BYREF
  __int128 v20; // [rsp+40h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  __int64 *v26; // [rsp+A8h] [rbp+20h]

  v3 = a3;
  v4 = a2;
  v6 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  v7 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  v9 = v7;
  v10 = (__int64 *)*((_QWORD *)this + 7);
  v11 = (__int64 *)*((_QWORD *)this + 8);
  v26 = v11;
  v12 = 0LL;
  while ( v10 != v11 )
  {
    v13 = *v10;
    if ( *(_DWORD *)(*v10 + 312) == 1 )
    {
      if ( *((__int64 **)&v20 + 1) == v12 )
      {
        try
        {
          std::vector<wil::com_ptr_t<CAudioSessionManager,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<CAudioSessionManager,wil::err_returncode_policy> const &>(
            (__int64 *)&v19,
            v12,
            v10);
          v12 = (__int64 *)v20;
          v6 = v19;
        }
        catch ( ... )
        {
          wil::details::in1diag3::Log_CaughtException(
            retaddr,
            (void *)0x184,
            (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanagerprovider.cpp",
            v8);
          v3 = a3;
          v4 = a2;
          v12 = (__int64 *)v20;
          v6 = v19;
          goto LABEL_11;
        }
      }
      else
      {
        *v12 = v13;
        if ( v13 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v13 + 12));
          v12 = (__int64 *)v20;
          v6 = v19;
          v9 = v7;
        }
        *(_QWORD *)&v20 = ++v12;
      }
    }
    ++v10;
    v11 = v26;
  }
  if ( v7 )
    LeaveCriticalSection(v9);
LABEL_11:
  for ( i = v6; i != v12; ++i )
  {
    v15 = CAudioSessionManager::RevokeSessionsWithoutDataFlowAccess(*i, v4, v3, (__int64)v8, v18);
    if ( v15 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x188,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanagerprovider.cpp",
        (const char *)(unsigned int)v15);
  }
  if ( v6 )
  {
    v16 = (volatile signed __int32 **)v6;
    if ( v6 != v12 )
    {
      do
      {
        if ( *v16 )
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ISessionInternalEvents>::Release(*v16);
        ++v16;
      }
      while ( v16 != (volatile signed __int32 **)v12 );
    }
    std::_Deallocate<16,0>(
      v6,
      (const struct std::nothrow_t *)((*((_QWORD *)&v20 + 1) - (_QWORD)v6) & 0xFFFFFFFFFFFFFFF8uLL));
  }
  return 0LL;
}
