/*
 * XREFs of _lambda_aef78f8519886e93f79e2f19914772e2_::operator() @ 0x180394540
 * Callers:
 *     wil::ResultFromException__lambda_aef78f8519886e93f79e2f19914772e2___ @ 0x180393DD8 (wil--ResultFromException__lambda_aef78f8519886e93f79e2f19914772e2___.c)
 * Callees:
 *     ?CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z @ 0x180026898 (-CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??$_Try_emplace@AEBK$$V@?$map@KV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@@5@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@_N@1@AEBK@Z @ 0x180393E24 (--$_Try_emplace@AEBK$$V@-$map@KV-$ComPtr@UIObjectCollection@@@WRL@Microsoft@@U-$less@K@std@@V-$a.c)
 */

void __fastcall lambda_aef78f8519886e93f79e2f19914772e2_::operator()(__int64 a1)
{
  __int64 v2; // rbx
  const struct _GUID *v3; // rdx
  __int64 v4; // rcx
  int Instance; // eax
  int v6; // eax
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  std::map<unsigned long,Microsoft::WRL::ComPtr<IObjectCollection>>::_Try_emplace<unsigned long const &,>(
    *(__int64 **)a1,
    (__int64)v7,
    *(_DWORD **)(a1 + 8));
  if ( !*(_QWORD *)(v7[0] + 40LL) )
  {
    std::map<unsigned long,Microsoft::WRL::ComPtr<IObjectCollection>>::_Try_emplace<unsigned long const &,>(
      *(__int64 **)a1,
      (__int64)v7,
      *(_DWORD **)(a1 + 8));
    v2 = v7[0];
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(v7[0] + 40LL));
    Instance = CEnumerableObjectCollection::CreateInstance(v4, v3, (void **)(v2 + 40));
    if ( Instance < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x3BD,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
        (const char *)(unsigned int)Instance);
  }
  std::map<unsigned long,Microsoft::WRL::ComPtr<IObjectCollection>>::_Try_emplace<unsigned long const &,>(
    *(__int64 **)a1,
    (__int64)v7,
    *(_DWORD **)(a1 + 8));
  if ( *(_QWORD *)(v7[0] + 40LL) )
  {
    std::map<unsigned long,Microsoft::WRL::ComPtr<IObjectCollection>>::_Try_emplace<unsigned long const &,>(
      *(__int64 **)a1,
      (__int64)v7,
      *(_DWORD **)(a1 + 8));
    v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v7[0] + 40LL) + 40LL))(
           *(_QWORD *)(v7[0] + 40LL),
           **(_QWORD **)(a1 + 16));
    if ( v6 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x3BD,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
        (const char *)(unsigned int)v6);
  }
}
