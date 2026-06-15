/*
 * XREFs of ?CreateInstance@CApplicationManager@@SAJPEAPEAV1@@Z @ 0x180018AAC
 * Callers:
 *     ?RuntimeClassInitialize@CWindowsPolicyManager@@QEAAJXZ @ 0x180005478 (-RuntimeClassInitialize@CWindowsPolicyManager@@QEAAJXZ.c)
 * Callees:
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180002D18 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     WPP_SF_d @ 0x1800041E0 (WPP_SF_d.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x180004B98 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800359C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CApplicationManager::CreateInstance(struct CApplicationManager **a1)
{
  int v2; // ebx
  HANDLE ProcessHeap; // rax
  char *v4; // rax
  char *v5; // rdi
  void *v6; // rbp
  DWORD LastError; // ebx
  const char *v8; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = 0;
  if ( !a1 )
  {
    v2 = -2147467261;
LABEL_20:
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xBu, &WPP_48f5b41a97d23634bb345404f49671c8_Traceguids, v2);
    }
    AudPolicyLogError("CApplicationManager::CreateInstance", 402, v2);
    return (unsigned int)v2;
  }
  if ( !g_ApplicationManager )
  {
    ProcessHeap = GetProcessHeap();
    v4 = (char *)HeapAlloc(ProcessHeap, 0, 0xB0uLL);
    v5 = v4;
    if ( v4 )
    {
      *((_DWORD *)v4 + 2) = 1;
      *(_QWORD *)v4 = &CApplicationManager::`vftable';
      *((_QWORD *)v4 + 2) = 0LL;
      *((_QWORD *)v4 + 3) = 0LL;
      InitializeCriticalSectionEx((LPCRITICAL_SECTION)(v4 + 32), 0, 0);
      *((_QWORD *)v5 + 9) = 0LL;
      *((_DWORD *)v5 + 28) = 10;
      *((_QWORD *)v5 + 10) = 0LL;
      *((_QWORD *)v5 + 11) = 0LL;
      *((_QWORD *)v5 + 12) = 0LL;
      *((_QWORD *)v5 + 13) = 0LL;
      InitializeSRWLock((PSRWLOCK)v5 + 15);
      *((_QWORD *)v5 + 16) = 0LL;
      *((_QWORD *)v5 + 17) = 0LL;
      *((_QWORD *)v5 + 18) = 0LL;
      *((_QWORD *)v5 + 19) = 0LL;
      *((_QWORD *)v5 + 20) = 0LL;
      *((_DWORD *)v5 + 42) = 10;
    }
    else
    {
      v5 = 0LL;
    }
    if ( v5 )
    {
      v6 = (void *)*((_QWORD *)v5 + 2);
      if ( v6 )
      {
        LastError = GetLastError();
        LocalFree(v6);
        SetLastError(LastError);
      }
      *((_QWORD *)v5 + 2) = 0LL;
      if ( ConvertStringSidToSidW(
             L"S-1-15-3-1024-1692970155-4054893335-185714091-3362601943-3526593181-1159816984-2199008581-497492991",
             (PSID *)v5 + 2) )
      {
        v2 = 0;
      }
      else
      {
        v2 = wil::details::in1diag3::Return_GetLastError(
               retaddr,
               (void *)0x1D2,
               (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
               v8);
      }
      if ( v2 >= 0 )
      {
        *a1 = (struct CApplicationManager *)v5;
        v5 = 0LL;
      }
    }
    else
    {
      v2 = -2147024882;
    }
    if ( v5 && _InterlockedExchangeAdd((volatile signed __int32 *)v5 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(char *))(*(_QWORD *)v5 + 16LL))(v5);
      (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)v5 + 8LL))(v5, 1LL);
    }
    if ( v2 < 0 )
      goto LABEL_20;
  }
  return (unsigned int)v2;
}
