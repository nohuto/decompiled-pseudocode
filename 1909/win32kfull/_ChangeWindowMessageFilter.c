/*
 * XREFs of _ChangeWindowMessageFilter @ 0x1C0011FE0
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveMessageFromFilter@@YAHPEAPEAPEAXIPEAH@Z @ 0x1C001138C (-RemoveMessageFromFilter@@YAHPEAPEAPEAXIPEAH@Z.c)
 *     UIPISQMChangeFilter @ 0x1C00125F8 (UIPISQMChangeFilter.c)
 *     ?ValidateChangeMessageFilter@@YAHPEAUtagPROCESSINFO@@I@Z @ 0x1C001268C (-ValidateChangeMessageFilter@@YAHPEAUtagPROCESSINFO@@I@Z.c)
 *     ?AddMessageToFilter@@YAHPEAPEAPEAXIPEAH@Z @ 0x1C00128D4 (-AddMessageToFilter@@YAHPEAPEAPEAXIPEAH@Z.c)
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 */

__int64 __fastcall ChangeWindowMessageFilter(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  int v3; // ebp
  unsigned int v4; // edi
  __int64 CurrentProcessWin32Process; // rsi
  __int64 v6; // rcx
  int v8; // [rsp+40h] [rbp+18h] BYREF

  v2 = 0;
  v3 = a2;
  v8 = 0;
  v4 = a1;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1, a2);
  UIPISQMChangeFilter((struct tagPROCESSINFO *)CurrentProcessWin32Process);
  if ( !(unsigned __int8)Enforced(v6) )
    return 1LL;
  if ( !(unsigned int)ValidateChangeMessageFilter((struct tagPROCESSINFO *)CurrentProcessWin32Process, v4) )
    return 0LL;
  if ( v3 == 1 )
  {
    return (unsigned int)AddMessageToFilter((void ***)(CurrentProcessWin32Process + 840), v4, 0LL);
  }
  else if ( v3 == 2 )
  {
    v2 = RemoveMessageFromFilter((void ***)(CurrentProcessWin32Process + 840), v4, &v8);
    if ( v2 )
    {
      if ( v8 )
      {
        UserSetLastError(87LL);
        return 0;
      }
    }
  }
  else
  {
    UserSetLastError(87LL);
  }
  return v2;
}
