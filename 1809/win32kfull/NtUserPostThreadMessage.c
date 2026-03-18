/*
 * XREFs of NtUserPostThreadMessage @ 0x1C00D48B0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     GetDesktopView @ 0x1C00B2670 (GetDesktopView.c)
 *     IsPrivileged @ 0x1C00CCBB0 (IsPrivileged.c)
 *     ?IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@0PEAUtagWND@@I_K_JH@Z @ 0x1C00D08BC (-IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@0PEAUtagWND@@I_K_JH@Z.c)
 *     MSGSQMAddMessage @ 0x1C00D0A28 (MSGSQMAddMessage.c)
 *     ?IsMessageAlwaysAllowedAcrossIL@@YAHI@Z @ 0x1C00D0C18 (-IsMessageAlwaysAllowedAcrossIL@@YAHI@Z.c)
 *     _PostThreadMessage @ 0x1C00D49B0 (_PostThreadMessage.c)
 */

__int64 __fastcall NtUserPostThreadMessage(unsigned int a1, unsigned int a2, unsigned __int64 a3, unsigned __int64 a4)
{
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // ebx
  unsigned __int64 i; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  _QWORD *v15; // r14
  unsigned __int64 v16; // rdx
  __int64 v17; // rsi
  __int64 v18; // r15
  int v20; // edi
  __int16 v21; // ax
  unsigned int v22; // edx
  int v23; // r8d
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  _DWORD v29[2]; // [rsp+40h] [rbp-38h] BYREF
  _DWORD v30[2]; // [rsp+48h] [rbp-30h] BYREF

  EnterCrit(0LL, 1LL);
  if ( (a2 & 0xFFFE0000) != 0 )
  {
    UserSetLastError(87LL, v8, v9, v10);
    v11 = 0;
    goto LABEL_6;
  }
  v11 = 0;
  v15 = (_QWORD *)PtiFromThreadId(a1);
  if ( !v15 )
  {
    v16 = gpwpiFirstWow;
LABEL_8:
    if ( !v16 )
      goto LABEL_9;
    for ( i = *(_QWORD *)(v16 + 16); ; i = *(_QWORD *)i )
    {
      if ( !i )
      {
        v16 = *(_QWORD *)v16;
        goto LABEL_8;
      }
      if ( *(unsigned __int16 *)(i + 32) == a1 )
        break;
    }
    v15 = *(_QWORD **)(i + 16);
  }
  v16 = v15[57];
  if ( *(_QWORD *)(gptiCurrent + 456LL) != v16
    && (*(_DWORD *)(gptiCurrent + 488LL) & 8) == 0
    && !GetDesktopView(*(_QWORD *)(gptiCurrent + 424LL), v16) )
  {
    if ( !(unsigned int)IsPrivileged(psTcb) )
    {
LABEL_9:
      UserSetLastError(1444LL, v16, v13, v14);
      goto LABEL_6;
    }
    if ( gbEnforceUIPI )
    {
      v16 = *(_QWORD *)(v15[53] + 880LL);
      i = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 880LL);
      if ( (unsigned int)i <= (unsigned int)v16 )
      {
        if ( (_DWORD)i != (_DWORD)v16
          || (v16 >>= 32, i >>= 32, (_DWORD)i != (_DWORD)v16) && (_DWORD)i != -1 && (_DWORD)v16 != -1 )
        {
          UserSetLastError(1444LL, v16, v13, v14);
          EtwTraceUIPIMsgError(*(_QWORD *)(gptiCurrent + 424LL), v15[53], a2, a3, a4);
          goto LABEL_6;
        }
      }
    }
    else if ( (int)GetProcessLuid(*gptiCurrent, v30) < 0
           || (int)GetProcessLuid(*v15, v29) < 0
           || v30[0] != v29[0]
           || v30[1] != v29[1] )
    {
      goto LABEL_9;
    }
  }
  v17 = v15[53];
  v18 = *(_QWORD *)(gptiCurrent + 424LL);
  if ( v17 != v18 )
  {
    if ( a2 == 717 )
      goto LABEL_6;
    if ( !(unsigned int)IsMessageAllowedAcrossILByReceiver(
                          (struct tagPROCESSINFO *)v18,
                          (void *const **)v17,
                          0LL,
                          a2,
                          a3,
                          a4,
                          0) )
    {
      v20 = IsMessageAlwaysAllowedAcrossIL(a2);
      if ( v20 )
      {
        v21 = 2;
        goto LABEL_51;
      }
      if ( a2 != 274 || ((a3 - 61472) & 0xFFFFFFFFFFFFFEBFuLL) != 0 || a3 == 61792 )
      {
        if ( *(_QWORD *)v17 == gpepCSRSS )
        {
          v22 = 0x2000;
          v23 = 0;
        }
        else
        {
          v22 = *(_DWORD *)(v17 + 880);
          v23 = *(_DWORD *)(v17 + 884);
        }
        v24 = *(_QWORD *)(v18 + 880);
        if ( !gbEnforceUIPI
          || (unsigned int)v24 > v22
          || (_DWORD)v24 == v22 && ((v25 = HIDWORD(v24), (_DWORD)v25 == v23) || (_DWORD)v25 == -1 || v23 == -1) )
        {
          v20 = 1;
          v21 = gbEnforceUIPI != 0 ? 5 : 1;
        }
        else
        {
          v20 = 0;
          EtwTraceUIPIMsgError(v18, v17, a2, a3, a4);
          UserSetLastError(5LL, v26, v27, v28);
          v21 = 0;
        }
LABEL_51:
        MSGSQMAddMessage((struct tagPROCESSINFO *)v18, (struct tagPROCESSINFO *)v17, a2, a3, a4, 0, v21);
        if ( !v20 )
          goto LABEL_6;
        goto LABEL_5;
      }
      MSGSQMAddMessage((struct tagPROCESSINFO *)v18, (struct tagPROCESSINFO *)v17, 0x112u, a3, a4, 0, 2);
    }
  }
LABEL_5:
  v11 = PostThreadMessage(v15, a2, a3, a4);
LABEL_6:
  UserSessionSwitchLeaveCrit(i, v16, v13, v14);
  return v11;
}
