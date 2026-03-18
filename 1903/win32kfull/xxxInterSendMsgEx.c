/*
 * XREFs of xxxInterSendMsgEx @ 0x1C00A0510
 * Callers:
 *     _ReplyMessage @ 0x1C0005410 (_ReplyMessage.c)
 *     xxxReceiverDied @ 0x1C000EAC4 (xxxReceiverDied.c)
 *     xxxSendMessageCallback @ 0x1C001D0F4 (xxxSendMessageCallback.c)
 *     ClearSendMessages @ 0x1C00973B0 (ClearSendMessages.c)
 *     xxxReceiveMessage @ 0x1C009E8D0 (xxxReceiveMessage.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C009F9F0 (xxxSendTransformableMessageTimeout.c)
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z @ 0x1C00A1D00 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z.c)
 * Callees:
 *     IsThreadHung @ 0x1C0016E74 (IsThreadHung.c)
 *     HMValidateHandle @ 0x1C002F96C (HMValidateHandle.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     ?IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@0PEAUtagWND@@I_K_JH@Z @ 0x1C0087D64 (-IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@0PEAUtagWND@@I_K_JH@Z.c)
 *     MSGSQMAddMessage @ 0x1C0087ED0 (MSGSQMAddMessage.c)
 *     ?IsMessageAlwaysAllowedAcrossIL@@YAHI@Z @ 0x1C00880CC (-IsMessageAlwaysAllowedAcrossIL@@YAHI@Z.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     TransformMessageBetweenCoordinateSpaces @ 0x1C00A2A60 (TransformMessageBetweenCoordinateSpaces.c)
 *     CaptureAndValidateUserModeDpiAwarenessContext @ 0x1C00A3A00 (CaptureAndValidateUserModeDpiAwarenessContext.c)
 *     ?xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z @ 0x1C00A3A50 (-xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z.c)
 *     SetWakeBit @ 0x1C00CF810 (SetWakeBit.c)
 *     MergeDeferredMessagesOfThreadOnQueue @ 0x1C011BAD8 (MergeDeferredMessagesOfThreadOnQueue.c)
 *     ProcessSuspendedSendMessage @ 0x1C0134944 (ProcessSuspendedSendMessage.c)
 *     IsThreadCrossSessionAttached @ 0x1C01637A4 (IsThreadCrossSessionAttached.c)
 *     ??0CKernelStackSwapAuto@@QEAA@XZ @ 0x1C01642BC (--0CKernelStackSwapAuto@@QEAA@XZ.c)
 *     ??1CKernelStackSwapAuto@@QEAA@XZ @ 0x1C01642E4 (--1CKernelStackSwapAuto@@QEAA@XZ.c)
 *     memmove @ 0x1C0166500 (memmove.c)
 *     _FreeTouchInputInfo @ 0x1C01DF6A0 (_FreeTouchInputInfo.c)
 *     MakeUpKeyboardCorrectionCalloutContents @ 0x1C01E3844 (MakeUpKeyboardCorrectionCalloutContents.c)
 *     _FreeGestureInfo @ 0x1C0214470 (_FreeGestureInfo.c)
 *     strncpycch @ 0x1C025A824 (strncpycch.c)
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
  _QWORD *v24; // rdi
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
  __int64 v54; // r9
  __int64 v55; // rax
  _QWORD *v56; // rbx
  unsigned __int64 v57; // rcx
  int v58; // ebx
  struct _KTHREAD *CurrentThread; // r14
  __int64 v60; // rsi
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 v64; // rax
  __int64 v65; // rbx
  int v66; // ecx
  int v67; // ecx
  _QWORD *v68; // rsi
  _QWORD *v69; // rax
  _QWORD **v70; // rdx
  unsigned int v71; // eax
  size_t v72; // r14
  int v73; // esi
  unsigned int v74; // r15d
  _QWORD *v75; // r9
  __int64 v76; // r8
  __int64 v77; // r9
  _QWORD *v78; // rdx
  int v79; // eax
  __int64 v80; // rbx
  char v81; // r14
  __int64 v82; // rax
  __int64 v83; // rdx
  __int64 v84; // rcx
  int v85; // eax
  int v86; // ecx
  int v87; // eax
  _QWORD *v88; // rbx
  _WORD *v89; // rdx
  unsigned int v90; // ecx
  __int16 v91; // ax
  __int128 *v92; // rax
  __int128 v93; // xmm0
  __int64 v94; // rcx
  __int64 v95; // rdx
  __int64 v96; // rdx
  __int64 v97; // r8
  __int64 v98; // r9
  __int64 v99; // r14
  __int64 v100; // rbx
  int v101; // eax
  int v102; // eax
  int v103; // ecx
  int v104; // ecx
  _QWORD *v105; // rax
  __int64 v106; // rdx
  _QWORD *v107; // rcx
  int v108; // ecx
  __int64 v109; // rcx
  _QWORD *v110; // rax
  __int64 v111; // rcx
  unsigned int Size; // [rsp+44h] [rbp-134h]
  size_t Size_4; // [rsp+48h] [rbp-130h]
  _OWORD *Src; // [rsp+50h] [rbp-128h]
  int Srca; // [rsp+50h] [rbp-128h]
  int v116; // [rsp+58h] [rbp-120h]
  void *v117[2]; // [rsp+60h] [rbp-118h] BYREF
  __int64 v118; // [rsp+70h] [rbp-108h] BYREF
  unsigned int v119; // [rsp+78h] [rbp-100h]
  unsigned __int16 *v120; // [rsp+80h] [rbp-F8h]
  void *v121; // [rsp+88h] [rbp-F0h]
  _OWORD *v122; // [rsp+90h] [rbp-E8h]
  __int64 v123; // [rsp+98h] [rbp-E0h]
  _QWORD *v124; // [rsp+A0h] [rbp-D8h] BYREF
  __int64 v125; // [rsp+A8h] [rbp-D0h]
  __int64 v126; // [rsp+B0h] [rbp-C8h]
  unsigned __int64 HighLimit; // [rsp+B8h] [rbp-C0h] BYREF
  unsigned __int64 LowLimit; // [rsp+C0h] [rbp-B8h] BYREF
  void *v129; // [rsp+C8h] [rbp-B0h]
  _WORD *v130; // [rsp+D0h] [rbp-A8h]
  size_t v131; // [rsp+D8h] [rbp-A0h]
  __int64 v132; // [rsp+E0h] [rbp-98h] BYREF
  __int64 v133; // [rsp+E8h] [rbp-90h]
  __int64 v134; // [rsp+F0h] [rbp-88h]
  __int128 v135; // [rsp+100h] [rbp-78h]
  __int128 v136; // [rsp+120h] [rbp-58h] BYREF
  _BYTE v137[72]; // [rsp+130h] [rbp-48h] BYREF
  unsigned __int64 v139; // [rsp+190h] [rbp+18h] BYREF
  va_list va; // [rsp+190h] [rbp+18h]
  __int64 v141; // [rsp+198h] [rbp+20h] BYREF
  va_list va1; // [rsp+198h] [rbp+20h]
  __int64 v143; // [rsp+1A0h] [rbp+28h]
  _QWORD *v144; // [rsp+1A8h] [rbp+30h]
  __int64 v145; // [rsp+1B0h] [rbp+38h]
  __int64 v146; // [rsp+1B8h] [rbp+40h]
  __int64 v147; // [rsp+1C0h] [rbp+48h]
  va_list va2; // [rsp+1C8h] [rbp+50h] BYREF

  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v139 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v141 = va_arg(va2, _QWORD);
  v143 = va_arg(va2, _QWORD);
  v144 = va_arg(va2, _QWORD *);
  v145 = va_arg(va2, _QWORD);
  v146 = va_arg(va2, _QWORD);
  v147 = va_arg(va2, _QWORD);
  v2 = a2;
  v125 = 0LL;
  v122 = 0LL;
  v120 = 0LL;
  v117[0] = 0LL;
  v117[1] = 0LL;
  v121 = 0LL;
  v116 = 0;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1, a2);
  v5 = gptiCurrent;
  v123 = gptiCurrent;
  if ( !(_DWORD)v143 )
    v5 = 0LL;
  Size_4 = v5;
  v131 = v5;
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
  if ( (_DWORD)v146 )
    goto LABEL_57;
  v14 = 0LL;
  if ( a1 )
  {
    v14 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 416LL);
  }
  else if ( v144 )
  {
    v14 = v144[52];
  }
  if ( v14 == CurrentProcessWin32Process )
  {
LABEL_57:
    v16 = v139;
    v15 = (unsigned __int16 *)v141;
  }
  else
  {
    if ( v2 == 717 )
      return 0LL;
    v15 = (unsigned __int16 *)v141;
    v16 = v139;
    v17 = IsMessageAllowedAcrossILByReceiver(
            (struct tagPROCESSINFO *)CurrentProcessWin32Process,
            (void *const **)v14,
            (struct tagWND *)a1,
            v2,
            v139,
            v141,
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
          v118 = 0x2000LL;
        else
          v118 = *(_QWORD *)(v14 + 872);
        v18 = CheckAccess(CurrentProcessWin32Process + 872, &v118);
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
    LOBYTE(v6) = 20;
    if ( !HMValidateHandle((unsigned __int64)v15, v6, v8, v9) )
      return 0LL;
  }
  else if ( v2 == 281 )
  {
    LOBYTE(v6) = 21;
    if ( !HMValidateHandle((unsigned __int64)v15, v6, v8, v9) )
      return 0LL;
  }
  v24 = v144;
  if ( (v144[153] & 0x20) == 0 )
  {
    v26 = Size_4;
    goto LABEL_78;
  }
  v25 = v145;
  if ( v145 )
  {
    if ( (*(_DWORD *)(v145 + 32) & 0x40) != 0 )
      goto LABEL_71;
    if ( *(_DWORD *)v145 == 2 && *(_DWORD *)(v145 + 36) )
      return 0LL;
  }
  v26 = Size_4;
  if ( Size_4 )
  {
    v27 = (_QWORD *)v144[52];
    CurrentProcess = PsGetCurrentProcess(v145, v6, v8, v9);
    if ( !PsGetProcessCommonJob(CurrentProcess, *v27) )
      return 0LL;
    v25 = v145;
LABEL_71:
    v26 = Size_4;
    if ( Size_4 )
      goto LABEL_78;
  }
  if ( !v25 && !(unsigned int)ProcessSuspendedSendMessage(v24, a1, v2, v16, v15)
    || !v26 && *((_DWORD *)v24 + 132) > 0x2710u )
  {
    return 0LL;
  }
LABEL_78:
  v29 = Win32AllocateFromPagedLookasideList(SMSLookaside);
  v32 = v29;
  v126 = v29;
  if ( !v29 )
    return 0LL;
  *(_QWORD *)(v29 + 120) = 0LL;
  Size = 0;
  v33 = 0;
  Src = v15;
  v34 = v123;
  *(_DWORD *)(v29 + 128) = *(_DWORD *)(v123 + 1412);
  if ( v145 && *(_DWORD *)v145 == 33 )
  {
LABEL_171:
    *(_QWORD *)(v32 + 112) = 0LL;
    v51 = (_QWORD *)(v32 + 16);
    *(_QWORD *)(v32 + 16) = 0LL;
    *(_QWORD *)&v135 = v32 + 112;
    *((_QWORD *)&v135 + 1) = a1;
    v136 = v135;
    HMAssignmentLock(&v136);
    *(_DWORD *)(v32 + 104) = v2;
    *(_QWORD *)(v32 + 88) = v16;
    *(_QWORD *)(v32 + 96) = v15;
    *(_DWORD *)(v32 + 84) = 0;
    if ( v2 == 576 || v2 == 281 )
    {
      v55 = _HMObjectFromHandle(v15);
      v56 = v144;
      if ( v55 )
        HMChangeOwnerThread(v55, v144);
    }
    else
    {
      v56 = v144;
    }
    if ( *(_QWORD *)(gsmsList + 8LL) != gsmsList )
      __fastfail(3u);
    *(_QWORD *)v32 = gsmsList;
    *(_QWORD *)(v32 + 8) = gsmsList;
    *(_QWORD *)(gsmsList + 8LL) = v32;
    gsmsList = v32;
    v57 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    *(_DWORD *)(v32 + 80) = v57;
    *(_QWORD *)(v32 + 40) = v56;
    *(_QWORD *)(v32 + 32) = Size_4;
    v58 = 18;
    CurrentThread = KeGetCurrentThread();
    v60 = 0LL;
    if ( !(unsigned int)IsThreadCrossSessionAttached(v57, v52, v53, v54) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v60 = *ThreadWin32Thread;
    }
    if ( v60 )
    {
      if ( *(_QWORD *)(v60 + 360) )
        CaptureAndValidateUserModeDpiAwarenessContext(v60);
      if ( *(_DWORD *)(v60 + 340) )
      {
        v58 = *(_DWORD *)(v60 + 340);
      }
      else
      {
        v64 = PsGetCurrentProcessWin32Process(v62, v61);
        if ( v64 )
          v58 = *(_DWORD *)(v64 + 280);
      }
      if ( (*(_DWORD *)(v60 + 328) & 8) != 0 && (v58 & 0xF) == 2 && (v58 & 0xF0) == 0x20 )
        v58 |= 0x20000000u;
    }
    *(_DWORD *)(v32 + 132) = v58;
    *(_QWORD *)(v32 + 64) = 0LL;
    v65 = v145;
    if ( v145 && (*(_DWORD *)v145 & 1) != 0 )
    {
      v66 = 1024;
      if ( (*(_DWORD *)v145 & 0x100) == 0 )
        v66 = 2048;
      v67 = *(_DWORD *)(v32 + 84) | v66;
      *(_DWORD *)(v32 + 84) = v67;
      *(_QWORD *)(v32 + 48) = *(_QWORD *)(v65 + 8);
      *(_QWORD *)(v32 + 56) = *(_QWORD *)(v65 + 16);
      if ( (*(_DWORD *)v65 & 0x20) != 0 )
      {
        *(_DWORD *)(v32 + 84) = v67 | 0x200;
        *(_QWORD *)(v32 + 72) = *(_QWORD *)(v65 + 24);
      }
      else
      {
        *(_DWORD *)(v32 + 84) = v67 | 0x100;
        *(_QWORD *)(v32 + 64) = v123;
      }
    }
    if ( (_DWORD)v147 )
      *(_DWORD *)(v32 + 84) |= 0x10000u;
    v68 = v144;
    v69 = v144 + 64;
    v70 = (_QWORD **)v144[65];
    if ( *v70 != v144 + 64 )
      __fastfail(3u);
    *v51 = v69;
    *(_QWORD *)(v32 + 24) = v70;
    *v70 = v51;
    v69[1] = v51;
    v71 = *((_DWORD *)v68 + 132) + 1;
    *((_DWORD *)v68 + 132) = v71;
    if ( v71 > LODWORD(WPP_MAIN_CB.Queue.ListEntry.Flink) )
      LODWORD(WPP_MAIN_CB.Queue.ListEntry.Flink) = v71;
    v72 = Size_4;
    if ( Size_4 )
    {
      v125 = *(_QWORD *)(Size_4 + 496);
      *(_QWORD *)(Size_4 + 496) = v32;
    }
    else
    {
      *(_DWORD *)(v32 + 84) |= 8u;
    }
    if ( (*(_DWORD *)(v32 + 84) & 0x200) == 0
      && ((v2 - 577 <= 3 || v2 - 581 <= 0x12 && v2 != 589) && v2 != 595 || v2 == 528 && (_WORD)v139 == 582) )
    {
      CTouchProcessor::ReferenceMsgDataExternal(gpTouchProcessor, v141, 6LL, v32);
    }
    EtwTraceBeginSendMessage(v32, Size_4, v65);
    if ( !Size_4 )
    {
      SetWakeBit(v68, 64LL);
      EtwTraceEndSendMessage(v32);
      return 1LL;
    }
    v73 = 0;
    LODWORD(v143) = 0;
    v74 = 512;
    Srca = 0;
    v75 = v144;
    if ( (v144[60] & 1) == 0 )
    {
      *(_WORD *)(v144[55] + 6LL) |= 0x40u;
      *(_WORD *)(v75[55] + 4LL) |= 0x40u;
      if ( (*(_BYTE *)(v75[55] + 10LL) & 0x40) != 0 )
        KeSetEvent((PRKEVENT)v75[91], 2, 0);
    }
    if ( v65 )
    {
      LODWORD(v143) = *(_DWORD *)(v65 + 36);
      v74 = ((*(_DWORD *)(v65 + 32) & 1) << 15) + 512;
    }
    CKernelStackSwapAuto::CKernelStackSwapAuto((CKernelStackSwapAuto *)v137);
    v78 = v144;
    if ( *(_QWORD *)(Size_4 + 424) == v144[53] )
    {
      v79 = *(_DWORD *)(Size_4 + 480);
      if ( (v79 & 0x10000) == 0 )
      {
        *(_DWORD *)(Size_4 + 480) = v79 | 0x10000;
        Srca = 1;
      }
    }
    if ( (*(_DWORD *)(v32 + 84) & 1) != 0 )
    {
LABEL_254:
      LODWORD(v143) = v73;
      CKernelStackSwapAuto::~CKernelStackSwapAuto((CKernelStackSwapAuto *)v137);
      if ( Srca )
      {
        *(_DWORD *)(v72 + 480) &= ~0x10000u;
        MergeDeferredMessagesOfThreadOnQueue(v72);
      }
      if ( (*(_DWORD *)(v72 + 480) & 1) == 0 )
      {
        *(_WORD *)(*(_QWORD *)(v72 + 440) + 6LL) |= 0x200u;
        *(_WORD *)(*(_QWORD *)(v72 + 440) + 4LL) |= 0x200u;
        if ( (*(_WORD *)(*(_QWORD *)(v72 + 440) + 10LL) & 0x200) != 0 )
          KeSetEvent(*(PRKEVENT *)(v72 + 728), 2, 0);
      }
      if ( !v73 )
      {
        if ( Size )
        {
          v88 = v121;
          v124 = v121;
          if ( v2 == 131 )
          {
            if ( (_DWORD)v147 && a1 && (unsigned int)IsWindowDesktopComposed(a1) )
            {
              TransformMessageBetweenCoordinateSpaces(131, 1, (unsigned int)va, (unsigned int)&v124, 0LL, a1);
              v88 = v124;
            }
            v92 = *(__int128 **)(v32 + 120);
            v93 = *v92;
            if ( v139 )
            {
              v94 = v88[6];
              *(_OWORD *)v88 = v93;
              *((_OWORD *)v88 + 1) = v92[1];
              *((_OWORD *)v88 + 2) = v92[2];
              v88[6] = v94;
              v95 = *((_QWORD *)v92 + 6);
              if ( v95 )
              {
                *(_OWORD *)v94 = *(_OWORD *)v95;
                *(_OWORD *)(v94 + 16) = *(_OWORD *)(v95 + 16);
                *(_QWORD *)(v94 + 32) = *(_QWORD *)(v95 + 32);
              }
            }
            else
            {
              *(_OWORD *)v88 = v93;
            }
          }
          else
          {
            v89 = *(_WORD **)(v32 + 120);
            if ( v116 )
            {
              if ( v116 == 1 )
              {
                strncpycch(v121, v89, Size);
              }
              else
              {
                v90 = Size >> 1;
                v119 = Size >> 1;
                v130 = v89;
                v129 = v121;
                while ( v90 )
                {
                  v91 = *v89;
                  *(_WORD *)v88 = *v89;
                  v88 = (_QWORD *)((char *)v88 + 2);
                  v129 = v88;
                  v130 = ++v89;
                  if ( !v91 )
                    break;
                  v119 = --v90;
                }
              }
            }
            else
            {
              memmove(v121, v89, Size);
            }
          }
        }
        else if ( v2 == 831 && (_DWORD)v147 && a1 && (unsigned int)IsWindowDesktopComposed(a1) )
        {
          TransformMessageBetweenCoordinateSpaces(831, 1, (unsigned int)va, (unsigned int)va1, 0LL, a1);
        }
      }
      EtwTraceEndSendMessage(v32);
      *(_QWORD *)(v72 + 496) = v125;
      v99 = v145;
      if ( v145 )
      {
        **(_QWORD **)(v145 + 40) = *(_QWORD *)(v32 + 72);
        if ( (*(_DWORD *)(v99 + 32) & 0x20) != 0 && (*(_DWORD *)(v32 + 84) & 0x8000) != 0 )
        {
          v100 = 0LL;
          UserSetLastError(1400LL, v96, v97, v98);
        }
        else
        {
          v100 = v73 == 0;
        }
      }
      else
      {
        v100 = *(_QWORD *)(v32 + 72);
      }
      if ( v99 || v73 )
      {
        v101 = *(_DWORD *)(v32 + 84);
        if ( (v101 & 1) == 0 )
        {
          v102 = v101 | 1;
          *(_DWORD *)(v32 + 84) = v102;
          if ( (v102 & 0x4000) != 0 )
          {
            *(_DWORD *)(v32 + 84) = v102 | 8;
          }
          else
          {
            --*((_DWORD *)v144 + 132);
            v105 = (_QWORD *)(v32 + 16);
            v106 = *(_QWORD *)(v32 + 16);
            v107 = *(_QWORD **)(v32 + 24);
            if ( *(_QWORD *)(v106 + 8) != v32 + 16 || (_QWORD *)*v107 != v105 )
              __fastfail(3u);
            *v107 = v106;
            *(_QWORD *)(v106 + 8) = v107;
            *v105 = 0LL;
            *(_DWORD *)(v32 + 84) |= 0x10u;
          }
        }
      }
      v103 = *(_DWORD *)(v32 + 84);
      if ( (v103 & 0x4010) != 0x10 )
      {
        v103 |= 8u;
        *(_DWORD *)(v32 + 84) = v103;
      }
      if ( (v103 & 0x8008) != 8 )
      {
        v104 = *(_DWORD *)(v32 + 104);
        if ( v104 == 576 )
        {
          FreeTouchInputInfo(*(_QWORD *)(v32 + 96), 0LL);
        }
        else if ( v104 == 281 )
        {
          FreeGestureInfo(*(_QWORD *)(v32 + 96), 0LL);
        }
        if ( (*(_DWORD *)(v32 + 84) & 0x200) == 0 )
        {
          if ( ((v108 = *(_DWORD *)(v32 + 104), (unsigned int)(v108 - 577) <= 3)
             || (unsigned int)(v108 - 581) <= 0x12 && v108 != 589)
            && v108 != 595
            || v108 == 528 && *(_WORD *)(v32 + 88) == 582 )
          {
            CTouchProcessor::UnreferenceMsgDataExternal(gpTouchProcessor, *(_QWORD *)(v32 + 96), 6LL, v32);
          }
        }
        v109 = *(_QWORD *)v32;
        v110 = *(_QWORD **)(v32 + 8);
        if ( *(_QWORD *)(*(_QWORD *)v32 + 8LL) != v32 || *v110 != v32 )
          __fastfail(3u);
        *v110 = v109;
        *(_QWORD *)(v109 + 8) = v110;
        HMAssignmentUnlock(v32 + 112);
        v111 = *(_QWORD *)(v32 + 120);
        if ( v111 )
          Win32FreePool(v111);
        Win32FreeToPagedLookasideList(SMSLookaside, v32);
      }
      return v100;
    }
    while ( 1 )
    {
      if ( v73 )
      {
LABEL_253:
        v72 = Size_4;
        goto LABEL_254;
      }
      v80 = 0LL;
      v132 = 0LL;
      v133 = 0LL;
      v134 = 0LL;
      v81 = 0;
      *(_WORD *)(*(_QWORD *)(Size_4 + 440) + 4LL) &= ~0x200u;
      if ( v2 == 788 )
      {
        if ( v141 )
        {
          if ( *((_DWORD *)v78 + 156) <= 0x501u )
          {
            if ( *((_DWORD *)v78 + 160) )
            {
              v80 = *(_QWORD *)v141;
              if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)v141 + 48LL) - 13) <= 1 )
              {
                v82 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), (__int64)v78, v76, v77);
                v132 = *(_QWORD *)(v82 + 408);
                *(_QWORD *)(v82 + 408) = &v132;
                v133 = v80;
                HMLockObject(v80);
                v81 = 1;
              }
            }
          }
        }
      }
      v73 = xxxRealSleepThread(v74, v143, 0, 0, 0LL) == 0;
      if ( v81 )
      {
        v84 = (v73 << 7) | *(_DWORD *)(v80 + 88) & 0xFFFFFF7F;
        *(_DWORD *)(v80 + 88) = v84;
        if ( v73 )
        {
          v85 = v84 ^ ((unsigned __int8)v84 ^ (unsigned __int8)(v84 + 1)) & 0x7F;
          *(_DWORD *)(v80 + 88) = v85;
          if ( (v85 & 0x7Fu) > 0xA )
            *(_DWORD *)(v80 + 64) |= 0x10u;
        }
        ThreadUnlock1(v84, v83, v76);
      }
      if ( v73 && v145 )
      {
        v86 = *(_DWORD *)(v145 + 32);
        v87 = *(_DWORD *)(v32 + 84);
        if ( ((v86 & 0x10) != 0 || (v87 & 0x20) != 0) && (v87 & 0x10) != 0 )
        {
          LODWORD(v143) = 0;
          v73 = 0;
        }
        if ( (v86 & 8) == 0 || (unsigned int)IsThreadHung(v144, 0) )
        {
          if ( v73 )
            goto LABEL_252;
        }
        else
        {
          v73 = 0;
        }
        EtwTraceConvertTimeOutToBlocking();
      }
LABEL_252:
      if ( (*(_DWORD *)(v32 + 84) & 1) != 0 )
        goto LABEL_253;
      v78 = v144;
    }
  }
  if ( v2 - 57 <= 0xC )
    goto LABEL_93;
  if ( v2 == 13 )
  {
LABEL_136:
    *(_OWORD *)v117 = *(_OWORD *)v15;
    v116 = 2 - (SHIDWORD(v117[0]) < 0);
    v15 = (unsigned __int16 *)v117;
    v141 = (__int64)v117;
    if ( _mm_srli_si128(*(__m128i *)v117, 8).m128i_u64[0] < (unsigned __int64)MmSystemRangeStart || !v26 )
      v33 = HIDWORD(v117[0]) & 0x7FFFFFFF;
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
            v120 = v15;
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
            v121 = v15;
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
                  v141 = (__int64)v15;
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
                      v141 = v36;
                      v39 = v122;
                      *(_OWORD *)v36 = *v122;
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
                  v44 = v120;
                  v45 = (const void *)*((_QWORD *)v120 + 10);
                  if ( v45 )
                  {
                    v46 = *((unsigned int *)v120 + 19);
                    LODWORD(v46) = v46 & 0x7FFFFFFF;
                    memmove((void *)v36, v45, v46);
                    *v44 = *(_QWORD *)(v32 + 120);
                  }
                  v47 = v120;
                  if ( *((_DWORD *)v120 + 14) )
                  {
                    v48 = *((unsigned int *)v120 + 19);
                    LODWORD(v48) = v48 & 0x7FFFFFFF;
                    v49 = (void *)(*(_QWORD *)(v32 + 120) + v48);
                    v50 = *((unsigned int *)v120 + 15);
                    LODWORD(v50) = v50 & 0x7FFFFFFF;
                    memmove(v49, *((const void **)v120 + 8), v50);
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
                      v141 = v36;
                      v42 = HIDWORD(v117[0]) ^ (HIDWORD(v117[0]) ^ *(_DWORD *)(v36 + 4)) & 0x7FFFFFFF;
                      *(_DWORD *)(v36 + 4) = v42;
                      *(_DWORD *)v36 = v117[0];
                      *(_QWORD *)(v36 + 8) = v36 + 16;
                      v43 = v42 ^ (v42 ^ (v33 - 16)) & 0x7FFFFFFF;
                      *(_DWORD *)(v36 + 4) = v43;
                      LODWORD(v43) = v43 & 0x7FFFFFFF;
                      memmove((void *)(v36 + 16), v117[1], v43);
                      break;
                    case 0xC4u:
                      *(_WORD *)v36 = *(_WORD *)v117[1];
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
                      v141 = (__int64)v15;
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
                  v139 = 0LL;
                  v15 = *(unsigned __int16 **)(v32 + 120);
                  v141 = (__int64)v15;
                }
                else
                {
LABEL_162:
                  memmove(v38, Src, v33);
                  v15 = *(unsigned __int16 **)(v32 + 120);
                  v141 = (__int64)v15;
                }
                goto LABEL_153;
              }
            }
LABEL_152:
            Size = v33;
            v121 = v117[1];
            v117[1] = v37;
          }
LABEL_153:
          if ( v33 && !*(_QWORD *)(v32 + 120) )
          {
            Win32FreeToPagedLookasideList(SMSLookaside, v32);
            return 0LL;
          }
          if ( (_DWORD)v147
            && a1
            && (unsigned int)IsWindowDesktopComposed(a1)
            && v2 - 577 > 3
            && (v2 - 581 > 0x12 || v2 == 589) )
          {
            TransformMessageBetweenCoordinateSpaces(v2, 1, (unsigned int)va, (unsigned int)va1, a1, 0LL);
            v15 = (unsigned __int16 *)v141;
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
      *(_OWORD *)v117 = *(_OWORD *)v15;
      if ( _mm_srli_si128(*(__m128i *)v117, 8).m128i_u64[0] < (unsigned __int64)MmSystemRangeStart || !v26 )
      {
        v33 = LODWORD(v117[0]) + 18;
        if ( (unsigned int)(LODWORD(v117[0]) + 18) < LODWORD(v117[0]) )
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
      v122 = v15;
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
