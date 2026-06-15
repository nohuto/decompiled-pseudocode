/*
 * XREFs of ?DoShutdownADG@CAudioDGProcess@@AEAAJXZ @ 0x18002CAAC
 * Callers:
 *     ?DoTerminateADG@CAudioDGProcess@@AEAAJXZ @ 0x18002C8C8 (-DoTerminateADG@CAudioDGProcess@@AEAAJXZ.c)
 * Callees:
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x18002CB78 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?WaitForADGStartup@CAudioDGProcess@@AEAAJPEAK@Z @ 0x18002CB98 (-WaitForADGStartup@CAudioDGProcess@@AEAAJPEAK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAudioDGProcess::DoShutdownADG(CAudioDGProcess *this)
{
  void *v2; // rdx
  char *v3; // rsi
  DWORD LastError; // ebx
  unsigned int v6; // [rsp+30h] [rbp+8h] BYREF

  if ( (unsigned __int64)(*((_QWORD *)this + 11) - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    if ( *((_QWORD *)this + 16) )
    {
      (*(void (__fastcall **)(struct CAudioThreadPool *))(*(_QWORD *)ThreadPool + 96LL))(ThreadPool);
      *((_QWORD *)this + 16) = 0LL;
    }
    if ( CAudioDGProcess::WaitForADGStartup(this, &v6) >= 0 )
      wil::details::SetEvent(*((wil::details **)this + 15), v2);
    WaitForSingleObjectEx(*((HANDLE *)this + 11), 0xFFFFFFFF, 0);
    v3 = (char *)*((_QWORD *)this + 11);
    if ( (unsigned __int64)(v3 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      LastError = GetLastError();
      CloseHandle(v3);
      SetLastError(LastError);
    }
    *((_QWORD *)this + 11) = 0LL;
    *((_DWORD *)this + 24) = 0;
    *((_DWORD *)this + 36) = GetTickCount();
  }
  return 0LL;
}
