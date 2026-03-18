/*
 * XREFs of NtUserPostThreadMessage @ 0x1C000E4C0
 * Callers:
 *     <none>
 * Callees:
 *     _PostThreadMessage @ 0x1C000E5C8 (_PostThreadMessage.c)
 *     ?IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@0PEAUtagWND@@I_K_JH@Z @ 0x1C00126E4 (-IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@0PEAUtagWND@@I_K_JH@Z.c)
 *     MSGSQMAddMessage @ 0x1C0012850 (MSGSQMAddMessage.c)
 *     ?IsMessageAlwaysAllowedAcrossIL@@YAHI@Z @ 0x1C0012A4C (-IsMessageAlwaysAllowedAcrossIL@@YAHI@Z.c)
 *     IsPrivileged @ 0x1C0012AE0 (IsPrivileged.c)
 *     GetDesktopView @ 0x1C0021DE0 (GetDesktopView.c)
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 */

__int64 __fastcall NtUserPostThreadMessage(unsigned int a1, unsigned int a2, unsigned __int64 a3, __int64 a4)
{
  int v8; // ebx
  __int64 *i; // rcx
  _QWORD *v10; // r15
  __int64 v11; // rdi
  struct tagPROCESSINFO *v12; // rsi
  _QWORD *v14; // rdx
  int v15; // r12d
  unsigned __int8 v16; // al
  bool v17; // zf
  __int16 v18; // ax
  __int64 v19; // [rsp+40h] [rbp-10h] BYREF
  __int64 v20; // [rsp+48h] [rbp-8h] BYREF

  EnterCrit(0LL, 1LL);
  if ( (a2 & 0xFFFE0000) != 0 )
  {
    UserSetLastError(87LL);
    v8 = 0;
    goto LABEL_6;
  }
  v8 = 0;
  v10 = (_QWORD *)PtiFromThreadId(a1);
  if ( !v10 )
  {
    v14 = (_QWORD *)gpwpiFirstWow;
LABEL_8:
    if ( !v14 )
      goto LABEL_9;
    for ( i = (__int64 *)v14[2]; ; i = (__int64 *)*i )
    {
      if ( !i )
      {
        v14 = (_QWORD *)*v14;
        goto LABEL_8;
      }
      if ( *((unsigned __int16 *)i + 16) == a1 )
        break;
    }
    v10 = (_QWORD *)i[2];
  }
  if ( *(_QWORD *)(gptiCurrent + 448LL) == v10[56]
    || (*(_DWORD *)(gptiCurrent + 480LL) & 8) != 0
    || GetDesktopView(*(_QWORD *)(gptiCurrent + 416LL)) )
  {
    goto LABEL_4;
  }
  v20 = 0LL;
  v19 = 0LL;
  if ( !(unsigned int)IsPrivileged(psTcb) )
  {
LABEL_9:
    UserSetLastError(1444LL);
    goto LABEL_6;
  }
  if ( !(unsigned __int8)Enforced() )
  {
    if ( (int)GetProcessLuid(*gptiCurrent, &v20) >= 0 && (int)GetProcessLuid(*v10, &v19) >= 0 && v20 == v19 )
      goto LABEL_4;
    goto LABEL_9;
  }
  if ( !(unsigned __int8)CheckAccess(*(_QWORD *)(gptiCurrent + 416LL) + 872LL, v10[52] + 872LL) )
  {
    UserSetLastError(1444LL);
    EtwTraceUIPIMsgError(*(_QWORD *)(gptiCurrent + 416LL), v10[52], a2, a3, a4);
    goto LABEL_6;
  }
LABEL_4:
  v11 = v10[52];
  v12 = *(struct tagPROCESSINFO **)(gptiCurrent + 416LL);
  if ( (struct tagPROCESSINFO *)v11 == v12 )
    goto LABEL_5;
  if ( a2 == 717 )
    goto LABEL_6;
  if ( (unsigned int)IsMessageAllowedAcrossILByReceiver(v12, (struct tagPROCESSINFO *)v11, 0LL, a2, a3, a4, 0) )
    goto LABEL_5;
  v15 = IsMessageAlwaysAllowedAcrossIL(a2);
  if ( v15 )
  {
    MSGSQMAddMessage(v12, (struct tagPROCESSINFO *)v11, a4, 0, 2);
    goto LABEL_44;
  }
  if ( a2 != 274 || ((a3 - 61472) & 0xFFFFFFFFFFFFFEBFuLL) != 0 || a3 == 61792 )
  {
    if ( *(_QWORD *)v11 == gpepCSRSS )
      v19 = 0x2000LL;
    else
      v19 = *(_QWORD *)(v11 + 872);
    v16 = CheckAccess((char *)v12 + 872, &v19);
    v15 = v16;
    if ( v16 )
    {
      v17 = (unsigned __int8)Enforced() == 0;
      v18 = 5;
      if ( v17 )
        v18 = 1;
      MSGSQMAddMessage(v12, (struct tagPROCESSINFO *)v11, a4, 0, v18);
    }
    if ( !v15 )
    {
      EtwTraceUIPIMsgError(v12, v11, a2, a3, a4);
      UserSetLastError(5LL);
      MSGSQMAddMessage(v12, (struct tagPROCESSINFO *)v11, a4, 0, 0);
LABEL_44:
      if ( !v15 )
        goto LABEL_6;
    }
  }
  else
  {
    MSGSQMAddMessage(v12, (struct tagPROCESSINFO *)v11, a4, 0, 2);
  }
LABEL_5:
  v8 = PostThreadMessage(v10, a2, a3);
LABEL_6:
  UserSessionSwitchLeaveCrit(i);
  return v8;
}
