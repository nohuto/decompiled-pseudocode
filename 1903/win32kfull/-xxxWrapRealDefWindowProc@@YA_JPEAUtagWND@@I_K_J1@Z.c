/*
 * XREFs of ?xxxWrapRealDefWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C0060110
 * Callers:
 *     <none>
 * Callees:
 *     xxxRealDefWindowProc @ 0x1C0060288 (xxxRealDefWindowProc.c)
 *     ?IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@0PEAUtagWND@@I_K_JH@Z @ 0x1C0087D64 (-IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@0PEAUtagWND@@I_K_JH@Z.c)
 *     MSGSQMAddMessage @ 0x1C0087ED0 (MSGSQMAddMessage.c)
 *     ?IsMessageAlwaysAllowedAcrossIL@@YAHI@Z @ 0x1C00880CC (-IsMessageAlwaysAllowedAcrossIL@@YAHI@Z.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 */

__int64 __fastcall xxxWrapRealDefWindowProc(struct tagWND *a1, __int64 a2, HWND a3, __int64 a4)
{
  unsigned int v6; // ebx
  struct tagPROCESSINFO *CurrentProcessWin32Process; // rax
  struct tagPROCESSINFO *v9; // rbp
  __int64 v10; // rdi
  int v12; // r15d
  unsigned __int8 v13; // al
  __int64 v14; // rcx
  bool v15; // zf
  __int16 v16; // ax
  __int64 v17; // rdx
  __int64 v18; // [rsp+70h] [rbp+8h] BYREF

  v6 = a2;
  if ( a1 != (struct tagWND *)-1LL )
  {
    CurrentProcessWin32Process = (struct tagPROCESSINFO *)PsGetCurrentProcessWin32Process(a1, a2);
    v9 = CurrentProcessWin32Process;
    v10 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 416LL);
    if ( (struct tagPROCESSINFO *)v10 == CurrentProcessWin32Process )
      return xxxRealDefWindowProc(a1, v6, a3, a4);
    if ( v6 != 717 )
    {
      if ( (unsigned int)IsMessageAllowedAcrossILByReceiver(
                           CurrentProcessWin32Process,
                           (struct tagPROCESSINFO *)v10,
                           a1,
                           v6,
                           (unsigned __int64)a3,
                           a4,
                           1) )
        return xxxRealDefWindowProc(a1, v6, a3, a4);
      v12 = IsMessageAlwaysAllowedAcrossIL(v6);
      if ( v12 )
      {
        MSGSQMAddMessage(v9, (struct tagPROCESSINFO *)v10, a4, 1, 2);
      }
      else
      {
        if ( v6 == 274 && ((unsigned __int64)(a3 - 15368) & 0xFFFFFFFFFFFFFEBFuLL) == 0 && a3 != (HWND)61792 )
        {
          MSGSQMAddMessage(v9, (struct tagPROCESSINFO *)v10, a4, 1, 2);
          return xxxRealDefWindowProc(a1, v6, a3, a4);
        }
        if ( *(_QWORD *)v10 == gpepCSRSS )
          v18 = 0x2000LL;
        else
          v18 = *(_QWORD *)(v10 + 872);
        v13 = CheckAccess((char *)v9 + 872, &v18);
        v12 = v13;
        if ( v13 )
        {
          v15 = (unsigned __int8)Enforced(v14) == 0;
          v16 = 5;
          if ( v15 )
            v16 = 1;
          MSGSQMAddMessage(v9, (struct tagPROCESSINFO *)v10, a4, 1, v16);
        }
        if ( v12 )
          return xxxRealDefWindowProc(a1, v6, a3, a4);
        if ( v6 == 793 )
        {
          v17 = *((_QWORD *)a1 + 2);
          if ( *(struct tagWND **)(v17 + 1392) == a1 && *(_QWORD *)(v17 + 424) == *(_QWORD *)(gptiCurrent + 424LL) )
            return xxxRealDefWindowProc(a1, v6, a3, a4);
        }
        EtwTraceUIPIMsgError(v9, v10, v6, a3, a4);
        UserSetLastError(5LL);
        MSGSQMAddMessage(v9, (struct tagPROCESSINFO *)v10, a4, 1, 0);
      }
      if ( v12 )
        return xxxRealDefWindowProc(a1, v6, a3, a4);
    }
    if ( *(_QWORD *)v9 == gpepCSRSS )
      return xxxRealDefWindowProc(a1, v6, a3, a4);
  }
  UserSetLastError(5LL);
  return 0LL;
}
