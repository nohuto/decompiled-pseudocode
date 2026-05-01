/*
 * XREFs of ?ActivateAppAsync@CortanaStoreAppExperienceManager@@AEAAJ_NPEBG@Z @ 0x1801DAC80
 * Callers:
 *     ?ActivateAppWithArgumentsAsync@CortanaStoreAppExperienceManager@@UEAAJPEBG@Z @ 0x1801DADF0 (-ActivateAppWithArgumentsAsync@CortanaStoreAppExperienceManager@@UEAAJPEBG@Z.c)
 *     ?LaunchOrCloseAppAsync@CortanaStoreAppExperienceManager@@UEAAJXZ @ 0x1801DC8C0 (-LaunchOrCloseAppAsync@CortanaStoreAppExperienceManager@@UEAAJXZ.c)
 *     ?PerformDelayedInitialization@CortanaStoreAppExperienceManager@@UEAAJXZ @ 0x1801DD7D0 (-PerformDelayedInitialization@CortanaStoreAppExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x1800798F4 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180088E58 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180089C34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1fe66ecf7a6d9918b4f3cb70af5821e0___::CTaskWrapper__lambda_1fe66ecf7a6d9918b4f3cb70af5821e0_____lambda_1fe66ecf7a6d9918b4f3cb70af5821e0___ @ 0x1801D8F54 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_1fe66ecf7a6d9918b4f3cb70af5821e0___--CTaskW.c)
 */

__int64 __fastcall CortanaStoreAppExperienceManager::ActivateAppAsync(
        CortanaStoreAppExperienceManager *this,
        char a2,
        unsigned __int16 *a3)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  void *v6; // rax
  DWORD CurrentThreadId; // eax
  int v8; // edi
  const char *v9; // r9
  __int64 result; // rax
  _BYTE v11[8]; // [rsp+40h] [rbp-58h] BYREF
  _OWORD v12[2]; // [rsp+48h] [rbp-50h] BYREF
  _QWORD v13[4]; // [rsp+68h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  try
  {
    v4 = std::wstring::wstring((__int64)v13, a3);
    v11[0] = a2;
    v12[0] = *(_OWORD *)v4;
    v12[1] = *(_OWORD *)(v4 + 16);
    *(_QWORD *)(v4 + 16) = 0LL;
    *(_QWORD *)(v4 + 24) = 7LL;
    *(_WORD *)v4 = 0;
    v5 = 0LL;
    v6 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v6 )
      v5 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1fe66ecf7a6d9918b4f3cb70af5821e0___::CTaskWrapper__lambda_1fe66ecf7a6d9918b4f3cb70af5821e0_____lambda_1fe66ecf7a6d9918b4f3cb70af5821e0___(
             (__int64)v6,
             (__int64)v11);
    CurrentThreadId = GetCurrentThreadId();
    v8 = SHTaskPoolQueueTask(0LL, 0LL, CurrentThreadId);
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    std::wstring::_Tidy_deallocate(v12);
    std::wstring::_Tidy_deallocate(v13);
    if ( v8 >= 0 )
    {
      result = 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x272,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
        (const char *)(unsigned int)v8);
      result = (unsigned int)v8;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x275,
                           (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
                           v9);
  }
  return result;
}
