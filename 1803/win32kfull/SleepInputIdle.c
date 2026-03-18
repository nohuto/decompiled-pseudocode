/*
 * XREFs of SleepInputIdle @ 0x1C000DDCC
 * Callers:
 *     xxxDesktopThreadWaiter @ 0x1C000DA70 (xxxDesktopThreadWaiter.c)
 * Callees:
 *     <none>
 */

void __fastcall SleepInputIdle(__int64 a1)
{
  __int64 v2; // rax
  __int64 CurrentProcessWin32Process; // rdi
  struct _KEVENT *v4; // rcx
  __int64 v5; // rdx

  if ( (*(_DWORD *)(a1 + 480) & 0x1000) != 0 )
  {
    if ( !*(_QWORD *)(*(_QWORD *)(a1 + 608) + 24LL) )
      return;
    EtwTraceSleepInputIdle(0LL, a1);
    v5 = *(_QWORD *)(*(_QWORD *)(a1 + 608) + 24LL);
    v4 = *(struct _KEVENT **)(v5 + 32);
    if ( v4 == (struct _KEVENT *)-1LL )
    {
      *(_QWORD *)(v5 + 32) = 0LL;
      return;
    }
    goto LABEL_11;
  }
  v2 = *(_QWORD *)(a1 + 416);
  if ( !*(_QWORD *)(v2 + 328) )
  {
    *(_QWORD *)(v2 + 328) = a1;
    v2 = *(_QWORD *)(a1 + 416);
  }
  if ( *(_QWORD *)(v2 + 328) == a1 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
    EtwTraceSleepInputIdle(0LL, a1);
    v4 = *(struct _KEVENT **)(CurrentProcessWin32Process + 16);
    if ( v4 == (struct _KEVENT *)-1LL )
    {
      *(_QWORD *)(CurrentProcessWin32Process + 16) = 0LL;
      return;
    }
LABEL_11:
    if ( v4 )
      KeClearEvent(v4);
  }
}
