/*
 * XREFs of NtUserPostMessage @ 0x1C00A5560
 * Callers:
 *     <none>
 * Callees:
 *     ?IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@0PEAUtagWND@@I_K_JH@Z @ 0x1C0087D64 (-IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@0PEAUtagWND@@I_K_JH@Z.c)
 *     MSGSQMAddMessage @ 0x1C0087ED0 (MSGSQMAddMessage.c)
 *     ?IsMessageAlwaysAllowedAcrossIL@@YAHI@Z @ 0x1C00880CC (-IsMessageAlwaysAllowedAcrossIL@@YAHI@Z.c)
 *     IAMThreadAccessGranted @ 0x1C008AAEC (IAMThreadAccessGranted.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C00A4400 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     ForwardTouchMessage @ 0x1C01DF1BC (ForwardTouchMessage.c)
 *     ValidateDDEConvPair @ 0x1C020B6AC (ValidateDDEConvPair.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserPostMessage(unsigned __int64 a1, unsigned int a2, unsigned __int64 a3, volatile void *a4)
{
  __int64 v4; // rbx
  __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  int v13; // edi
  __int64 v14; // rsi
  BOOL v15; // ebp
  __int64 v16; // rbp
  struct tagPROCESSINFO *CurrentProcessWin32Process; // rax
  struct tagPROCESSINFO *v18; // r14
  unsigned __int64 v19; // rax
  unsigned __int8 v21; // al
  __int64 v22; // rcx
  int v23; // r13d
  char v24; // al
  __int16 v25; // cx
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rcx
  __int64 v31; // rdx
  __int64 v32; // [rsp+50h] [rbp-38h] BYREF

  v4 = a2;
  EnterCrit(0LL, 1LL);
  gbValidateHandleForIL = 0;
  if ( (v4 & 0xFFFE0000) != 0 )
  {
    UserSetLastError(87LL, v8, v10, v11);
    v13 = 0;
    goto LABEL_21;
  }
  v12 = 0x2000LL;
  if ( (unsigned int)v4 < 0x400 )
  {
    v9 = (unsigned __int16)MessageTable[v4];
    if ( (v9 & 0x2000) != 0 )
    {
      v13 = 0;
      v29 = 5LL;
LABEL_60:
      UserSetLastError(v29, v12, v10, v11);
      goto LABEL_21;
    }
  }
  v13 = 0;
  if ( a1 >= 0x10000 && a1 != -1LL )
    goto LABEL_5;
  if ( !a1 )
  {
    v14 = 0LL;
    goto LABEL_6;
  }
  if ( a1 == 0xFFFF || a1 == -1LL )
  {
    v14 = -1LL;
  }
  else
  {
LABEL_5:
    v14 = ValidateHwnd(a1);
    if ( !v14 )
    {
      if ( (_DWORD)v4 == 993 )
        v13 = 1;
      goto LABEL_21;
    }
  }
LABEL_6:
  if ( (_DWORD)v4 == 576 )
  {
    if ( (unsigned __int64)(v14 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
    {
      v29 = 1400LL;
      goto LABEL_60;
    }
    v13 = ForwardTouchMessage(gptiCurrent, a4, 1, 0LL, 0, 0LL);
  }
  else
  {
    if ( (((_DWORD)v4 - 281) & 0xFFFFFFFD) == 0
      || (unsigned int)(v4 - 577) <= 3
      || (unsigned int)(v4 - 581) <= 0x12 && (_DWORD)v4 != 589 )
    {
      v29 = 1002LL;
      goto LABEL_60;
    }
    v15 = 0;
    if ( (unsigned int)(v4 - 992) <= 8 )
      v15 = ValidateDDEConvPair(a3, v14, v10) != 0;
    if ( (_DWORD)v4 == 274 && a3 == 61488 && IAMThreadAccessGranted(gptiCurrent) )
      v15 = 1;
    if ( (unsigned __int64)(v14 - 1) <= 0xFFFFFFFFFFFFFFFDuLL && !v15 )
    {
      v16 = *(_QWORD *)(*(_QWORD *)(v14 + 16) + 416LL);
      CurrentProcessWin32Process = (struct tagPROCESSINFO *)PsGetCurrentProcessWin32Process(v9, v12);
      v18 = CurrentProcessWin32Process;
      if ( (struct tagPROCESSINFO *)v16 != CurrentProcessWin32Process )
      {
        if ( (_DWORD)v4 == 717 )
          goto LABEL_21;
        if ( !(unsigned int)IsMessageAllowedAcrossILByReceiver(
                              CurrentProcessWin32Process,
                              (void *const **)v16,
                              (struct tagWND *)v14,
                              v4,
                              a3,
                              (__int64)a4,
                              0) )
        {
          if ( (unsigned int)IsMessageAlwaysAllowedAcrossIL(v4) )
          {
            MSGSQMAddMessage(v18, (struct tagPROCESSINFO *)v16, v4, a3, (unsigned __int64)a4, 0, 2);
          }
          else if ( (_DWORD)v4 != 274 || ((a3 - 61472) & 0xFFFFFFFFFFFFFEBFuLL) != 0 || a3 == 61792 )
          {
            if ( *(_QWORD *)v16 == gpepCSRSS )
              v32 = 0x2000LL;
            else
              v32 = *(_QWORD *)(v16 + 872);
            v21 = CheckAccess((char *)v18 + 872, &v32);
            v23 = v21;
            if ( v21 )
            {
              v24 = Enforced(v22);
              v25 = 1;
              if ( v24 )
                v25 = 5;
              MSGSQMAddMessage(v18, (struct tagPROCESSINFO *)v16, v4, a3, (unsigned __int64)a4, 0, v25);
            }
            if ( !v23 )
            {
              if ( (_DWORD)v4 != 793
                || (v31 = *(_QWORD *)(v14 + 16), *(_QWORD *)(v31 + 1392) != v14)
                || *(_QWORD *)(v31 + 424) != *(_QWORD *)(gptiCurrent + 424LL) )
              {
                EtwTraceUIPIMsgError(v18, v16, (unsigned int)v4, a3, a4);
                UserSetLastError(5LL, v26, v27, v28);
                MSGSQMAddMessage(v18, (struct tagPROCESSINFO *)v16, v4, a3, (unsigned __int64)a4, 0, 0);
                goto LABEL_21;
              }
            }
          }
          else
          {
            MSGSQMAddMessage(v18, (struct tagPROCESSINFO *)v16, 0x112u, a3, (unsigned __int64)a4, 0, 2);
          }
        }
      }
    }
    v19 = _PostTransformableMessageExtended(v14, (unsigned int)v4, a3, (struct _LARGE_STRING *)a4, 0LL, 1);
    v9 = (unsigned __int64)MmSystemRangeStart;
    if ( v19 >= (unsigned __int64)MmSystemRangeStart )
    {
      if ( v19 )
        v13 = 1;
      LODWORD(v19) = v13;
    }
    v13 = v19;
  }
LABEL_21:
  UserSessionSwitchLeaveCrit(v9);
  return v13;
}
