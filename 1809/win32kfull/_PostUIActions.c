/*
 * XREFs of _PostUIActions @ 0x1C0221560
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     _PostMessage @ 0x1C00DC980 (_PostMessage.c)
 */

__int64 __fastcall PostUIActions(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  __int64 CurrentProcessWin32Process; // rax
  struct tagWND *v6; // rcx
  __int64 v8; // rcx

  v4 = a1;
  if ( (unsigned int)a1 > 2 )
  {
    v8 = 87LL;
  }
  else
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
    if ( (unsigned int)IsImmersiveBroker(CurrentProcessWin32Process) )
    {
      a2 = gptiCurrent;
      a3 = *(_QWORD *)(gptiCurrent + 456LL);
      if ( a3 )
      {
        v6 = *(struct tagWND **)(a3 + 248);
        if ( v6 )
        {
          if ( a3 == grpdeskRitInput )
            return (int)PostMessage(v6, 0x32Eu, v4, 0LL);
        }
      }
    }
    v8 = 5LL;
  }
  UserSetLastError(v8, a2, a3, a4);
  return 0LL;
}
