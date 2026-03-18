/*
 * XREFs of _PostUIActions @ 0x1C01F9450
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     _PostMessage @ 0x1C006DAA0 (_PostMessage.c)
 */

__int64 __fastcall PostUIActions(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rbx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v4; // rcx
  struct tagWND *v5; // rcx

  v2 = (unsigned int)a1;
  if ( (unsigned int)a1 > 2 )
  {
    v4 = 87LL;
  }
  else
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
    if ( (unsigned int)IsImmersiveBroker(CurrentProcessWin32Process) )
    {
      a2 = *(_QWORD *)(gptiCurrent + 448LL);
      if ( a2 )
      {
        v5 = *(struct tagWND **)(a2 + 248);
        if ( v5 )
        {
          if ( a2 == grpdeskRitInput )
            return (int)PostMessage(v5, 0x32Eu, v2, 0LL);
        }
      }
    }
    v4 = 5LL;
  }
  UserSetLastError(v4, a2);
  return 0LL;
}
