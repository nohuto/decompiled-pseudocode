/*
 * XREFs of _PostMessageCheckIL @ 0x1C01CF480
 * Callers:
 *     ForwardTouchMessage @ 0x1C01CB5FC (ForwardTouchMessage.c)
 *     NtUserInjectGesture @ 0x1C0218920 (NtUserInjectGesture.c)
 * Callees:
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     ?IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@0PEAUtagWND@@I_K_JH@Z @ 0x1C00D08BC (-IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@0PEAUtagWND@@I_K_JH@Z.c)
 *     MSGSQMAddMessage @ 0x1C00D0A28 (MSGSQMAddMessage.c)
 *     ?IsMessageAlwaysAllowedAcrossIL@@YAHI@Z @ 0x1C00D0C18 (-IsMessageAlwaysAllowedAcrossIL@@YAHI@Z.c)
 *     _PostMessage @ 0x1C00DC980 (_PostMessage.c)
 *     ValidateDDEConvPair @ 0x1C01F4AEC (ValidateDDEConvPair.c)
 */

__int64 __fastcall PostMessageCheckIL(struct tagWND *a1, unsigned int a2, unsigned __int64 a3, unsigned __int64 a4)
{
  BOOL v8; // ebx
  __int64 v9; // rbp
  struct tagPROCESSINFO *CurrentProcessWin32Process; // rax
  struct tagPROCESSINFO *v11; // rbx
  int v12; // r14d
  __int16 v13; // cx
  unsigned int v15; // edx
  int v16; // r8d
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9

  v8 = 0;
  if ( a2 - 992 <= 8 )
    v8 = ValidateDDEConvPair(a3, a1) != 0;
  if ( (unsigned __int64)a1 - 1 > 0xFFFFFFFFFFFFFFFDuLL )
    return PostMessage(a1, a2, a3, a4);
  if ( v8 )
    return PostMessage(a1, a2, a3, a4);
  v9 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL);
  CurrentProcessWin32Process = (struct tagPROCESSINFO *)PsGetCurrentProcessWin32Process(a1);
  v11 = CurrentProcessWin32Process;
  if ( (struct tagPROCESSINFO *)v9 == CurrentProcessWin32Process )
    return PostMessage(a1, a2, a3, a4);
  if ( a2 != 717 )
  {
    if ( !(unsigned int)IsMessageAllowedAcrossILByReceiver(
                          CurrentProcessWin32Process,
                          (void *const **)v9,
                          a1,
                          a2,
                          a3,
                          a4,
                          0) )
    {
      v12 = IsMessageAlwaysAllowedAcrossIL(a2);
      if ( v12 )
      {
        v13 = 2;
      }
      else
      {
        if ( a2 == 274 && ((a3 - 61472) & 0xFFFFFFFFFFFFFEBFuLL) == 0 && a3 != 61792 )
        {
          MSGSQMAddMessage(v11, (struct tagPROCESSINFO *)v9, 0x112u, a3, a4, 0, 2);
          return PostMessage(a1, a2, a3, a4);
        }
        if ( *(_QWORD *)v9 == gpepCSRSS )
        {
          v15 = 0x2000;
          v16 = 0;
        }
        else
        {
          v15 = *(_DWORD *)(v9 + 880);
          v16 = *(_DWORD *)(v9 + 884);
        }
        v17 = *((_QWORD *)v11 + 110);
        if ( !gbEnforceUIPI
          || (unsigned int)v17 > v15
          || (_DWORD)v17 == v15 && ((v18 = HIDWORD(v17), (_DWORD)v18 == v16) || (_DWORD)v18 == -1 || v16 == -1) )
        {
          v12 = 1;
          v13 = gbEnforceUIPI != 0 ? 5 : 1;
        }
        else
        {
          v12 = 0;
          if ( a2 == 793 )
          {
            v19 = *((_QWORD *)a1 + 2);
            if ( *(struct tagWND **)(v19 + 1368) == a1 && *(_QWORD *)(v19 + 432) == *(_QWORD *)(gptiCurrent + 432LL) )
              return PostMessage(a1, a2, a3, a4);
          }
          EtwTraceUIPIMsgError(v11, v9, a2, a3, a4);
          UserSetLastError(5LL, v20, v21, v22);
          v13 = 0;
        }
      }
      MSGSQMAddMessage(v11, (struct tagPROCESSINFO *)v9, a2, a3, a4, 0, v13);
      if ( !v12 )
        return 0LL;
    }
    return PostMessage(a1, a2, a3, a4);
  }
  return 0LL;
}
