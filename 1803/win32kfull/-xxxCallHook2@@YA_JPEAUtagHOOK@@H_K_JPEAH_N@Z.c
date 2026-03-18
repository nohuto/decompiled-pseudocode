/*
 * XREFs of ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z @ 0x1C013A3EC
 * Callers:
 *     fnHkINLPCWPEXSTRUCT @ 0x1C003BB40 (fnHkINLPCWPEXSTRUCT.c)
 *     xxxReceiveMessage @ 0x1C0049610 (xxxReceiveMessage.c)
 *     ?xxxMoveEventAbsolute@@YA?AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHH@Z @ 0x1C0069DB0 (-xxxMoveEventAbsolute@@YA-AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHH@.c)
 *     xxxCallMouseHook @ 0x1C00D7154 (xxxCallMouseHook.c)
 *     EditionLLMouseButtonHook @ 0x1C00D73E0 (EditionLLMouseButtonHook.c)
 *     EditionKeyEventLLHook @ 0x1C00D7DB0 (EditionKeyEventLLHook.c)
 *     xxxCallNextHookEx @ 0x1C0129AEC (xxxCallNextHookEx.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C013B040 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     EditionLLMouseWheelHook @ 0x1C01A6E90 (EditionLLMouseWheelHook.c)
 *     xxxCallJournalPlaybackHook @ 0x1C01B052C (xxxCallJournalPlaybackHook.c)
 *     xxxCallJournalRecordHook @ 0x1C01B0924 (xxxCallJournalRecordHook.c)
 *     xxxPointerCallHook @ 0x1C01B89EC (xxxPointerCallHook.c)
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C001B160 (PopAndFreeAlwaysW32ThreadLock.c)
 *     IsPointerInputHookCall @ 0x1C0023D9C (IsPointerInputHookCall.c)
 *     PhkNextValid @ 0x1C003BC60 (PhkNextValid.c)
 *     xxxHkCallHook @ 0x1C0042460 (xxxHkCallHook.c)
 *     xxxInterSendMsgEx @ 0x1C0044BF0 (xxxInterSendMsgEx.c)
 *     PushW32ThreadLock @ 0x1C005D730 (PushW32ThreadLock.c)
 *     IsThreadHung @ 0x1C00612F0 (IsThreadHung.c)
 *     FreeHook @ 0x1C00D7BB0 (FreeHook.c)
 *     xxxLoadHmodIndex @ 0x1C00D86B0 (xxxLoadHmodIndex.c)
 *     IsForegroundShellFrameQueueAccessible @ 0x1C0135F88 (IsForegroundShellFrameQueueAccessible.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C013B040 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 *     SetLastNtError @ 0x1C0216FE0 (SetLastNtError.c)
 */

__int64 __fastcall xxxCallHook2(struct tagHOOK *a1, unsigned int a2, __int64 a3, unsigned int *a4, int *a5, bool a6)
{
  unsigned int v6; // r14d
  struct tagHOOK *Valid; // rdi
  int v9; // r12d
  __int64 v10; // rcx
  __int64 v11; // rcx
  int v12; // edx
  char v13; // r13
  __int64 v14; // r14
  int v15; // ecx
  __int16 ProcessMachine; // bx
  __int64 v17; // rdx
  __int64 v18; // rax
  int v19; // ecx
  _QWORD *v20; // rcx
  BOOL v21; // ebx
  __int64 v22; // rdx
  __int64 v23; // r11
  __int64 v24; // r10
  __int64 v25; // r8
  __int64 v26; // r8
  __int64 v27; // rcx
  __int64 v28; // r9
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rcx
  __int64 v33; // r10
  __int64 v34; // r8
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 CurrentProcess; // rax
  __int64 v40; // rdx
  __int64 v41; // r13
  __int64 v42; // rbx
  _QWORD *v43; // rax
  __int64 v44; // r8
  __int64 v45; // rdx
  __int64 v46; // r8
  __int64 v47; // rcx
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  struct tagHOOK *v54; // rax
  int v55; // r15d
  __int64 v56; // r14
  _QWORD *v57; // rax
  __int64 v58; // r8
  char v59; // bl
  __int64 v60; // rax
  __int64 v61; // rbx
  __int64 v62; // rdx
  __int64 v63; // r8
  __int64 v64; // rcx
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // rax
  PULONG ReturnLength; // [rsp+20h] [rbp-248h]
  __int64 v70; // [rsp+38h] [rbp-230h]
  __int64 v72; // [rsp+58h] [rbp-210h] BYREF
  __int64 v73; // [rsp+60h] [rbp-208h]
  __int64 v74; // [rsp+68h] [rbp-200h]
  __int64 v75; // [rsp+70h] [rbp-1F8h]
  int v76; // [rsp+90h] [rbp-1D8h]
  int ProcessInformation; // [rsp+A0h] [rbp-1C8h] BYREF
  char v78; // [rsp+A4h] [rbp-1C4h]
  int *v79; // [rsp+B8h] [rbp-1B0h]
  __int64 v80; // [rsp+C0h] [rbp-1A8h] BYREF
  __int64 v81; // [rsp+C8h] [rbp-1A0h]
  struct tagHOOK *v82; // [rsp+D8h] [rbp-190h] BYREF
  unsigned int v83; // [rsp+E0h] [rbp-188h]
  __int64 v84; // [rsp+E8h] [rbp-180h]
  __int64 v85; // [rsp+F0h] [rbp-178h]
  __int64 v86; // [rsp+F8h] [rbp-170h]
  __int128 v87; // [rsp+100h] [rbp-168h]
  __int128 v88; // [rsp+110h] [rbp-158h]
  __int128 v89; // [rsp+120h] [rbp-148h]
  __int128 v90; // [rsp+130h] [rbp-138h]
  __int128 v91; // [rsp+150h] [rbp-118h] BYREF
  __int128 v92; // [rsp+160h] [rbp-108h] BYREF
  __int128 v93; // [rsp+170h] [rbp-F8h] BYREF
  __int128 v94; // [rsp+180h] [rbp-E8h] BYREF
  _QWORD v95[4]; // [rsp+198h] [rbp-D0h] BYREF
  _DWORD v96[10]; // [rsp+1B8h] [rbp-B0h] BYREF
  __int64 *v97; // [rsp+1E0h] [rbp-88h]
  _QWORD v98[3]; // [rsp+1E8h] [rbp-80h] BYREF
  __int64 v99[4]; // [rsp+200h] [rbp-68h] BYREF

  v73 = (__int64)a4;
  v74 = a3;
  v6 = a2;
  Valid = a1;
  v79 = a5;
  v75 = 0LL;
  if ( !a1 )
    return 0LL;
  v9 = *((_DWORD *)a1 + 12);
  v76 = v9;
  if ( gptiCurrent == gptiRit && (unsigned int)(v9 - 13) > 1 )
    return 0LL;
  if ( (*(_DWORD *)(gptiCurrent + 480LL) & 0x10000001) != 0
    || !*(_QWORD *)(gptiCurrent + 448LL) && v9 != 14
    || (unsigned int)IsPointerInputHookCall(v9, a4) && (((v9 - 3) & 0xFFFFFFF6) != 0 || v9 == 11) )
  {
    return dword_1C02DE520[v9 + 1];
  }
  while ( 1 )
  {
    if ( (*(_BYTE *)(LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)Valid + gSharedInfo[1] + 25LL) & 1) != 0
      || v9 == 14 && (v10 = *((_QWORD *)Valid + 2)) != 0 && (unsigned __int8)IsSpatialDelegationEnabledForThread(v10)
      || v9 == 13 && (v11 = *((_QWORD *)Valid + 2)) != 0 && (unsigned __int8)IsKeyboardDelegationEnabledForThread(v11) )
    {
      Valid = (struct tagHOOK *)PhkNextValid((__int64)Valid);
      goto LABEL_113;
    }
    if ( v79 )
      *v79 = *((_DWORD *)Valid + 16) & 2;
    v12 = *((_DWORD *)Valid + 12);
    v13 = byte_1C02DD0A8[v12 + 1];
    if ( v12 == 10 )
    {
      if ( (*(_DWORD *)(gptiCurrent + 480LL) & 8) != 0 && ((v6 - 4) & 0xFFFFFFF3) == 0 && v6 != 16 )
        v13 |= 0x10u;
      if ( (*(_DWORD *)(gptiCurrent + 480LL) & 4) != 0 && v6 == 11 )
        v13 |= 0x10u;
    }
    v14 = *((_QWORD *)Valid + 2);
    v21 = 0;
    if ( v14 != gptiCurrent )
    {
      if ( (v13 & 0x24) != 0
        || (v15 = *(_DWORD *)(gptiCurrent + 480LL) & 0x100, (*(_DWORD *)(v14 + 480) & 0x100) != v15)
        || v15
        && (ProcessMachine = PsWow64GetProcessMachine(**(_QWORD **)(gptiCurrent + 416LL)),
            ProcessMachine != (unsigned __int16)PsWow64GetProcessMachine(**(_QWORD **)(v14 + 416)))
        || (*(_DWORD *)(gptiCurrent + 480LL) & 0xC) != 0
        && *(_QWORD *)(*((_QWORD *)Valid + 2) + 416LL) != *(_QWORD *)(gptiCurrent + 416LL)
        || (unsigned int)IsProcessDwm(**(_QWORD **)(*((_QWORD *)Valid + 2) + 416LL))
        || !gbEnforceUIPI
        && (*((_DWORD *)Valid + 16) & 1) != 0
        && ((v17 = *(_QWORD *)(*((_QWORD *)Valid + 2) + 416LL),
             v18 = *(_QWORD *)(gptiCurrent + 416LL),
             v19 = *(_DWORD *)(v17 + 772),
             v19 != *(_DWORD *)(v18 + 772))
         || *(_DWORD *)(v17 + 776) != *(_DWORD *)(v18 + 776))
        && (*(_DWORD *)(gptiCurrent + 480LL) & 0x400000) == 0
        && (v19 != luidSystem[0] || *(_DWORD *)(v17 + 776) != luidSystem[1])
        || (v20 = (_QWORD *)*((_QWORD *)Valid + 2), v20[52] != *(_QWORD *)(gptiCurrent + 416LL))
        && (unsigned __int8)IsRestricted(*v20) )
      {
        v21 = 1;
      }
    }
    if ( (unsigned int)(*((_DWORD *)Valid + 12) - 13) <= 1 )
    {
      if ( a6
        || !gpqForeground
        || (v26 = *(_QWORD *)(gpqForeground + 428LL),
            v27 = *((_QWORD *)Valid + 2),
            v28 = *(_QWORD *)(*(_QWORD *)(v27 + 416) + 872LL),
            !gbEnforceUIPI)
        || (unsigned int)v28 > (unsigned int)v26
        || (_DWORD)v28 == (_DWORD)v26 && (HIDWORD(v28) == HIDWORD(v26) || HIDWORD(v28) == -1 || HIDWORD(v26) == -1)
        || IsForegroundShellFrameQueueAccessible(v27)
        || (v29 = *((_QWORD *)Valid + 2), *(int *)(*(_QWORD *)(v29 + 416) + 12LL) < 0) )
      {
        if ( *((_DWORD *)Valid + 12) != 14 )
          goto LABEL_80;
        if ( *(_DWORD *)(gptiCurrent + 1352LL) == -1 )
          goto LABEL_80;
        v32 = *(_QWORD *)(gptiCurrent + 1352LL);
        v33 = *(_QWORD *)(*((_QWORD *)Valid + 2) + 416LL);
        v34 = *(_QWORD *)(v33 + 872);
        if ( !gbEnforceUIPI
          || (unsigned int)v34 > (unsigned int)v32
          || (_DWORD)v34 == (_DWORD)v32 && (HIDWORD(v34) == HIDWORD(v32) || HIDWORD(v34) == -1 || HIDWORD(v32) == -1) )
        {
          goto LABEL_80;
        }
        if ( *(int *)(v33 + 12) < 0 )
          goto LABEL_80;
        v31 = *(_QWORD *)(gptiCurrent + 1352LL);
        v30 = 0LL;
        v29 = *((_QWORD *)Valid + 2);
      }
      else
      {
        v30 = gpqForeground;
        v31 = *(_QWORD *)(gpqForeground + 428LL);
      }
      EtwTraceUIPIInputError(v29, 0LL, v30, v31, 6);
      v13 &= ~0x10u;
      goto LABEL_80;
    }
    v22 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 872LL);
    v23 = *((_QWORD *)Valid + 2);
    v24 = *(_QWORD *)(v23 + 416);
    v25 = *(_QWORD *)(v24 + 872);
    if ( gbEnforceUIPI
      && (unsigned int)v25 <= (unsigned int)v22
      && ((_DWORD)v25 != (_DWORD)v22 || HIDWORD(v25) != HIDWORD(v22) && HIDWORD(v25) != -1 && HIDWORD(v22) != -1) )
    {
      if ( *(int *)(v24 + 12) >= 0 )
      {
        v13 &= ~0x10u;
        LOBYTE(v22) = v13;
        EtwTraceUIPIHookError(Valid, v22, v23, gptiCurrent, v9, a2, v74, v73);
      }
      v21 = 1;
    }
LABEL_80:
    if ( !v21
      && (*((_DWORD *)Valid + 16) & 1) != 0
      && !(unsigned int)IsImmersiveBroker(*(_QWORD *)(*((_QWORD *)Valid + 2) + 416LL)) )
    {
      v35 = *(_QWORD *)(*((_QWORD *)Valid + 2) + 416LL);
      if ( *(int *)(v35 + 12) >= 0 )
      {
        v36 = *(_QWORD *)(gptiCurrent + 416LL);
        if ( v35 != v36 && (*(_DWORD *)(v35 + 812) & 0x100) == 0 )
        {
          if ( (unsigned int)IsImmersiveAppRestricted(v36)
            || (ProcessInformation = 6,
                ZwQueryInformationProcess(
                  (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                  ProcessCookie|ProcessUserModeIOPL,
                  &ProcessInformation,
                  8u,
                  0LL) < 0)
            || (v78 & 1) != 0 )
          {
            v21 = 1;
          }
        }
      }
    }
    v95[0] = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = v95;
    v95[1] = Valid;
    _InterlockedAdd((volatile signed __int32 *)Valid + 2, 1u);
    if ( v21 )
      break;
    v37 = *((unsigned int *)Valid + 17);
    if ( (_DWORD)v37 != -1 )
    {
      v38 = *(unsigned int *)(*(_QWORD *)(gptiCurrent + 416LL) + 404LL);
      if ( !_bittest((const int *)&v38, v37) )
      {
        CurrentProcess = PsGetCurrentProcess(v38, v37);
        if ( (unsigned int)PsIsProtectedProcess(CurrentProcess)
          || (unsigned int)PsGetWin32KFilterSet() == 5
          || !xxxLoadHmodIndex(*((_DWORD *)Valid + 17), v40) )
        {
          v6 = a2;
          goto LABEL_150;
        }
      }
    }
    if ( ((*(_DWORD *)(**(_QWORD **)(gptiCurrent + 456LL) + 16LL) | *(_DWORD *)(gptiCurrent + 672LL)) & 0x400) == 0
      || *((_DWORD *)Valid + 12) == 9 )
    {
      v41 = v73;
    }
    else
    {
      memset(v99, 0, sizeof(v99));
      v99[0] = (unsigned int)PsGetThreadId((PETHREAD)*gptiCurrent);
      v6 = a2;
      LODWORD(v99[3]) = a2;
      v99[2] = v74;
      v41 = v73;
      v99[1] = v73;
      if ( (unsigned int)xxxCallHook(0, *((int *)Valid + 12), (__int64)v99, 9) )
        goto LABEL_150;
    }
    v42 = *(_QWORD *)(gptiCurrent + 680LL);
    v80 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v80;
    v81 = v42;
    if ( v42 )
      _InterlockedAdd((volatile signed __int32 *)(v42 + 8), 1u);
    if ( *(_QWORD *)(gptiCurrent + 472LL) )
    {
      v43 = (_QWORD *)PhkNextValid((__int64)Valid);
      v75 = *(_QWORD *)(v44 + 48);
      if ( v43 )
        v43 = (_QWORD *)*v43;
      *(_QWORD *)(v44 + 48) = v43;
    }
    *(_QWORD *)&v87 = gptiCurrent + 680LL;
    *((_QWORD *)&v87 + 1) = Valid;
    v91 = v87;
    HMAssignmentLock(&v91);
    v72 = xxxHkCallHook((__int64)Valid, a2, v74, v41);
    *(_QWORD *)&v88 = gptiCurrent + 680LL;
    *((_QWORD *)&v88 + 1) = v42;
    v92 = v88;
    HMAssignmentLock(&v92);
    v47 = *(_QWORD *)(gptiCurrent + 472LL);
    if ( v47 )
      *(_QWORD *)(v47 + 48) = v75;
    ThreadUnlock1(v47, v45, v46);
    if ( (*((_DWORD *)Valid + 16) & 0x10) == 0 )
      goto LABEL_147;
    Valid = (struct tagHOOK *)PhkNextValid((__int64)Valid);
    v54 = (struct tagHOOK *)ThreadUnlock1(v52, v51, v53);
    if ( v54 )
      FreeHook(v54);
    v6 = a2;
LABEL_113:
    if ( !Valid )
      return dword_1C02DE520[v9 + 1];
  }
  v6 = a2;
  if ( (v13 & 0x10) == 0
    || (v55 = 200,
        v84 = v73,
        v82 = Valid,
        v83 = a2,
        v85 = -1LL,
        v86 = -1LL,
        (*(_DWORD *)(*((_QWORD *)Valid + 2) + 1200LL) & 0x20) != 0) )
  {
LABEL_150:
    Valid = (struct tagHOOK *)PhkNextValid((__int64)Valid);
    v68 = ThreadUnlock1(v66, v65, v67);
    if ( v68 && (*(_DWORD *)(v68 + 64) & 0x10) != 0 )
      FreeHook((struct tagHOOK *)v68);
    goto LABEL_113;
  }
  v56 = *(_QWORD *)(gptiCurrent + 680LL);
  v80 = *(_QWORD *)(gptiCurrent + 408LL);
  *(_QWORD *)(gptiCurrent + 408LL) = &v80;
  v81 = v56;
  if ( v56 )
    _InterlockedIncrement((volatile signed __int32 *)(v56 + 8));
  *(_QWORD *)&v89 = gptiCurrent + 680LL;
  *((_QWORD *)&v89 + 1) = Valid;
  v93 = v89;
  HMAssignmentLock(&v93);
  if ( *(_QWORD *)(gptiCurrent + 472LL) )
  {
    v57 = (_QWORD *)PhkNextValid((__int64)Valid);
    v75 = *(_QWORD *)(v58 + 48);
    if ( v57 )
      v57 = (_QWORD *)*v57;
    *(_QWORD *)(v58 + 48) = v57;
  }
  v59 = v13 & 0x20;
  if ( (v13 & 0x20) != 0 )
  {
    v55 = gnllHooksTimeout;
    if ( (*((_BYTE *)Valid + 64) & 0x40) != 0 )
      v55 = 30000;
    if ( *((char *)Valid + 88) < 0 )
      v55 = 20;
  }
  if ( v59 || (v13 & 4) == 0 && (*(_DWORD *)(gptiCurrent + 480LL) & 0xC) != 0 )
  {
    v96[0] = 2;
    v96[8] = 2;
    v96[9] = v55;
    v97 = &v72;
    if ( v59 )
    {
      v85 = *(_QWORD *)(gptiCurrent + 1344LL);
      v86 = *(_QWORD *)(gptiCurrent + 1352LL);
      v84 = *(_QWORD *)(gptiCurrent + 1360LL);
    }
    if ( (*(_DWORD *)(gptiCurrent + 480LL) & 0x20000) != 0
      || (unsigned int)IsThreadHung(*((_QWORD **)Valid + 2), 0)
      || (LODWORD(v70) = 1,
          LODWORD(ReturnLength) = 1,
          !xxxInterSendMsgEx(0LL, 0x314u, v74, &v82, ReturnLength, *((_QWORD *)Valid + 2), v96, v70, 0)) )
    {
      v72 = dword_1C02DE520[v76 + 1];
    }
    if ( v59 && v72 )
      _InterlockedExchange(
        (volatile __int32 *)(*(_QWORD *)(*((_QWORD *)Valid + 2) + 440LL) + 12LL),
        (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
  }
  else
  {
    v60 = PsChargeProcessWakeCounter(**(_QWORD **)(*((_QWORD *)Valid + 2) + 416LL), 0LL, 2LL, 2LL);
    v61 = v60;
    if ( v60 )
      PushW32ThreadLock(v60, v98, (__int64)ReleaseWakeReference);
    LODWORD(v70) = 1;
    LODWORD(ReturnLength) = 1;
    v72 = xxxInterSendMsgEx(0LL, 0x314u, v74, &v82, ReturnLength, *((_QWORD *)Valid + 2), 0LL, v70, 0);
    if ( v61 )
      PopAndFreeAlwaysW32ThreadLock((__int64)v98);
  }
  *(_QWORD *)&v90 = gptiCurrent + 680LL;
  *((_QWORD *)&v90 + 1) = v56;
  v94 = v90;
  HMAssignmentLock(&v94);
  v64 = *(_QWORD *)(gptiCurrent + 472LL);
  if ( v64 )
    *(_QWORD *)(v64 + 48) = v75;
  ThreadUnlock1(v64, v62, v63);
LABEL_147:
  ThreadUnlock1(v49, v48, v50);
  return v72;
}
