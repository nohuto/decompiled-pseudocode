/*
 * XREFs of _PostUIActions @ 0x1C0239670
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     _PostMessage @ 0x1C01312B0 (_PostMessage.c)
 */

__int64 __fastcall PostUIActions(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v6; // rcx
  __int64 v8; // rcx

  v4 = a1;
  if ( (unsigned int)a1 > 2 )
  {
    v8 = 87LL;
  }
  else
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1, a2);
    if ( (unsigned int)IsImmersiveBroker(CurrentProcessWin32Process) )
    {
      a2 = gptiCurrent;
      a3 = *(_QWORD *)(gptiCurrent + 448LL);
      if ( a3 )
      {
        v6 = *(_QWORD *)(a3 + 248);
        if ( v6 )
        {
          if ( a3 == grpdeskRitInput )
            return (int)PostMessage(v6, 814, v4, 0);
        }
      }
    }
    v8 = 5LL;
  }
  UserSetLastError(v8, a2, a3, a4);
  return 0LL;
}
