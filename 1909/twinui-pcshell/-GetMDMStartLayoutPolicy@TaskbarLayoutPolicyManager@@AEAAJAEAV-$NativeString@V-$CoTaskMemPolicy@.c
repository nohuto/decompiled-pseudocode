/*
 * XREFs of ?GetMDMStartLayoutPolicy@TaskbarLayoutPolicyManager@@AEAAJAEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@@Z @ 0x180183DF8
 * Callers:
 *     _lambda_402144f3e77278201ba8e2dd3da35b8c_::operator() @ 0x1801827A0 (_lambda_402144f3e77278201ba8e2dd3da35b8c_--operator().c)
 *     ?GetMDMLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z @ 0x180183BF0 (-GetMDMLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetMDMStartLayoutPolicyWithFlags@TaskbarLayoutPolicyManager@@AEAAJW4PMPolicyRequestedDataFlags@@AEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@@Z @ 0x180183E94 (-GetMDMStartLayoutPolicyWithFlags@TaskbarLayoutPolicyManager@@AEAAJW4PMPolicyRequestedDataFlags@.c)
 */

__int64 __fastcall TaskbarLayoutPolicyManager::GetMDMStartLayoutPolicy(__int64 a1, _QWORD *a2)
{
  int MDMStartLayoutPolicyWithFlags; // eax
  __int64 v4; // rcx
  unsigned int v5; // edi
  int v7; // eax
  unsigned int v8; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  MDMStartLayoutPolicyWithFlags = TaskbarLayoutPolicyManager::GetMDMStartLayoutPolicyWithFlags(a1, 1LL, a2);
  v5 = MDMStartLayoutPolicyWithFlags;
  if ( MDMStartLayoutPolicyWithFlags >= 0 )
  {
    if ( *a2 && *(_WORD *)*a2 )
      return 0LL;
    v7 = TaskbarLayoutPolicyManager::GetMDMStartLayoutPolicyWithFlags(v4, 2LL, a2);
    v8 = v7;
    if ( v7 >= 0 )
    {
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x278,
        (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
        (const char *)(unsigned int)v7);
      return v8;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x273,
      (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
      (const char *)(unsigned int)MDMStartLayoutPolicyWithFlags);
    return v5;
  }
}
