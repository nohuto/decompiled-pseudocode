/*
 * XREFs of ?Float@RetailDemoExperienceManager@@UEAAJHHHH@Z @ 0x1801B4EC0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Float@RetailDemoExperienceManager@@AEAAXXZ @ 0x1801B6A3C (-_Float@RetailDemoExperienceManager@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall RetailDemoExperienceManager::Float(
        RetailDemoExperienceManager *this,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5)
{
  struct _RTL_CRITICAL_SECTION *v9; // rbx
  const char *v10; // r9
  __int64 result; // rax
  __int128 v12; // [rsp+28h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v9 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 336);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 336));
  *(_QWORD *)&v12 = __PAIR64__(a3, a2);
  *((_QWORD *)&v12 + 1) = __PAIR64__(a5, a4);
  *(_OWORD *)((char *)this + 236) = v12;
  try
  {
    RetailDemoExperienceManager::_Float((RetailDemoExperienceManager *)((char *)this - 128));
    if ( v9 )
      LeaveCriticalSection(v9);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xFA,
                           (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
                           v10);
  }
  return result;
}
