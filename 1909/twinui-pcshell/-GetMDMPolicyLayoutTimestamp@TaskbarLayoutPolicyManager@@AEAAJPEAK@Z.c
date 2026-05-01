/*
 * XREFs of ?GetMDMPolicyLayoutTimestamp@TaskbarLayoutPolicyManager@@AEAAJPEAK@Z @ 0x180183D98
 * Callers:
 *     _lambda_402144f3e77278201ba8e2dd3da35b8c_::operator() @ 0x1801827A0 (_lambda_402144f3e77278201ba8e2dd3da35b8c_--operator().c)
 * Callees:
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x1800497EC (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall TaskbarLayoutPolicyManager::GetMDMPolicyLayoutTimestamp(
        TaskbarLayoutPolicyManager *this,
        unsigned int *a2)
{
  LSTATUS DWORD; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a2 = 0;
  DWORD = SHRegGetDWORD(
            HKEY_CURRENT_USER,
            L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Taskband",
            L"MDMLayoutXMLLastModified",
            a2);
  v3 = DWORD;
  if ( DWORD == -2147024894 )
    return 0LL;
  if ( DWORD < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x25E,
      (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
      (const char *)(unsigned int)DWORD);
  return v3;
}
