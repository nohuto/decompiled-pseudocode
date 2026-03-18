/*
 * XREFs of NtUserPostMessage @ 0x1C00298E0
 * Callers:
 *     <none>
 * Callees:
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C0029C40 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     IAMThreadAccessGranted @ 0x1C0071900 (IAMThreadAccessGranted.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     ?IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@0PEAUtagWND@@I_K_JH@Z @ 0x1C00D08BC (-IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@0PEAUtagWND@@I_K_JH@Z.c)
 *     MSGSQMAddMessage @ 0x1C00D0A28 (MSGSQMAddMessage.c)
 *     ?IsMessageAlwaysAllowedAcrossIL@@YAHI@Z @ 0x1C00D0C18 (-IsMessageAlwaysAllowedAcrossIL@@YAHI@Z.c)
 *     ForwardTouchMessage @ 0x1C01CB5FC (ForwardTouchMessage.c)
 *     ValidateDDEConvPair @ 0x1C01F4AEC (ValidateDDEConvPair.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserPostMessage(unsigned __int64 a1, unsigned int a2, unsigned __int64 a3, volatile void *a4)
{
  __int64 v4; // rdi
  unsigned __int64 v8; // rcx
  unsigned int v9; // r13d
  int v10; // ebx
  __int64 v11; // rdx
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
  __int64 v25; // rcx
  BOOL v27; // r8d
  __int64 v28; // rdx

  v4 = a2;
  EnterCrit(0LL, 1LL);
  gbValidateHandleForIL = 0;
  if ( (v4 & 0xFFFE0000) != 0 )
  {
    UserSetLastError(87LL);
    v10 = 0;
    goto LABEL_21;
  }
  v9 = 0x2000;
  if ( (unsigned int)v4 < 0x400 )
  {
    v8 = (unsigned __int16)MessageTable[v4];
    if ( (v8 & 0x2000) != 0 )
    {
      v10 = 0;
      v25 = 5LL;
LABEL_63:
      UserSetLastError(v25);
      goto LABEL_21;
    }
  }
  v10 = 0;
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
      v10 = 1;
    goto LABEL_21;
  }
LABEL_6:
  if ( (_DWORD)v4 != 576 )
  {
    if ( (((_DWORD)v4 - 281) & 0xFFFFFFFD) == 0
      || (unsigned int)(v4 - 577) <= 3
      || (unsigned int)(v4 - 581) <= 0x12 && (_DWORD)v4 != 589 )
    {
      v25 = 1002LL;
      goto LABEL_63;
    }
    v15 = 0;
    if ( (unsigned int)(v4 - 992) <= 8 )
      v15 = ValidateDDEConvPair(a3, v12) != 0;
    if ( (_DWORD)v4 == 274 && a3 == 61488 )
    {
      if ( (unsigned int)IAMThreadAccessGranted(gptiCurrent) )
        v15 = v27;
    }
    if ( (unsigned __int64)(v12 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
      goto LABEL_16;
    if ( v15 )
      goto LABEL_16;
    v16 = *(_QWORD *)(*(_QWORD *)(v12 + 16) + 424LL);
    CurrentProcessWin32Process = (struct tagPROCESSINFO *)PsGetCurrentProcessWin32Process(v8);
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
        v9 = *(_DWORD *)(v16 + 880);
        v21 = *(_DWORD *)(v16 + 884);
      }
      v22 = *((_QWORD *)v18 + 110);
      if ( gbEnforceUIPI )
      {
        if ( (unsigned int)v22 <= v9 )
        {
          if ( (_DWORD)v22 != v9 || (v23 = HIDWORD(v22), (_DWORD)v23 != v21) && (_DWORD)v23 != -1 && v21 != -1 )
          {
            if ( (_DWORD)v4 != 793
              || (v28 = *(_QWORD *)(v12 + 16), *(_QWORD *)(v28 + 1368) != v12)
              || *(_QWORD *)(v28 + 432) != *(_QWORD *)(gptiCurrent + 432LL) )
            {
              EtwTraceUIPIMsgError(v18, v16, (unsigned int)v4, a3, a4);
              UserSetLastError(5LL);
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
    v8 = (unsigned __int64)MmSystemRangeStart;
    if ( v19 >= MmSystemRangeStart )
    {
      if ( v19 )
        v10 = 1;
      LODWORD(v19) = v10;
    }
    v10 = (int)v19;
    goto LABEL_21;
  }
  if ( (unsigned __int64)(v12 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
  {
    v25 = 1400LL;
    goto LABEL_63;
  }
  v10 = ForwardTouchMessage(gptiCurrent, a4, 1, 0LL, 0, 0LL);
LABEL_21:
  UserSessionSwitchLeaveCrit(v8, v11, v13, v14);
  return v10;
}
