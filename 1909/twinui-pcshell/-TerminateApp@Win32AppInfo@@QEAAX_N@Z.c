/*
 * XREFs of ?TerminateApp@Win32AppInfo@@QEAAX_N@Z @ 0x1800BB9F8
 * Callers:
 *     ?TerminateAppOnce@Win32AppStateManager@@AEAA_NAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@_N@Z @ 0x1800BBE68 (-TerminateAppOnce@Win32AppStateManager@@AEAA_NAEBV-$basic_string@GU-$char_traits@G@std@@V-$alloc.c)
 * Callees:
 *     _TlgCreateWsz @ 0x180027E20 (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x180039540 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ?Provider@AppUsageTelemetry@@SAQEBU_TlgProvider_t@@XZ @ 0x1800B2940 (-Provider@AppUsageTelemetry@@SAQEBU_TlgProvider_t@@XZ.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$com_ptr_t@UITreeNode@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800B64B4 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIV-$com_ptr_t.c)
 *     ?IsProcessActive@Win32ProcessInfo@@QEAA_NXZ @ 0x1800BB348 (-IsProcessActive@Win32ProcessInfo@@QEAA_NXZ.c)
 *     ?TerminateApp@Win32ProcessInfo@@QEAAX_NAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1800BBD08 (-TerminateApp@Win32ProcessInfo@@QEAAX_NAEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@.c)
 */

void __fastcall Win32AppInfo::TerminateApp(Win32AppInfo *this, char a2)
{
  __int64 *v2; // rdi
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rdx
  TraceLoggingHProvider v8; // r10
  __int64 v9; // [rsp+30h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+58h] [rbp-20h] BYREF

  v2 = (__int64 *)*((_QWORD *)this + 4);
  v5 = *v2;
  v9 = *v2;
  while ( (__int64 *)v5 != v2 )
  {
    if ( Win32ProcessInfo::IsProcessActive(*(__int64 ***)(v5 + 40)) )
    {
      if ( *(_DWORD *)AppUsageTelemetry::Provider(v6) > 5u )
      {
        TlgCreateWsz(&pDesc, L"Found app process to terminate");
        TlgWrite(v8, &unk_180509EA4, 0LL, 0LL, 3u, &pData);
      }
      LOBYTE(v7) = a2;
      Win32ProcessInfo::TerminateApp(*(_QWORD *)(v5 + 40), v7, this);
    }
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,wil::com_ptr_t<Windows::Internal::ComposableShell::ITreeNode,wil::err_exception_policy>>>>,std::_Iterator_base0>::operator++(&v9);
    v5 = v9;
  }
}
