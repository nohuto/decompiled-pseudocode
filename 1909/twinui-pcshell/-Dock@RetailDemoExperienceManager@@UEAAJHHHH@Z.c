/*
 * XREFs of ?Dock@RetailDemoExperienceManager@@UEAAJHHHH@Z @ 0x1801D3D60
 * Callers:
 *     <none>
 * Callees:
 *     ?_Dock@RetailDemoExperienceManager@@AEAAXXZ @ 0x1801D57B0 (-_Dock@RetailDemoExperienceManager@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall RetailDemoExperienceManager::Dock(RetailDemoExperienceManager *this, int a2, int a3, int a4, int a5)
{
  struct _RTL_CRITICAL_SECTION *v9; // rbx
  const char *v10; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v9 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 336);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 336));
  *((_BYTE *)this + 254) = a2 != 0;
  *((_DWORD *)this + 56) = a3;
  *((_DWORD *)this + 58) = a4;
  *((_DWORD *)this + 57) = a5;
  try
  {
    RetailDemoExperienceManager::_Dock((RetailDemoExperienceManager *)((char *)this - 128));
    if ( v9 )
      LeaveCriticalSection(v9);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x12A,
                           (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
                           v10);
  }
  return result;
}
