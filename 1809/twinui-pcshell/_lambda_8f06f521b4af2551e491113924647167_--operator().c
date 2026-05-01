/*
 * XREFs of _lambda_8f06f521b4af2551e491113924647167_::operator() @ 0x18009582C
 * Callers:
 *     wil::ResultFromException__lambda_8f06f521b4af2551e491113924647167___ @ 0x180095600 (wil--ResultFromException__lambda_8f06f521b4af2551e491113924647167___.c)
 * Callees:
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180080A50 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z @ 0x1800ED150 (-CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z.c)
 *     ??A?$map@KV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@@5@@std@@QEAAAEAV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@AEBK@Z @ 0x18033413C (--A-$map@KV-$ComPtr@UIObjectCollection@@@WRL@Microsoft@@U-$less@K@std@@V-$allocator@U-$pair@$$CB.c)
 */

void __fastcall lambda_8f06f521b4af2551e491113924647167_::operator()(_QWORD *a1)
{
  __int64 *v2; // rax
  __int64 *v3; // rax
  const struct _GUID *v4; // rdx
  int v5; // ecx
  int Instance; // eax
  _QWORD *v7; // rax
  int v8; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !*(_QWORD *)std::map<unsigned long,Microsoft::WRL::ComPtr<IObjectCollection>>::operator[](*a1, a1[1]) )
  {
    v2 = (__int64 *)std::map<unsigned long,Microsoft::WRL::ComPtr<IObjectCollection>>::operator[](*a1, a1[1]);
    v3 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IObjectCollection>>(v2);
    Instance = CEnumerableObjectCollection::CreateInstance(v5, v4, (void **)v3);
    if ( Instance < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        901LL,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
        (const char *)(unsigned int)Instance);
  }
  if ( *(_QWORD *)std::map<unsigned long,Microsoft::WRL::ComPtr<IObjectCollection>>::operator[](*a1, a1[1]) )
  {
    v7 = (_QWORD *)std::map<unsigned long,Microsoft::WRL::ComPtr<IObjectCollection>>::operator[](*a1, a1[1]);
    v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v7 + 40LL))(*v7, *(_QWORD *)a1[2]);
    if ( v8 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        901LL,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
        (const char *)(unsigned int)v8);
  }
}
