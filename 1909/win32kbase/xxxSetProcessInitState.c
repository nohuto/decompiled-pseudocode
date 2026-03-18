/*
 * XREFs of xxxSetProcessInitState @ 0x1C00376C0
 * Callers:
 *     xxxInitProcessInfo @ 0x1C00AA140 (xxxInitProcessInfo.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C00378D4 (WPP_RECORDER_SF_q.c)
 */

__int64 __fastcall xxxSetProcessInitState(PVOID a1, int a2)
{
  int v4; // edx
  __int64 ProcessWin32Process; // rbx
  __int64 result; // rax
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct _KEVENT *v10; // rcx

  ProcessWin32Process = PsGetProcessWin32Process(a1);
  if ( ProcessWin32Process )
  {
LABEL_5:
    ++gdwDeferWinEvent;
    v7 = *(_DWORD *)(ProcessWin32Process + 12);
    if ( a2 )
    {
      if ( (v7 & 0x20) == 0 )
      {
        *(_DWORD *)(ProcessWin32Process + 12) = v7 | 0x20;
        gdwPUDFlags |= 0x8000000u;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v4) = 4;
          WPP_RECORDER_SF_q(
            (_DWORD)gBaseLog,
            v4,
            13,
            10,
            (__int64)&WPP_ab23653d659a3eef467127bc1c313d97_Traceguids,
            ProcessWin32Process);
        }
        if ( a1 == gpepCSRSS )
          LOBYTE(a2) = a2 | 0x80;
        if ( (a2 & 0x80u) == 0 )
        {
          if ( (a2 & 0x40) == 0 || (int)IszzzCalcStartCursorHideSupported() < 0 )
            goto LABEL_19;
          v8 = 2000LL;
          v9 = ProcessWin32Process;
          goto LABEL_14;
        }
        *(_DWORD *)(ProcessWin32Process + 12) |= 2u;
        if ( (int)IszzzCalcStartCursorHideSupported() >= 0 )
        {
          v8 = 0LL;
          v9 = 0LL;
LABEL_14:
          zzzCalcStartCursorHide(v9, v8);
        }
      }
    }
    else if ( (v7 & 8) == 0 )
    {
      if ( (v7 & 4) != 0 )
      {
        *(_DWORD *)(ProcessWin32Process + 12) = v7 & 0xFFFFFFFB;
        if ( (int)IszzzCalcStartCursorHideSupported() >= 0 )
          zzzCalcStartCursorHide(0LL, 0LL);
      }
      *(_DWORD *)(ProcessWin32Process + 12) |= 1u;
      v10 = *(struct _KEVENT **)(ProcessWin32Process + 16);
      if ( v10 )
      {
        if ( v10 == (struct _KEVENT *)-1LL )
          goto LABEL_19;
        KeSetEvent(v10, 1, 0);
        ObfDereferenceObject(*(PVOID *)(ProcessWin32Process + 16));
      }
      *(_QWORD *)(ProcessWin32Process + 16) = -1LL;
    }
LABEL_19:
    --gdwDeferWinEvent;
    return 0LL;
  }
  result = IsAllocateW32ProcessSupported();
  if ( (int)result >= 0 )
  {
    result = AllocateW32Process(a1);
    if ( (int)result >= 0 )
    {
      ProcessWin32Process = PsGetProcessWin32Process(a1);
      goto LABEL_5;
    }
  }
  return result;
}
