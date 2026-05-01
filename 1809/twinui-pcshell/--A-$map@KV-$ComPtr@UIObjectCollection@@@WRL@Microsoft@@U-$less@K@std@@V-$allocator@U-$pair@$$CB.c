/*
 * XREFs of ??A?$map@KV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@@5@@std@@QEAAAEAV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@AEBK@Z @ 0x18033413C
 * Callers:
 *     _lambda_8f06f521b4af2551e491113924647167_::operator() @ 0x18009582C (_lambda_8f06f521b4af2551e491113924647167_--operator().c)
 * Callees:
 *     ??$_Try_emplace@AEBK$$V@?$map@KV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@@5@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@_N@1@AEBK@Z @ 0x180333B74 (--$_Try_emplace@AEBK$$V@-$map@KV-$ComPtr@UIObjectCollection@@@WRL@Microsoft@@U-$less@K@std@@V-$a.c)
 */

__int64 __fastcall std::map<unsigned long,Microsoft::WRL::ComPtr<IObjectCollection>>::operator[](
        __int64 *a1,
        unsigned int *a2)
{
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  std::map<unsigned long,Microsoft::WRL::ComPtr<IObjectCollection>>::_Try_emplace<unsigned long const &,>(
    a1,
    (__int64)v3,
    a2);
  return v3[0] + 40LL;
}
