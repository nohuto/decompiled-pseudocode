/*
 * XREFs of NtUserPostThreadMessage @ 0x1C001B330
 * Callers:
 *     <none>
 * Callees:
 *     GetDesktopView @ 0x1C0011D20 (GetDesktopView.c)
 *     _PostThreadMessage @ 0x1C001B5D0 (_PostThreadMessage.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     ?IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@0PEAUtagWND@@I_K_JH@Z @ 0x1C00620C0 (-IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@0PEAUtagWND@@I_K_JH@Z.c)
 *     MSGSQMAddMessage @ 0x1C0062398 (MSGSQMAddMessage.c)
 *     ?IsMessageAlwaysAllowedAcrossIL@@YAHI@Z @ 0x1C0062410 (-IsMessageAlwaysAllowedAcrossIL@@YAHI@Z.c)
 *     IsPrivileged @ 0x1C0062720 (IsPrivileged.c)
 */

__int64 __fastcall NtUserPostThreadMessage(unsigned int a1, unsigned int a2, unsigned __int64 a3, __int64 a4)
{
  int v8; // ebx
  unsigned __int64 i; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  _QWORD *v12; // r14
  unsigned __int64 v13; // rdx
  __int64 v14; // rsi
  __int64 v15; // r15
  _QWORD *v17; // rdx
  int v18; // eax
  int v19; // edi
  __int16 v20; // ax
  unsigned int v21; // edx
  int v22; // r8d
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rcx
  _DWORD v25[2]; // [rsp+40h] [rbp-38h] BYREF
  _DWORD v26[2]; // [rsp+48h] [rbp-30h] BYREF

  EnterCrit(0LL, 1LL);
  if ( (a2 & 0xFFFE0000) != 0 )
  {
    UserSetLastError(87LL);
    v8 = 0;
    goto LABEL_6;
  }
  v8 = 0;
  v12 = (_QWORD *)PtiFromThreadId(a1);
  if ( !v12 )
  {
    v17 = (_QWORD *)gpwpiFirstWow;
LABEL_8:
    if ( !v17 )
      goto LABEL_9;
    for ( i = v17[2]; ; i = *(_QWORD *)i )
    {
      if ( !i )
      {
        v17 = (_QWORD *)*v17;
        goto LABEL_8;
      }
      if ( *(unsigned __int16 *)(i + 32) == a1 )
        break;
    }
    v12 = *(_QWORD **)(i + 16);
  }
  v13 = v12[56];
  if ( *(_QWORD *)(gptiCurrent + 448LL) != v13
    && (*(_DWORD *)(gptiCurrent + 480LL) & 8) == 0
    && !GetDesktopView(*(_QWORD *)(gptiCurrent + 416LL), v13) )
  {
    if ( !(unsigned int)IsPrivileged(psTcb) )
    {
LABEL_9:
      UserSetLastError(1444LL);
      goto LABEL_6;
    }
    if ( gbEnforceUIPI )
    {
      v13 = *(_QWORD *)(v12[52] + 872LL);
      i = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 872LL);
      if ( (unsigned int)i <= (unsigned int)v13 )
      {
        if ( (_DWORD)i != (_DWORD)v13
          || (v13 >>= 32, i >>= 32, (_DWORD)i != (_DWORD)v13) && (_DWORD)i != -1 && (_DWORD)v13 != -1 )
        {
          UserSetLastError(1444LL);
          EtwTraceUIPIMsgError(*(_QWORD *)(gptiCurrent + 416LL), v12[52], a2, a3, a4);
          goto LABEL_6;
        }
      }
    }
    else if ( (int)GetProcessLuid(*gptiCurrent, v26) < 0
           || (int)GetProcessLuid(*v12, v25) < 0
           || v26[0] != v25[0]
           || v26[1] != v25[1] )
    {
      goto LABEL_9;
    }
  }
  v14 = v12[52];
  v15 = *(_QWORD *)(gptiCurrent + 416LL);
  if ( v14 != v15 )
  {
    if ( a2 == 717 )
      goto LABEL_6;
    if ( !(unsigned int)IsMessageAllowedAcrossILByReceiver(
                          (struct tagPROCESSINFO *)v15,
                          (struct tagPROCESSINFO *)v14,
                          0LL,
                          a2,
                          a3,
                          a4,
                          0) )
    {
      v18 = IsMessageAlwaysAllowedAcrossIL(a2);
      v19 = v18;
      if ( v18 )
      {
        v20 = 2;
        goto LABEL_52;
      }
      if ( a2 != 274 || ((a3 - 61472) & 0xFFFFFFFFFFFFFEBFuLL) != 0 || a3 == 61792 )
      {
        if ( *(_QWORD *)v14 == gpepCSRSS )
        {
          v21 = 0x2000;
          v22 = 0;
        }
        else
        {
          v21 = *(_DWORD *)(v14 + 872);
          v22 = *(_DWORD *)(v14 + 876);
        }
        v23 = *(_QWORD *)(v15 + 872);
        if ( !gbEnforceUIPI
          || (unsigned int)v23 > v21
          || (_DWORD)v23 == v21 && ((v24 = HIDWORD(v23), (_DWORD)v24 == v22) || (_DWORD)v24 == -1 || v22 == -1) )
        {
          v19 = 1;
          v20 = gbEnforceUIPI != 0 ? 5 : 1;
        }
        else
        {
          v19 = 0;
          EtwTraceUIPIMsgError(v15, v14, a2, a3, a4);
          UserSetLastError(5LL);
          v20 = 0;
        }
LABEL_52:
        MSGSQMAddMessage((struct tagPROCESSINFO *)v15, (struct tagPROCESSINFO *)v14, a4, 0, v20);
        if ( !v19 )
          goto LABEL_6;
        goto LABEL_5;
      }
      MSGSQMAddMessage((struct tagPROCESSINFO *)v15, (struct tagPROCESSINFO *)v14, a4, 0, 2);
    }
  }
LABEL_5:
  v8 = PostThreadMessage(v12, a2, a3);
LABEL_6:
  UserSessionSwitchLeaveCrit(i, v13, v10, v11);
  return v8;
}
