/*
 * XREFs of ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z @ 0x1C0042AD0
 * Callers:
 *     xxxReceiveMessage @ 0x1C003F6A0 (xxxReceiveMessage.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00407C0 (xxxSendTransformableMessageTimeout.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C0044F60 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     EditionKeyEventLLHook @ 0x1C00551E0 (EditionKeyEventLLHook.c)
 *     xxxCallNextHookEx @ 0x1C00552B8 (xxxCallNextHookEx.c)
 *     EditionLLMouseButtonHook @ 0x1C0056730 (EditionLLMouseButtonHook.c)
 *     ?xxxMoveEventAbsolute@@YA?AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHHPEAU_MouseCursorPerf@@@Z @ 0x1C0086374 (-xxxMoveEventAbsolute@@YA-AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHHP.c)
 *     xxxCallMouseHook @ 0x1C0111180 (xxxCallMouseHook.c)
 *     EditionLLMouseWheelHook @ 0x1C01DC670 (EditionLLMouseWheelHook.c)
 *     xxxCallJournalPlaybackHook @ 0x1C01E7FA4 (xxxCallJournalPlaybackHook.c)
 *     xxxCallJournalRecordHook @ 0x1C01E83D0 (xxxCallJournalRecordHook.c)
 *     xxxPointerCallHook @ 0x1C01F11D0 (xxxPointerCallHook.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C001EF30 (PushW32ThreadLock.c)
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0037780 (PopAndFreeAlwaysW32ThreadLock.c)
 *     xxxInterSendMsgEx @ 0x1C00412E0 (xxxInterSendMsgEx.c)
 *     xxxHkCallHook @ 0x1C0043F00 (xxxHkCallHook.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C0044F60 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     xxxLoadHmodIndex @ 0x1C005383C (xxxLoadHmodIndex.c)
 *     FreeHook @ 0x1C0054FC0 (FreeHook.c)
 *     PhkNextValid @ 0x1C005530C (PhkNextValid.c)
 *     ?IsForegroundShellFrameQueueAccessible@@YAHPEBUtagTHREADINFO@@@Z @ 0x1C00ED0F0 (-IsForegroundShellFrameQueueAccessible@@YAHPEBUtagTHREADINFO@@@Z.c)
 *     IsThreadHung @ 0x1C013354C (IsThreadHung.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
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
  unsigned __int8 v15; // r12
  __int64 v16; // rdx
  int v17; // ecx
  __int16 ProcessMachine; // bx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rax
  int v22; // ecx
  _QWORD *v23; // rcx
  BOOL v24; // esi
  __int64 v25; // r8
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 CurrentProcess; // rax
  __int64 v36; // r12
  __int64 v37; // rbx
  __int64 v38; // r8
  struct tagHOOK *v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  struct tagHOOK *v51; // rax
  __int64 v52; // rsi
  _QWORD *v53; // rax
  __int64 v54; // r8
  char v55; // bl
  int ProcessorHistory_high; // ecx
  __int64 v57; // rax
  __int64 v58; // rbx
  __int64 v59; // rdx
  __int64 v60; // r8
  __int64 v61; // rax
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // rax
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r8
  __int64 v69; // rax
  PULONG ReturnLength; // [rsp+20h] [rbp-238h]
  __int64 v71; // [rsp+38h] [rbp-220h]
  __int64 v73; // [rsp+58h] [rbp-200h] BYREF
  __int128 v74; // [rsp+60h] [rbp-1F8h]
  unsigned int v75; // [rsp+88h] [rbp-1D0h]
  __int128 v76; // [rsp+A0h] [rbp-1B8h] BYREF
  __int64 ProcessInformation; // [rsp+B0h] [rbp-1A8h] BYREF
  __int64 v78; // [rsp+B8h] [rbp-1A0h]
  __int64 v79; // [rsp+C0h] [rbp-198h] BYREF
  __int64 v80; // [rsp+C8h] [rbp-190h]
  __int64 v81; // [rsp+D0h] [rbp-188h]
  struct tagHOOK *v82; // [rsp+D8h] [rbp-180h] BYREF
  unsigned int v83; // [rsp+E0h] [rbp-178h]
  int v84; // [rsp+E4h] [rbp-174h]
  __int64 v85; // [rsp+E8h] [rbp-170h]
  __int64 v86; // [rsp+F0h] [rbp-168h]
  __int64 v87; // [rsp+F8h] [rbp-160h]
  __int128 v88; // [rsp+100h] [rbp-158h]
  __int64 v89; // [rsp+120h] [rbp-138h] BYREF
  struct tagHOOK *v90; // [rsp+128h] [rbp-130h]
  __int64 v91; // [rsp+130h] [rbp-128h]
  _QWORD v92[3]; // [rsp+138h] [rbp-120h] BYREF
  __int128 v93; // [rsp+150h] [rbp-108h]
  __int128 v94; // [rsp+160h] [rbp-F8h]
  int v95; // [rsp+170h] [rbp-E8h] BYREF
  __int128 v96; // [rsp+174h] [rbp-E4h]
  __int64 v97; // [rsp+184h] [rbp-D4h]
  int v98; // [rsp+18Ch] [rbp-CCh]
  int v99; // [rsp+190h] [rbp-C8h]
  int v100; // [rsp+194h] [rbp-C4h]
  __int64 *v101; // [rsp+198h] [rbp-C0h]
  __int128 v102; // [rsp+1C0h] [rbp-98h] BYREF
  __int128 v103; // [rsp+1D0h] [rbp-88h] BYREF
  __int128 v104; // [rsp+1E0h] [rbp-78h] BYREF
  __int64 ThreadId; // [rsp+1F0h] [rbp-68h] BYREF
  __int64 v106; // [rsp+1F8h] [rbp-60h]
  __int64 v107; // [rsp+200h] [rbp-58h]
  __int64 v108; // [rsp+208h] [rbp-50h]

  *(_QWORD *)&v76 = a4;
  *(_QWORD *)&v74 = a3;
  v6 = a2;
  Valid = a1;
  *(_QWORD *)&v88 = a5;
  v8 = 0LL;
  v78 = 0LL;
  result = 0LL;
  v89 = 0LL;
  v90 = 0LL;
  v91 = 0LL;
  v79 = 0LL;
  v80 = 0LL;
  v81 = 0LL;
  if ( !a1 )
    return result;
  v10 = *((_DWORD *)a1 + 12);
  v75 = v10;
  if ( gptiCurrent == gptiRit && v10 - 13 > 1 )
    return 0LL;
  if ( (*(_DWORD *)(gptiCurrent + 480LL) & 0x10000001) != 0 || !*(_QWORD *)(gptiCurrent + 448LL) && v10 != 14 )
    return dword_1C02E0DF0[v10 + 1];
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
    return dword_1C02E0DF0[v10 + 1];
  }
  while ( 1 )
  {
    if ( (*(_BYTE *)(_HMPheFromObject(Valid) + 25) & 1) != 0
      || v10 == 14 && *((_QWORD *)Valid + 2) && (unsigned __int8)IsSpatialDelegationEnabledForThread()
      || v10 == 13 && (v13 = *((_QWORD *)Valid + 2)) != 0 && (unsigned __int8)IsKeyboardDelegationEnabledForThread(v13) )
    {
      Valid = (struct tagHOOK *)PhkNextValid(Valid);
      goto LABEL_127;
    }
    if ( (_QWORD)v88 )
      *(_DWORD *)v88 = *((_DWORD *)Valid + 16) & 2;
    v14 = *((int *)Valid + 12);
    v15 = byte_1C02DF859[v14];
    if ( (_DWORD)v14 == 10 )
    {
      if ( (*(_DWORD *)(gptiCurrent + 480LL) & 8) != 0 && ((v6 - 4) & 0xFFFFFFF3) == 0 && v6 != 16 )
        v15 |= 0x10u;
      if ( (*(_DWORD *)(gptiCurrent + 480LL) & 4) != 0 && v6 == 11 )
        v15 |= 0x10u;
    }
    v16 = *((_QWORD *)Valid + 2);
    v24 = 0;
    if ( v16 != gptiCurrent )
    {
      if ( (v15 & 0x24) != 0
        || (v17 = *(_DWORD *)(gptiCurrent + 480LL) & 0x100, (*(_DWORD *)(v16 + 480) & 0x100) != v17)
        || v17
        && (ProcessMachine = PsWow64GetProcessMachine(**(_QWORD **)(v16 + 416)),
            (unsigned __int16)PsWow64GetProcessMachine(**(_QWORD **)(gptiCurrent + 416LL)) != ProcessMachine)
        || (*(_DWORD *)(gptiCurrent + 480LL) & 0xC) != 0
        && *(_QWORD *)(*((_QWORD *)Valid + 2) + 416LL) != *(_QWORD *)(gptiCurrent + 416LL)
        || (unsigned int)IsProcessDwm(**(_QWORD **)(*((_QWORD *)Valid + 2) + 416LL))
        || !(unsigned __int8)Enforced(v19)
        && (*((_DWORD *)Valid + 16) & 1) != 0
        && ((v20 = *(_QWORD *)(*((_QWORD *)Valid + 2) + 416LL),
             v21 = *(_QWORD *)(gptiCurrent + 416LL),
             v22 = *(_DWORD *)(v20 + 772),
             v22 != *(_DWORD *)(v21 + 772))
         || *(_DWORD *)(v20 + 776) != *(_DWORD *)(v21 + 776))
        && (*(_DWORD *)(gptiCurrent + 480LL) & 0x400000) == 0
        && (v22 != luidSystem[0] || *(_DWORD *)(v20 + 776) != luidSystem[1])
        || (v23 = (_QWORD *)*((_QWORD *)Valid + 2), v23[52] != *(_QWORD *)(gptiCurrent + 416LL))
        && (unsigned __int8)IsRestricted(*v23) )
      {
        v24 = 1;
      }
    }
    if ( (unsigned int)(*((_DWORD *)Valid + 12) - 13) <= 1 )
    {
      if ( a6
        || !gpqForeground
        || (unsigned __int8)CheckAccess(*(_QWORD *)(*((_QWORD *)Valid + 2) + 416LL) + 872LL, gpqForeground + 436LL)
        || (unsigned int)IsForegroundShellFrameQueueAccessible(*((const struct tagTHREADINFO **)Valid + 2))
        || (v26 = *((_QWORD *)Valid + 2), *(int *)(*(_QWORD *)(v26 + 416) + 12LL) < 0) )
      {
        if ( *((_DWORD *)Valid + 12) != 14 )
          goto LABEL_84;
        if ( *(_DWORD *)(gptiCurrent + 1368LL) == -1 )
          goto LABEL_84;
        if ( (unsigned __int8)CheckAccess(*(_QWORD *)(*((_QWORD *)Valid + 2) + 416LL) + 872LL, gptiCurrent + 1368LL) )
          goto LABEL_84;
        v26 = *((_QWORD *)Valid + 2);
        if ( *(int *)(*(_QWORD *)(v26 + 416) + 12LL) < 0 )
          goto LABEL_84;
        v28 = *(_QWORD *)(gptiCurrent + 1368LL);
        v27 = 0LL;
      }
      else
      {
        v27 = gpqForeground;
        v28 = *(_QWORD *)(gpqForeground + 436LL);
      }
      EtwTraceUIPIInputError(v26, 0LL, v27, v28, 6);
      v15 &= ~0x10u;
      goto LABEL_84;
    }
    if ( !(unsigned __int8)CheckAccess(
                             *(_QWORD *)(*((_QWORD *)Valid + 2) + 416LL) + 872LL,
                             *(_QWORD *)(gptiCurrent + 416LL) + 872LL) )
    {
      v25 = *((_QWORD *)Valid + 2);
      if ( *(int *)(*(_QWORD *)(v25 + 416) + 12LL) >= 0 )
      {
        v15 &= ~0x10u;
        EtwTraceUIPIHookError(Valid, v15, v25, gptiCurrent, v10, a2, v74, v76);
      }
      v24 = 1;
    }
LABEL_84:
    if ( !v24
      && (*((_DWORD *)Valid + 16) & 1) != 0
      && !(unsigned int)IsImmersiveBroker(*(_QWORD *)(*((_QWORD *)Valid + 2) + 416LL)) )
    {
      v29 = *(_QWORD *)(*((_QWORD *)Valid + 2) + 416LL);
      if ( *(int *)(v29 + 12) >= 0 )
      {
        v30 = *(_QWORD *)(gptiCurrent + 416LL);
        if ( v29 != v30 && (*(_DWORD *)(v29 + 812) & 0x100) == 0 )
        {
          if ( (unsigned int)IsImmersiveAppRestricted(v30)
            || (ProcessInformation = 6LL,
                ZwQueryInformationProcess(
                  (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                  ProcessCookie|ProcessUserModeIOPL,
                  &ProcessInformation,
                  8u,
                  0LL) < 0)
            || (ProcessInformation & 0x100000000LL) != 0 )
          {
            v24 = 1;
          }
        }
      }
    }
    v89 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v89;
    v90 = Valid;
    HMLockObject(Valid);
    if ( v24 )
    {
      v6 = a2;
      if ( (v15 & 0x10) != 0 )
      {
        v84 = 0;
        v85 = v76;
        v82 = Valid;
        v83 = a2;
        v86 = -1LL;
        v87 = -1LL;
        if ( (*(_DWORD *)(*((_QWORD *)Valid + 2) + 1224LL) & 0x20) == 0 )
        {
          v52 = *(_QWORD *)(gptiCurrent + 680LL);
          v79 = *(_QWORD *)(gptiCurrent + 408LL);
          *(_QWORD *)(gptiCurrent + 408LL) = &v79;
          v80 = v52;
          if ( v52 )
            HMLockObject(v52);
          *(_QWORD *)&v88 = gptiCurrent + 680LL;
          *((_QWORD *)&v88 + 1) = Valid;
          v76 = v88;
          HMAssignmentLock(&v76);
          if ( *(_QWORD *)(gptiCurrent + 472LL) )
          {
            v53 = (_QWORD *)PhkNextValid(Valid);
            v8 = *(_QWORD *)(v54 + 48);
            v78 = v8;
            if ( v53 )
              v53 = (_QWORD *)*v53;
            *(_QWORD *)(v54 + 48) = v53;
          }
          v55 = v15 & 0x20;
          if ( (v15 & 0x20) != 0 )
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
          if ( v55 || (v15 & 4) == 0 && (*(_DWORD *)(gptiCurrent + 480LL) & 0xC) != 0 )
          {
            v96 = 0LL;
            v97 = 0LL;
            v98 = 0;
            v95 = 2;
            v99 = 2;
            v100 = ProcessorHistory_high;
            v101 = &v73;
            if ( v55 )
            {
              v86 = *(_QWORD *)(gptiCurrent + 1360LL);
              v87 = *(_QWORD *)(gptiCurrent + 1368LL);
              v85 = *(_QWORD *)(gptiCurrent + 1376LL);
            }
            if ( (*(_DWORD *)(gptiCurrent + 480LL) & 0x20000) != 0
              || (unsigned int)IsThreadHung(*((_QWORD *)Valid + 2), 0LL)
              || (LODWORD(v71) = 1,
                  LODWORD(ReturnLength) = 1,
                  !xxxInterSendMsgEx(0LL, 788LL, (_QWORD)v74, &v82, ReturnLength, *((_QWORD *)Valid + 2), &v95, v71, 0)) )
            {
              v61 = dword_1C02E0DF0[v75 + 1];
              v73 = v61;
            }
            else
            {
              v61 = v73;
            }
            if ( v55 && v61 )
            {
              _InterlockedExchange(
                (volatile __int32 *)(*(_QWORD *)(*((_QWORD *)Valid + 2) + 440LL) + 12LL),
                (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
              v8 = v78;
            }
          }
          else
          {
            memset(v92, 0, sizeof(v92));
            v57 = PsChargeProcessWakeCounter(**(_QWORD **)(*((_QWORD *)Valid + 2) + 416LL), 0LL, 2LL);
            v58 = v57;
            if ( v57 )
              PushW32ThreadLock(v57, v92, (__int64)ReleaseWakeReference);
            LODWORD(v71) = 1;
            LODWORD(ReturnLength) = 1;
            v73 = xxxInterSendMsgEx(0LL, 788LL, (_QWORD)v74, &v82, ReturnLength, *((_QWORD *)Valid + 2), 0LL, v71, 0);
            if ( v58 )
              PopAndFreeAlwaysW32ThreadLock((__int64)v92, v59, v60);
          }
          *(_QWORD *)&v74 = gptiCurrent + 680LL;
          *((_QWORD *)&v74 + 1) = v52;
          v104 = v74;
          HMAssignmentLock(&v104);
          v65 = *(_QWORD *)(gptiCurrent + 472LL);
          if ( v65 )
            *(_QWORD *)(v65 + 48) = v8;
          ThreadUnlock1(v63, v62, v64);
          goto LABEL_164;
        }
      }
      goto LABEL_166;
    }
    v33 = *((unsigned int *)Valid + 17);
    if ( (_DWORD)v33 != -1 )
    {
      v34 = *(unsigned int *)(*(_QWORD *)(gptiCurrent + 416LL) + 404LL);
      if ( !_bittest((const int *)&v34, v33) )
      {
        CurrentProcess = PsGetCurrentProcess(v34, v33, v31, v32);
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
    v106 = 0LL;
    v107 = 0LL;
    v108 = 0LL;
    ThreadId = (unsigned int)PsGetThreadId((PETHREAD)*gptiCurrent);
    v6 = a2;
    LODWORD(v108) = a2;
    v107 = v74;
    v36 = v76;
    v106 = v76;
    if ( !(unsigned int)xxxCallHook(0, *((int *)Valid + 12), (__int64)&ThreadId, 9) )
      goto LABEL_105;
LABEL_166:
    Valid = (struct tagHOOK *)PhkNextValid(Valid);
    v69 = ThreadUnlock1(v67, v66, v68);
    if ( v69 && (*(_DWORD *)(v69 + 64) & 0x10) != 0 )
      FreeHook((struct tagHOOK *)v69);
LABEL_127:
    if ( !Valid )
      return dword_1C02E0DF0[v10 + 1];
  }
  v36 = v76;
LABEL_105:
  v37 = *(_QWORD *)(gptiCurrent + 680LL);
  v79 = *(_QWORD *)(gptiCurrent + 408LL);
  *(_QWORD *)(gptiCurrent + 408LL) = &v79;
  v80 = v37;
  if ( v37 )
    HMLockObject(v37);
  v38 = *(_QWORD *)(gptiCurrent + 472LL);
  if ( !v38 )
    goto LABEL_121;
  v39 = Valid;
  while ( 2 )
  {
    if ( *((_QWORD *)v39 + 5) )
    {
      v39 = (struct tagHOOK *)*((_QWORD *)v39 + 5);
LABEL_113:
      if ( !v39 || (*((_DWORD *)v39 + 16) & 0x80u) == 0 )
        goto LABEL_117;
      continue;
    }
    break;
  }
  if ( (*((_DWORD *)v39 + 16) & 1) == 0 )
  {
    v39 = *(struct tagHOOK **)(*(_QWORD *)(gptiCurrent + 456LL) + 8LL * *((int *)v39 + 12) + 48);
    goto LABEL_113;
  }
  v39 = 0LL;
LABEL_117:
  v8 = *(_QWORD *)(v38 + 48);
  v78 = v8;
  if ( v39 )
    v40 = *(_QWORD *)v39;
  else
    v40 = 0LL;
  *(_QWORD *)(v38 + 48) = v40;
LABEL_121:
  *(_QWORD *)&v93 = gptiCurrent + 680LL;
  *((_QWORD *)&v93 + 1) = Valid;
  v102 = v93;
  HMAssignmentLock(&v102);
  v73 = xxxHkCallHook(Valid, a2, v74, v36);
  *(_QWORD *)&v94 = gptiCurrent + 680LL;
  *((_QWORD *)&v94 + 1) = v37;
  v103 = v94;
  HMAssignmentLock(&v103);
  v44 = *(_QWORD *)(gptiCurrent + 472LL);
  if ( v44 )
    *(_QWORD *)(v44 + 48) = v8;
  ThreadUnlock1(v42, v41, v43);
  if ( (*((_DWORD *)Valid + 16) & 0x10) != 0 )
  {
    Valid = (struct tagHOOK *)PhkNextValid(Valid);
    v51 = (struct tagHOOK *)ThreadUnlock1(v49, v48, v50);
    if ( v51 )
      FreeHook(v51);
    v6 = a2;
    goto LABEL_127;
  }
LABEL_164:
  ThreadUnlock1(v46, v45, v47);
  return v73;
}
