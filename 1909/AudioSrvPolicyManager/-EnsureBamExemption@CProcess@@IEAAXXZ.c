/*
 * XREFs of ?EnsureBamExemption@CProcess@@IEAAXXZ @ 0x180014110
 * Callers:
 *     ?UpdateStreamCountAndProcessCategory@CProcess@@IEAAXPEBGKHHPEAHPEAW4_APPLICATION_CATEGORY@@@Z @ 0x180012E5C (-UpdateStreamCountAndProcessCategory@CProcess@@IEAAXPEBGKHHPEAHPEAW4_APPLICATION_CATEGORY@@@Z.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000D600 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 */

void __fastcall CProcess::EnsureBamExemption(CProcess *this)
{
  struct _TP_TIMER *v2; // rcx
  _QWORD *v3; // rdi
  char *v4; // rsi
  __int64 v5; // rbp
  DWORD LastError; // ebx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v8; // [rsp+28h] [rbp-10h]

  v2 = (struct _TP_TIMER *)*((_QWORD *)this + 77);
  if ( v2 )
  {
    SetThreadpoolTimer(v2, 0LL, 0, 0);
    WaitForThreadpoolTimerCallbacks(*((PTP_TIMER *)this + 77), 1);
  }
  v8 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 568);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v3 = (_QWORD *)((char *)this + 608);
  v4 = (char *)*((_QWORD *)this + 76);
  if ( ((unsigned __int64)(v4 + 1) & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
  {
    v5 = *((_QWORD *)this + 23);
    if ( (unsigned __int64)(v4 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      LastError = GetLastError();
      CloseHandle(v4);
      SetLastError(LastError);
    }
    *v3 = 0LL;
    NtAcquireProcessActivityReference(v3, v5, 0LL);
  }
  if ( v8 )
    LeaveCriticalSection(lpCriticalSection);
}
