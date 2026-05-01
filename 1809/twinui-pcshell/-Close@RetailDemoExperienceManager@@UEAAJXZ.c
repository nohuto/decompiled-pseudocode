/*
 * XREFs of ?Close@RetailDemoExperienceManager@@UEAAJXZ @ 0x180184540
 * Callers:
 *     <none>
 * Callees:
 *     ?_Close@RetailDemoExperienceManager@@AEAAXXZ @ 0x180186024 (-_Close@RetailDemoExperienceManager@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall RetailDemoExperienceManager::Close(RetailDemoExperienceManager *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  const char *v3; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 336);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 336));
  try
  {
    RetailDemoExperienceManager::_Close((RetailDemoExperienceManager *)((char *)this - 128));
    if ( v2 )
      LeaveCriticalSection(v2);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xD9,
                           (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
                           v3);
  }
  return result;
}
