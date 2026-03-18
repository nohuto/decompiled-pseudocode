/*
 * XREFs of _PostTransformableMessageIL @ 0x1C0087700
 * Callers:
 *     xxxBroadcastMessageEx @ 0x1C001C9D0 (xxxBroadcastMessageEx.c)
 *     ?xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z @ 0x1C008712C (-xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z.c)
 * Callees:
 *     _PostTransformableMessage @ 0x1C0087904 (_PostTransformableMessage.c)
 *     ?IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@0PEAUtagWND@@I_K_JH@Z @ 0x1C0087D64 (-IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@0PEAUtagWND@@I_K_JH@Z.c)
 *     MSGSQMAddMessage @ 0x1C0087ED0 (MSGSQMAddMessage.c)
 *     ?IsMessageAlwaysAllowedAcrossIL@@YAHI@Z @ 0x1C00880CC (-IsMessageAlwaysAllowedAcrossIL@@YAHI@Z.c)
 *     IAMThreadAccessGranted @ 0x1C008AAEC (IAMThreadAccessGranted.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     ValidateDDEConvPair @ 0x1C020B6AC (ValidateDDEConvPair.c)
 */

__int64 __fastcall PostTransformableMessageIL(struct tagWND *a1, __int64 a2, unsigned __int64 a3, __int64 a4, int a5)
{
  unsigned int v7; // ebx
  int v9; // r9d
  __int64 v10; // rsi
  struct tagPROCESSINFO *CurrentProcessWin32Process; // rax
  struct tagPROCESSINFO *v12; // r14
  int v13; // r15d
  unsigned __int8 v14; // al
  __int64 v15; // rcx
  bool v16; // zf
  __int16 v17; // ax
  int v19; // eax
  int v20; // r8d
  __int64 v21; // r8
  __int64 v22; // [rsp+70h] [rbp+8h] BYREF

  v7 = a2;
  if ( (unsigned int)(a2 - 992) <= 8 )
  {
    v19 = ValidateDDEConvPair(a3, a1, 1LL);
    v9 = a5;
    if ( v19 )
      v9 = 1;
  }
  else
  {
    v9 = a5;
  }
  if ( v7 == 274 && a3 == 61488 && (unsigned int)IAMThreadAccessGranted(gptiCurrent) )
    v9 = v20;
  if ( (unsigned __int64)a1 - 1 > 0xFFFFFFFFFFFFFFFDuLL )
    return PostTransformableMessage((_DWORD)a1, v7, a3, a4, 1);
  if ( v9 )
    return PostTransformableMessage((_DWORD)a1, v7, a3, a4, 1);
  v10 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 416LL);
  CurrentProcessWin32Process = (struct tagPROCESSINFO *)PsGetCurrentProcessWin32Process(a1, a2);
  v12 = CurrentProcessWin32Process;
  if ( (struct tagPROCESSINFO *)v10 == CurrentProcessWin32Process )
    return PostTransformableMessage((_DWORD)a1, v7, a3, a4, 1);
  if ( v7 != 717 )
  {
    if ( (unsigned int)IsMessageAllowedAcrossILByReceiver(
                         CurrentProcessWin32Process,
                         (struct tagPROCESSINFO *)v10,
                         a1,
                         v7,
                         a3,
                         a4,
                         0) )
      return PostTransformableMessage((_DWORD)a1, v7, a3, a4, 1);
    v13 = IsMessageAlwaysAllowedAcrossIL(v7);
    if ( v13 )
    {
      MSGSQMAddMessage(v12, (struct tagPROCESSINFO *)v10, a4, 0, 2);
    }
    else
    {
      if ( v7 == 274 && ((a3 - 61472) & 0xFFFFFFFFFFFFFEBFuLL) == 0 && a3 != 61792 )
      {
        MSGSQMAddMessage(v12, (struct tagPROCESSINFO *)v10, a4, 0, 2);
        return PostTransformableMessage((_DWORD)a1, v7, a3, a4, 1);
      }
      if ( *(_QWORD *)v10 == gpepCSRSS )
        v22 = 0x2000LL;
      else
        v22 = *(_QWORD *)(v10 + 872);
      v14 = CheckAccess((char *)v12 + 872, &v22);
      v13 = v14;
      if ( v14 )
      {
        v16 = (unsigned __int8)Enforced(v15) == 0;
        v17 = 5;
        if ( v16 )
          v17 = 1;
        MSGSQMAddMessage(v12, (struct tagPROCESSINFO *)v10, a4, 0, v17);
      }
      if ( v13 )
        return PostTransformableMessage((_DWORD)a1, v7, a3, a4, 1);
      if ( v7 == 793 )
      {
        v21 = *((_QWORD *)a1 + 2);
        if ( *(struct tagWND **)(v21 + 1392) == a1 && *(_QWORD *)(v21 + 424) == *(_QWORD *)(gptiCurrent + 424LL) )
          return PostTransformableMessage((_DWORD)a1, v7, a3, a4, 1);
      }
      EtwTraceUIPIMsgError(v12, v10, v7, a3, a4);
      UserSetLastError(5LL);
      MSGSQMAddMessage(v12, (struct tagPROCESSINFO *)v10, a4, 0, 0);
    }
    if ( v13 )
      return PostTransformableMessage((_DWORD)a1, v7, a3, a4, 1);
  }
  return 0LL;
}
