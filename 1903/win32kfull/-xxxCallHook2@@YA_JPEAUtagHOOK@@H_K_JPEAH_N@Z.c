/*
 * XREFs of ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z @ 0x1C00A1D00
 * Callers:
 *     ?xxxMoveEventAbsolute@@YA?AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHHPEAU_MouseCursorPerf@@@Z @ 0x1C00422E4 (-xxxMoveEventAbsolute@@YA-AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHHP.c)
 *     xxxReceiveMessage @ 0x1C009E8D0 (xxxReceiveMessage.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C009F9F0 (xxxSendTransformableMessageTimeout.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C00A4180 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     EditionKeyEventLLHook @ 0x1C00B4470 (EditionKeyEventLLHook.c)
 *     xxxCallNextHookEx @ 0x1C00B4548 (xxxCallNextHookEx.c)
 *     EditionLLMouseButtonHook @ 0x1C00B5980 (EditionLLMouseButtonHook.c)
 *     xxxCallMouseHook @ 0x1C0137100 (xxxCallMouseHook.c)
 *     EditionLLMouseWheelHook @ 0x1C01DC7F0 (EditionLLMouseWheelHook.c)
 *     xxxCallJournalPlaybackHook @ 0x1C01E8124 (xxxCallJournalPlaybackHook.c)
 *     xxxCallJournalRecordHook @ 0x1C01E8550 (xxxCallJournalRecordHook.c)
 *     xxxPointerCallHook @ 0x1C01F1350 (xxxPointerCallHook.c)
 * Callees:
 *     IsThreadHung @ 0x1C0016E74 (IsThreadHung.c)
 *     PushW32ThreadLock @ 0x1C001F0A0 (PushW32ThreadLock.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0096A50 (PopAndFreeAlwaysW32ThreadLock.c)
 *     xxxInterSendMsgEx @ 0x1C00A0510 (xxxInterSendMsgEx.c)
 *     xxxHkCallHook @ 0x1C00A3130 (xxxHkCallHook.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C00A4180 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     xxxLoadHmodIndex @ 0x1C00B29DC (xxxLoadHmodIndex.c)
 *     FreeHook @ 0x1C00B4250 (FreeHook.c)
 *     PhkNextValid @ 0x1C00B459C (PhkNextValid.c)
 *     ?IsForegroundShellFrameQueueAccessible@@YAHPEBUtagTHREADINFO@@@Z @ 0x1C01124D0 (-IsForegroundShellFrameQueueAccessible@@YAHPEBUtagTHREADINFO@@@Z.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 */

__int64 __fastcall xxxCallHook2(struct tagHOOK *a1, unsigned int a2, __int64 a3, int *a4, int *a5, bool a6)
{
  unsigned int v6; // ebx
  struct tagHOOK *Valid; // rdi
  __int64 v8; // r13
  __int64 result; // rax
  unsigned int v10; // r15d
  int v11; // ecx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  unsigned __int8 v16; // r12
  __int64 v17; // rdx
  int v18; // ecx
  __int16 ProcessMachine; // bx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rax
  int v23; // ecx
  _QWORD *v24; // rcx
  BOOL v25; // esi
  __int64 v26; // r8
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 CurrentProcess; // rax
  __int64 v37; // r12
  __int64 v38; // rbx
  __int64 v39; // r8
  struct tagHOOK *v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  struct tagHOOK *v52; // rax
  __int64 v53; // rsi
  _QWORD *v54; // rax
  __int64 v55; // r8
  char v56; // bl
  int ProcessorHistory_high; // ecx
  __int64 v58; // rax
  __int64 v59; // r9
  __int64 v60; // rbx
  __int64 v61; // rdx
  __int64 v62; // r8
  __int64 v63; // r9
  __int64 v64; // rax
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // rax
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // rax
  PULONG ReturnLength; // [rsp+20h] [rbp-238h]
  __int64 v74; // [rsp+38h] [rbp-220h]
  __int64 v76; // [rsp+58h] [rbp-200h] BYREF
  __int128 v77; // [rsp+60h] [rbp-1F8h]
  unsigned int v78; // [rsp+88h] [rbp-1D0h]
  __int128 v79; // [rsp+A0h] [rbp-1B8h] BYREF
  __int64 ProcessInformation; // [rsp+B0h] [rbp-1A8h] BYREF
  __int64 v81; // [rsp+B8h] [rbp-1A0h]
  __int64 v82; // [rsp+C0h] [rbp-198h] BYREF
  __int64 v83; // [rsp+C8h] [rbp-190h]
  __int64 v84; // [rsp+D0h] [rbp-188h]
  struct tagHOOK *v85; // [rsp+D8h] [rbp-180h] BYREF
  unsigned int v86; // [rsp+E0h] [rbp-178h]
  int v87; // [rsp+E4h] [rbp-174h]
  __int64 v88; // [rsp+E8h] [rbp-170h]
  __int64 v89; // [rsp+F0h] [rbp-168h]
  __int64 v90; // [rsp+F8h] [rbp-160h]
  __int128 v91; // [rsp+100h] [rbp-158h]
  __int64 v92; // [rsp+120h] [rbp-138h] BYREF
  struct tagHOOK *v93; // [rsp+128h] [rbp-130h]
  __int64 v94; // [rsp+130h] [rbp-128h]
  _QWORD v95[3]; // [rsp+138h] [rbp-120h] BYREF
  __int128 v96; // [rsp+150h] [rbp-108h]
  __int128 v97; // [rsp+160h] [rbp-F8h]
  int v98; // [rsp+170h] [rbp-E8h] BYREF
  __int128 v99; // [rsp+174h] [rbp-E4h]
  __int64 v100; // [rsp+184h] [rbp-D4h]
  int v101; // [rsp+18Ch] [rbp-CCh]
  int v102; // [rsp+190h] [rbp-C8h]
  int v103; // [rsp+194h] [rbp-C4h]
  __int64 *v104; // [rsp+198h] [rbp-C0h]
  __int128 v105; // [rsp+1C0h] [rbp-98h] BYREF
  __int128 v106; // [rsp+1D0h] [rbp-88h] BYREF
  __int128 v107; // [rsp+1E0h] [rbp-78h] BYREF
  __int64 ThreadId; // [rsp+1F0h] [rbp-68h] BYREF
  __int64 v109; // [rsp+1F8h] [rbp-60h]
  __int64 v110; // [rsp+200h] [rbp-58h]
  __int64 v111; // [rsp+208h] [rbp-50h]

  *(_QWORD *)&v79 = a4;
  *(_QWORD *)&v77 = a3;
  v6 = a2;
  Valid = a1;
  *(_QWORD *)&v91 = a5;
  v8 = 0LL;
  v81 = 0LL;
  result = 0LL;
  v92 = 0LL;
  v93 = 0LL;
  v94 = 0LL;
  v82 = 0LL;
  v83 = 0LL;
  v84 = 0LL;
  if ( !a1 )
    return result;
  v10 = *((_DWORD *)a1 + 12);
  v78 = v10;
  if ( gptiCurrent == gptiRit && v10 - 13 > 1 )
    return 0LL;
  if ( (*(_DWORD *)(gptiCurrent + 480LL) & 0x10000001) != 0 || !*(_QWORD *)(gptiCurrent + 448LL) && v10 != 14 )
    return dword_1C02E1830[v10 + 1];
  if ( v10 > 6 )
  {
    if ( v10 == 12 )
    {
      v11 = a4[6];
      goto LABEL_20;
    }
    if ( v10 != -1 )
    {
LABEL_17:
      v11 = 0;
      LOWORD(v12) = 0;
      goto LABEL_21;
    }
  }
  else if ( v10 != 6 )
  {
    if ( !v10 )
    {
      v11 = *a4;
      LOWORD(v12) = 0;
      goto LABEL_21;
    }
    if ( v10 != 3 )
    {
      if ( v10 == 4 )
      {
        v11 = a4[4];
        v12 = *((_QWORD *)a4 + 1);
        goto LABEL_21;
      }
      goto LABEL_17;
    }
  }
  v11 = a4[2];
LABEL_20:
  v12 = *((_QWORD *)a4 + 2);
LABEL_21:
  if ( (((unsigned int)(v11 - 577) <= 3 || (unsigned int)(v11 - 581) <= 0x12 && v11 != 589) && v11 != 595
     || v11 == 528 && (_WORD)v12 == 582)
    && (((v10 - 3) & 0xFFFFFFF6) != 0 || v10 == 11) )
  {
    return dword_1C02E1830[v10 + 1];
  }
  while ( 1 )
  {
    if ( (*(_BYTE *)(_HMPheFromObject(Valid) + 25) & 1) != 0
      || v10 == 14 && (v13 = *((_QWORD *)Valid + 2)) != 0 && (unsigned __int8)IsSpatialDelegationEnabledForThread(v13)
      || v10 == 13 && (v14 = *((_QWORD *)Valid + 2)) != 0 && (unsigned __int8)IsKeyboardDelegationEnabledForThread(v14) )
    {
      Valid = (struct tagHOOK *)PhkNextValid(Valid);
      goto LABEL_127;
    }
    if ( (_QWORD)v91 )
      *(_DWORD *)v91 = *((_DWORD *)Valid + 16) & 2;
    v15 = *((int *)Valid + 12);
    v16 = byte_1C02E0699[v15];
    if ( (_DWORD)v15 == 10 )
    {
      if ( (*(_DWORD *)(gptiCurrent + 480LL) & 8) != 0 && ((v6 - 4) & 0xFFFFFFF3) == 0 && v6 != 16 )
        v16 |= 0x10u;
      if ( (*(_DWORD *)(gptiCurrent + 480LL) & 4) != 0 && v6 == 11 )
        v16 |= 0x10u;
    }
    v17 = *((_QWORD *)Valid + 2);
    v25 = 0;
    if ( v17 != gptiCurrent )
    {
      if ( (v16 & 0x24) != 0
        || (v18 = *(_DWORD *)(gptiCurrent + 480LL) & 0x100, (*(_DWORD *)(v17 + 480) & 0x100) != v18)
        || v18
        && (ProcessMachine = PsWow64GetProcessMachine(**(_QWORD **)(v17 + 416)),
            (unsigned __int16)PsWow64GetProcessMachine(**(_QWORD **)(gptiCurrent + 416LL)) != ProcessMachine)
        || (*(_DWORD *)(gptiCurrent + 480LL) & 0xC) != 0
        && *(_QWORD *)(*((_QWORD *)Valid + 2) + 416LL) != *(_QWORD *)(gptiCurrent + 416LL)
        || (unsigned int)IsProcessDwm(**(_QWORD **)(*((_QWORD *)Valid + 2) + 416LL))
        || !(unsigned __int8)Enforced(v20)
        && (*((_DWORD *)Valid + 16) & 1) != 0
        && ((v21 = *(_QWORD *)(*((_QWORD *)Valid + 2) + 416LL),
             v22 = *(_QWORD *)(gptiCurrent + 416LL),
             v23 = *(_DWORD *)(v21 + 772),
             v23 != *(_DWORD *)(v22 + 772))
         || *(_DWORD *)(v21 + 776) != *(_DWORD *)(v22 + 776))
        && (*(_DWORD *)(gptiCurrent + 480LL) & 0x400000) == 0
        && (v23 != luidSystem[0] || *(_DWORD *)(v21 + 776) != luidSystem[1])
        || (v24 = (_QWORD *)*((_QWORD *)Valid + 2), v24[52] != *(_QWORD *)(gptiCurrent + 416LL))
        && (unsigned __int8)IsRestricted(*v24) )
      {
        v25 = 1;
      }
    }
    if ( (unsigned int)(*((_DWORD *)Valid + 12) - 13) <= 1 )
    {
      if ( a6
        || !gpqForeground
        || (unsigned __int8)CheckAccess(*(_QWORD *)(*((_QWORD *)Valid + 2) + 416LL) + 872LL, gpqForeground + 436LL)
        || (unsigned int)IsForegroundShellFrameQueueAccessible(*((const struct tagTHREADINFO **)Valid + 2))
        || (v27 = *((_QWORD *)Valid + 2), *(int *)(*(_QWORD *)(v27 + 416) + 12LL) < 0) )
      {
        if ( *((_DWORD *)Valid + 12) != 14 )
          goto LABEL_84;
        if ( *(_DWORD *)(gptiCurrent + 1368LL) == -1 )
          goto LABEL_84;
        if ( (unsigned __int8)CheckAccess(*(_QWORD *)(*((_QWORD *)Valid + 2) + 416LL) + 872LL, gptiCurrent + 1368LL) )
          goto LABEL_84;
        v27 = *((_QWORD *)Valid + 2);
        if ( *(int *)(*(_QWORD *)(v27 + 416) + 12LL) < 0 )
          goto LABEL_84;
        v29 = *(_QWORD *)(gptiCurrent + 1368LL);
        v28 = 0LL;
      }
      else
      {
        v28 = gpqForeground;
        v29 = *(_QWORD *)(gpqForeground + 436LL);
      }
      EtwTraceUIPIInputError(v27, 0LL, v28, v29, 6);
      v16 &= ~0x10u;
      goto LABEL_84;
    }
    if ( !(unsigned __int8)CheckAccess(
                             *(_QWORD *)(*((_QWORD *)Valid + 2) + 416LL) + 872LL,
                             *(_QWORD *)(gptiCurrent + 416LL) + 872LL) )
    {
      v26 = *((_QWORD *)Valid + 2);
      if ( *(int *)(*(_QWORD *)(v26 + 416) + 12LL) >= 0 )
      {
        v16 &= ~0x10u;
        EtwTraceUIPIHookError(Valid, v16, v26, gptiCurrent, v10, a2, v77, v79);
      }
      v25 = 1;
    }
LABEL_84:
    if ( !v25
      && (*((_DWORD *)Valid + 16) & 1) != 0
      && !(unsigned int)IsImmersiveBroker(*(_QWORD *)(*((_QWORD *)Valid + 2) + 416LL)) )
    {
      v30 = *(_QWORD *)(*((_QWORD *)Valid + 2) + 416LL);
      if ( *(int *)(v30 + 12) >= 0 )
      {
        v31 = *(_QWORD *)(gptiCurrent + 416LL);
        if ( v30 != v31 && (*(_DWORD *)(v30 + 812) & 0x100) == 0 )
        {
          if ( (unsigned int)IsImmersiveAppRestricted(v31)
            || (ProcessInformation = 6LL,
                ZwQueryInformationProcess(
                  (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                  ProcessCookie|ProcessUserModeIOPL,
                  &ProcessInformation,
                  8u,
                  0LL) < 0)
            || (ProcessInformation & 0x100000000LL) != 0 )
          {
            v25 = 1;
          }
        }
      }
    }
    v92 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v92;
    v93 = Valid;
    HMLockObject(Valid);
    if ( v25 )
    {
      v6 = a2;
      if ( (v16 & 0x10) != 0 )
      {
        v87 = 0;
        v88 = v79;
        v85 = Valid;
        v86 = a2;
        v89 = -1LL;
        v90 = -1LL;
        if ( (*(_DWORD *)(*((_QWORD *)Valid + 2) + 1224LL) & 0x20) == 0 )
        {
          v53 = *(_QWORD *)(gptiCurrent + 680LL);
          v82 = *(_QWORD *)(gptiCurrent + 408LL);
          *(_QWORD *)(gptiCurrent + 408LL) = &v82;
          v83 = v53;
          if ( v53 )
            HMLockObject(v53);
          *(_QWORD *)&v91 = gptiCurrent + 680LL;
          *((_QWORD *)&v91 + 1) = Valid;
          v79 = v91;
          HMAssignmentLock(&v79);
          if ( *(_QWORD *)(gptiCurrent + 472LL) )
          {
            v54 = (_QWORD *)PhkNextValid(Valid);
            v8 = *(_QWORD *)(v55 + 48);
            v81 = v8;
            if ( v54 )
              v54 = (_QWORD *)*v54;
            *(_QWORD *)(v55 + 48) = v54;
          }
          v56 = v16 & 0x20;
          if ( (v16 & 0x20) != 0 )
          {
            ProcessorHistory_high = HIDWORD(WPP_MAIN_CB.Dpc.ProcessorHistory);
            if ( (*((_BYTE *)Valid + 64) & 0x40) != 0 )
              ProcessorHistory_high = 30000;
            if ( *((char *)Valid + 88) < 0 )
              ProcessorHistory_high = 20;
          }
          else
          {
            ProcessorHistory_high = 200;
          }
          if ( v56 || (v16 & 4) == 0 && (*(_DWORD *)(gptiCurrent + 480LL) & 0xC) != 0 )
          {
            v99 = 0LL;
            v100 = 0LL;
            v101 = 0;
            v98 = 2;
            v102 = 2;
            v103 = ProcessorHistory_high;
            v104 = &v76;
            if ( v56 )
            {
              v89 = *(_QWORD *)(gptiCurrent + 1360LL);
              v90 = *(_QWORD *)(gptiCurrent + 1368LL);
              v88 = *(_QWORD *)(gptiCurrent + 1376LL);
            }
            if ( (*(_DWORD *)(gptiCurrent + 480LL) & 0x20000) != 0
              || (unsigned int)IsThreadHung(*((_QWORD **)Valid + 2), 0)
              || (LODWORD(v74) = 1,
                  LODWORD(ReturnLength) = 1,
                  !xxxInterSendMsgEx(0LL, 788LL, (_QWORD)v77, &v85, ReturnLength, *((_QWORD *)Valid + 2), &v98, v74, 0)) )
            {
              v64 = dword_1C02E1830[v78 + 1];
              v76 = v64;
            }
            else
            {
              v64 = v76;
            }
            if ( v56 && v64 )
            {
              _InterlockedExchange(
                (volatile __int32 *)(*(_QWORD *)(*((_QWORD *)Valid + 2) + 440LL) + 12LL),
                (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
              v8 = v81;
            }
          }
          else
          {
            memset(v95, 0, sizeof(v95));
            v58 = PsChargeProcessWakeCounter(**(_QWORD **)(*((_QWORD *)Valid + 2) + 416LL), 0LL, 2LL);
            v60 = v58;
            if ( v58 )
              PushW32ThreadLock(v58, v95, (__int64)ReleaseWakeReference, v59);
            LODWORD(v74) = 1;
            LODWORD(ReturnLength) = 1;
            v76 = xxxInterSendMsgEx(0LL, 788LL, (_QWORD)v77, &v85, ReturnLength, *((_QWORD *)Valid + 2), 0LL, v74, 0);
            if ( v60 )
              PopAndFreeAlwaysW32ThreadLock((__int64)v95, v61, v62, v63);
          }
          *(_QWORD *)&v77 = gptiCurrent + 680LL;
          *((_QWORD *)&v77 + 1) = v53;
          v107 = v77;
          HMAssignmentLock(&v107);
          v68 = *(_QWORD *)(gptiCurrent + 472LL);
          if ( v68 )
            *(_QWORD *)(v68 + 48) = v8;
          ThreadUnlock1(v66, v65, v67);
          goto LABEL_164;
        }
      }
      goto LABEL_166;
    }
    v34 = *((unsigned int *)Valid + 17);
    if ( (_DWORD)v34 != -1 )
    {
      v35 = *(unsigned int *)(*(_QWORD *)(gptiCurrent + 416LL) + 404LL);
      if ( !_bittest((const int *)&v35, v34) )
      {
        CurrentProcess = PsGetCurrentProcess(v35, v34, v32, v33);
        if ( (unsigned int)PsIsProtectedProcess(CurrentProcess)
          || (unsigned int)PsGetWin32KFilterSet() == 5
          || !xxxLoadHmodIndex(*((unsigned int *)Valid + 17)) )
        {
          v6 = a2;
          goto LABEL_166;
        }
      }
    }
    if ( ((*(_DWORD *)(**(_QWORD **)(gptiCurrent + 456LL) + 16LL) | *(_DWORD *)(gptiCurrent + 672LL)) & 0x400) == 0
      || *((_DWORD *)Valid + 12) == 9 )
    {
      break;
    }
    ThreadId = 0LL;
    v109 = 0LL;
    v110 = 0LL;
    v111 = 0LL;
    ThreadId = (unsigned int)PsGetThreadId((PETHREAD)*gptiCurrent);
    v6 = a2;
    LODWORD(v111) = a2;
    v110 = v77;
    v37 = v79;
    v109 = v79;
    if ( !(unsigned int)xxxCallHook(0, *((int *)Valid + 12), (__int64)&ThreadId, 9) )
      goto LABEL_105;
LABEL_166:
    Valid = (struct tagHOOK *)PhkNextValid(Valid);
    v72 = ThreadUnlock1(v70, v69, v71);
    if ( v72 && (*(_DWORD *)(v72 + 64) & 0x10) != 0 )
      FreeHook((struct tagHOOK *)v72);
LABEL_127:
    if ( !Valid )
      return dword_1C02E1830[v10 + 1];
  }
  v37 = v79;
LABEL_105:
  v38 = *(_QWORD *)(gptiCurrent + 680LL);
  v82 = *(_QWORD *)(gptiCurrent + 408LL);
  *(_QWORD *)(gptiCurrent + 408LL) = &v82;
  v83 = v38;
  if ( v38 )
    HMLockObject(v38);
  v39 = *(_QWORD *)(gptiCurrent + 472LL);
  if ( !v39 )
    goto LABEL_121;
  v40 = Valid;
  while ( 2 )
  {
    if ( *((_QWORD *)v40 + 5) )
    {
      v40 = (struct tagHOOK *)*((_QWORD *)v40 + 5);
LABEL_113:
      if ( !v40 || (*((_DWORD *)v40 + 16) & 0x80u) == 0 )
        goto LABEL_117;
      continue;
    }
    break;
  }
  if ( (*((_DWORD *)v40 + 16) & 1) == 0 )
  {
    v40 = *(struct tagHOOK **)(*(_QWORD *)(gptiCurrent + 456LL) + 8LL * *((int *)v40 + 12) + 48);
    goto LABEL_113;
  }
  v40 = 0LL;
LABEL_117:
  v8 = *(_QWORD *)(v39 + 48);
  v81 = v8;
  if ( v40 )
    v41 = *(_QWORD *)v40;
  else
    v41 = 0LL;
  *(_QWORD *)(v39 + 48) = v41;
LABEL_121:
  *(_QWORD *)&v96 = gptiCurrent + 680LL;
  *((_QWORD *)&v96 + 1) = Valid;
  v105 = v96;
  HMAssignmentLock(&v105);
  v76 = xxxHkCallHook(Valid, a2, v77, v37);
  *(_QWORD *)&v97 = gptiCurrent + 680LL;
  *((_QWORD *)&v97 + 1) = v38;
  v106 = v97;
  HMAssignmentLock(&v106);
  v45 = *(_QWORD *)(gptiCurrent + 472LL);
  if ( v45 )
    *(_QWORD *)(v45 + 48) = v8;
  ThreadUnlock1(v43, v42, v44);
  if ( (*((_DWORD *)Valid + 16) & 0x10) != 0 )
  {
    Valid = (struct tagHOOK *)PhkNextValid(Valid);
    v52 = (struct tagHOOK *)ThreadUnlock1(v50, v49, v51);
    if ( v52 )
      FreeHook(v52);
    v6 = a2;
    goto LABEL_127;
  }
LABEL_164:
  ThreadUnlock1(v47, v46, v48);
  return v76;
}
