/*
 * XREFs of NtUserPostMessage @ 0x1C0041200
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C0041530 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     ?IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@0PEAUtagWND@@I_K_JH@Z @ 0x1C00620C0 (-IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@0PEAUtagWND@@I_K_JH@Z.c)
 *     MSGSQMAddMessage @ 0x1C0062398 (MSGSQMAddMessage.c)
 *     ?IsMessageAlwaysAllowedAcrossIL@@YAHI@Z @ 0x1C0062410 (-IsMessageAlwaysAllowedAcrossIL@@YAHI@Z.c)
 *     IAMThreadAccessGranted @ 0x1C0070890 (IAMThreadAccessGranted.c)
 *     ForwardTouchMessage @ 0x1C01A9078 (ForwardTouchMessage.c)
 *     ValidateDDEConvPair @ 0x1C01D03EC (ValidateDDEConvPair.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserPostMessage(unsigned __int64 a1, unsigned int a2, unsigned __int64 a3, volatile void *a4)
{
  __int64 v4; // rdi
  __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  unsigned int v10; // r13d
  int v11; // ebx
  __int64 v12; // rsi
  __int64 v13; // r8
  __int64 v14; // r9
  BOOL v15; // ebp
  __int64 v16; // rbp
  struct tagPROCESSINFO *CurrentProcessWin32Process; // rax
  struct tagPROCESSINFO *v18; // r14
  struct tagQMSG *v19; // rax
  int v21; // edx
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rcx
  __int16 v24; // ax
  __int64 v25; // rdx
  __int64 v26; // rcx
  BOOL v28; // r8d
  __int64 v29; // rdx

  v4 = a2;
  EnterCrit(0LL, 1LL);
  gbValidateHandleForIL = 0;
  if ( (v4 & 0xFFFE0000) != 0 )
  {
    UserSetLastError(87LL, v8);
    v11 = 0;
    goto LABEL_21;
  }
  v10 = 0x2000;
  if ( (unsigned int)v4 < 0x400 )
  {
    v9 = (unsigned __int16)MessageTable[v4];
    if ( (v9 & 0x2000) != 0 )
    {
      v11 = 0;
      v26 = 5LL;
LABEL_62:
      UserSetLastError(v26, v8);
      goto LABEL_21;
    }
  }
  v11 = 0;
  if ( a1 < 0x10000 || a1 == -1LL )
  {
    if ( !a1 )
    {
      v12 = 0LL;
      goto LABEL_6;
    }
    if ( a1 == 0xFFFF || a1 == -1LL )
    {
      v12 = -1LL;
      goto LABEL_6;
    }
  }
  v12 = ValidateHwnd(a1);
  if ( !v12 )
  {
    if ( (_DWORD)v4 == 993 )
      v11 = 1;
    goto LABEL_21;
  }
LABEL_6:
  if ( (_DWORD)v4 != 576 )
  {
    if ( (((_DWORD)v4 - 281) & 0xFFFFFFFD) == 0
      || (unsigned int)(v4 - 577) <= 3
      || (unsigned int)(v4 - 581) <= 0x12 && (_DWORD)v4 != 589 )
    {
      v26 = 1002LL;
      goto LABEL_62;
    }
    v15 = 0;
    if ( (unsigned int)(v4 - 992) <= 8 )
      v15 = ValidateDDEConvPair(a3, v12) != 0;
    if ( (_DWORD)v4 == 274 && a3 == 61488 )
    {
      if ( (unsigned int)IAMThreadAccessGranted(gptiCurrent) )
        v15 = v28;
    }
    if ( (unsigned __int64)(v12 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
      goto LABEL_16;
    if ( v15 )
      goto LABEL_16;
    v16 = *(_QWORD *)(*(_QWORD *)(v12 + 16) + 416LL);
    CurrentProcessWin32Process = (struct tagPROCESSINFO *)PsGetCurrentProcessWin32Process(v9);
    v18 = CurrentProcessWin32Process;
    if ( (struct tagPROCESSINFO *)v16 == CurrentProcessWin32Process )
      goto LABEL_16;
    if ( (_DWORD)v4 == 717 )
      goto LABEL_21;
    if ( (unsigned int)IsMessageAllowedAcrossILByReceiver(
                         CurrentProcessWin32Process,
                         (struct tagPROCESSINFO *)v16,
                         (struct tagWND *)v12,
                         v4,
                         a3,
                         (__int64)a4,
                         0) )
      goto LABEL_16;
    if ( (unsigned int)IsMessageAlwaysAllowedAcrossIL(v4) )
    {
      v24 = 2;
    }
    else if ( (_DWORD)v4 != 274 || ((a3 - 61472) & 0xFFFFFFFFFFFFFEBFuLL) != 0 || a3 == 61792 )
    {
      if ( *(_QWORD *)v16 == gpepCSRSS )
      {
        v21 = 0;
      }
      else
      {
        v10 = *(_DWORD *)(v16 + 872);
        v21 = *(_DWORD *)(v16 + 876);
      }
      v22 = *((_QWORD *)v18 + 109);
      if ( gbEnforceUIPI )
      {
        if ( (unsigned int)v22 <= v10 )
        {
          if ( (_DWORD)v22 != v10 || (v23 = HIDWORD(v22), (_DWORD)v23 != v21) && (_DWORD)v23 != -1 && v21 != -1 )
          {
            if ( (_DWORD)v4 != 793
              || (v29 = *(_QWORD *)(v12 + 16), *(_QWORD *)(v29 + 1376) != v12)
              || *(_QWORD *)(v29 + 424) != *(_QWORD *)(gptiCurrent + 424LL) )
            {
              EtwTraceUIPIMsgError(v18, v16, (unsigned int)v4, a3, a4);
              UserSetLastError(5LL, v25);
              MSGSQMAddMessage(v18, (struct tagPROCESSINFO *)v16, (__int64)a4, 0, 0);
              goto LABEL_21;
            }
            goto LABEL_16;
          }
        }
      }
      v24 = 1;
      if ( gbEnforceUIPI )
        v24 = 5;
    }
    else
    {
      v24 = 2;
    }
    MSGSQMAddMessage(v18, (struct tagPROCESSINFO *)v16, (__int64)a4, 0, v24);
LABEL_16:
    v19 = _PostTransformableMessageExtended((struct tagWND *)v12, v4, a3, (__int64)a4, 0LL, 1);
    v9 = (unsigned __int64)MmSystemRangeStart;
    if ( v19 >= MmSystemRangeStart )
    {
      if ( v19 )
        v11 = 1;
      LODWORD(v19) = v11;
    }
    v11 = (int)v19;
    goto LABEL_21;
  }
  if ( (unsigned __int64)(v12 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
  {
    v26 = 1400LL;
    goto LABEL_62;
  }
  v11 = ForwardTouchMessage(gptiCurrent, a4, 1, 0LL, 0, 0LL);
LABEL_21:
  UserSessionSwitchLeaveCrit(v9, v8, v13, v14);
  return v11;
}
