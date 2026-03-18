/*
 * XREFs of xxxInterSendMsgEx @ 0x1C002E6E0
 * Callers:
 *     _ReplyMessage @ 0x1C0002570 (_ReplyMessage.c)
 *     ClearSendMessages @ 0x1C001D3C8 (ClearSendMessages.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C002CE60 (xxxSendTransformableMessageTimeout.c)
 *     xxxReceiveMessage @ 0x1C003156C (xxxReceiveMessage.c)
 *     xxxReceiverDied @ 0x1C00BC764 (xxxReceiverDied.c)
 *     xxxSendMessageCallback @ 0x1C00D1744 (xxxSendMessageCallback.c)
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z @ 0x1C015CB98 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z.c)
 * Callees:
 *     TransformMessageBetweenCoordinateSpaces @ 0x1C002A620 (TransformMessageBetweenCoordinateSpaces.c)
 *     CaptureAndValidateUserModeDpiAwarenessContext @ 0x1C002B550 (CaptureAndValidateUserModeDpiAwarenessContext.c)
 *     ?xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z @ 0x1C0030D50 (-xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z.c)
 *     SetWakeBit @ 0x1C0037440 (SetWakeBit.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     HMValidateHandle @ 0x1C006CDAC (HMValidateHandle.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     wcsncpycch @ 0x1C00B0184 (wcsncpycch.c)
 *     MSGSQMAddMessage @ 0x1C00D0A28 (MSGSQMAddMessage.c)
 *     ?IsMessageAlwaysAllowedAcrossIL@@YAHI@Z @ 0x1C00D0C18 (-IsMessageAlwaysAllowedAcrossIL@@YAHI@Z.c)
 *     IsThreadHung @ 0x1C00D0CAC (IsThreadHung.c)
 *     MergeDeferredMessagesOfThreadOnQueue @ 0x1C011C4FC (MergeDeferredMessagesOfThreadOnQueue.c)
 *     ProcessSuspendedSendMessage @ 0x1C0125E54 (ProcessSuspendedSendMessage.c)
 *     IsThreadCrossSessionAttached @ 0x1C015BC14 (IsThreadCrossSessionAttached.c)
 *     ??0CKernelStackSwapAuto@@QEAA@XZ @ 0x1C015E2E0 (--0CKernelStackSwapAuto@@QEAA@XZ.c)
 *     ??1CKernelStackSwapAuto@@QEAA@XZ @ 0x1C015E308 (--1CKernelStackSwapAuto@@QEAA@XZ.c)
 *     memmove @ 0x1C0163300 (memmove.c)
 *     _FreeTouchInputInfo @ 0x1C01CB7C0 (_FreeTouchInputInfo.c)
 *     MakeUpKeyboardCorrectionCalloutContents @ 0x1C01CEF5C (MakeUpKeyboardCorrectionCalloutContents.c)
 *     ?MsgSQMFlushMsgRecord@@YAXPEAUtagPROCESSINFO@@0PEAUtagMSGSQM_MSGRECORD@@@Z @ 0x1C01F57E0 (-MsgSQMFlushMsgRecord@@YAXPEAUtagPROCESSINFO@@0PEAUtagMSGSQM_MSGRECORD@@@Z.c)
 *     ?MsgSQMGetMsgRecord@@YAPEAUtagMSGSQM_MSGRECORD@@PEAPEAU1@PEBU1@K@Z @ 0x1C01F5A08 (-MsgSQMGetMsgRecord@@YAPEAUtagMSGSQM_MSGRECORD@@PEAPEAU1@PEBU1@K@Z.c)
 *     ?MsgSQMGetSourceListProcessPair@@YAPEAUtagMSGSQM_PROCESSPAIR@@PEAUtagPROCESSINFO@@0H@Z @ 0x1C01F5ACC (-MsgSQMGetSourceListProcessPair@@YAPEAUtagMSGSQM_PROCESSPAIR@@PEAUtagPROCESSINFO@@0H@Z.c)
 *     ?MsgSQMUpdateMsgRecord@@YAHPEAUtagMSGSQM_MSGRECORD@@KK@Z @ 0x1C01F5C80 (-MsgSQMUpdateMsgRecord@@YAHPEAUtagMSGSQM_MSGRECORD@@KK@Z.c)
 *     _FreeGestureInfo @ 0x1C01FCF30 (_FreeGestureInfo.c)
 *     strncpycch @ 0x1C0241A44 (strncpycch.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 xxxInterSendMsgEx(_QWORD *a1, unsigned int a2, ...)
{
  unsigned int v3; // r14d
  __int64 CurrentProcessWin32Process; // r12
  __int64 v5; // rbx
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdi
  __int64 v10; // rcx
  int v11; // ebx
  _DWORD *v12; // rsi
  __int64 v13; // r15
  unsigned int *v14; // rdx
  unsigned int v15; // ecx
  unsigned int i; // r8d
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // r9
  unsigned __int64 v20; // r14
  struct tagMSGSQM_PROCESSPAIR *v21; // rcx
  struct tagMSGSQM_MSGRECORD *v22; // rax
  unsigned int v23; // r8d
  unsigned __int64 v24; // r14
  __int16 v25; // cx
  struct tagMSGSQM_MSGRECORD *v26; // rax
  unsigned int v27; // r8d
  __int64 v28; // rdi
  __int64 v29; // rcx
  _QWORD *v30; // rbx
  __int64 CurrentProcess; // rax
  __int64 v32; // rax
  __int64 v33; // rdi
  _OWORD *v34; // r12
  __int64 v36; // r9
  _OWORD *v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rax
  int v40; // edx
  size_t v41; // r8
  _QWORD *v42; // r12
  const void *v43; // rdx
  size_t v44; // r8
  _DWORD *v45; // r12
  __int64 v46; // rbx
  _DWORD *v47; // rbx
  size_t v48; // r8
  __int64 v49; // rbx
  _QWORD *v50; // r12
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // rsi
  unsigned __int64 v54; // rcx
  int v55; // esi
  struct _KTHREAD *CurrentThread; // r14
  __int64 v57; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 v59; // rax
  __int64 v60; // rbx
  int v61; // ecx
  int v62; // ecx
  __int64 v63; // rdx
  __int64 v64; // rax
  _QWORD *v65; // rcx
  unsigned int v66; // eax
  int v67; // ecx
  __int64 *v68; // r15
  int v69; // ebx
  int v70; // esi
  __int64 v71; // r9
  __int64 v72; // rdx
  __int64 v73; // rcx
  int v74; // eax
  __int64 v75; // rsi
  char v76; // r14
  __int64 v77; // rax
  __int64 v78; // rdx
  __int64 v79; // rcx
  int v80; // eax
  int v81; // ecx
  int v82; // eax
  _QWORD *v83; // rsi
  const void *v84; // rdx
  __int128 *v85; // rax
  __int128 v86; // xmm0
  __int64 v87; // rcx
  __int64 v88; // rdx
  __int64 v89; // r15
  __int64 v90; // rsi
  int v91; // eax
  int v92; // eax
  _QWORD *v93; // rax
  __int64 v94; // rdx
  _QWORD *v95; // rcx
  int v96; // ecx
  int v97; // ecx
  int v98; // ecx
  __int64 v99; // rcx
  _QWORD *v100; // rax
  __int64 v101; // rcx
  unsigned int Size; // [rsp+44h] [rbp-184h]
  struct tagMSGSQM_MSGRECORD *v103; // [rsp+50h] [rbp-178h]
  struct tagMSGSQM_MSGRECORD *v104; // [rsp+50h] [rbp-178h]
  unsigned int v105; // [rsp+50h] [rbp-178h]
  __int64 v106; // [rsp+58h] [rbp-170h]
  unsigned int v107; // [rsp+60h] [rbp-168h]
  int v108; // [rsp+68h] [rbp-160h]
  void *v109[2]; // [rsp+70h] [rbp-158h] BYREF
  _DWORD *v110; // [rsp+80h] [rbp-148h]
  void *v111; // [rsp+88h] [rbp-140h]
  _OWORD *v112; // [rsp+90h] [rbp-138h]
  _QWORD *v113; // [rsp+98h] [rbp-130h] BYREF
  __int64 v114; // [rsp+A0h] [rbp-128h]
  __int128 v115; // [rsp+B0h] [rbp-118h]
  __int64 v116; // [rsp+C0h] [rbp-108h]
  unsigned __int64 HighLimit; // [rsp+C8h] [rbp-100h] BYREF
  unsigned __int64 LowLimit; // [rsp+D0h] [rbp-F8h] BYREF
  __int64 v119; // [rsp+D8h] [rbp-F0h]
  _DWORD *v120; // [rsp+E0h] [rbp-E8h]
  __int64 v121; // [rsp+E8h] [rbp-E0h]
  char v122[8]; // [rsp+F0h] [rbp-D8h] BYREF
  unsigned int v123; // [rsp+F8h] [rbp-D0h]
  int v124; // [rsp+FCh] [rbp-CCh]
  unsigned __int64 v125; // [rsp+100h] [rbp-C8h]
  char v126[8]; // [rsp+118h] [rbp-B0h] BYREF
  unsigned int v127; // [rsp+120h] [rbp-A8h]
  __int16 v128; // [rsp+124h] [rbp-A4h]
  __int16 v129; // [rsp+126h] [rbp-A2h]
  unsigned __int64 v130; // [rsp+128h] [rbp-A0h]
  __int128 v131; // [rsp+150h] [rbp-78h] BYREF
  _BYTE v132[16]; // [rsp+160h] [rbp-68h] BYREF
  _QWORD v133[11]; // [rsp+170h] [rbp-58h] BYREF
  unsigned __int64 v135; // [rsp+1E0h] [rbp+18h] BYREF
  va_list va; // [rsp+1E0h] [rbp+18h]
  void *Src; // [rsp+1E8h] [rbp+20h] BYREF
  va_list Srca; // [rsp+1E8h] [rbp+20h]
  __int64 v139; // [rsp+1F0h] [rbp+28h]
  __int64 v140; // [rsp+1F8h] [rbp+30h]
  __int64 v141; // [rsp+200h] [rbp+38h]
  __int64 v142; // [rsp+208h] [rbp+40h]
  __int64 v143; // [rsp+210h] [rbp+48h]
  va_list va2; // [rsp+218h] [rbp+50h] BYREF

  va_start(va2, a2);
  va_start(Srca, a2);
  va_start(va, a2);
  v135 = va_arg(Srca, _QWORD);
  va_copy(va2, Srca);
  Src = va_arg(va2, void *);
  v139 = va_arg(va2, _QWORD);
  v140 = va_arg(va2, _QWORD);
  v141 = va_arg(va2, _QWORD);
  v142 = va_arg(va2, _QWORD);
  v143 = va_arg(va2, _QWORD);
  v3 = 0;
  v114 = 0LL;
  v112 = 0LL;
  v110 = 0LL;
  v109[0] = 0LL;
  v109[1] = 0LL;
  v111 = 0LL;
  v108 = 0;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  v5 = gptiCurrent;
  if ( !(_DWORD)v139 )
    v5 = 0LL;
  v106 = v5;
  v121 = v5;
  _InterlockedIncrement(&glInterSendMessage);
  if ( v5 && (*(_DWORD *)(v5 + 488) & 1) != 0 )
    return 0LL;
  IoGetStackLimits(&LowLimit, &HighLimit);
  if ( (unsigned __int64)&HighLimit - LowLimit < 0x2000 )
    return 0LL;
  if ( !a1 )
    goto LABEL_26;
  v6 = *(_QWORD *)(a1[2] + 424LL);
  if ( v6 == CurrentProcessWin32Process || a2 - 14 <= 0x3F || a2 - 12 > 0x27C )
    goto LABEL_26;
  if ( a2 <= 0xD0 )
  {
    if ( a2 != 208 )
    {
      switch ( a2 )
      {
        case 0xCu:
        case 0xBCu:
          goto LABEL_21;
        case 0xDu:
        case 0xC4u:
        case 0xCCu:
          v6 = *(unsigned __int16 *)(*(_QWORD *)(a1[14] + 8LL) + 2LL);
          if ( *(_WORD *)(gpsi + 870LL) != (_WORD)v6 || (*(_BYTE *)(a1[5] + 28LL) & 0x20) == 0 )
            goto LABEL_26;
          UserSetLastError(5LL);
          UserSetLastError(5LL);
          break;
        case 0x4Eu:
          goto LABEL_25;
        default:
          goto LABEL_26;
      }
      return 0LL;
    }
LABEL_21:
    if ( (!gbEnforceUIPI || *(_QWORD *)v6 == gpepCSRSS)
      && (*(_DWORD *)(v6 + 780) != *(_DWORD *)(CurrentProcessWin32Process + 780)
       || *(_DWORD *)(v6 + 784) != *(_DWORD *)(CurrentProcessWin32Process + 784)) )
    {
      goto LABEL_25;
    }
LABEL_26:
    if ( (_DWORD)v142 )
      goto LABEL_119;
    v9 = 0LL;
    if ( a1 )
    {
      v9 = *(_QWORD *)(a1[2] + 424LL);
    }
    else if ( v140 )
    {
      v9 = *(_QWORD *)(v140 + 424);
    }
    if ( v9 == CurrentProcessWin32Process )
    {
LABEL_119:
      v13 = v135;
      v12 = Src;
      goto LABEL_120;
    }
    if ( a2 == 717 )
      return 0LL;
    v10 = *(_QWORD *)(v9 + 848);
    v11 = 0;
    if ( v10 )
    {
      v7 = (unsigned __int16)a2;
      v6 = *(_QWORD *)(v10 + 8 * ((unsigned __int64)(unsigned __int16)a2 >> 13));
      if ( v6 )
      {
        v8 = *(_QWORD *)(v6 + 8LL * (((unsigned __int16)a2 >> 9) & 0xF));
        if ( v8 )
        {
          v6 = (unsigned int)(1 << (a2 & 7));
          v7 = ((unsigned __int64)(unsigned __int16)a2 >> 3) & 0x3F;
          if ( ((unsigned __int8)v6 & *(_BYTE *)(v7 + v8)) != 0 )
            v11 = 1;
        }
      }
    }
    v12 = Src;
    v13 = v135;
    if ( v11 )
    {
      MSGSQMAddMessage(
        (struct tagPROCESSINFO *)CurrentProcessWin32Process,
        (struct tagPROCESSINFO *)v9,
        (__int64)Src,
        1,
        3);
      goto LABEL_73;
    }
    if ( a1 )
    {
      v119 = 0LL;
      v14 = *(unsigned int **)(*(_QWORD *)(a1[2] + 424LL) + 856LL);
      if ( !v14 )
        goto LABEL_48;
      v15 = 0;
      for ( i = *v14; v15 < i; ++v15 )
      {
        if ( a1 == *(_QWORD **)&v14[4 * v15 + 6] )
          break;
      }
      if ( v15 < i )
      {
        _mm_lfence();
        v17 = *(_QWORD *)&v14[4 * v15 + 4];
        v12 = Src;
        v13 = v135;
      }
      else
      {
LABEL_48:
        v17 = 0LL;
      }
      v119 = v17;
      if ( !v17
        || (v18 = *(_QWORD *)(v17 + 8 * ((unsigned __int64)(unsigned __int16)a2 >> 13))) == 0
        || (v19 = *(_QWORD *)(v18 + 8 * (((unsigned __int64)(unsigned __int16)a2 >> 9) & 0xF))) == 0
        || (v11 = 1,
            ((unsigned __int8)(1 << (a2 & 7)) & *(_BYTE *)((((unsigned __int64)(unsigned __int16)a2 >> 3) & 0x3F) + v19)) == 0) )
      {
        v11 = 0;
      }
      if ( !v11 )
        goto LABEL_57;
      MSGSQMAddMessage(
        (struct tagPROCESSINFO *)CurrentProcessWin32Process,
        (struct tagPROCESSINFO *)v9,
        (__int64)v12,
        1,
        4);
    }
    if ( v11 )
      goto LABEL_73;
LABEL_57:
    v11 = IsMessageAlwaysAllowedAcrossIL(a2);
    if ( !v11 )
      goto LABEL_73;
    v20 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    if ( !gfWinMsgSQMIsOptedIn
      || (v21 = MsgSQMGetSourceListProcessPair(
                  (struct tagPROCESSINFO *)CurrentProcessWin32Process,
                  (struct tagPROCESSINFO *)v9,
                  v7)) == 0LL )
    {
      v12 = Src;
      v13 = v135;
      goto LABEL_73;
    }
    v123 = a2;
    v124 = 131073;
    v125 = 0LL;
    if ( a2 < 0x111 )
    {
      v13 = v135;
    }
    else
    {
      if ( a2 > 0x112 && a2 != 281 && a2 != 528 )
      {
        v12 = Src;
        v13 = v135;
        if ( a2 == 793 )
          v125 = ((unsigned __int64)Src >> 16) & 0xFFF;
        goto LABEL_69;
      }
      v13 = v135;
      v125 = v135;
    }
    v12 = Src;
LABEL_69:
    v22 = MsgSQMGetMsgRecord((struct tagMSGSQM_MSGRECORD **)v21 + 6, (const struct tagMSGSQM_MSGRECORD *)v122, v20);
    v103 = v22;
    if ( v22 && !(unsigned int)MsgSQMUpdateMsgRecord(v22, v20, v7) )
    {
      MsgSQMFlushMsgRecord((struct tagPROCESSINFO *)CurrentProcessWin32Process, (struct tagPROCESSINFO *)v9, v103);
      MsgSQMUpdateMsgRecord(v103, v20, v23);
    }
LABEL_73:
    if ( !v11 )
    {
      if ( a2 == 274 && ((v13 - 61472) & 0xFFFFFFFFFFFFFEBFuLL) == 0 && v13 != 61792 )
      {
        v11 = 1;
        MSGSQMAddMessage(
          (struct tagPROCESSINFO *)CurrentProcessWin32Process,
          (struct tagPROCESSINFO *)v9,
          (__int64)v12,
          1,
          2);
        goto LABEL_115;
      }
      if ( *(_QWORD *)v9 == gpepCSRSS )
      {
        v6 = 0LL;
        v8 = 0x2000LL;
      }
      else
      {
        v8 = *(unsigned int *)(v9 + 880);
        v6 = *(unsigned int *)(v9 + 884);
      }
      v7 = *(_QWORD *)(CurrentProcessWin32Process + 880);
      LODWORD(v139) = gbEnforceUIPI;
      if ( gbEnforceUIPI )
        v11 = (unsigned int)v7 > (unsigned int)v8
           || (_DWORD)v7 == (_DWORD)v8 && (HIDWORD(v7) == (_DWORD)v6 || HIDWORD(v7) == -1 || (_DWORD)v6 == -1);
      else
        v11 = 1;
      if ( v11 )
      {
        v24 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
        if ( !gfWinMsgSQMIsOptedIn
          || (v6 = (unsigned __int64)MsgSQMGetSourceListProcessPair(
                                       (struct tagPROCESSINFO *)CurrentProcessWin32Process,
                                       (struct tagPROCESSINFO *)v9,
                                       v7)) == 0 )
        {
          v12 = Src;
          v13 = v135;
          goto LABEL_115;
        }
        v127 = a2;
        v128 = 1;
        v25 = 5;
        if ( !(_DWORD)v139 )
          v25 = 1;
        v129 = v25;
        v130 = 0LL;
        if ( a2 < 0x111 )
          goto LABEL_103;
        if ( a2 <= 0x112 || a2 == 281 || a2 == 528 )
        {
          v13 = v135;
          v130 = v135;
          v12 = Src;
LABEL_105:
          v26 = MsgSQMGetMsgRecord(
                  (struct tagMSGSQM_MSGRECORD **)(v6 + 48),
                  (const struct tagMSGSQM_MSGRECORD *)v126,
                  v24);
          v104 = v26;
          if ( v26 && !(unsigned int)MsgSQMUpdateMsgRecord(v26, v24, v7) )
          {
            MsgSQMFlushMsgRecord((struct tagPROCESSINFO *)CurrentProcessWin32Process, (struct tagPROCESSINFO *)v9, v104);
            MsgSQMUpdateMsgRecord(v104, v24, v27);
          }
          goto LABEL_115;
        }
        if ( a2 == 793 )
        {
          v12 = Src;
          v130 = ((unsigned __int64)Src >> 16) & 0xFFF;
        }
        else
        {
LABEL_103:
          v12 = Src;
        }
        v13 = v135;
        goto LABEL_105;
      }
      if ( !a1
        || a2 != 793
        || (v6 = a1[2], *(_QWORD **)(v6 + 1368) != a1)
        || *(_QWORD *)(v6 + 432) != *(_QWORD *)(gptiCurrent + 432LL) )
      {
        EtwTraceUIPIMsgError(CurrentProcessWin32Process, v9, a2, v13, v12);
        UserSetLastError(5LL);
        v3 = 0;
        MSGSQMAddMessage(
          (struct tagPROCESSINFO *)CurrentProcessWin32Process,
          (struct tagPROCESSINFO *)v9,
          (__int64)v12,
          1,
          0);
        goto LABEL_116;
      }
      v11 = 1;
    }
LABEL_115:
    v3 = 0;
LABEL_116:
    if ( !v11 )
      return 0LL;
    v5 = v106;
LABEL_120:
    if ( a2 == 576 )
    {
      LOBYTE(v6) = 20;
      if ( !HMValidateHandle(v12, v6) )
        return 0LL;
    }
    else if ( a2 == 281 )
    {
      LOBYTE(v6) = 21;
      if ( !HMValidateHandle(v12, v6) )
        return 0LL;
    }
    v28 = v140;
    if ( (*(_DWORD *)(v140 + 1208) & 0x20) == 0 )
    {
LABEL_137:
      v32 = Win32AllocateFromPagedLookasideList(SMSLookaside);
      v33 = v32;
      v116 = v32;
      if ( !v32 )
        return 0LL;
      *(_QWORD *)(v32 + 120) = 0LL;
      Size = 0;
      v34 = v12;
      v120 = v12;
      *(_DWORD *)(v32 + 128) = *(_DWORD *)(gptiCurrent + 1388LL);
      if ( v141 && *(_DWORD *)v141 == 33 )
      {
LABEL_233:
        v49 = 0LL;
        *(_QWORD *)(v33 + 112) = 0LL;
        v50 = (_QWORD *)(v33 + 16);
        *(_QWORD *)(v33 + 16) = 0LL;
        *(_QWORD *)&v115 = v33 + 112;
        *((_QWORD *)&v115 + 1) = a1;
        v131 = v115;
        HMAssignmentLock(&v131);
        *(_DWORD *)(v33 + 104) = a2;
        *(_QWORD *)(v33 + 88) = v13;
        *(_QWORD *)(v33 + 96) = v12;
        *(_DWORD *)(v33 + 84) = 0;
        *(_QWORD *)&v115 = v33 + 72;
        *(_QWORD *)(v33 + 72) = 0LL;
        if ( a2 == 576 || a2 == 281 )
        {
          v51 = 3LL * (unsigned __int16)v12;
          v52 = *(_QWORD *)(gpKernelHandleTable + 24LL * (unsigned __int16)v12);
          v53 = v140;
          if ( v52 )
            HMChangeOwnerThread(v52, v140);
        }
        else
        {
          v53 = v140;
        }
        if ( *(_QWORD *)(gsmsList + 8LL) != gsmsList )
          __fastfail(3u);
        *(_QWORD *)v33 = gsmsList;
        *(_QWORD *)(v33 + 8) = gsmsList;
        *(_QWORD *)(gsmsList + 8LL) = v33;
        gsmsList = v33;
        v54 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
        *(_DWORD *)(v33 + 80) = v54;
        *(_QWORD *)(v33 + 40) = v53;
        *(_QWORD *)(v33 + 32) = v106;
        v55 = 18;
        CurrentThread = KeGetCurrentThread();
        if ( !(unsigned int)IsThreadCrossSessionAttached(v54, v51) )
        {
          ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
          if ( ThreadWin32Thread )
            v49 = *ThreadWin32Thread;
        }
        if ( v49 )
        {
          if ( *(_QWORD *)(v49 + 360) )
            CaptureAndValidateUserModeDpiAwarenessContext(v49);
          if ( *(_DWORD *)(v49 + 340) )
          {
            v55 = *(_DWORD *)(v49 + 340);
          }
          else
          {
            v59 = PsGetCurrentProcessWin32Process(v57);
            if ( v59 )
              v55 = *(_DWORD *)(v59 + 280);
          }
        }
        *(_DWORD *)(v33 + 132) = v55;
        *(_QWORD *)(v33 + 64) = 0LL;
        v60 = v141;
        if ( v141 && (*(_DWORD *)v141 & 1) != 0 )
        {
          v61 = 1024;
          if ( (*(_DWORD *)v141 & 0x100) == 0 )
            v61 = 2048;
          v62 = *(_DWORD *)(v33 + 84) | v61;
          *(_DWORD *)(v33 + 84) = v62;
          *(_QWORD *)(v33 + 48) = *(_QWORD *)(v60 + 8);
          *(_QWORD *)(v33 + 56) = *(_QWORD *)(v60 + 16);
          if ( (*(_DWORD *)v60 & 0x20) != 0 )
          {
            *(_DWORD *)(v33 + 84) = v62 | 0x200;
            *(_QWORD *)(v33 + 72) = *(_QWORD *)(v60 + 24);
          }
          else
          {
            *(_DWORD *)(v33 + 84) = v62 | 0x100;
            *(_QWORD *)(v33 + 64) = gptiCurrent;
          }
        }
        if ( (_DWORD)v143 )
          *(_DWORD *)(v33 + 84) |= 0x10000u;
        v63 = v140;
        v64 = v140 + 520;
        v65 = *(_QWORD **)(v140 + 528);
        if ( *v65 == v140 + 520 )
        {
          *v50 = v64;
          *(_QWORD *)(v33 + 24) = v65;
          *v65 = v50;
          *(_QWORD *)(v64 + 8) = v50;
          v66 = *(_DWORD *)(v63 + 536) + 1;
          *(_DWORD *)(v63 + 536) = v66;
          if ( v66 > gcSmsHighWaterMark )
            gcSmsHighWaterMark = v66;
          if ( v106 )
          {
            v114 = *(_QWORD *)(v106 + 504);
            *(_QWORD *)(v106 + 504) = v33;
          }
          else
          {
            *(_DWORD *)(v33 + 84) |= 8u;
          }
          if ( (*(_DWORD *)(v33 + 84) & 0x200) == 0
            && (a2 - 577 <= 0x16 && (v67 = 8122367, _bittest(&v67, a2 - 577)) || a2 == 528 && (_WORD)v135 == 582) )
          {
            v68 = (__int64 *)Src;
            CTouchProcessor::ReferenceMsgDataExternal(gpTouchProcessor, Src, 6LL, v33);
          }
          else
          {
            v68 = (__int64 *)Src;
          }
          EtwTraceBeginSendMessage(v33, v106, v60);
          if ( !v106 )
          {
            SetWakeBit(v140, 64LL);
            EtwTraceEndSendMessage(v33);
            return 1LL;
          }
          v69 = 0;
          v107 = 0;
          v105 = 512;
          v70 = 0;
          LODWORD(v139) = 0;
          v71 = v140;
          if ( (*(_DWORD *)(v140 + 488) & 1) == 0 )
          {
            *(_WORD *)(*(_QWORD *)(v140 + 448) + 6LL) |= 0x40u;
            *(_WORD *)(*(_QWORD *)(v71 + 448) + 4LL) |= 0x40u;
            if ( (*(_BYTE *)(*(_QWORD *)(v71 + 448) + 10LL) & 0x40) != 0 )
              KeSetEvent(*(PRKEVENT *)(v71 + 736), 2, 0);
          }
          if ( v141 )
          {
            v107 = *(_DWORD *)(v141 + 36);
            v105 = ((*(_DWORD *)(v141 + 32) & 1) << 15) + 512;
            v70 = 0;
          }
          CKernelStackSwapAuto::CKernelStackSwapAuto((CKernelStackSwapAuto *)v132);
          v72 = v140;
          v73 = v106;
          if ( *(_QWORD *)(v106 + 432) == *(_QWORD *)(v140 + 432) )
          {
            v74 = *(_DWORD *)(v106 + 488);
            if ( (v74 & 0x10000) == 0 )
            {
              *(_DWORD *)(v106 + 488) = v74 | 0x10000;
              v70 = 1;
              LODWORD(v139) = 1;
            }
          }
          if ( (*(_DWORD *)(v33 + 84) & 1) == 0 )
          {
            while ( 1 )
            {
              if ( v69 )
              {
LABEL_309:
                v70 = v139;
                break;
              }
              v75 = 0LL;
              v76 = 0;
              *(_WORD *)(*(_QWORD *)(v73 + 448) + 4LL) &= ~0x200u;
              if ( a2 == 788 )
              {
                if ( v68 )
                {
                  if ( *(_DWORD *)(v72 + 632) <= 0x501u )
                  {
                    if ( *(_DWORD *)(v72 + 648) )
                    {
                      v75 = *v68;
                      if ( (unsigned int)(*(_DWORD *)(*v68 + 48) - 13) <= 1 )
                      {
                        v77 = W32GetThreadWin32Thread(KeGetCurrentThread());
                        v133[0] = *(_QWORD *)(v77 + 416);
                        *(_QWORD *)(v77 + 416) = v133;
                        v133[1] = v75;
                        _InterlockedIncrement((volatile signed __int32 *)(v75 + 8));
                        v76 = 1;
                        v68 = (__int64 *)Src;
                      }
                    }
                  }
                }
              }
              v69 = xxxRealSleepThread(v105, v107, 0, 0, 0LL) == 0;
              if ( v76 )
              {
                v79 = (v69 << 7) | *(_DWORD *)(v75 + 88) & 0xFFFFFF7F;
                *(_DWORD *)(v75 + 88) = v79;
                if ( v69 )
                {
                  v80 = v79 ^ ((unsigned __int8)v79 ^ (unsigned __int8)(v79 + 1)) & 0x7F;
                  *(_DWORD *)(v75 + 88) = v80;
                  if ( (v80 & 0x7Fu) > 0xA )
                    *(_DWORD *)(v75 + 64) |= 0x10u;
                }
                ThreadUnlock1(v79, v78);
              }
              if ( v69 && v141 )
              {
                v81 = *(_DWORD *)(v141 + 32);
                v82 = *(_DWORD *)(v33 + 84);
                if ( ((v81 & 0x10) != 0 || (v82 & 0x20) != 0) && (v82 & 0x10) != 0 )
                {
                  v107 = 0;
                  v69 = 0;
                }
                if ( (v81 & 8) == 0 || (unsigned int)IsThreadHung(v140, 0LL) )
                {
                  if ( v69 )
                    goto LABEL_308;
                }
                else
                {
                  v69 = 0;
                }
                EtwTraceConvertTimeOutToBlocking();
              }
LABEL_308:
              v73 = v106;
              if ( (*(_DWORD *)(v33 + 84) & 1) != 0 )
                goto LABEL_309;
              v72 = v140;
            }
          }
          CKernelStackSwapAuto::~CKernelStackSwapAuto((CKernelStackSwapAuto *)v132);
          if ( v70 )
          {
            *(_DWORD *)(v106 + 488) &= ~0x10000u;
            MergeDeferredMessagesOfThreadOnQueue(v106);
          }
          if ( (*(_DWORD *)(v106 + 488) & 1) == 0 )
          {
            *(_WORD *)(*(_QWORD *)(v106 + 448) + 6LL) |= 0x200u;
            *(_WORD *)(*(_QWORD *)(v106 + 448) + 4LL) |= 0x200u;
            if ( (*(_WORD *)(*(_QWORD *)(v106 + 448) + 10LL) & 0x200) != 0 )
              KeSetEvent(*(PRKEVENT *)(v106 + 736), 2, 0);
          }
          if ( !v69 )
          {
            if ( Size )
            {
              v83 = v111;
              v113 = v111;
              if ( a2 == 131 )
              {
                if ( (_DWORD)v143 && a1 && (unsigned int)IsWindowDesktopComposed(a1) )
                {
                  TransformMessageBetweenCoordinateSpaces(131LL, 1LL, (__int64 *)va, (__int16 *)&v113, 0LL, (__int64)a1);
                  v83 = v113;
                }
                v85 = *(__int128 **)(v33 + 120);
                v86 = *v85;
                if ( v135 )
                {
                  v87 = v83[6];
                  *(_OWORD *)v83 = v86;
                  *((_OWORD *)v83 + 1) = v85[1];
                  *((_OWORD *)v83 + 2) = v85[2];
                  v83[6] = v87;
                  v88 = *((_QWORD *)v85 + 6);
                  if ( v88 )
                  {
                    *(_OWORD *)v87 = *(_OWORD *)v88;
                    *(_OWORD *)(v87 + 16) = *(_OWORD *)(v88 + 16);
                    *(_QWORD *)(v87 + 32) = *(_QWORD *)(v88 + 32);
                  }
                }
                else
                {
                  *(_OWORD *)v83 = v86;
                }
              }
              else
              {
                v84 = *(const void **)(v33 + 120);
                if ( v108 )
                {
                  if ( v108 == 1 )
                    strncpycch(v111, v84);
                  else
                    wcsncpycch(v111, v84, Size >> 1);
                }
                else
                {
                  memmove(v111, v84, Size);
                }
              }
            }
            else if ( a2 == 831 && (_DWORD)v143 && a1 && (unsigned int)IsWindowDesktopComposed(a1) )
            {
              TransformMessageBetweenCoordinateSpaces(831LL, 1LL, (__int64 *)va, (__int16 *)Srca, 0LL, (__int64)a1);
            }
          }
          EtwTraceEndSendMessage(v33);
          *(_QWORD *)(v106 + 504) = v114;
          v89 = v141;
          if ( v141 )
          {
            **(_QWORD **)(v141 + 40) = *(_QWORD *)v115;
            if ( (*(_DWORD *)(v89 + 32) & 0x20) != 0 && (*(_DWORD *)(v33 + 84) & 0x8000) != 0 )
            {
              v90 = 0LL;
              UserSetLastError(1400LL);
            }
            else
            {
              v90 = v69 == 0;
            }
          }
          else
          {
            v90 = *(_QWORD *)v115;
          }
          if ( v89 || v69 )
          {
            v91 = *(_DWORD *)(v33 + 84);
            if ( (v91 & 1) == 0 )
            {
              v92 = v91 | 1;
              *(_DWORD *)(v33 + 84) = v92;
              if ( (v92 & 0x4000) != 0 )
              {
                *(_DWORD *)(v33 + 84) = v92 | 8;
              }
              else
              {
                --*(_DWORD *)(v140 + 536);
                v93 = (_QWORD *)(v33 + 16);
                v94 = *(_QWORD *)(v33 + 16);
                v95 = *(_QWORD **)(v33 + 24);
                if ( *(_QWORD *)(v94 + 8) != v33 + 16 || (_QWORD *)*v95 != v93 )
                  goto LABEL_371;
                *v95 = v94;
                *(_QWORD *)(v94 + 8) = v95;
                *v93 = 0LL;
                *(_DWORD *)(v33 + 84) |= 0x10u;
              }
            }
          }
          v96 = *(_DWORD *)(v33 + 84);
          if ( (v96 & 0x4010) != 0x10 )
          {
            v96 |= 8u;
            *(_DWORD *)(v33 + 84) = v96;
          }
          if ( (v96 & 0x8008) == 8 )
            return v90;
          v97 = *(_DWORD *)(v33 + 104);
          if ( v97 == 576 )
          {
            FreeTouchInputInfo(*(_QWORD *)(v33 + 96), 0LL);
          }
          else if ( v97 == 281 )
          {
            FreeGestureInfo(*(_QWORD *)(v33 + 96), 0LL);
          }
          if ( (*(_DWORD *)(v33 + 84) & 0x200) == 0 )
          {
            if ( ((v98 = *(_DWORD *)(v33 + 104), (unsigned int)(v98 - 577) <= 3)
               || (unsigned int)(v98 - 581) <= 0x12 && v98 != 589)
              && v98 != 595
              || v98 == 528 && *(_WORD *)(v33 + 88) == 582 )
            {
              CTouchProcessor::UnreferenceMsgDataExternal(gpTouchProcessor, *(_QWORD *)(v33 + 96), 6LL, v33);
            }
          }
          v99 = *(_QWORD *)v33;
          v100 = *(_QWORD **)(v33 + 8);
          if ( *(_QWORD *)(*(_QWORD *)v33 + 8LL) == v33 && *v100 == v33 )
          {
            *v100 = v99;
            *(_QWORD *)(v99 + 8) = v100;
            HMAssignmentUnlock(v33 + 112);
            v101 = *(_QWORD *)(v33 + 120);
            if ( v101 )
              Win32FreePool(v101);
            Win32FreeToPagedLookasideList(SMSLookaside, v33);
            return v90;
          }
        }
LABEL_371:
        __fastfail(3u);
      }
      if ( a2 - 57 > 0xC && a2 - 1 <= 0x341 )
      {
        if ( a2 > 0x143 )
        {
          if ( a2 > 0x283 )
          {
            switch ( a2 )
            {
              case 0x30Cu:
LABEL_188:
                *(_OWORD *)v109 = *(_OWORD *)v12;
                v108 = 2 - (SHIDWORD(v109[0]) < 0);
                v12 = v109;
                Src = v109;
                if ( _mm_srli_si128(*(__m128i *)v109, 8).m128i_u64[0] < (unsigned __int64)MmSystemRangeStart || !v5 )
                  v3 = HIDWORD(v109[0]) & 0x7FFFFFFF;
                break;
              case 0x32Cu:
                v3 = 328;
LABEL_192:
                v36 = Win32AllocPoolWithQuota(v3, 1668510549LL);
                *(_QWORD *)(v33 + 120) = v36;
                if ( !v36 )
                  goto LABEL_216;
                v111 = v12;
                if ( a2 == 13 )
                  goto LABEL_215;
                if ( a2 == 70 || a2 - 419 <= 0x7C )
                  goto LABEL_213;
                if ( a2 <= 0x83 )
                {
                  if ( a2 == 131 )
                  {
                    if ( v13 )
                    {
                      *(_OWORD *)v36 = *v34;
                      *(_OWORD *)(v36 + 16) = v34[1];
                      *(_OWORD *)(v36 + 32) = v34[2];
                      *(_QWORD *)(v36 + 48) = *((_QWORD *)v34 + 6);
                      v38 = *(_QWORD *)(v33 + 120) + 56LL;
                      *(_QWORD *)(v36 + 48) = v38;
                      v39 = *((_QWORD *)v34 + 6);
                      *(_OWORD *)v38 = *(_OWORD *)v39;
                      *(_OWORD *)(v38 + 16) = *(_OWORD *)(v39 + 16);
                      *(_QWORD *)(v38 + 32) = *(_QWORD *)(v39 + 32);
                    }
                    else
                    {
                      memmove((void *)v36, v34, v3);
                    }
                    v12 = *(_DWORD **)(v33 + 120);
                    Src = v12;
                    goto LABEL_216;
                  }
                  if ( a2 == 12 )
                    goto LABEL_211;
                  if ( a2 > 0x19 )
                  {
                    if ( a2 > 0x1B )
                    {
                      if ( a2 == 74 )
                      {
                        v12 = (_DWORD *)v36;
                        Src = (void *)v36;
                        v37 = v112;
                        *(_OWORD *)v36 = *v112;
                        *(_QWORD *)(v36 + 16) = *((_QWORD *)v37 + 2);
                        if ( *((_QWORD *)v37 + 2) )
                        {
                          *(_QWORD *)(v36 + 16) = v36 + 24;
                          memmove((void *)(v36 + 24), *((const void **)v37 + 2), *((unsigned int *)v37 + 2));
                        }
                        goto LABEL_216;
                      }
                      goto LABEL_213;
                    }
LABEL_211:
                    v12 = (_DWORD *)v36;
                    Src = (void *)v36;
                    v40 = HIDWORD(v109[0]) ^ (HIDWORD(v109[0]) ^ *(_DWORD *)(v36 + 4)) & 0x7FFFFFFF;
                    *(_DWORD *)(v36 + 4) = v40;
                    *(_DWORD *)v36 = v109[0];
                    *(_QWORD *)(v36 + 8) = v36 + 16;
                    v41 = v40 ^ (v40 ^ (v3 - 16)) & 0x7FFFFFFF;
                    *(_DWORD *)(v36 + 4) = v41;
                    LODWORD(v41) = v41 & 0x7FFFFFFF;
                    memmove((void *)(v36 + 16), v109[1], v41);
                    goto LABEL_216;
                  }
LABEL_213:
                  memmove((void *)v36, v34, v3);
                  v12 = *(_DWORD **)(v33 + 120);
                  Src = v12;
                  goto LABEL_216;
                }
                if ( a2 <= 0x220 )
                {
                  if ( a2 != 544 )
                  {
                    switch ( a2 )
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
                        goto LABEL_211;
                      case 0xC4u:
                        *(_WORD *)v36 = *(_WORD *)v109[1];
                        goto LABEL_215;
                      case 0x148u:
                      case 0x189u:
                        goto LABEL_215;
                      case 0x191u:
                        Size = v3;
                        goto LABEL_213;
                      default:
                        goto LABEL_213;
                    }
                  }
                  v42 = v110;
                  v43 = (const void *)*((_QWORD *)v110 + 10);
                  if ( v43 )
                  {
                    v44 = (unsigned int)v110[19];
                    LODWORD(v44) = v44 & 0x7FFFFFFF;
                    memmove((void *)v36, v43, v44);
                    *v42 = *(_QWORD *)(v33 + 120);
                  }
                  v45 = v110;
                  if ( v110[14] )
                  {
                    v46 = (unsigned int)v110[19];
                    LODWORD(v46) = v46 & 0x7FFFFFFF;
                    v47 = (_DWORD *)(*(_QWORD *)(v33 + 120) + v46);
                    v120 = v47;
                    v48 = (unsigned int)v110[15];
                    LODWORD(v48) = v48 & 0x7FFFFFFF;
                    memmove(v47, *((const void **)v110 + 8), v48);
                    *((_QWORD *)v45 + 1) = v47;
                  }
                  goto LABEL_216;
                }
                if ( a2 == 780 )
                {
LABEL_215:
                  Size = v3;
                  v111 = v109[1];
                  v109[1] = *(void **)(v33 + 120);
                }
                else
                {
                  if ( a2 != 812 )
                    goto LABEL_213;
                  MakeUpKeyboardCorrectionCalloutContents(v12, v13, v36);
                  v13 = 0LL;
                  v135 = 0LL;
                  v12 = *(_DWORD **)(v33 + 120);
                  Src = v12;
                }
LABEL_216:
                if ( v3 && !*(_QWORD *)(v33 + 120) )
                {
                  Win32FreeToPagedLookasideList(SMSLookaside, v33);
                  return 0LL;
                }
                if ( (_DWORD)v143
                  && a1
                  && (unsigned int)IsWindowDesktopComposed(a1)
                  && (a2 <= 0x240 || a2 >= 0x258 || a2 == 589) )
                {
                  TransformMessageBetweenCoordinateSpaces(a2, 1LL, (__int64 *)va, (__int16 *)Srca, (__int64)a1, 0LL);
                  v12 = Src;
                }
                goto LABEL_233;
              case 0x341u:
                v3 = 64;
                Size = 64;
                break;
              case 0x342u:
                v3 = 56;
                break;
            }
          }
          else
          {
            if ( a2 != 643 )
            {
              switch ( a2 )
              {
                case 0x145u:
                case 0x18Du:
                case 0x196u:
                  goto LABEL_163;
                case 0x148u:
                case 0x189u:
                  goto LABEL_188;
                case 0x14Au:
                case 0x14Cu:
                case 0x14Du:
                case 0x158u:
                case 0x180u:
                case 0x181u:
                case 0x18Cu:
                case 0x18Fu:
                case 0x1A2u:
                  goto LABEL_162;
                case 0x191u:
                case 0x192u:
LABEL_178:
                  v3 = 4 * v13;
                  goto LABEL_191;
                case 0x218u:
                  if ( v12 && (v13 & 0x8000) != 0 && (v12 < MmSystemRangeStart || !v5) )
                  {
                    v3 = v12[4] + 20;
                    if ( v12[4] >= 0xFFFFFFEC )
                      goto LABEL_166;
                  }
                  goto LABEL_191;
                case 0x219u:
                  if ( v12 && (v13 & 0x8000) != 0 && (v12 < MmSystemRangeStart || !v5) )
LABEL_171:
                    v3 = *v12;
                  goto LABEL_191;
                case 0x220u:
                  v110 = v12;
                  v3 = (v12[15] & 0x7FFFFFFF) + (v12[19] & 0x7FFFFFFF);
                  goto LABEL_191;
                default:
                  goto LABEL_191;
              }
            }
            if ( v13 == 24 )
              v3 = (*v12 << 9) + 4;
          }
        }
        else if ( a2 == 323 )
        {
LABEL_162:
          if ( *(_DWORD *)(gptiCurrent + 1388LL) != 1 )
          {
LABEL_163:
            *(_OWORD *)v109 = *(_OWORD *)v12;
            if ( _mm_srli_si128(*(__m128i *)v109, 8).m128i_u64[0] < (unsigned __int64)MmSystemRangeStart || !v5 )
            {
              v3 = LODWORD(v109[0]) + 18;
              if ( (unsigned int)(LODWORD(v109[0]) + 18) < LODWORD(v109[0]) )
              {
LABEL_166:
                Win32FreeToPagedLookasideList(SMSLookaside, v32);
                return 8LL;
              }
            }
          }
        }
        else
        {
          switch ( a2 )
          {
            case 1u:
            case 0x81u:
              UserSetLastError(5LL);
              Win32FreeToPagedLookasideList(SMSLookaside, v33);
              return 0LL;
            case 0xCu:
            case 0x1Au:
            case 0xC2u:
              if ( !v12 )
                break;
              goto LABEL_163;
            case 0xDu:
            case 0xC4u:
              goto LABEL_188;
            case 0x1Bu:
              goto LABEL_163;
            case 0x38u:
              v3 = *(unsigned __int16 *)v12;
              break;
            case 0x46u:
            case 0x47u:
              v3 = 40;
              Size = 40;
              break;
            case 0x49u:
              v3 = v13;
              break;
            case 0x4Au:
              v112 = v12;
              if ( !*((_QWORD *)v12 + 2) )
              {
                v3 = 24;
                goto LABEL_192;
              }
              v3 = v12[2] + 24;
              if ( v3 < 0x18 )
              {
                Win32FreeToPagedLookasideList(SMSLookaside, v32);
                return 0LL;
              }
              break;
            case 0x53u:
              goto LABEL_171;
            case 0x83u:
              v3 = 96;
              if ( !v13 )
                v3 = 16;
              Size = v3;
              break;
            case 0xCBu:
              goto LABEL_178;
            default:
              break;
          }
        }
      }
LABEL_191:
      if ( !v3 )
        goto LABEL_216;
      goto LABEL_192;
    }
    v29 = v141;
    if ( v141 )
    {
      if ( (*(_DWORD *)(v141 + 32) & 0x40) != 0 )
        goto LABEL_133;
      if ( *(_DWORD *)v141 == 2 && *(_DWORD *)(v141 + 36) )
        return 0LL;
    }
    if ( !v5 )
    {
LABEL_134:
      if ( !v29 && !(unsigned int)ProcessSuspendedSendMessage(v28, a1, a2, v13, v12) || *(_DWORD *)(v28 + 536) > 0x2710u )
        return 0LL;
      goto LABEL_137;
    }
    v30 = *(_QWORD **)(v140 + 424);
    CurrentProcess = PsGetCurrentProcess(v141, v6, v7, v8);
    if ( !PsGetProcessCommonJob(CurrentProcess, *v30) )
      return 0LL;
    v29 = v141;
    v5 = v106;
LABEL_133:
    if ( v5 )
      goto LABEL_137;
    goto LABEL_134;
  }
  if ( a2 != 272 )
  {
    if ( a2 != 353 && a2 != 424 && a2 != 563 && a2 != 648 )
      goto LABEL_26;
    goto LABEL_21;
  }
LABEL_25:
  UserSetLastError(5LL);
  return 0LL;
}
