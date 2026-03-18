/*
 * XREFs of xxxSetProcessInitState @ 0x1C0075090
 * Callers:
 *     xxxInitProcessInfo @ 0x1C009B0FC (xxxInitProcessInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall xxxSetProcessInitState(PVOID a1, int a2)
{
  __int64 ProcessWin32Process; // rbx
  __int64 result; // rax
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct _KEVENT *v9; // rcx

  ProcessWin32Process = PsGetProcessWin32Process(a1);
  if ( ProcessWin32Process )
  {
LABEL_5:
    ++gdwDeferWinEvent;
    v6 = *(_DWORD *)(ProcessWin32Process + 12);
    if ( a2 )
    {
      if ( (v6 & 0x20) == 0 )
      {
        *(_DWORD *)(ProcessWin32Process + 12) = v6 | 0x20;
        gdwPUDFlags |= 0x8000000u;
        if ( a1 == gpepCSRSS )
          LOBYTE(a2) = a2 | 0x80;
        if ( (a2 & 0x80u) == 0 )
        {
          if ( (a2 & 0x40) == 0 || (int)IszzzCalcStartCursorHideSupported() < 0 )
            goto LABEL_17;
          v7 = 2000LL;
          v8 = ProcessWin32Process;
          goto LABEL_12;
        }
        *(_DWORD *)(ProcessWin32Process + 12) |= 2u;
        if ( (int)IszzzCalcStartCursorHideSupported() >= 0 )
        {
          v7 = 0LL;
          v8 = 0LL;
LABEL_12:
          zzzCalcStartCursorHide(v8, v7);
        }
      }
    }
    else if ( (v6 & 8) == 0 )
    {
      if ( (v6 & 4) != 0 )
      {
        *(_DWORD *)(ProcessWin32Process + 12) = v6 & 0xFFFFFFFB;
        if ( (int)IszzzCalcStartCursorHideSupported() >= 0 )
          zzzCalcStartCursorHide(0LL, 0LL);
      }
      *(_DWORD *)(ProcessWin32Process + 12) |= 1u;
      v9 = *(struct _KEVENT **)(ProcessWin32Process + 16);
      if ( v9 )
      {
        if ( v9 == (struct _KEVENT *)-1LL )
          goto LABEL_17;
        KeSetEvent(v9, 1, 0);
        ObfDereferenceObject(*(PVOID *)(ProcessWin32Process + 16));
      }
      *(_QWORD *)(ProcessWin32Process + 16) = -1LL;
    }
LABEL_17:
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
