/*
 * XREFs of ?TerminateApp@Win32ProcessInfo@@QEAAX_NAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1800BBD08
 * Callers:
 *     ?TerminateApp@Win32AppInfo@@QEAAX_N@Z @ 0x1800BB9F8 (-TerminateApp@Win32AppInfo@@QEAAX_N@Z.c)
 * Callees:
 *     _TlgCreateWsz @ 0x180027E20 (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x180039540 (_TlgWrite.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x18005D1A0 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x1800798F4 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ?Provider@AppUsageTelemetry@@SAQEBU_TlgProvider_t@@XZ @ 0x1800B2940 (-Provider@AppUsageTelemetry@@SAQEBU_TlgProvider_t@@XZ.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$com_ptr_t@UITreeNode@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800B64B4 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIV-$com_ptr_t.c)
 *     ??$DebugInfo@AEAY0CE@$$CBG@AppUsageTelemetry@@SAXAEAY0CE@$$CBG@Z @ 0x1800B87B4 (--$DebugInfo@AEAY0CE@$$CBG@AppUsageTelemetry@@SAXAEAY0CE@$$CBG@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_42dce70c870a3964e7319458b8bf7bca___ @ 0x1800B8E0C (Windows--Internal--ComTaskPool--QueueTask__lambda_42dce70c870a3964e7319458b8bf7bca___.c)
 */

// Hidden C++ exception states: #wind=1
wil::details::in1diag3 **__fastcall Win32ProcessInfo::TerminateApp(__int64 a1, char a2)
{
  wil::details::in1diag3 **result; // rax
  int v4; // ebx
  __int64 v5; // rcx
  int v6; // ebx
  __int64 *v7; // rdi
  __int64 v8; // rbx
  TraceLoggingHProvider v9; // r10
  _QWORD v10[2]; // [rsp+38h] [rbp-19h] BYREF
  _QWORD v11[4]; // [rsp+48h] [rbp-9h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp+17h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+88h] [rbp+37h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+5Fh] BYREF

  result = &retaddr;
  v10[1] = -2LL;
  if ( a2 )
  {
    AppUsageTelemetry::DebugInfo<unsigned short const (&)[36]>(L"Attempting to terminate app process");
    v4 = *(_DWORD *)(a1 + 16);
    std::wstring::wstring((__int64)v11);
    LODWORD(pData.Ptr) = v4;
    std::wstring::wstring((__int64)&pData.Size);
    v6 = Windows::Internal::ComTaskPool::QueueTask__lambda_42dce70c870a3964e7319458b8bf7bca___(v5, (__int64)&pData);
    std::wstring::_Tidy_deallocate(&pData.Size);
    if ( v6 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xCA,
        (__int64)"pcshell\\twinui\\familyappusagemanager\\lib\\win32appstatemanager.cpp",
        (const char *)(unsigned int)v6);
    return (wil::details::in1diag3 **)std::wstring::_Tidy_deallocate(v11);
  }
  else
  {
    v7 = *(__int64 **)a1;
    v8 = **(_QWORD **)a1;
    v10[0] = v8;
    while ( (__int64 *)v8 != v7 )
    {
      if ( **(_DWORD **)(v8 + 40) != 1 )
      {
        if ( *(_DWORD *)AppUsageTelemetry::Provider(a1) > 5u )
        {
          TlgCreateWsz(&pDesc, L"Found app view to close");
          TlgWrite(v9, &unk_180509EA4, 0LL, 0LL, 3u, &pData);
        }
        PostMessageW(*(HWND *)(v8 + 32), 0x112u, 0xF060uLL, 0LL);
      }
      result = (wil::details::in1diag3 **)std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,wil::com_ptr_t<Windows::Internal::ComposableShell::ITreeNode,wil::err_exception_policy>>>>,std::_Iterator_base0>::operator++(v10);
      v8 = v10[0];
    }
  }
  return result;
}
