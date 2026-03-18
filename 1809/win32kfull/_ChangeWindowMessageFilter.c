/*
 * XREFs of _ChangeWindowMessageFilter @ 0x1C00D0430
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     UIPISQMChangeFilter @ 0x1C00D07D0 (UIPISQMChangeFilter.c)
 *     ?ValidateChangeMessageFilter@@YAHPEAUtagPROCESSINFO@@I@Z @ 0x1C00D0864 (-ValidateChangeMessageFilter@@YAHPEAUtagPROCESSINFO@@I@Z.c)
 *     ?AddMessageToFilter@@YAHPEAPEAPEAXIPEAH@Z @ 0x1C00D0AA0 (-AddMessageToFilter@@YAHPEAPEAPEAXIPEAH@Z.c)
 *     ?RemoveMessageFromFilter@@YAHPEAPEAPEAXIPEAH@Z @ 0x1C01097C0 (-RemoveMessageFromFilter@@YAHPEAPEAPEAXIPEAH@Z.c)
 */

__int64 __fastcall ChangeWindowMessageFilter(__int64 a1, int a2)
{
  unsigned int v2; // ebx
  unsigned int v4; // edi
  __int64 CurrentProcessWin32Process; // rsi
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // [rsp+40h] [rbp+18h] BYREF

  v2 = 0;
  v13 = 0;
  v4 = a1;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  UIPISQMChangeFilter((struct tagPROCESSINFO *)CurrentProcessWin32Process);
  if ( !gbEnforceUIPI )
    return 1LL;
  if ( !(unsigned int)ValidateChangeMessageFilter((struct tagPROCESSINFO *)CurrentProcessWin32Process, v4) )
    return 0LL;
  if ( a2 == 1 )
  {
    return (unsigned int)AddMessageToFilter((void ***)(CurrentProcessWin32Process + 848), v4, 0LL);
  }
  else if ( a2 == 2 )
  {
    v2 = RemoveMessageFromFilter((void ***)(CurrentProcessWin32Process + 848), v4, &v13);
    if ( v2 )
    {
      if ( v13 )
      {
        UserSetLastError(87LL, v10, v11, v12);
        return 0;
      }
    }
  }
  else
  {
    UserSetLastError(87LL, v6, v7, v8);
  }
  return v2;
}
