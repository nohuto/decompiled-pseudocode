/*
 * XREFs of ?FindAppFromProcessId@CApplicationManager@@QEAAPEAVCApplication@@K@Z @ 0x18001FC5C
 * Callers:
 *     ?TsSessionLaunchBackgroundTask@@YAJKPEBG0PEAU_GUID@@@Z @ 0x180029080 (-TsSessionLaunchBackgroundTask@@YAJKPEBG0PEAU_GUID@@@Z.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180010910 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18001094C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
struct CApplication *__fastcall CApplicationManager::FindAppFromProcessId(CApplicationManager *this, int a2)
{
  CApplicationManager *v3; // rbx
  struct _RTL_CRITICAL_SECTION *v4; // rdi
  __int64 v5; // rbp
  _QWORD *v6; // rbx
  __int64 v7; // r14
  BOOL v8; // esi
  _QWORD *v9; // rcx
  __int64 v10; // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-30h] BYREF
  char v13; // [rsp+30h] [rbp-28h]

  v3 = g_ApplicationManager;
  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v5 = 0LL;
  v6 = (_QWORD *)*((_QWORD *)v3 + 9);
  while ( v6 )
  {
    v7 = v6[2];
    v6 = (_QWORD *)*v6;
    lpCriticalSection = (LPCRITICAL_SECTION)(v7 + 32);
    v13 = 0;
    ATL::CCritSecLock::Lock(&lpCriticalSection);
    v8 = 0;
    v9 = *(_QWORD **)(v7 + 72);
    while ( v9 && !v8 )
    {
      v10 = v9[2];
      v9 = (_QWORD *)*v9;
      v8 = a2 == *(_DWORD *)(v10 + 192);
    }
    if ( v13 )
    {
      LeaveCriticalSection(lpCriticalSection);
      v13 = 0;
    }
    if ( v8 )
    {
      v5 = v7;
      break;
    }
  }
  if ( v4 )
    LeaveCriticalSection(v4);
  return (struct CApplication *)v5;
}
