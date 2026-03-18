/*
 * XREFs of xxxInterSendMsgEx @ 0x1C0044BF0
 * Callers:
 *     _ReplyMessage @ 0x1C0004C50 (_ReplyMessage.c)
 *     xxxReceiverDied @ 0x1C000BC90 (xxxReceiverDied.c)
 *     ClearSendMessages @ 0x1C0035CC0 (ClearSendMessages.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0042C60 (xxxSendTransformableMessageTimeout.c)
 *     xxxReceiveMessage @ 0x1C0049610 (xxxReceiveMessage.c)
 *     xxxSendMessageCallback @ 0x1C0060F68 (xxxSendMessageCallback.c)
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z @ 0x1C013A3EC (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z.c)
 * Callees:
 *     MergeDeferredMessagesOfThreadOnQueue @ 0x1C000C938 (MergeDeferredMessagesOfThreadOnQueue.c)
 *     HMValidateHandle @ 0x1C0015A84 (HMValidateHandle.c)
 *     SetWakeBit @ 0x1C001C970 (SetWakeBit.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     TransformMessageBetweenCoordinateSpaces @ 0x1C0041E60 (TransformMessageBetweenCoordinateSpaces.c)
 *     CaptureAndValidateUserModeDpiAwarenessContext @ 0x1C0042C10 (CaptureAndValidateUserModeDpiAwarenessContext.c)
 *     ?xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z @ 0x1C00467C0 (-xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z.c)
 *     IsThreadHung @ 0x1C00612F0 (IsThreadHung.c)
 *     MSGSQMAddMessage @ 0x1C0062398 (MSGSQMAddMessage.c)
 *     ProcessSuspendedSendMessage @ 0x1C01057F8 (ProcessSuspendedSendMessage.c)
 *     IsThreadCrossSessionAttached @ 0x1C0139D6C (IsThreadCrossSessionAttached.c)
 *     memmove @ 0x1C013D380 (memmove.c)
 *     _FreeTouchInputInfo @ 0x1C01A9250 (_FreeTouchInputInfo.c)
 *     MakeUpKeyboardCorrectionCalloutContents @ 0x1C01ABD78 (MakeUpKeyboardCorrectionCalloutContents.c)
 *     ?MsgSQMFlushMsgRecord@@YAXPEAUtagPROCESSINFO@@0PEAUtagMSGSQM_MSGRECORD@@@Z @ 0x1C01D0FB0 (-MsgSQMFlushMsgRecord@@YAXPEAUtagPROCESSINFO@@0PEAUtagMSGSQM_MSGRECORD@@@Z.c)
 *     ?MsgSQMGetMsgRecord@@YAPEAUtagMSGSQM_MSGRECORD@@PEAPEAU1@PEBU1@K@Z @ 0x1C01D11CC (-MsgSQMGetMsgRecord@@YAPEAUtagMSGSQM_MSGRECORD@@PEAPEAU1@PEBU1@K@Z.c)
 *     ?MsgSQMGetSourceListProcessPair@@YAPEAUtagMSGSQM_PROCESSPAIR@@PEAUtagPROCESSINFO@@0H@Z @ 0x1C01D128C (-MsgSQMGetSourceListProcessPair@@YAPEAUtagMSGSQM_PROCESSPAIR@@PEAUtagPROCESSINFO@@0H@Z.c)
 *     ?MsgSQMUpdateMsgRecord@@YAHPEAUtagMSGSQM_MSGRECORD@@KK@Z @ 0x1C01D1414 (-MsgSQMUpdateMsgRecord@@YAHPEAUtagMSGSQM_MSGRECORD@@KK@Z.c)
 *     IsFmtBlocked @ 0x1C01D3550 (IsFmtBlocked.c)
 *     _FreeGestureInfo @ 0x1C01D8130 (_FreeGestureInfo.c)
 *     strncpycch @ 0x1C022BB24 (strncpycch.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 xxxInterSendMsgEx(_QWORD *a1, unsigned int a2, ...)
{
  unsigned __int64 v2; // r15
  __int64 v3; // r14
  __int64 CurrentProcessWin32Process; // r12
  __int64 v5; // rbx
  __int64 v6; // rdx
  unsigned __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r9
  BOOL v12; // ebx
  unsigned __int16 *v13; // rsi
  __int64 v14; // r13
  unsigned int v15; // ecx
  __int64 v16; // rcx
  __int64 v17; // r9
  __int64 v18; // rcx
  unsigned __int64 v19; // rdi
  struct tagMSGSQM_PROCESSPAIR *v20; // rcx
  struct tagMSGSQM_MSGRECORD *v21; // rax
  unsigned int v22; // r8d
  struct tagMSGSQM_MSGRECORD *v23; // r12
  unsigned int v24; // r8d
  unsigned int v25; // r10d
  __int64 v26; // r8
  __int16 v27; // si
  unsigned __int64 v28; // rdi
  struct tagMSGSQM_PROCESSPAIR *v29; // rcx
  struct tagMSGSQM_MSGRECORD *v30; // rax
  unsigned int v31; // r8d
  unsigned int v32; // r8d
  __int64 v33; // rdx
  __int64 v34; // rdi
  __int64 v35; // rcx
  _QWORD *v36; // rbx
  __int64 CurrentProcess; // rax
  __int64 v38; // rax
  __int64 v39; // rdi
  __int64 result; // rax
  __int64 v41; // rax
  void *v42; // rdx
  _OWORD *v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rax
  int v46; // edx
  size_t v47; // r8
  _QWORD *v48; // r12
  const void *v49; // rdx
  size_t v50; // r8
  unsigned __int16 *v51; // r12
  __int64 v52; // rbx
  size_t v53; // r8
  _QWORD *v54; // r12
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r14
  unsigned __int64 v58; // rcx
  int v59; // esi
  struct _KTHREAD *CurrentThread; // r14
  __int64 v61; // rbx
  __int64 v62; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 v64; // rax
  __int64 v65; // rbx
  int v66; // ecx
  int v67; // ecx
  __int64 v68; // rcx
  __int64 v69; // rax
  _QWORD *v70; // rdx
  unsigned int v71; // eax
  int v72; // ecx
  __int64 v73; // r12
  __int64 v74; // r8
  int v75; // esi
  __int64 v76; // r9
  int v77; // ecx
  __int64 v78; // rdx
  int v79; // ecx
  __int64 v80; // rbx
  char v81; // r14
  __int64 v82; // rax
  __int64 v83; // rdx
  __int64 v84; // r8
  __int64 v85; // rcx
  int v86; // eax
  int v87; // ecx
  int v88; // eax
  _QWORD *v90; // rbx
  _WORD *v91; // rdx
  unsigned int v92; // ecx
  __int16 v93; // ax
  __int128 *v94; // rax
  __int128 v95; // xmm0
  __int64 v96; // rcx
  __int64 v97; // rdx
  __int64 v98; // r15
  __int64 v99; // rbx
  int v100; // eax
  int v101; // eax
  int v102; // ecx
  int v103; // ecx
  _QWORD *v104; // rax
  __int64 v105; // rdx
  _QWORD *v106; // rcx
  int v107; // ecx
  __int64 v108; // rcx
  _QWORD *v109; // rax
  __int64 v110; // rcx
  BOOLEAN v111; // [rsp+44h] [rbp-194h]
  __int64 v112; // [rsp+48h] [rbp-190h]
  unsigned int Size; // [rsp+50h] [rbp-188h]
  struct tagPROCESSINFO *v114; // [rsp+58h] [rbp-180h]
  int v115; // [rsp+58h] [rbp-180h]
  struct tagMSGSQM_MSGRECORD *Src; // [rsp+60h] [rbp-178h]
  _OWORD *Srca; // [rsp+60h] [rbp-178h]
  void *Srcb; // [rsp+60h] [rbp-178h]
  unsigned int v119; // [rsp+68h] [rbp-170h]
  int v120; // [rsp+70h] [rbp-168h]
  void *v121[2]; // [rsp+78h] [rbp-160h] BYREF
  unsigned int v122; // [rsp+88h] [rbp-150h]
  unsigned __int16 *v123; // [rsp+90h] [rbp-148h]
  void *v124; // [rsp+98h] [rbp-140h]
  _OWORD *v125; // [rsp+A0h] [rbp-138h]
  _QWORD *v126; // [rsp+A8h] [rbp-130h] BYREF
  __int64 v127; // [rsp+B0h] [rbp-128h]
  __int64 v128; // [rsp+B8h] [rbp-120h]
  __int64 v129; // [rsp+C0h] [rbp-118h]
  unsigned __int64 HighLimit; // [rsp+C8h] [rbp-110h] BYREF
  unsigned __int64 LowLimit; // [rsp+D0h] [rbp-108h] BYREF
  __int64 v132; // [rsp+D8h] [rbp-100h]
  void *v133; // [rsp+E0h] [rbp-F8h]
  _WORD *v134; // [rsp+E8h] [rbp-F0h]
  __int64 v135; // [rsp+F0h] [rbp-E8h]
  char v136[8]; // [rsp+F8h] [rbp-E0h] BYREF
  int v137; // [rsp+100h] [rbp-D8h]
  int v138; // [rsp+104h] [rbp-D4h]
  unsigned __int64 v139; // [rsp+108h] [rbp-D0h]
  char v140[8]; // [rsp+120h] [rbp-B8h] BYREF
  int v141; // [rsp+128h] [rbp-B0h]
  __int16 v142; // [rsp+12Ch] [rbp-ACh]
  __int16 v143; // [rsp+12Eh] [rbp-AAh]
  unsigned __int64 v144; // [rsp+130h] [rbp-A8h]
  __int128 v145; // [rsp+150h] [rbp-88h]
  __int128 v146; // [rsp+170h] [rbp-68h] BYREF
  _QWORD v147[11]; // [rsp+180h] [rbp-58h] BYREF
  unsigned __int64 v149; // [rsp+1F0h] [rbp+18h] BYREF
  va_list va; // [rsp+1F0h] [rbp+18h]
  __int64 v151; // [rsp+1F8h] [rbp+20h] BYREF
  va_list va1; // [rsp+1F8h] [rbp+20h]
  __int64 v153; // [rsp+200h] [rbp+28h]
  __int64 v154; // [rsp+208h] [rbp+30h]
  __int64 v155; // [rsp+210h] [rbp+38h]
  __int64 v156; // [rsp+218h] [rbp+40h]
  __int64 v157; // [rsp+220h] [rbp+48h]
  va_list va2; // [rsp+228h] [rbp+50h] BYREF

  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v149 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v151 = va_arg(va2, _QWORD);
  v153 = va_arg(va2, _QWORD);
  v154 = va_arg(va2, _QWORD);
  v155 = va_arg(va2, _QWORD);
  v156 = va_arg(va2, _QWORD);
  v157 = va_arg(va2, _QWORD);
  v2 = a2;
  v3 = 0LL;
  v127 = 0LL;
  v125 = 0LL;
  v123 = 0LL;
  v121[0] = 0LL;
  v121[1] = 0LL;
  v124 = 0LL;
  v120 = 0;
  v111 = 0;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  v114 = (struct tagPROCESSINFO *)CurrentProcessWin32Process;
  v5 = gptiCurrent;
  if ( !(_DWORD)v153 )
    v5 = 0LL;
  v112 = v5;
  v135 = v5;
  _InterlockedIncrement(&glInterSendMessage);
  if ( v5 && (*(_DWORD *)(v5 + 480) & 1) != 0 )
    return 0LL;
  IoGetStackLimits(&LowLimit, &HighLimit);
  if ( (unsigned __int64)&HighLimit - LowLimit < 0x2000 )
    return 0LL;
  if ( !a1 )
    goto LABEL_26;
  v6 = *(_QWORD *)(a1[2] + 416LL);
  if ( v6 == CurrentProcessWin32Process || (unsigned int)(v2 - 12) > 1 && (unsigned int)v2 < 0x4E )
    goto LABEL_26;
  if ( (unsigned int)v2 <= 0xD0 )
  {
    if ( (_DWORD)v2 != 208 )
    {
      switch ( (int)v2 )
      {
        case 12:
        case 188:
          goto LABEL_21;
        case 13:
        case 196:
        case 204:
          v6 = *(unsigned __int16 *)(*(_QWORD *)(a1[14] + 8LL) + 2LL);
          if ( *(_WORD *)(gpsi + 870LL) != (_WORD)v6 || (*(_BYTE *)(a1[5] + 28LL) & 0x20) == 0 )
            goto LABEL_26;
          UserSetLastError(5LL, v6);
          UserSetLastError(5LL, v8);
          break;
        case 78:
          goto LABEL_25;
        default:
          goto LABEL_26;
      }
      return 0LL;
    }
LABEL_21:
    if ( (!gbEnforceUIPI || *(_QWORD *)v6 == gpepCSRSS)
      && (*(_DWORD *)(v6 + 772) != *(_DWORD *)(CurrentProcessWin32Process + 772)
       || *(_DWORD *)(v6 + 776) != *(_DWORD *)(CurrentProcessWin32Process + 776)) )
    {
      goto LABEL_25;
    }
    goto LABEL_26;
  }
  if ( (_DWORD)v2 == 272 )
  {
LABEL_25:
    UserSetLastError(5LL, v6);
    return 0LL;
  }
  if ( (_DWORD)v2 == 353 || (_DWORD)v2 == 424 || (_DWORD)v2 == 563 || (_DWORD)v2 == 648 )
    goto LABEL_21;
LABEL_26:
  if ( !(_DWORD)v156 )
  {
    if ( a1 )
    {
      v9 = a1[2];
    }
    else
    {
      v9 = v154;
      if ( !v154 )
        goto LABEL_31;
    }
    v3 = *(_QWORD *)(v9 + 416);
LABEL_31:
    if ( v3 == CurrentProcessWin32Process )
    {
      v13 = (unsigned __int16 *)v151;
      v14 = v149;
      goto LABEL_132;
    }
    if ( (_DWORD)v2 == 717 )
      return 0LL;
    v10 = *(_QWORD *)(v3 + 840);
    v12 = 0;
    if ( v10 )
    {
      LODWORD(v7) = (unsigned __int16)v2;
      v6 = *(_QWORD *)(v10 + 8 * ((unsigned __int64)(unsigned __int16)v2 >> 13));
      if ( v6 )
      {
        v11 = *(_QWORD *)(v6 + 8LL * (((unsigned __int16)v2 >> 9) & 0xF));
        if ( v11 )
        {
          v6 = (unsigned int)(1 << (v2 & 7));
          v7 = ((unsigned __int64)(unsigned __int16)v2 >> 3) & 0x3F;
          if ( ((unsigned __int8)v6 & *(_BYTE *)(v7 + v11)) != 0 )
            v12 = 1;
        }
      }
    }
    v13 = (unsigned __int16 *)v151;
    v14 = v149;
    if ( v12 )
    {
      MSGSQMAddMessage((struct tagPROCESSINFO *)CurrentProcessWin32Process, (struct tagPROCESSINFO *)v3, v151, 1, 3);
LABEL_85:
      if ( v12 )
        goto LABEL_122;
      if ( (_DWORD)v2 == 274 && ((v14 - 61472) & 0xFFFFFFFFFFFFFEBFuLL) == 0 && v14 != 61792 )
      {
        v12 = 1;
        MSGSQMAddMessage(
          (struct tagPROCESSINFO *)CurrentProcessWin32Process,
          (struct tagPROCESSINFO *)v3,
          (__int64)v13,
          1,
          2);
        goto LABEL_122;
      }
      if ( *(_QWORD *)v3 == gpepCSRSS )
      {
        v6 = 0LL;
        v25 = 0x2000;
      }
      else
      {
        v25 = *(_DWORD *)(v3 + 872);
        v6 = *(unsigned int *)(v3 + 876);
      }
      v26 = *(_QWORD *)(CurrentProcessWin32Process + 872);
      if ( gbEnforceUIPI )
        v12 = (unsigned int)v26 > v25
           || (_DWORD)v26 == v25 && (HIDWORD(v26) == (_DWORD)v6 || HIDWORD(v26) == -1 || (_DWORD)v6 == -1);
      else
        v12 = 1;
      if ( !v12 )
      {
LABEL_123:
        if ( a1 )
        {
          if ( (_DWORD)v2 == 793 )
          {
            v6 = a1[2];
            if ( *(_QWORD **)(v6 + 1376) == a1 && *(_QWORD *)(v6 + 424) == *(_QWORD *)(gptiCurrent + 424LL) )
            {
              v12 = 1;
              goto LABEL_130;
            }
          }
        }
        if ( !v12 )
        {
          EtwTraceUIPIMsgError(v114, v3, (unsigned int)v2, v14, v13);
          UserSetLastError(5LL, v33);
          MSGSQMAddMessage(v114, (struct tagPROCESSINFO *)v3, (__int64)v13, 1, 0);
LABEL_130:
          if ( !v12 )
            return 0LL;
        }
LABEL_131:
        v5 = v112;
LABEL_132:
        LODWORD(v3) = 0;
        goto LABEL_133;
      }
      v27 = 1;
      if ( gbEnforceUIPI )
        v27 = 5;
      v28 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      if ( !gfWinMsgSQMIsOptedIn
        || (v29 = MsgSQMGetSourceListProcessPair(v114, (struct tagPROCESSINFO *)v3, v26)) == 0LL )
      {
        v13 = (unsigned __int16 *)v151;
        v14 = v149;
        goto LABEL_122;
      }
      v141 = v2;
      v142 = 1;
      v143 = v27;
      v144 = 0LL;
      if ( (unsigned int)v2 < 0x111 )
        goto LABEL_116;
      if ( (unsigned int)v2 <= 0x112 || (_DWORD)v2 == 281 || (_DWORD)v2 == 528 )
      {
        v14 = v149;
        v144 = v149;
        v13 = (unsigned __int16 *)v151;
LABEL_118:
        v30 = MsgSQMGetMsgRecord((struct tagMSGSQM_MSGRECORD **)v29 + 6, (const struct tagMSGSQM_MSGRECORD *)v140, v28);
        Src = v30;
        if ( v30 && !(unsigned int)MsgSQMUpdateMsgRecord(v30, v28, v31) )
        {
          MsgSQMFlushMsgRecord(v114, (struct tagPROCESSINFO *)v3, Src);
          MsgSQMUpdateMsgRecord(Src, v28, v32);
        }
LABEL_122:
        if ( v12 )
          goto LABEL_131;
        goto LABEL_123;
      }
      if ( (_DWORD)v2 == 793 )
      {
        v13 = (unsigned __int16 *)v151;
        v144 = ((unsigned __int64)v151 >> 16) & 0xFFF;
      }
      else
      {
LABEL_116:
        v13 = (unsigned __int16 *)v151;
      }
      v14 = v149;
      goto LABEL_118;
    }
    if ( a1 )
    {
      v132 = 0LL;
      v6 = *(_QWORD *)(*(_QWORD *)(a1[2] + 416LL) + 848LL);
      if ( !v6 )
        goto LABEL_48;
      v15 = 0;
      LODWORD(v7) = *(_DWORD *)v6;
      if ( *(_DWORD *)v6 )
      {
        do
        {
          if ( a1 == *(_QWORD **)(v6 + 16LL * v15 + 24) )
            break;
          ++v15;
        }
        while ( v15 < (unsigned int)v7 );
      }
      if ( v15 < (unsigned int)v7 )
      {
        _mm_lfence();
        v16 = *(_QWORD *)(v6 + 16 * (v15 + 1LL));
        v13 = (unsigned __int16 *)v151;
        v14 = v149;
      }
      else
      {
LABEL_48:
        v16 = 0LL;
      }
      v132 = v16;
      if ( !v16
        || (LODWORD(v7) = (unsigned __int16)v2,
            (v6 = *(_QWORD *)(v16 + 8 * ((unsigned __int64)(unsigned __int16)v2 >> 13))) == 0)
        || (v17 = *(_QWORD *)(v6 + 8 * (((unsigned __int64)(unsigned __int16)v2 >> 9) & 0xF))) == 0
        || (v6 = (unsigned int)(1 << (v2 & 7)),
            v7 = ((unsigned __int64)(unsigned __int16)v2 >> 3) & 0x3F,
            v12 = 1,
            ((unsigned __int8)v6 & *(_BYTE *)(v7 + v17)) == 0) )
      {
        v12 = 0;
      }
      if ( !v12 )
        goto LABEL_57;
      MSGSQMAddMessage(
        (struct tagPROCESSINFO *)CurrentProcessWin32Process,
        (struct tagPROCESSINFO *)v3,
        (__int64)v13,
        1,
        4);
    }
    if ( v12 )
      goto LABEL_85;
LABEL_57:
    v12 = 0;
    if ( (unsigned int)(v2 - 52) <= 0x4A )
      goto LABEL_67;
    if ( !(_DWORD)v2 )
      goto LABEL_66;
    if ( (unsigned int)(v2 - 128) <= 0x284 )
      goto LABEL_67;
    if ( (unsigned int)v2 > 0x308 )
    {
      v6 = 0x1C0000000uLL;
      switch ( (int)v2 )
      {
        case 777:
        case 778:
        case 779:
        case 780:
        case 782:
          LOBYTE(v12) = (unsigned int)IsFmtBlocked(128LL) == 0;
          break;
        case 781:
        case 787:
        case 794:
        case 795:
        case 799:
          goto LABEL_66;
        default:
          break;
      }
    }
    else if ( (_DWORD)v2 == 776
           || (unsigned int)v2 <= 0x33 && (v18 = 0x8000000006028LL, _bittest64(&v18, v2))
           || (_DWORD)v2 == 127
           || (_DWORD)v2 == 773 )
    {
LABEL_66:
      v12 = 1;
    }
LABEL_67:
    if ( !v12 )
      goto LABEL_85;
    v19 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    if ( !gfWinMsgSQMIsOptedIn
      || (v20 = MsgSQMGetSourceListProcessPair(
                  (struct tagPROCESSINFO *)CurrentProcessWin32Process,
                  (struct tagPROCESSINFO *)v3,
                  v7)) == 0LL )
    {
      v13 = (unsigned __int16 *)v151;
      v14 = v149;
      goto LABEL_85;
    }
    v137 = v2;
    v138 = 131073;
    v139 = 0LL;
    if ( (unsigned int)v2 < 0x111 )
    {
      v14 = v149;
    }
    else
    {
      if ( (unsigned int)v2 > 0x112 && (_DWORD)v2 != 281 && (_DWORD)v2 != 528 )
      {
        v13 = (unsigned __int16 *)v151;
        v14 = v149;
        if ( (_DWORD)v2 == 793 )
          v139 = ((unsigned __int64)v151 >> 16) & 0xFFF;
        goto LABEL_81;
      }
      v14 = v149;
      v139 = v149;
    }
    v13 = (unsigned __int16 *)v151;
LABEL_81:
    v21 = MsgSQMGetMsgRecord((struct tagMSGSQM_MSGRECORD **)v20 + 6, (const struct tagMSGSQM_MSGRECORD *)v136, v19);
    v23 = v21;
    if ( v21 && !(unsigned int)MsgSQMUpdateMsgRecord(v21, v19, v22) )
    {
      MsgSQMFlushMsgRecord(v114, (struct tagPROCESSINFO *)v3, v23);
      MsgSQMUpdateMsgRecord(v23, v19, v24);
    }
    CurrentProcessWin32Process = (__int64)v114;
    goto LABEL_85;
  }
  v13 = (unsigned __int16 *)v151;
  v14 = v149;
LABEL_133:
  if ( (_DWORD)v2 == 576 )
  {
    if ( !HMValidateHandle((__int64)v13, 20) )
      return 0LL;
  }
  else if ( (_DWORD)v2 == 281 && !HMValidateHandle((__int64)v13, 21) )
  {
    return 0LL;
  }
  v34 = v154;
  if ( (*(_DWORD *)(v154 + 1200) & 0x20) != 0 )
  {
    v35 = v155;
    if ( v155 )
    {
      if ( (*(_DWORD *)(v155 + 32) & 0x40) != 0 )
        goto LABEL_148;
      if ( *(_DWORD *)v155 == 2 && *(_DWORD *)(v155 + 36) )
        return 0LL;
    }
    if ( !v5 )
    {
LABEL_149:
      if ( !v35 && !(unsigned int)ProcessSuspendedSendMessage(v34, a1, (unsigned int)v2, v14, v13)
        || *(_DWORD *)(v34 + 528) > 0x2710u )
      {
        return 0LL;
      }
      goto LABEL_152;
    }
    v36 = *(_QWORD **)(v154 + 416);
    CurrentProcess = PsGetCurrentProcess(v155, v6);
    if ( !PsGetProcessCommonJob(CurrentProcess, *v36) )
      return 0LL;
    v35 = v155;
    v5 = v112;
LABEL_148:
    if ( v5 )
      goto LABEL_152;
    goto LABEL_149;
  }
LABEL_152:
  v38 = Win32AllocateFromPagedLookasideList(SMSLookaside);
  v39 = v38;
  v129 = v38;
  v128 = v38;
  if ( !v38 )
    return 0LL;
  *(_QWORD *)(v38 + 120) = 0LL;
  Size = 0;
  Srca = v13;
  *(_DWORD *)(v38 + 128) = *(_DWORD *)(gptiCurrent + 1396LL);
  if ( v155 && *(_DWORD *)v155 == 33 )
  {
LABEL_245:
    *(_QWORD *)(v39 + 112) = 0LL;
    v54 = (_QWORD *)(v39 + 16);
    *(_QWORD *)(v39 + 16) = 0LL;
    *(_QWORD *)&v145 = v39 + 112;
    *((_QWORD *)&v145 + 1) = a1;
    v146 = v145;
    HMAssignmentLock(&v146);
    *(_DWORD *)(v39 + 104) = v2;
    *(_QWORD *)(v39 + 88) = v14;
    *(_QWORD *)(v39 + 96) = v13;
    *(_DWORD *)(v39 + 84) = 0;
    *(_QWORD *)(v39 + 72) = 0LL;
    if ( (_DWORD)v2 == 576 || (_DWORD)v2 == 281 )
    {
      v55 = 3LL * (unsigned __int16)v13;
      v56 = *(_QWORD *)(gpKernelHandleTable + 24LL * (unsigned __int16)v13);
      v57 = v154;
      if ( v56 )
        HMChangeOwnerThread(v56, v154);
    }
    else
    {
      v57 = v154;
    }
    if ( *(_QWORD *)(gsmsList + 8LL) != gsmsList )
      __fastfail(3u);
    *(_QWORD *)v39 = gsmsList;
    *(_QWORD *)(v39 + 8) = gsmsList;
    *(_QWORD *)(gsmsList + 8LL) = v39;
    gsmsList = v39;
    v58 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    *(_DWORD *)(v39 + 80) = v58;
    *(_QWORD *)(v39 + 40) = v57;
    *(_QWORD *)(v39 + 32) = v5;
    v59 = 18;
    CurrentThread = KeGetCurrentThread();
    v61 = 0LL;
    if ( !(unsigned int)IsThreadCrossSessionAttached(v58, v55) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v61 = *ThreadWin32Thread;
    }
    if ( v61 )
    {
      if ( *(_QWORD *)(v61 + 360) )
        CaptureAndValidateUserModeDpiAwarenessContext(v61);
      if ( *(_DWORD *)(v61 + 340) )
      {
        v59 = *(_DWORD *)(v61 + 340);
      }
      else
      {
        v64 = PsGetCurrentProcessWin32Process(v62);
        if ( v64 )
          v59 = *(_DWORD *)(v64 + 280);
      }
    }
    *(_DWORD *)(v39 + 132) = v59;
    *(_QWORD *)(v39 + 64) = 0LL;
    v65 = v155;
    if ( v155 && (*(_DWORD *)v155 & 1) != 0 )
    {
      v66 = 1024;
      if ( (*(_DWORD *)v155 & 0x100) == 0 )
        v66 = 2048;
      v67 = *(_DWORD *)(v39 + 84) | v66;
      *(_DWORD *)(v39 + 84) = v67;
      *(_QWORD *)(v39 + 48) = *(_QWORD *)(v65 + 8);
      *(_QWORD *)(v39 + 56) = *(_QWORD *)(v65 + 16);
      if ( (*(_DWORD *)v65 & 0x20) != 0 )
      {
        *(_DWORD *)(v39 + 84) = v67 | 0x200;
        *(_QWORD *)(v39 + 72) = *(_QWORD *)(v65 + 24);
      }
      else
      {
        *(_DWORD *)(v39 + 84) = v67 | 0x100;
        *(_QWORD *)(v39 + 64) = gptiCurrent;
      }
    }
    if ( (_DWORD)v157 )
      *(_DWORD *)(v39 + 84) |= 0x10000u;
    v68 = v154;
    v69 = v154 + 512;
    v70 = *(_QWORD **)(v154 + 520);
    if ( *v70 != v154 + 512 )
      __fastfail(3u);
    *v54 = v69;
    *(_QWORD *)(v39 + 24) = v70;
    *v70 = v54;
    *(_QWORD *)(v69 + 8) = v54;
    v71 = *(_DWORD *)(v68 + 528) + 1;
    *(_DWORD *)(v68 + 528) = v71;
    if ( v71 > gcSmsHighWaterMark )
      gcSmsHighWaterMark = v71;
    if ( v112 )
    {
      v127 = *(_QWORD *)(v112 + 496);
      *(_QWORD *)(v112 + 496) = v39;
    }
    else
    {
      *(_DWORD *)(v39 + 84) |= 8u;
    }
    if ( (*(_DWORD *)(v39 + 84) & 0x200) == 0
      && ((unsigned int)(v2 - 577) <= 0x16 && (v72 = 8122367, _bittest(&v72, v2 - 577))
       || (_DWORD)v2 == 528 && (_WORD)v149 == 582) )
    {
      v73 = v151;
      CTouchProcessor::ReferenceMsgDataExternal(gpTouchProcessor, v151, 6LL, v39);
    }
    else
    {
      v73 = v151;
    }
    EtwTraceBeginSendMessage(v39, v112, v65);
    v74 = v112;
    if ( !v112 )
    {
      SetWakeBit(v154, 0x40u);
      EtwTraceEndSendMessage(v39);
      return 1LL;
    }
    v75 = 0;
    LODWORD(v153) = 0;
    v119 = 512;
    v115 = 0;
    v76 = v154;
    if ( (*(_DWORD *)(v154 + 480) & 1) == 0 )
    {
      *(_WORD *)(*(_QWORD *)(v154 + 440) + 6LL) |= 0x40u;
      *(_WORD *)(*(_QWORD *)(v76 + 440) + 4LL) |= 0x40u;
      if ( (*(_BYTE *)(*(_QWORD *)(v76 + 440) + 10LL) & 0x40) != 0 )
      {
        KeSetEvent(*(PRKEVENT *)(v76 + 720), 2, 0);
        v74 = v112;
      }
    }
    if ( v65 )
    {
      LODWORD(v153) = *(_DWORD *)(v65 + 36);
      v119 = ((*(_DWORD *)(v65 + 32) & 1) << 15) + 512;
    }
    v77 = *(_DWORD *)(v74 + 792);
    if ( !v77 )
    {
      v111 = KeSetKernelStackSwapEnable(0);
      v74 = v112;
      v77 = *(_DWORD *)(v112 + 792);
    }
    *(_DWORD *)(v74 + 792) = v77 + 1;
    v78 = v154;
    if ( *(_QWORD *)(v74 + 424) == *(_QWORD *)(v154 + 424) )
    {
      v79 = *(_DWORD *)(v74 + 480);
      if ( (v79 & 0x10000) == 0 )
      {
        *(_DWORD *)(v74 + 480) = v79 | 0x10000;
        v115 = 1;
      }
    }
    if ( (*(_DWORD *)(v39 + 84) & 1) != 0 )
    {
LABEL_324:
      LODWORD(v153) = v75;
      if ( (*(_DWORD *)(v74 + 792))-- == 1 )
      {
        KeSetKernelStackSwapEnable(v111);
        v74 = v112;
      }
      if ( v115 )
      {
        *(_DWORD *)(v74 + 480) &= ~0x10000u;
        MergeDeferredMessagesOfThreadOnQueue(v74);
      }
      if ( (*(_DWORD *)(v112 + 480) & 1) == 0 )
      {
        *(_WORD *)(*(_QWORD *)(v112 + 440) + 6LL) |= 0x200u;
        *(_WORD *)(*(_QWORD *)(v112 + 440) + 4LL) |= 0x200u;
        if ( (*(_WORD *)(*(_QWORD *)(v112 + 440) + 10LL) & 0x200) != 0 )
          KeSetEvent(*(PRKEVENT *)(v112 + 720), 2, 0);
      }
      if ( !v75 )
      {
        if ( Size )
        {
          v90 = v124;
          v126 = v124;
          if ( (_DWORD)v2 == 131 )
          {
            if ( (_DWORD)v157 && a1 && (unsigned int)IsWindowDesktopComposed(a1) )
            {
              TransformMessageBetweenCoordinateSpaces(131LL, 1LL, (__int64 *)va, (__int16 *)&v126, 0LL, (__int64)a1);
              v90 = v126;
            }
            v94 = *(__int128 **)(v39 + 120);
            v95 = *v94;
            if ( v149 )
            {
              v96 = v90[6];
              *(_OWORD *)v90 = v95;
              *((_OWORD *)v90 + 1) = v94[1];
              *((_OWORD *)v90 + 2) = v94[2];
              v90[6] = v96;
              v97 = *((_QWORD *)v94 + 6);
              if ( v97 )
              {
                *(_OWORD *)v96 = *(_OWORD *)v97;
                *(_OWORD *)(v96 + 16) = *(_OWORD *)(v97 + 16);
                *(_QWORD *)(v96 + 32) = *(_QWORD *)(v97 + 32);
              }
            }
            else
            {
              *(_OWORD *)v90 = v95;
            }
          }
          else
          {
            v91 = *(_WORD **)(v39 + 120);
            if ( v120 )
            {
              if ( v120 == 1 )
              {
                strncpycch(v124, v91, Size);
              }
              else
              {
                v92 = Size >> 1;
                v122 = Size >> 1;
                v134 = v91;
                v133 = v124;
                while ( v92 )
                {
                  v93 = *v91;
                  *(_WORD *)v90 = *v91;
                  v90 = (_QWORD *)((char *)v90 + 2);
                  v133 = v90;
                  v134 = ++v91;
                  if ( !v93 )
                    break;
                  v122 = --v92;
                }
              }
            }
            else
            {
              memmove(v124, v91, Size);
            }
          }
        }
        else if ( (_DWORD)v2 == 831 && (_DWORD)v157 && a1 && (unsigned int)IsWindowDesktopComposed(a1) )
        {
          TransformMessageBetweenCoordinateSpaces(831LL, 1LL, (__int64 *)va, (__int16 *)va1, 0LL, (__int64)a1);
        }
      }
      EtwTraceEndSendMessage(v39);
      *(_QWORD *)(v112 + 496) = v127;
      v98 = v155;
      if ( v155 )
      {
        **(_QWORD **)(v155 + 40) = *(_QWORD *)(v128 + 72);
        if ( (*(_DWORD *)(v98 + 32) & 0x20) != 0 && (*(_DWORD *)(v39 + 84) & 0x8000) != 0 )
        {
          v99 = 0LL;
          UserSetLastError(1400LL, v112);
        }
        else
        {
          v99 = v75 == 0;
        }
      }
      else
      {
        v99 = *(_QWORD *)(v128 + 72);
      }
      if ( v98 || v75 )
      {
        v100 = *(_DWORD *)(v39 + 84);
        if ( (v100 & 1) == 0 )
        {
          v101 = v100 | 1;
          *(_DWORD *)(v39 + 84) = v101;
          if ( (v101 & 0x4000) != 0 )
          {
            *(_DWORD *)(v39 + 84) = v101 | 8;
          }
          else
          {
            --*(_DWORD *)(v154 + 528);
            v104 = (_QWORD *)(v39 + 16);
            v105 = *(_QWORD *)(v39 + 16);
            v106 = *(_QWORD **)(v39 + 24);
            if ( *(_QWORD *)(v105 + 8) != v39 + 16 || (_QWORD *)*v106 != v104 )
              __fastfail(3u);
            *v106 = v105;
            *(_QWORD *)(v105 + 8) = v106;
            *v104 = 0LL;
            *(_DWORD *)(v39 + 84) |= 0x10u;
          }
        }
      }
      v102 = *(_DWORD *)(v39 + 84);
      if ( (v102 & 0x4010) != 0x10 )
      {
        v102 |= 8u;
        *(_DWORD *)(v39 + 84) = v102;
      }
      if ( (v102 & 0x8008) != 8 )
      {
        v103 = *(_DWORD *)(v39 + 104);
        if ( v103 == 576 )
        {
          FreeTouchInputInfo(*(_QWORD *)(v39 + 96), 0LL);
        }
        else if ( v103 == 281 )
        {
          FreeGestureInfo(*(_QWORD *)(v39 + 96), 0LL);
        }
        if ( (*(_DWORD *)(v39 + 84) & 0x200) == 0 )
        {
          if ( ((v107 = *(_DWORD *)(v39 + 104), (unsigned int)(v107 - 577) <= 3)
             || (unsigned int)(v107 - 581) <= 0x12 && v107 != 589)
            && v107 != 595
            || v107 == 528 && *(_WORD *)(v39 + 88) == 582 )
          {
            CTouchProcessor::UnreferenceMsgDataExternal(gpTouchProcessor, *(_QWORD *)(v39 + 96), 6LL, v39);
          }
        }
        v108 = *(_QWORD *)v39;
        v109 = *(_QWORD **)(v39 + 8);
        if ( *(_QWORD *)(*(_QWORD *)v39 + 8LL) != v39 || *v109 != v39 )
          __fastfail(3u);
        *v109 = v108;
        *(_QWORD *)(v108 + 8) = v109;
        HMAssignmentUnlock(v39 + 112);
        v110 = *(_QWORD *)(v39 + 120);
        if ( v110 )
          Win32FreePool(v110);
        Win32FreeToPagedLookasideList(SMSLookaside, v39);
      }
      return v99;
    }
    while ( 1 )
    {
      if ( v75 )
        goto LABEL_324;
      v80 = 0LL;
      v81 = 0;
      *(_WORD *)(*(_QWORD *)(v74 + 440) + 4LL) &= ~0x200u;
      if ( (_DWORD)v2 == 788 )
      {
        if ( v73 )
        {
          if ( *(_DWORD *)(v78 + 624) <= 0x501u )
          {
            if ( *(_DWORD *)(v78 + 640) )
            {
              v80 = *(_QWORD *)v73;
              if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)v73 + 48LL) - 13) <= 1 )
              {
                v82 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v78);
                v147[0] = *(_QWORD *)(v82 + 408);
                *(_QWORD *)(v82 + 408) = v147;
                v147[1] = v80;
                _InterlockedIncrement((volatile signed __int32 *)(v80 + 8));
                v81 = 1;
                v73 = v151;
              }
            }
          }
        }
      }
      v75 = xxxRealSleepThread(v119, v153, 0, 0, 0LL) == 0;
      if ( v81 )
      {
        v85 = *(_DWORD *)(v80 + 88) & 0xFFFFFF7F | (v75 << 7);
        *(_DWORD *)(v80 + 88) = v85;
        if ( v75 )
        {
          v86 = v85 ^ ((unsigned __int8)v85 ^ (unsigned __int8)(v85 + 1)) & 0x7F;
          *(_DWORD *)(v80 + 88) = v86;
          if ( (v86 & 0x7Fu) > 0xA )
            *(_DWORD *)(v80 + 64) |= 0x10u;
        }
        ThreadUnlock1(v85, v83, v84);
      }
      if ( v75 && v155 )
      {
        v87 = *(_DWORD *)(v155 + 32);
        v88 = *(_DWORD *)(v39 + 84);
        if ( ((v87 & 0x10) != 0 || (v88 & 0x20) != 0) && (v88 & 0x10) != 0 )
        {
          LODWORD(v153) = 0;
          v75 = 0;
        }
        if ( (v87 & 8) == 0 || (unsigned int)IsThreadHung(v154, 0LL) )
        {
          if ( v75 )
            goto LABEL_323;
        }
        else
        {
          v75 = 0;
        }
        EtwTraceConvertTimeOutToBlocking();
      }
LABEL_323:
      v74 = v112;
      if ( (*(_DWORD *)(v39 + 84) & 1) != 0 )
        goto LABEL_324;
      v78 = v154;
    }
  }
  if ( (unsigned int)(v2 - 1) > 0x37 && (unsigned int)v2 < 0x46 )
    goto LABEL_207;
  if ( (_DWORD)v2 == 13 )
  {
LABEL_204:
    *(_OWORD *)v121 = *(_OWORD *)v13;
    v120 = 2 - (SHIDWORD(v121[0]) < 0);
    v13 = (unsigned __int16 *)v121;
    v151 = (__int64)v121;
    if ( _mm_srli_si128(*(__m128i *)v121, 8).m128i_u64[0] < (unsigned __int64)MmSystemRangeStart || !v5 )
      LODWORD(v3) = HIDWORD(v121[0]) & 0x7FFFFFFF;
    goto LABEL_207;
  }
  if ( (unsigned int)v2 > 0x143 )
  {
    if ( (unsigned int)v2 <= 0x283 )
    {
      if ( (_DWORD)v2 != 643 )
      {
        switch ( (int)v2 )
        {
          case 325:
          case 397:
          case 406:
            goto LABEL_179;
          case 328:
          case 393:
            goto LABEL_204;
          case 330:
          case 332:
          case 333:
          case 344:
          case 384:
          case 385:
          case 396:
          case 399:
          case 418:
            goto LABEL_178;
          case 401:
          case 402:
LABEL_194:
            LODWORD(v3) = 4 * v14;
            goto LABEL_207;
          case 536:
            if ( v13 && (v14 & 0x8000) != 0 && (v13 < MmSystemRangeStart || !v5) )
            {
              LODWORD(v3) = *((_DWORD *)v13 + 4) + 20;
              if ( *((_DWORD *)v13 + 4) >= 0xFFFFFFEC )
                goto LABEL_182;
            }
            goto LABEL_207;
          case 537:
            if ( v13 && (v14 & 0x8000) != 0 && (v13 < MmSystemRangeStart || !v5) )
LABEL_187:
              LODWORD(v3) = *(_DWORD *)v13;
            goto LABEL_207;
          case 544:
            v123 = v13;
            LODWORD(v3) = (*((_DWORD *)v13 + 15) & 0x7FFFFFFF) + (*((_DWORD *)v13 + 19) & 0x7FFFFFFF);
            goto LABEL_207;
          default:
            goto LABEL_207;
        }
      }
      if ( v14 == 24 )
        LODWORD(v3) = (*(_DWORD *)v13 << 9) + 4;
      goto LABEL_207;
    }
    if ( (_DWORD)v2 != 780 )
    {
      switch ( (_DWORD)v2 )
      {
        case 0x32C:
          LODWORD(v3) = 328;
LABEL_208:
          v41 = Win32AllocPoolWithQuota((unsigned int)v3, 1668510549LL);
          *(_QWORD *)(v39 + 120) = v41;
          if ( v41 )
          {
            v124 = v13;
            v42 = (void *)v41;
            if ( (_DWORD)v2 != 13 )
            {
              if ( (unsigned int)v2 <= 0x83 )
              {
                if ( (_DWORD)v2 == 131 )
                {
                  if ( v14 )
                  {
                    *(_OWORD *)v41 = *Srca;
                    *(_OWORD *)(v41 + 16) = Srca[1];
                    *(_OWORD *)(v41 + 32) = Srca[2];
                    *(_QWORD *)(v41 + 48) = *((_QWORD *)Srca + 6);
                    v44 = *(_QWORD *)(v39 + 120) + 56LL;
                    *(_QWORD *)(v41 + 48) = v44;
                    v45 = *((_QWORD *)Srca + 6);
                    *(_OWORD *)v44 = *(_OWORD *)v45;
                    *(_OWORD *)(v44 + 16) = *(_OWORD *)(v45 + 16);
                    *(_QWORD *)(v44 + 32) = *(_QWORD *)(v45 + 32);
                  }
                  else
                  {
                    memmove((void *)v41, Srca, (unsigned int)v3);
                  }
                  v13 = *(unsigned __int16 **)(v39 + 120);
                  v151 = (__int64)v13;
                }
                else
                {
                  switch ( (int)v2 )
                  {
                    case 12:
                    case 26:
                    case 27:
                      goto LABEL_222;
                    case 74:
                      v13 = (unsigned __int16 *)v41;
                      v151 = v41;
                      v43 = v125;
                      *(_OWORD *)v41 = *v125;
                      *(_QWORD *)(v41 + 16) = *((_QWORD *)v43 + 2);
                      if ( *((_QWORD *)v43 + 2) )
                      {
                        *(_QWORD *)(v41 + 16) = v41 + 24;
                        memmove((void *)(v41 + 24), *((const void **)v43 + 2), *((unsigned int *)v43 + 2));
                      }
                      break;
                    default:
                      goto LABEL_224;
                  }
                }
                goto LABEL_227;
              }
              if ( (unsigned int)v2 <= 0x220 )
              {
                if ( (_DWORD)v2 == 544 )
                {
                  v48 = v123;
                  v49 = (const void *)*((_QWORD *)v123 + 10);
                  if ( v49 )
                  {
                    v50 = *((unsigned int *)v123 + 19);
                    LODWORD(v50) = v50 & 0x7FFFFFFF;
                    memmove((void *)v41, v49, v50);
                    *v48 = *(_QWORD *)(v39 + 120);
                  }
                  v51 = v123;
                  if ( *((_DWORD *)v123 + 14) )
                  {
                    v52 = *((unsigned int *)v123 + 19);
                    LODWORD(v52) = v52 & 0x7FFFFFFF;
                    Srcb = (void *)(*(_QWORD *)(v39 + 120) + v52);
                    v53 = *((unsigned int *)v123 + 15);
                    LODWORD(v53) = v53 & 0x7FFFFFFF;
                    memmove(Srcb, *((const void **)v123 + 8), v53);
                    *((_QWORD *)v51 + 1) = Srcb;
                  }
                }
                else
                {
                  switch ( (int)v2 )
                  {
                    case 194:
                    case 323:
                    case 325:
                    case 330:
                    case 332:
                    case 333:
                    case 344:
                    case 384:
                    case 385:
                    case 396:
                    case 397:
                    case 399:
                    case 406:
                    case 418:
LABEL_222:
                      v13 = (unsigned __int16 *)v41;
                      v151 = v41;
                      v46 = HIDWORD(v121[0]) ^ (HIDWORD(v121[0]) ^ *(_DWORD *)(v41 + 4)) & 0x7FFFFFFF;
                      *(_DWORD *)(v41 + 4) = v46;
                      *(_DWORD *)v41 = v121[0];
                      *(_QWORD *)(v41 + 8) = v41 + 16;
                      v47 = v46 ^ (v46 ^ ((_DWORD)v3 - 16)) & 0x7FFFFFFFu;
                      *(_DWORD *)(v41 + 4) = v47;
                      LODWORD(v47) = v47 & 0x7FFFFFFF;
                      memmove((void *)(v41 + 16), v121[1], v47);
                      break;
                    case 196:
                      *(_WORD *)v41 = *(_WORD *)v121[1];
                      v42 = *(void **)(v39 + 120);
                      goto LABEL_226;
                    case 328:
                    case 393:
                      goto LABEL_226;
                    case 401:
                      Size = v3;
                      goto LABEL_224;
                    default:
                      goto LABEL_224;
                  }
                }
                goto LABEL_227;
              }
              if ( (_DWORD)v2 != 780 )
              {
                if ( (_DWORD)v2 == 812 )
                {
                  MakeUpKeyboardCorrectionCalloutContents(v13, v14, v41);
                  v14 = 0LL;
                  v149 = 0LL;
                  v13 = *(unsigned __int16 **)(v39 + 120);
                  v151 = (__int64)v13;
                }
                else
                {
LABEL_224:
                  memmove((void *)v41, Srca, (unsigned int)v3);
                  v13 = *(unsigned __int16 **)(v39 + 120);
                  v151 = (__int64)v13;
                }
                goto LABEL_227;
              }
            }
LABEL_226:
            Size = v3;
            v124 = v121[1];
            v121[1] = v42;
          }
LABEL_227:
          if ( (_DWORD)v3 && !*(_QWORD *)(v39 + 120) )
          {
            Win32FreeToPagedLookasideList(SMSLookaside, v39);
            return 0LL;
          }
          if ( (_DWORD)v157
            && a1
            && (unsigned int)IsWindowDesktopComposed(a1)
            && ((unsigned int)v2 <= 0x240 || (unsigned int)v2 >= 0x258 || (_DWORD)v2 == 589) )
          {
            TransformMessageBetweenCoordinateSpaces(
              (unsigned int)v2,
              1LL,
              (__int64 *)va,
              (__int16 *)va1,
              (__int64)a1,
              0LL);
            v13 = (unsigned __int16 *)v151;
          }
          v5 = v112;
          goto LABEL_245;
        case 0x341:
          LODWORD(v3) = 64;
          Size = 64;
          break;
        case 0x342:
          LODWORD(v3) = 56;
          break;
      }
LABEL_207:
      if ( !(_DWORD)v3 )
        goto LABEL_227;
      goto LABEL_208;
    }
    goto LABEL_204;
  }
  if ( (_DWORD)v2 == 323 )
  {
LABEL_178:
    if ( *(_DWORD *)(gptiCurrent + 1396LL) != 1 )
    {
LABEL_179:
      *(_OWORD *)v121 = *(_OWORD *)v13;
      if ( _mm_srli_si128(*(__m128i *)v121, 8).m128i_u64[0] < (unsigned __int64)MmSystemRangeStart || !v5 )
      {
        LODWORD(v3) = LODWORD(v121[0]) + 18;
        if ( (unsigned int)(LODWORD(v121[0]) + 18) < LODWORD(v121[0]) )
        {
LABEL_182:
          Win32FreeToPagedLookasideList(SMSLookaside, v38);
          return 8LL;
        }
      }
    }
    goto LABEL_207;
  }
  switch ( (int)v2 )
  {
    case 1:
    case 129:
      UserSetLastError(5LL, 0x1C0000000LL);
      Win32FreeToPagedLookasideList(SMSLookaside, v39);
      return 0LL;
    case 12:
    case 26:
    case 194:
      if ( !v13 )
        goto LABEL_207;
      goto LABEL_179;
    case 27:
      goto LABEL_179;
    case 56:
      LODWORD(v3) = *v13;
      goto LABEL_207;
    case 70:
    case 71:
      LODWORD(v3) = 40;
      Size = 40;
      goto LABEL_207;
    case 73:
      LODWORD(v3) = v14;
      goto LABEL_207;
    case 74:
      v125 = v13;
      if ( !*((_QWORD *)v13 + 2) )
      {
        LODWORD(v3) = 24;
        goto LABEL_208;
      }
      LODWORD(v3) = *((_DWORD *)v13 + 2) + 24;
      if ( (unsigned int)v3 >= 0x18 )
        goto LABEL_207;
      Win32FreeToPagedLookasideList(SMSLookaside, v38);
      result = 0LL;
      break;
    case 83:
      goto LABEL_187;
    case 131:
      LODWORD(v3) = 96;
      if ( !v14 )
        LODWORD(v3) = 16;
      Size = v3;
      goto LABEL_207;
    case 196:
      goto LABEL_204;
    case 203:
      goto LABEL_194;
    default:
      goto LABEL_207;
  }
  return result;
}
