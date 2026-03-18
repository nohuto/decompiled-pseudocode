/*
 * XREFs of ?xxxWrapRealDefWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C00676B0
 * Callers:
 *     <none>
 * Callees:
 *     xxxRealDefWindowProc @ 0x1C0066C18 (xxxRealDefWindowProc.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     ?IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@0PEAUtagWND@@I_K_JH@Z @ 0x1C00D08BC (-IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@0PEAUtagWND@@I_K_JH@Z.c)
 *     MSGSQMAddMessage @ 0x1C00D0A28 (MSGSQMAddMessage.c)
 *     ?IsMessageAlwaysAllowedAcrossIL@@YAHI@Z @ 0x1C00D0C18 (-IsMessageAlwaysAllowedAcrossIL@@YAHI@Z.c)
 */

__int64 __fastcall xxxWrapRealDefWindowProc(
        struct tagWND *a1,
        unsigned int a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  __int64 CurrentProcessWin32Process; // rdi
  __int64 v9; // rsi
  int v11; // r14d
  unsigned int v12; // edx
  int v13; // r8d
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rcx
  __int16 v16; // cx
  __int64 v17; // rdx

  if ( a1 != (struct tagWND *)-1LL )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
    v9 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL);
    if ( v9 == CurrentProcessWin32Process )
      return xxxRealDefWindowProc(a1, a2, a3, a4);
    if ( a2 != 717 )
    {
      if ( (unsigned int)IsMessageAllowedAcrossILByReceiver(
                           (struct tagPROCESSINFO *)CurrentProcessWin32Process,
                           (struct tagPROCESSINFO *)v9,
                           a1,
                           a2,
                           a3,
                           a4,
                           1) )
        return xxxRealDefWindowProc(a1, a2, a3, a4);
      v11 = IsMessageAlwaysAllowedAcrossIL(a2);
      if ( v11 )
      {
        v16 = 2;
      }
      else
      {
        if ( a2 == 274 && ((a3 - 61472) & 0xFFFFFFFFFFFFFEBFuLL) == 0 && a3 != 61792 )
        {
          MSGSQMAddMessage((struct tagPROCESSINFO *)CurrentProcessWin32Process, (struct tagPROCESSINFO *)v9, a4, 1, 2);
          return xxxRealDefWindowProc(a1, a2, a3, a4);
        }
        if ( *(_QWORD *)v9 == gpepCSRSS )
        {
          v12 = 0x2000;
          v13 = 0;
        }
        else
        {
          v12 = *(_DWORD *)(v9 + 880);
          v13 = *(_DWORD *)(v9 + 884);
        }
        v14 = *(_QWORD *)(CurrentProcessWin32Process + 880);
        if ( !gbEnforceUIPI
          || (unsigned int)v14 > v12
          || (_DWORD)v14 == v12 && ((v15 = HIDWORD(v14), (_DWORD)v15 == v13) || (_DWORD)v15 == -1 || v13 == -1) )
        {
          v11 = 1;
          v16 = gbEnforceUIPI != 0 ? 5 : 1;
        }
        else
        {
          v11 = 0;
          if ( a2 == 793 )
          {
            v17 = *((_QWORD *)a1 + 2);
            if ( *(struct tagWND **)(v17 + 1368) == a1 && *(_QWORD *)(v17 + 432) == *(_QWORD *)(gptiCurrent + 432LL) )
              return xxxRealDefWindowProc(a1, a2, a3, a4);
          }
          EtwTraceUIPIMsgError(CurrentProcessWin32Process, v9, a2, a3, a4);
          UserSetLastError(5LL);
          v16 = 0;
        }
      }
      MSGSQMAddMessage((struct tagPROCESSINFO *)CurrentProcessWin32Process, (struct tagPROCESSINFO *)v9, a4, 1, v16);
      if ( v11 )
        return xxxRealDefWindowProc(a1, a2, a3, a4);
    }
    if ( *(_QWORD *)CurrentProcessWin32Process == gpepCSRSS )
      return xxxRealDefWindowProc(a1, a2, a3, a4);
  }
  UserSetLastError(5LL);
  return 0LL;
}
