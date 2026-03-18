/*
 * XREFs of xxxInterSendMsgEx @ 0x1C00412E0
 * Callers:
 *     _ReplyMessage @ 0x1C0005410 (_ReplyMessage.c)
 *     xxxReceiverDied @ 0x1C000E174 (xxxReceiverDied.c)
 *     xxxSendMessageCallback @ 0x1C001FD04 (xxxSendMessageCallback.c)
 *     ClearSendMessages @ 0x1C00380E0 (ClearSendMessages.c)
 *     xxxReceiveMessage @ 0x1C003F6A0 (xxxReceiveMessage.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00407C0 (xxxSendTransformableMessageTimeout.c)
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z @ 0x1C0042AD0 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z.c)
 * Callees:
 *     ?IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@0PEAUtagWND@@I_K_JH@Z @ 0x1C00126E4 (-IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@0PEAUtagWND@@I_K_JH@Z.c)
 *     MSGSQMAddMessage @ 0x1C0012850 (MSGSQMAddMessage.c)
 *     ?IsMessageAlwaysAllowedAcrossIL@@YAHI@Z @ 0x1C0012A4C (-IsMessageAlwaysAllowedAcrossIL@@YAHI@Z.c)
 *     HMValidateHandle @ 0x1C0024F2C (HMValidateHandle.c)
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     TransformMessageBetweenCoordinateSpaces @ 0x1C0043830 (TransformMessageBetweenCoordinateSpaces.c)
 *     CaptureAndValidateUserModeDpiAwarenessContext @ 0x1C00447D0 (CaptureAndValidateUserModeDpiAwarenessContext.c)
 *     ?xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z @ 0x1C0044820 (-xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z.c)
 *     SetWakeBit @ 0x1C0070EE0 (SetWakeBit.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     MergeDeferredMessagesOfThreadOnQueue @ 0x1C00F5AC8 (MergeDeferredMessagesOfThreadOnQueue.c)
 *     ProcessSuspendedSendMessage @ 0x1C010F494 (ProcessSuspendedSendMessage.c)
 *     IsThreadHung @ 0x1C013354C (IsThreadHung.c)
 *     IsThreadCrossSessionAttached @ 0x1C0164774 (IsThreadCrossSessionAttached.c)
 *     ??0CKernelStackSwapAuto@@QEAA@XZ @ 0x1C0165550 (--0CKernelStackSwapAuto@@QEAA@XZ.c)
 *     ??1CKernelStackSwapAuto@@QEAA@XZ @ 0x1C0165578 (--1CKernelStackSwapAuto@@QEAA@XZ.c)
 *     memmove @ 0x1C0168100 (memmove.c)
 *     _FreeTouchInputInfo @ 0x1C01DF520 (_FreeTouchInputInfo.c)
 *     MakeUpKeyboardCorrectionCalloutContents @ 0x1C01E36C4 (MakeUpKeyboardCorrectionCalloutContents.c)
 *     _FreeGestureInfo @ 0x1C0213F30 (_FreeGestureInfo.c)
 *     strncpycch @ 0x1C025A0E4 (strncpycch.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 xxxInterSendMsgEx(__int64 a1, __int64 a2, ...)
{
  unsigned int v2; // r13d
  __int64 CurrentProcessWin32Process; // rsi
  size_t v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdi
  unsigned __int16 *v15; // r14
  unsigned __int64 v16; // r12
  int v17; // ebx
  unsigned __int8 v18; // al
  __int64 v19; // rcx
  __int16 v20; // ax
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdi
  __int64 v25; // rcx
  size_t v26; // rbx
  _QWORD *v27; // rbx
  __int64 CurrentProcess; // rax
  __int64 v29; // rax
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rdi
  unsigned int v33; // esi
  __int64 v34; // rdx
  __int64 result; // rax
  __int64 v36; // rax
  void *v37; // rdx
  void *v38; // r10
  _OWORD *v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rax
  int v42; // edx
  size_t v43; // r8
  _QWORD *v44; // r15
  const void *v45; // rdx
  size_t v46; // r8
  unsigned __int16 *v47; // r15
  __int64 v48; // rbx
  void *v49; // rbx
  size_t v50; // r8
  _QWORD *v51; // r15
  __int64 v52; // rdx
  __int64 v53; // r8
  __int64 v54; // rax
  __int64 v55; // rbx
  unsigned __int64 v56; // rcx
  int v57; // ebx
  struct _KTHREAD *CurrentThread; // r14
  __int64 v59; // rsi
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 v63; // rax
  __int64 v64; // rbx
  int v65; // ecx
  int v66; // ecx
  __int64 v67; // rsi
  __int64 v68; // rax
  _QWORD *v69; // rdx
  unsigned int v70; // eax
  size_t v71; // r14
  int v72; // esi
  unsigned int v73; // r15d
  __int64 v74; // r9
  __int64 v75; // rdx
  int v76; // eax
  __int64 v77; // rbx
  char v78; // r14
  __int64 v79; // rax
  __int64 v80; // rdx
  __int64 v81; // r8
  __int64 v82; // rcx
  int v83; // eax
  int v84; // ecx
  int v85; // eax
  _QWORD *v86; // rbx
  _WORD *v87; // rdx
  unsigned int v88; // ecx
  __int16 v89; // ax
  __int128 *v90; // rax
  __int128 v91; // xmm0
  __int64 v92; // rcx
  __int64 v93; // rdx
  __int64 v94; // rdx
  __int64 v95; // r8
  __int64 v96; // r9
  __int64 v97; // r14
  __int64 v98; // rbx
  int v99; // eax
  int v100; // eax
  int v101; // ecx
  int v102; // ecx
  _QWORD *v103; // rax
  __int64 v104; // rdx
  _QWORD *v105; // rcx
  int v106; // ecx
  __int64 v107; // rcx
  _QWORD *v108; // rax
  __int64 v109; // rcx
  unsigned int Size; // [rsp+44h] [rbp-134h]
  size_t Size_4; // [rsp+48h] [rbp-130h]
  _OWORD *Src; // [rsp+50h] [rbp-128h]
  int Srca; // [rsp+50h] [rbp-128h]
  int v114; // [rsp+58h] [rbp-120h]
  void *v115[2]; // [rsp+60h] [rbp-118h] BYREF
  __int64 v116; // [rsp+70h] [rbp-108h] BYREF
  unsigned int v117; // [rsp+78h] [rbp-100h]
  unsigned __int16 *v118; // [rsp+80h] [rbp-F8h]
  void *v119; // [rsp+88h] [rbp-F0h]
  _OWORD *v120; // [rsp+90h] [rbp-E8h]
  __int64 v121; // [rsp+98h] [rbp-E0h]
  _QWORD *v122; // [rsp+A0h] [rbp-D8h] BYREF
  __int64 v123; // [rsp+A8h] [rbp-D0h]
  __int64 v124; // [rsp+B0h] [rbp-C8h]
  unsigned __int64 HighLimit; // [rsp+B8h] [rbp-C0h] BYREF
  unsigned __int64 LowLimit; // [rsp+C0h] [rbp-B8h] BYREF
  void *v127; // [rsp+C8h] [rbp-B0h]
  _WORD *v128; // [rsp+D0h] [rbp-A8h]
  size_t v129; // [rsp+D8h] [rbp-A0h]
  __int64 v130; // [rsp+E0h] [rbp-98h] BYREF
  __int64 v131; // [rsp+E8h] [rbp-90h]
  __int64 v132; // [rsp+F0h] [rbp-88h]
  __int128 v133; // [rsp+100h] [rbp-78h]
  __int128 v134; // [rsp+120h] [rbp-58h] BYREF
  _BYTE v135[72]; // [rsp+130h] [rbp-48h] BYREF
  unsigned __int64 v137; // [rsp+190h] [rbp+18h] BYREF
  va_list va; // [rsp+190h] [rbp+18h]
  __int64 v139; // [rsp+198h] [rbp+20h] BYREF
  va_list va1; // [rsp+198h] [rbp+20h]
  __int64 v141; // [rsp+1A0h] [rbp+28h]
  __int64 v142; // [rsp+1A8h] [rbp+30h]
  __int64 v143; // [rsp+1B0h] [rbp+38h]
  __int64 v144; // [rsp+1B8h] [rbp+40h]
  __int64 v145; // [rsp+1C0h] [rbp+48h]
  va_list va2; // [rsp+1C8h] [rbp+50h] BYREF

  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v137 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v139 = va_arg(va2, _QWORD);
  v141 = va_arg(va2, _QWORD);
  v142 = va_arg(va2, _QWORD);
  v143 = va_arg(va2, _QWORD);
  v144 = va_arg(va2, _QWORD);
  v145 = va_arg(va2, _QWORD);
  v2 = a2;
  v123 = 0LL;
  v120 = 0LL;
  v118 = 0LL;
  v115[0] = 0LL;
  v115[1] = 0LL;
  v119 = 0LL;
  v114 = 0;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1, a2);
  v5 = gptiCurrent;
  v121 = gptiCurrent;
  if ( !(_DWORD)v141 )
    v5 = 0LL;
  Size_4 = v5;
  v129 = v5;
  _InterlockedIncrement(&glInterSendMessage);
  if ( v5 && (*(_DWORD *)(v5 + 480) & 1) != 0 )
    return 0LL;
  IoGetStackLimits(&LowLimit, &HighLimit);
  if ( (unsigned __int64)&HighLimit - LowLimit < 0x2000 )
    return 0LL;
  if ( !a1 )
    goto LABEL_25;
  v10 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 416LL);
  if ( v10 == CurrentProcessWin32Process || v2 - 14 <= 0x3F )
    goto LABEL_25;
  if ( v2 <= 0xD0 )
  {
    if ( v2 != 208 )
    {
      switch ( v2 )
      {
        case 0xCu:
        case 0xBCu:
          goto LABEL_20;
        case 0xDu:
        case 0xC4u:
        case 0xCCu:
          v6 = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 136) + 8LL) + 2LL);
          if ( *(_WORD *)(gpsi + 870LL) != (_WORD)v6 || (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 28LL) & 0x20) == 0 )
            goto LABEL_25;
          UserSetLastError(5LL, v6, v8, v9);
          UserSetLastError(5LL, v11, v12, v13);
          break;
        case 0x4Eu:
          goto LABEL_24;
        default:
          goto LABEL_25;
      }
      return 0LL;
    }
LABEL_20:
    if ( (!(unsigned __int8)Enforced(v7) || *(_QWORD *)v10 == gpepCSRSS)
      && (*(_DWORD *)(v10 + 772) != *(_DWORD *)(CurrentProcessWin32Process + 772)
       || *(_DWORD *)(v10 + 776) != *(_DWORD *)(CurrentProcessWin32Process + 776)) )
    {
      goto LABEL_24;
    }
    goto LABEL_25;
  }
  if ( v2 == 272 )
  {
LABEL_24:
    UserSetLastError(5LL, v6, v8, v9);
    return 0LL;
  }
  if ( v2 == 353 || v2 == 424 || v2 == 563 || v2 == 648 )
    goto LABEL_20;
LABEL_25:
  if ( (_DWORD)v144 )
    goto LABEL_57;
  v14 = 0LL;
  if ( a1 )
  {
    v14 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 416LL);
  }
  else if ( v142 )
  {
    v14 = *(_QWORD *)(v142 + 416);
  }
  if ( v14 == CurrentProcessWin32Process )
  {
LABEL_57:
    v16 = v137;
    v15 = (unsigned __int16 *)v139;
  }
  else
  {
    if ( v2 == 717 )
      return 0LL;
    v15 = (unsigned __int16 *)v139;
    v16 = v137;
    v17 = IsMessageAllowedAcrossILByReceiver(
            (struct tagPROCESSINFO *)CurrentProcessWin32Process,
            (void *const **)v14,
            (struct tagWND *)a1,
            v2,
            v137,
            v139,
            1);
    if ( !v17 )
    {
      v17 = IsMessageAlwaysAllowedAcrossIL(v2);
      if ( v17 )
        MSGSQMAddMessage(
          (struct tagPROCESSINFO *)CurrentProcessWin32Process,
          (struct tagPROCESSINFO *)v14,
          v2,
          v16,
          (unsigned __int64)v15,
          1,
          2);
    }
    if ( !v17 )
    {
      if ( v2 != 274 || ((v16 - 61472) & 0xFFFFFFFFFFFFFEBFuLL) != 0 || v16 == 61792 )
      {
        if ( *(_QWORD *)v14 == gpepCSRSS )
          v116 = 0x2000LL;
        else
          v116 = *(_QWORD *)(v14 + 872);
        v18 = CheckAccess(CurrentProcessWin32Process + 872, &v116);
        v17 = v18;
        if ( v18 )
        {
          if ( (unsigned __int8)Enforced(v19) )
            v20 = 5;
          else
            v20 = 1;
          MSGSQMAddMessage(
            (struct tagPROCESSINFO *)CurrentProcessWin32Process,
            (struct tagPROCESSINFO *)v14,
            v2,
            v16,
            (unsigned __int64)v15,
            1,
            v20);
        }
      }
      else
      {
        v17 = 1;
        MSGSQMAddMessage(
          (struct tagPROCESSINFO *)CurrentProcessWin32Process,
          (struct tagPROCESSINFO *)v14,
          0x112u,
          v16,
          (unsigned __int64)v15,
          1,
          2);
      }
    }
    if ( !v17 )
    {
      if ( a1
        && v2 == 793
        && (v6 = *(_QWORD *)(a1 + 16), *(_QWORD *)(v6 + 1392) == a1)
        && *(_QWORD *)(v6 + 424) == *(_QWORD *)(gptiCurrent + 424LL) )
      {
        v17 = 1;
      }
      else
      {
        EtwTraceUIPIMsgError(CurrentProcessWin32Process, v14, v2, v16, v15);
        UserSetLastError(5LL, v21, v22, v23);
        MSGSQMAddMessage(
          (struct tagPROCESSINFO *)CurrentProcessWin32Process,
          (struct tagPROCESSINFO *)v14,
          v2,
          v16,
          (unsigned __int64)v15,
          1,
          0);
      }
      if ( !v17 )
        return 0LL;
    }
  }
  if ( v2 == 576 )
  {
    if ( !HMValidateHandle((unsigned __int64)v15, 20) )
      return 0LL;
  }
  else if ( v2 == 281 && !HMValidateHandle((unsigned __int64)v15, 21) )
  {
    return 0LL;
  }
  v24 = v142;
  if ( (*(_DWORD *)(v142 + 1224) & 0x20) == 0 )
  {
    v26 = Size_4;
    goto LABEL_78;
  }
  v25 = v143;
  if ( v143 )
  {
    if ( (*(_DWORD *)(v143 + 32) & 0x40) != 0 )
      goto LABEL_71;
    if ( *(_DWORD *)v143 == 2 && *(_DWORD *)(v143 + 36) )
      return 0LL;
  }
  v26 = Size_4;
  if ( Size_4 )
  {
    v27 = *(_QWORD **)(v142 + 416);
    CurrentProcess = PsGetCurrentProcess(v143, v6, v8, v9);
    if ( !PsGetProcessCommonJob(CurrentProcess, *v27) )
      return 0LL;
    v25 = v143;
LABEL_71:
    v26 = Size_4;
    if ( Size_4 )
      goto LABEL_78;
  }
  if ( !v25 && !(unsigned int)ProcessSuspendedSendMessage(v24, a1, v2, v16, v15)
    || !v26 && *(_DWORD *)(v24 + 528) > 0x2710u )
  {
    return 0LL;
  }
LABEL_78:
  v29 = Win32AllocateFromPagedLookasideList(SMSLookaside);
  v32 = v29;
  v124 = v29;
  if ( !v29 )
    return 0LL;
  *(_QWORD *)(v29 + 120) = 0LL;
  Size = 0;
  v33 = 0;
  Src = v15;
  v34 = v121;
  *(_DWORD *)(v29 + 128) = *(_DWORD *)(v121 + 1412);
  if ( v143 && *(_DWORD *)v143 == 33 )
  {
LABEL_171:
    *(_QWORD *)(v32 + 112) = 0LL;
    v51 = (_QWORD *)(v32 + 16);
    *(_QWORD *)(v32 + 16) = 0LL;
    *(_QWORD *)&v133 = v32 + 112;
    *((_QWORD *)&v133 + 1) = a1;
    v134 = v133;
    HMAssignmentLock(&v134);
    *(_DWORD *)(v32 + 104) = v2;
    *(_QWORD *)(v32 + 88) = v16;
    *(_QWORD *)(v32 + 96) = v15;
    *(_DWORD *)(v32 + 84) = 0;
    if ( v2 == 576 || v2 == 281 )
    {
      v54 = _HMObjectFromHandle(v15);
      v55 = v142;
      if ( v54 )
        HMChangeOwnerThread(v54, v142);
    }
    else
    {
      v55 = v142;
    }
    if ( *(_QWORD *)(gsmsList + 8LL) != gsmsList )
      __fastfail(3u);
    *(_QWORD *)v32 = gsmsList;
    *(_QWORD *)(v32 + 8) = gsmsList;
    *(_QWORD *)(gsmsList + 8LL) = v32;
    gsmsList = v32;
    v56 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    *(_DWORD *)(v32 + 80) = v56;
    *(_QWORD *)(v32 + 40) = v55;
    *(_QWORD *)(v32 + 32) = Size_4;
    v57 = 18;
    CurrentThread = KeGetCurrentThread();
    v59 = 0LL;
    if ( !(unsigned int)IsThreadCrossSessionAttached(v56, v52, v53) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v59 = *ThreadWin32Thread;
    }
    if ( v59 )
    {
      if ( *(_QWORD *)(v59 + 360) )
        CaptureAndValidateUserModeDpiAwarenessContext(v59);
      if ( *(_DWORD *)(v59 + 340) )
      {
        v57 = *(_DWORD *)(v59 + 340);
      }
      else
      {
        v63 = PsGetCurrentProcessWin32Process(v61, v60);
        if ( v63 )
          v57 = *(_DWORD *)(v63 + 280);
      }
      if ( (*(_DWORD *)(v59 + 328) & 8) != 0 && (v57 & 0xF) == 2 && (v57 & 0xF0) == 0x20 )
        v57 |= 0x20000000u;
    }
    *(_DWORD *)(v32 + 132) = v57;
    *(_QWORD *)(v32 + 64) = 0LL;
    v64 = v143;
    if ( v143 && (*(_DWORD *)v143 & 1) != 0 )
    {
      v65 = 1024;
      if ( (*(_DWORD *)v143 & 0x100) == 0 )
        v65 = 2048;
      v66 = *(_DWORD *)(v32 + 84) | v65;
      *(_DWORD *)(v32 + 84) = v66;
      *(_QWORD *)(v32 + 48) = *(_QWORD *)(v64 + 8);
      *(_QWORD *)(v32 + 56) = *(_QWORD *)(v64 + 16);
      if ( (*(_DWORD *)v64 & 0x20) != 0 )
      {
        *(_DWORD *)(v32 + 84) = v66 | 0x200;
        *(_QWORD *)(v32 + 72) = *(_QWORD *)(v64 + 24);
      }
      else
      {
        *(_DWORD *)(v32 + 84) = v66 | 0x100;
        *(_QWORD *)(v32 + 64) = v121;
      }
    }
    if ( (_DWORD)v145 )
      *(_DWORD *)(v32 + 84) |= 0x10000u;
    v67 = v142;
    v68 = v142 + 512;
    v69 = *(_QWORD **)(v142 + 520);
    if ( *v69 != v142 + 512 )
      __fastfail(3u);
    *v51 = v68;
    *(_QWORD *)(v32 + 24) = v69;
    *v69 = v51;
    *(_QWORD *)(v68 + 8) = v51;
    v70 = *(_DWORD *)(v67 + 528) + 1;
    *(_DWORD *)(v67 + 528) = v70;
    if ( v70 > LODWORD(WPP_MAIN_CB.Queue.ListEntry.Flink) )
      LODWORD(WPP_MAIN_CB.Queue.ListEntry.Flink) = v70;
    v71 = Size_4;
    if ( Size_4 )
    {
      v123 = *(_QWORD *)(Size_4 + 496);
      *(_QWORD *)(Size_4 + 496) = v32;
    }
    else
    {
      *(_DWORD *)(v32 + 84) |= 8u;
    }
    if ( (*(_DWORD *)(v32 + 84) & 0x200) == 0
      && ((v2 - 577 <= 3 || v2 - 581 <= 0x12 && v2 != 589) && v2 != 595 || v2 == 528 && (_WORD)v137 == 582) )
    {
      CTouchProcessor::ReferenceMsgDataExternal(gpTouchProcessor, v139, 6LL, v32);
    }
    EtwTraceBeginSendMessage(v32, Size_4, v64);
    if ( !Size_4 )
    {
      SetWakeBit(v67, 64LL);
      EtwTraceEndSendMessage(v32);
      return 1LL;
    }
    v72 = 0;
    LODWORD(v141) = 0;
    v73 = 512;
    Srca = 0;
    v74 = v142;
    if ( (*(_DWORD *)(v142 + 480) & 1) == 0 )
    {
      *(_WORD *)(*(_QWORD *)(v142 + 440) + 6LL) |= 0x40u;
      *(_WORD *)(*(_QWORD *)(v74 + 440) + 4LL) |= 0x40u;
      if ( (*(_BYTE *)(*(_QWORD *)(v74 + 440) + 10LL) & 0x40) != 0 )
        KeSetEvent(*(PRKEVENT *)(v74 + 728), 2, 0);
    }
    if ( v64 )
    {
      LODWORD(v141) = *(_DWORD *)(v64 + 36);
      v73 = ((*(_DWORD *)(v64 + 32) & 1) << 15) + 512;
    }
    CKernelStackSwapAuto::CKernelStackSwapAuto((CKernelStackSwapAuto *)v135);
    v75 = v142;
    if ( *(_QWORD *)(Size_4 + 424) == *(_QWORD *)(v142 + 424) )
    {
      v76 = *(_DWORD *)(Size_4 + 480);
      if ( (v76 & 0x10000) == 0 )
      {
        *(_DWORD *)(Size_4 + 480) = v76 | 0x10000;
        Srca = 1;
      }
    }
    if ( (*(_DWORD *)(v32 + 84) & 1) != 0 )
    {
LABEL_254:
      LODWORD(v141) = v72;
      CKernelStackSwapAuto::~CKernelStackSwapAuto((CKernelStackSwapAuto *)v135);
      if ( Srca )
      {
        *(_DWORD *)(v71 + 480) &= ~0x10000u;
        MergeDeferredMessagesOfThreadOnQueue(v71);
      }
      if ( (*(_DWORD *)(v71 + 480) & 1) == 0 )
      {
        *(_WORD *)(*(_QWORD *)(v71 + 440) + 6LL) |= 0x200u;
        *(_WORD *)(*(_QWORD *)(v71 + 440) + 4LL) |= 0x200u;
        if ( (*(_WORD *)(*(_QWORD *)(v71 + 440) + 10LL) & 0x200) != 0 )
          KeSetEvent(*(PRKEVENT *)(v71 + 728), 2, 0);
      }
      if ( !v72 )
      {
        if ( Size )
        {
          v86 = v119;
          v122 = v119;
          if ( v2 == 131 )
          {
            if ( (_DWORD)v145 && a1 && (unsigned int)IsWindowDesktopComposed(a1) )
            {
              TransformMessageBetweenCoordinateSpaces(131, 1, (unsigned int)va, (unsigned int)&v122, 0LL, a1);
              v86 = v122;
            }
            v90 = *(__int128 **)(v32 + 120);
            v91 = *v90;
            if ( v137 )
            {
              v92 = v86[6];
              *(_OWORD *)v86 = v91;
              *((_OWORD *)v86 + 1) = v90[1];
              *((_OWORD *)v86 + 2) = v90[2];
              v86[6] = v92;
              v93 = *((_QWORD *)v90 + 6);
              if ( v93 )
              {
                *(_OWORD *)v92 = *(_OWORD *)v93;
                *(_OWORD *)(v92 + 16) = *(_OWORD *)(v93 + 16);
                *(_QWORD *)(v92 + 32) = *(_QWORD *)(v93 + 32);
              }
            }
            else
            {
              *(_OWORD *)v86 = v91;
            }
          }
          else
          {
            v87 = *(_WORD **)(v32 + 120);
            if ( v114 )
            {
              if ( v114 == 1 )
              {
                strncpycch(v119, v87, Size);
              }
              else
              {
                v88 = Size >> 1;
                v117 = Size >> 1;
                v128 = v87;
                v127 = v119;
                while ( v88 )
                {
                  v89 = *v87;
                  *(_WORD *)v86 = *v87;
                  v86 = (_QWORD *)((char *)v86 + 2);
                  v127 = v86;
                  v128 = ++v87;
                  if ( !v89 )
                    break;
                  v117 = --v88;
                }
              }
            }
            else
            {
              memmove(v119, v87, Size);
            }
          }
        }
        else if ( v2 == 831 && (_DWORD)v145 && a1 && (unsigned int)IsWindowDesktopComposed(a1) )
        {
          TransformMessageBetweenCoordinateSpaces(831, 1, (unsigned int)va, (unsigned int)va1, 0LL, a1);
        }
      }
      EtwTraceEndSendMessage(v32);
      *(_QWORD *)(v71 + 496) = v123;
      v97 = v143;
      if ( v143 )
      {
        **(_QWORD **)(v143 + 40) = *(_QWORD *)(v32 + 72);
        if ( (*(_DWORD *)(v97 + 32) & 0x20) != 0 && (*(_DWORD *)(v32 + 84) & 0x8000) != 0 )
        {
          v98 = 0LL;
          UserSetLastError(1400LL, v94, v95, v96);
        }
        else
        {
          v98 = v72 == 0;
        }
      }
      else
      {
        v98 = *(_QWORD *)(v32 + 72);
      }
      if ( v97 || v72 )
      {
        v99 = *(_DWORD *)(v32 + 84);
        if ( (v99 & 1) == 0 )
        {
          v100 = v99 | 1;
          *(_DWORD *)(v32 + 84) = v100;
          if ( (v100 & 0x4000) != 0 )
          {
            *(_DWORD *)(v32 + 84) = v100 | 8;
          }
          else
          {
            --*(_DWORD *)(v142 + 528);
            v103 = (_QWORD *)(v32 + 16);
            v104 = *(_QWORD *)(v32 + 16);
            v105 = *(_QWORD **)(v32 + 24);
            if ( *(_QWORD *)(v104 + 8) != v32 + 16 || (_QWORD *)*v105 != v103 )
              __fastfail(3u);
            *v105 = v104;
            *(_QWORD *)(v104 + 8) = v105;
            *v103 = 0LL;
            *(_DWORD *)(v32 + 84) |= 0x10u;
          }
        }
      }
      v101 = *(_DWORD *)(v32 + 84);
      if ( (v101 & 0x4010) != 0x10 )
      {
        v101 |= 8u;
        *(_DWORD *)(v32 + 84) = v101;
      }
      if ( (v101 & 0x8008) != 8 )
      {
        v102 = *(_DWORD *)(v32 + 104);
        if ( v102 == 576 )
        {
          FreeTouchInputInfo(*(_QWORD *)(v32 + 96), 0LL);
        }
        else if ( v102 == 281 )
        {
          FreeGestureInfo(*(_QWORD *)(v32 + 96), 0LL);
        }
        if ( (*(_DWORD *)(v32 + 84) & 0x200) == 0 )
        {
          if ( ((v106 = *(_DWORD *)(v32 + 104), (unsigned int)(v106 - 577) <= 3)
             || (unsigned int)(v106 - 581) <= 0x12 && v106 != 589)
            && v106 != 595
            || v106 == 528 && *(_WORD *)(v32 + 88) == 582 )
          {
            CTouchProcessor::UnreferenceMsgDataExternal(gpTouchProcessor, *(_QWORD *)(v32 + 96), 6LL, v32);
          }
        }
        v107 = *(_QWORD *)v32;
        v108 = *(_QWORD **)(v32 + 8);
        if ( *(_QWORD *)(*(_QWORD *)v32 + 8LL) != v32 || *v108 != v32 )
          __fastfail(3u);
        *v108 = v107;
        *(_QWORD *)(v107 + 8) = v108;
        HMAssignmentUnlock(v32 + 112);
        v109 = *(_QWORD *)(v32 + 120);
        if ( v109 )
          Win32FreePool(v109);
        Win32FreeToPagedLookasideList(SMSLookaside, v32);
      }
      return v98;
    }
    while ( 1 )
    {
      if ( v72 )
      {
LABEL_253:
        v71 = Size_4;
        goto LABEL_254;
      }
      v77 = 0LL;
      v130 = 0LL;
      v131 = 0LL;
      v132 = 0LL;
      v78 = 0;
      *(_WORD *)(*(_QWORD *)(Size_4 + 440) + 4LL) &= ~0x200u;
      if ( v2 == 788 )
      {
        if ( v139 )
        {
          if ( *(_DWORD *)(v75 + 624) <= 0x501u )
          {
            if ( *(_DWORD *)(v75 + 640) )
            {
              v77 = *(_QWORD *)v139;
              if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)v139 + 48LL) - 13) <= 1 )
              {
                v79 = W32GetThreadWin32Thread(KeGetCurrentThread());
                v130 = *(_QWORD *)(v79 + 408);
                *(_QWORD *)(v79 + 408) = &v130;
                v131 = v77;
                HMLockObject(v77);
                v78 = 1;
              }
            }
          }
        }
      }
      v72 = xxxRealSleepThread(v73, v141, 0, 0, 0LL) == 0;
      if ( v78 )
      {
        v82 = (v72 << 7) | *(_DWORD *)(v77 + 88) & 0xFFFFFF7F;
        *(_DWORD *)(v77 + 88) = v82;
        if ( v72 )
        {
          v83 = v82 ^ ((unsigned __int8)v82 ^ (unsigned __int8)(v82 + 1)) & 0x7F;
          *(_DWORD *)(v77 + 88) = v83;
          if ( (v83 & 0x7Fu) > 0xA )
            *(_DWORD *)(v77 + 64) |= 0x10u;
        }
        ThreadUnlock1(v82, v80, v81);
      }
      if ( v72 && v143 )
      {
        v84 = *(_DWORD *)(v143 + 32);
        v85 = *(_DWORD *)(v32 + 84);
        if ( ((v84 & 0x10) != 0 || (v85 & 0x20) != 0) && (v85 & 0x10) != 0 )
        {
          LODWORD(v141) = 0;
          v72 = 0;
        }
        if ( (v84 & 8) == 0 || (unsigned int)IsThreadHung(v142, 0LL) )
        {
          if ( v72 )
            goto LABEL_252;
        }
        else
        {
          v72 = 0;
        }
        EtwTraceConvertTimeOutToBlocking();
      }
LABEL_252:
      if ( (*(_DWORD *)(v32 + 84) & 1) != 0 )
        goto LABEL_253;
      v75 = v142;
    }
  }
  if ( v2 - 57 <= 0xC )
    goto LABEL_93;
  if ( v2 == 13 )
  {
LABEL_136:
    *(_OWORD *)v115 = *(_OWORD *)v15;
    v114 = 2 - (SHIDWORD(v115[0]) < 0);
    v15 = (unsigned __int16 *)v115;
    v139 = (__int64)v115;
    if ( _mm_srli_si128(*(__m128i *)v115, 8).m128i_u64[0] < (unsigned __int64)MmSystemRangeStart || !v26 )
      v33 = HIDWORD(v115[0]) & 0x7FFFFFFF;
    goto LABEL_93;
  }
  if ( v2 > 0x143 )
  {
    if ( v2 <= 0x283 )
    {
      if ( v2 != 643 )
      {
        switch ( v2 )
        {
          case 0x145u:
          case 0x18Du:
          case 0x196u:
            goto LABEL_111;
          case 0x148u:
          case 0x189u:
            goto LABEL_136;
          case 0x14Au:
          case 0x14Cu:
          case 0x14Du:
          case 0x158u:
          case 0x180u:
          case 0x181u:
          case 0x18Cu:
          case 0x18Fu:
          case 0x1A2u:
            goto LABEL_110;
          case 0x191u:
          case 0x192u:
LABEL_126:
            v33 = 4 * v16;
            goto LABEL_93;
          case 0x218u:
            if ( v15 && (v16 & 0x8000) != 0 && (v15 < MmSystemRangeStart || !v26) )
            {
              v33 = *((_DWORD *)v15 + 4) + 20;
              if ( *((_DWORD *)v15 + 4) >= 0xFFFFFFEC )
                goto LABEL_114;
            }
            goto LABEL_93;
          case 0x219u:
            if ( v15 && (v16 & 0x8000) != 0 && (v15 < MmSystemRangeStart || !v26) )
              v33 = *(_DWORD *)v15;
            goto LABEL_93;
          case 0x220u:
            v118 = v15;
            v33 = (*((_DWORD *)v15 + 15) & 0x7FFFFFFF) + (*((_DWORD *)v15 + 19) & 0x7FFFFFFF);
            goto LABEL_93;
          default:
            goto LABEL_93;
        }
      }
      if ( v16 == 24 )
        v33 = (*(_DWORD *)v15 << 9) + 4;
      goto LABEL_93;
    }
    if ( v2 != 780 )
    {
      switch ( v2 )
      {
        case 0x32Cu:
          v33 = 328;
LABEL_94:
          v36 = Win32AllocPoolWithQuota(v33, 1668510549LL);
          *(_QWORD *)(v32 + 120) = v36;
          if ( v36 )
          {
            v119 = v15;
            v37 = (void *)v36;
            if ( v2 != 13 )
            {
              if ( v2 <= 0x83 )
              {
                if ( v2 == 131 )
                {
                  if ( v16 )
                  {
                    *(_OWORD *)v36 = *Src;
                    *(_OWORD *)(v36 + 16) = Src[1];
                    *(_OWORD *)(v36 + 32) = Src[2];
                    *(_QWORD *)(v36 + 48) = *((_QWORD *)Src + 6);
                    v40 = *(_QWORD *)(v32 + 120) + 56LL;
                    *(_QWORD *)(v36 + 48) = v40;
                    v41 = *((_QWORD *)Src + 6);
                    *(_OWORD *)v40 = *(_OWORD *)v41;
                    *(_OWORD *)(v40 + 16) = *(_OWORD *)(v41 + 16);
                    *(_QWORD *)(v40 + 32) = *(_QWORD *)(v41 + 32);
                  }
                  else
                  {
                    memmove((void *)v36, Src, v33);
                  }
                  v15 = *(unsigned __int16 **)(v32 + 120);
                  v139 = (__int64)v15;
                }
                else
                {
                  v38 = (void *)v36;
                  switch ( v2 )
                  {
                    case 0xCu:
                    case 0x1Au:
                    case 0x1Bu:
                      goto LABEL_148;
                    case 0x46u:
                    case 0x47u:
                      goto LABEL_150;
                    case 0x4Au:
                      v15 = (unsigned __int16 *)v36;
                      v139 = v36;
                      v39 = v120;
                      *(_OWORD *)v36 = *v120;
                      *(_QWORD *)(v36 + 16) = *((_QWORD *)v39 + 2);
                      if ( *((_QWORD *)v39 + 2) )
                      {
                        *(_QWORD *)(v36 + 16) = v36 + 24;
                        memmove((void *)(v36 + 24), *((const void **)v39 + 2), *((unsigned int *)v39 + 2));
                      }
                      break;
                    default:
                      goto LABEL_162;
                  }
                }
                goto LABEL_153;
              }
              if ( v2 <= 0x220 )
              {
                if ( v2 == 544 )
                {
                  v44 = v118;
                  v45 = (const void *)*((_QWORD *)v118 + 10);
                  if ( v45 )
                  {
                    v46 = *((unsigned int *)v118 + 19);
                    LODWORD(v46) = v46 & 0x7FFFFFFF;
                    memmove((void *)v36, v45, v46);
                    *v44 = *(_QWORD *)(v32 + 120);
                  }
                  v47 = v118;
                  if ( *((_DWORD *)v118 + 14) )
                  {
                    v48 = *((unsigned int *)v118 + 19);
                    LODWORD(v48) = v48 & 0x7FFFFFFF;
                    v49 = (void *)(*(_QWORD *)(v32 + 120) + v48);
                    v50 = *((unsigned int *)v118 + 15);
                    LODWORD(v50) = v50 & 0x7FFFFFFF;
                    memmove(v49, *((const void **)v118 + 8), v50);
                    *((_QWORD *)v47 + 1) = v49;
                  }
                }
                else
                {
                  v38 = (void *)v36;
                  switch ( v2 )
                  {
                    case 0xC2u:
                    case 0x143u:
                    case 0x145u:
                    case 0x14Au:
                    case 0x14Cu:
                    case 0x14Du:
                    case 0x158u:
                    case 0x180u:
                    case 0x181u:
                    case 0x18Cu:
                    case 0x18Du:
                    case 0x18Fu:
                    case 0x196u:
                    case 0x1A2u:
LABEL_148:
                      v15 = (unsigned __int16 *)v36;
                      v139 = v36;
                      v42 = HIDWORD(v115[0]) ^ (HIDWORD(v115[0]) ^ *(_DWORD *)(v36 + 4)) & 0x7FFFFFFF;
                      *(_DWORD *)(v36 + 4) = v42;
                      *(_DWORD *)v36 = v115[0];
                      *(_QWORD *)(v36 + 8) = v36 + 16;
                      v43 = v42 ^ (v42 ^ (v33 - 16)) & 0x7FFFFFFF;
                      *(_DWORD *)(v36 + 4) = v43;
                      LODWORD(v43) = v43 & 0x7FFFFFFF;
                      memmove((void *)(v36 + 16), v115[1], v43);
                      break;
                    case 0xC4u:
                      *(_WORD *)v36 = *(_WORD *)v115[1];
                      v37 = *(void **)(v32 + 120);
                      goto LABEL_152;
                    case 0x148u:
                    case 0x189u:
                      goto LABEL_152;
                    case 0x191u:
                      Size = v33;
LABEL_150:
                      memmove((void *)v36, Src, v33);
                      v15 = *(unsigned __int16 **)(v32 + 120);
                      v139 = (__int64)v15;
                      break;
                    default:
                      goto LABEL_162;
                  }
                }
                goto LABEL_153;
              }
              v38 = (void *)v36;
              if ( v2 != 780 )
              {
                if ( v2 == 812 )
                {
                  MakeUpKeyboardCorrectionCalloutContents(v15, v16, v36);
                  v16 = 0LL;
                  v137 = 0LL;
                  v15 = *(unsigned __int16 **)(v32 + 120);
                  v139 = (__int64)v15;
                }
                else
                {
LABEL_162:
                  memmove(v38, Src, v33);
                  v15 = *(unsigned __int16 **)(v32 + 120);
                  v139 = (__int64)v15;
                }
                goto LABEL_153;
              }
            }
LABEL_152:
            Size = v33;
            v119 = v115[1];
            v115[1] = v37;
          }
LABEL_153:
          if ( v33 && !*(_QWORD *)(v32 + 120) )
          {
            Win32FreeToPagedLookasideList(SMSLookaside, v32);
            return 0LL;
          }
          if ( (_DWORD)v145
            && a1
            && (unsigned int)IsWindowDesktopComposed(a1)
            && v2 - 577 > 3
            && (v2 - 581 > 0x12 || v2 == 589) )
          {
            TransformMessageBetweenCoordinateSpaces(v2, 1, (unsigned int)va, (unsigned int)va1, a1, 0LL);
            v15 = (unsigned __int16 *)v139;
          }
          goto LABEL_171;
        case 0x341u:
          v33 = 64;
          Size = 64;
          break;
        case 0x342u:
          v33 = 56;
          break;
      }
LABEL_93:
      if ( !v33 )
        goto LABEL_153;
      goto LABEL_94;
    }
    goto LABEL_136;
  }
  if ( v2 == 323 )
  {
LABEL_110:
    if ( *(_DWORD *)(v34 + 1412) != 1 )
    {
LABEL_111:
      *(_OWORD *)v115 = *(_OWORD *)v15;
      if ( _mm_srli_si128(*(__m128i *)v115, 8).m128i_u64[0] < (unsigned __int64)MmSystemRangeStart || !v26 )
      {
        v33 = LODWORD(v115[0]) + 18;
        if ( (unsigned int)(LODWORD(v115[0]) + 18) < LODWORD(v115[0]) )
        {
LABEL_114:
          Win32FreeToPagedLookasideList(SMSLookaside, v29);
          return 8LL;
        }
      }
    }
    goto LABEL_93;
  }
  switch ( v2 )
  {
    case 1u:
    case 0x81u:
      UserSetLastError(5LL, 0x1C0000000LL, v30, v31);
      Win32FreeToPagedLookasideList(SMSLookaside, v32);
      return 0LL;
    case 0xCu:
    case 0x1Au:
    case 0xC2u:
      if ( !v15 )
        goto LABEL_93;
      goto LABEL_111;
    case 0x1Bu:
      goto LABEL_111;
    case 0x38u:
      v33 = *v15;
      goto LABEL_93;
    case 0x46u:
    case 0x47u:
      v33 = 40;
      Size = 40;
      goto LABEL_93;
    case 0x49u:
      v33 = v16;
      goto LABEL_93;
    case 0x4Au:
      v120 = v15;
      if ( !*((_QWORD *)v15 + 2) )
      {
        v33 = 24;
        goto LABEL_94;
      }
      v33 = *((_DWORD *)v15 + 2) + 24;
      if ( v33 >= 0x18 )
        goto LABEL_93;
      Win32FreeToPagedLookasideList(SMSLookaside, v29);
      result = 0LL;
      break;
    case 0x53u:
      v33 = *(_DWORD *)v15;
      goto LABEL_93;
    case 0x83u:
      v33 = 96;
      if ( !v16 )
        v33 = 16;
      Size = v33;
      goto LABEL_93;
    case 0xC4u:
      goto LABEL_136;
    case 0xCBu:
      goto LABEL_126;
    default:
      goto LABEL_93;
  }
  return result;
}
