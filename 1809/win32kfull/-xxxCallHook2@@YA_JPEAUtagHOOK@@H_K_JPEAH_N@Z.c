/*
 * XREFs of ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z @ 0x1C015CB98
 * Callers:
 *     xxxReceiveMessage @ 0x1C003156C (xxxReceiveMessage.c)
 *     ?xxxMoveEventAbsolute@@YA?AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHH@Z @ 0x1C00A4CCC (-xxxMoveEventAbsolute@@YA-AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHH@.c)
 *     EditionLLMouseButtonHook @ 0x1C00B47C0 (EditionLLMouseButtonHook.c)
 *     EditionKeyEventLLHook @ 0x1C00B5990 (EditionKeyEventLLHook.c)
 *     xxxCallNextHookEx @ 0x1C00B5C2C (xxxCallNextHookEx.c)
 *     xxxCallMouseHook @ 0x1C00B90F0 (xxxCallMouseHook.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C015D880 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     EditionLLMouseWheelHook @ 0x1C01C8ED0 (EditionLLMouseWheelHook.c)
 *     xxxCallJournalPlaybackHook @ 0x1C01D3534 (xxxCallJournalPlaybackHook.c)
 *     xxxCallJournalRecordHook @ 0x1C01D394C (xxxCallJournalRecordHook.c)
 *     xxxPointerCallHook @ 0x1C01DB658 (xxxPointerCallHook.c)
 * Callees:
 *     IsForegroundShellFrameQueueAccessible @ 0x1C0006640 (IsForegroundShellFrameQueueAccessible.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0023060 (PopAndFreeAlwaysW32ThreadLock.c)
 *     xxxHkCallHook @ 0x1C002AC90 (xxxHkCallHook.c)
 *     IsPointerInputHookCall @ 0x1C002E4D0 (IsPointerInputHookCall.c)
 *     xxxInterSendMsgEx @ 0x1C002E6E0 (xxxInterSendMsgEx.c)
 *     PushW32ThreadLock @ 0x1C00AF710 (PushW32ThreadLock.c)
 *     FreeHook @ 0x1C00B5770 (FreeHook.c)
 *     PhkNextValid @ 0x1C00B5C80 (PhkNextValid.c)
 *     xxxLoadHmodIndex @ 0x1C00B5F5C (xxxLoadHmodIndex.c)
 *     IsThreadHung @ 0x1C00D0CAC (IsThreadHung.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C015D880 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     memset @ 0x1C0163640 (memset.c)
 *     SetLastNtError @ 0x1C0240D54 (SetLastNtError.c)
 */

__int64 __fastcall xxxCallHook2(struct tagHOOK *a1, unsigned int a2, __int64 a3, unsigned int *a4, int *a5, bool a6)
{
  unsigned int v6; // r14d
  struct tagHOOK *Valid; // rdi
  int v8; // r12d
  unsigned __int64 v9; // r9
  __int64 v11; // r8
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  char v15; // r13
  __int64 v16; // r14
  int v17; // ecx
  __int16 ProcessMachine; // bx
  __int64 v19; // rdx
  __int64 v20; // rax
  int v21; // ecx
  _QWORD *v22; // rcx
  BOOL v23; // ebx
  unsigned __int64 v24; // rdx
  __int64 v25; // r11
  __int64 v26; // r10
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  unsigned __int64 v31; // rcx
  __int64 v32; // r10
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 CurrentProcess; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // rdx
  __int64 v42; // r13
  __int64 v43; // rbx
  _QWORD *v44; // rax
  __int64 v45; // r8
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // rdx
  __int64 v51; // rcx
  struct tagHOOK *v52; // rax
  int v53; // r15d
  __int64 v54; // r14
  _QWORD *v55; // rax
  __int64 v56; // r8
  char v57; // bl
  __int64 v58; // rax
  __int64 v59; // rbx
  __int64 v60; // rdx
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // rax
  PULONG ReturnLength; // [rsp+20h] [rbp-238h]
  __int64 v67; // [rsp+38h] [rbp-220h]
  __int64 v69; // [rsp+58h] [rbp-200h] BYREF
  __int64 v70; // [rsp+60h] [rbp-1F8h]
  __int64 v71; // [rsp+68h] [rbp-1F0h]
  __int64 v72; // [rsp+70h] [rbp-1E8h]
  __int128 v73; // [rsp+80h] [rbp-1D8h]
  int v74; // [rsp+A8h] [rbp-1B0h]
  int ProcessInformation; // [rsp+B8h] [rbp-1A0h] BYREF
  char v76; // [rsp+BCh] [rbp-19Ch]
  int *v77; // [rsp+D0h] [rbp-188h]
  __int64 v78; // [rsp+D8h] [rbp-180h] BYREF
  __int64 v79; // [rsp+E0h] [rbp-178h]
  struct tagHOOK *v80; // [rsp+F0h] [rbp-168h] BYREF
  unsigned int v81; // [rsp+F8h] [rbp-160h]
  __int64 v82; // [rsp+100h] [rbp-158h]
  __int64 v83; // [rsp+108h] [rbp-150h]
  __int64 v84; // [rsp+110h] [rbp-148h]
  __int128 v85; // [rsp+120h] [rbp-138h]
  __int128 v86; // [rsp+150h] [rbp-108h] BYREF
  __int128 v87; // [rsp+160h] [rbp-F8h] BYREF
  __int128 v88; // [rsp+170h] [rbp-E8h] BYREF
  __int128 v89; // [rsp+180h] [rbp-D8h] BYREF
  _QWORD v90[3]; // [rsp+190h] [rbp-C8h] BYREF
  _DWORD v91[10]; // [rsp+1A8h] [rbp-B0h] BYREF
  __int64 *v92; // [rsp+1D0h] [rbp-88h]
  _QWORD v93[3]; // [rsp+1D8h] [rbp-80h] BYREF
  __int64 v94[4]; // [rsp+1F0h] [rbp-68h] BYREF

  v70 = (__int64)a4;
  v71 = a3;
  v6 = a2;
  Valid = a1;
  v77 = a5;
  v72 = 0LL;
  if ( !a1 )
    return 0LL;
  v8 = *((_DWORD *)a1 + 12);
  v74 = v8;
  if ( gptiCurrent == gptiRit && (unsigned int)(v8 - 13) > 1 )
    return 0LL;
  if ( (*(_DWORD *)(gptiCurrent + 488LL) & 0x10000001) != 0
    || !*(_QWORD *)(gptiCurrent + 456LL) && v8 != 14
    || (unsigned int)IsPointerInputHookCall(v8, a4) && (((v8 - 3) & 0xFFFFFFF6) != 0 || v8 == 11) )
  {
    return dword_1C02CF720[v8 + 1];
  }
  while ( 1 )
  {
    v11 = gSharedInfo[0];
    if ( (*(_BYTE *)(LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)Valid + gSharedInfo[1] + 25LL) & 1) != 0
      || v8 == 14 && (v12 = *((_QWORD *)Valid + 2)) != 0 && (unsigned __int8)IsSpatialDelegationEnabledForThread(v12)
      || v8 == 13 && (v13 = *((_QWORD *)Valid + 2)) != 0 && (unsigned __int8)IsKeyboardDelegationEnabledForThread(v13) )
    {
      Valid = (struct tagHOOK *)PhkNextValid((__int64)Valid);
      goto LABEL_113;
    }
    if ( v77 )
      *v77 = *((_DWORD *)Valid + 16) & 2;
    v14 = *((int *)Valid + 12);
    v15 = byte_1C02CDED9[v14];
    if ( (_DWORD)v14 == 10 )
    {
      if ( (*(_DWORD *)(gptiCurrent + 488LL) & 8) != 0 && ((v6 - 4) & 0xFFFFFFF3) == 0 && v6 != 16 )
        v15 |= 0x10u;
      if ( (*(_DWORD *)(gptiCurrent + 488LL) & 4) != 0 && v6 == 11 )
        v15 |= 0x10u;
    }
    v16 = *((_QWORD *)Valid + 2);
    v23 = 0;
    if ( v16 != gptiCurrent )
    {
      if ( (v15 & 0x24) != 0
        || (v17 = *(_DWORD *)(gptiCurrent + 488LL) & 0x100, (*(_DWORD *)(v16 + 488) & 0x100) != v17)
        || v17
        && (ProcessMachine = PsWow64GetProcessMachine(**(_QWORD **)(gptiCurrent + 424LL)),
            ProcessMachine != (unsigned __int16)PsWow64GetProcessMachine(**(_QWORD **)(v16 + 424)))
        || (*(_DWORD *)(gptiCurrent + 488LL) & 0xC) != 0
        && *(_QWORD *)(*((_QWORD *)Valid + 2) + 424LL) != *(_QWORD *)(gptiCurrent + 424LL)
        || (unsigned int)IsProcessDwm(**(_QWORD **)(*((_QWORD *)Valid + 2) + 424LL))
        || !gbEnforceUIPI
        && (*((_DWORD *)Valid + 16) & 1) != 0
        && ((v19 = *(_QWORD *)(*((_QWORD *)Valid + 2) + 424LL),
             v20 = *(_QWORD *)(gptiCurrent + 424LL),
             v21 = *(_DWORD *)(v19 + 780),
             v21 != *(_DWORD *)(v20 + 780))
         || *(_DWORD *)(v19 + 784) != *(_DWORD *)(v20 + 784))
        && (*(_DWORD *)(gptiCurrent + 488LL) & 0x400000) == 0
        && (v21 != luidSystem[0] || *(_DWORD *)(v19 + 784) != luidSystem[1])
        || (v22 = (_QWORD *)*((_QWORD *)Valid + 2), v22[53] != *(_QWORD *)(gptiCurrent + 424LL))
        && (unsigned __int8)IsRestricted(*v22) )
      {
        v23 = 1;
      }
    }
    if ( (unsigned int)(*((_DWORD *)Valid + 12) - 13) <= 1 )
    {
      if ( a6
        || !gpqForeground
        || (v11 = *(_QWORD *)(gpqForeground + 428LL),
            v27 = *((_QWORD *)Valid + 2),
            v9 = *(_QWORD *)(*(_QWORD *)(v27 + 424) + 880LL),
            !gbEnforceUIPI)
        || (unsigned int)v9 > (unsigned int)v11
        || (_DWORD)v9 == (_DWORD)v11 && (HIDWORD(v9) == HIDWORD(v11) || HIDWORD(v9) == -1 || HIDWORD(v11) == -1)
        || IsForegroundShellFrameQueueAccessible(v27)
        || (v28 = *((_QWORD *)Valid + 2), *(int *)(*(_QWORD *)(v28 + 424) + 12LL) < 0) )
      {
        if ( *((_DWORD *)Valid + 12) != 14 )
          goto LABEL_80;
        if ( *(_DWORD *)(gptiCurrent + 1344LL) == -1 )
          goto LABEL_80;
        v31 = *(_QWORD *)(gptiCurrent + 1344LL);
        v9 = HIDWORD(v31);
        v32 = *(_QWORD *)(*((_QWORD *)Valid + 2) + 424LL);
        v11 = *(_QWORD *)(v32 + 880);
        if ( !gbEnforceUIPI
          || (unsigned int)v11 > (unsigned int)v31
          || (_DWORD)v11 == (_DWORD)v31 && (HIDWORD(v11) == HIDWORD(v31) || HIDWORD(v11) == -1 || HIDWORD(v31) == -1) )
        {
          goto LABEL_80;
        }
        if ( *(int *)(v32 + 12) < 0 )
          goto LABEL_80;
        v30 = *(_QWORD *)(gptiCurrent + 1344LL);
        v29 = 0LL;
        v28 = *((_QWORD *)Valid + 2);
      }
      else
      {
        v29 = gpqForeground;
        v30 = *(_QWORD *)(gpqForeground + 428LL);
      }
      EtwTraceUIPIInputError(v28, 0LL, v29, v30, 6);
      v15 &= ~0x10u;
      goto LABEL_80;
    }
    v24 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 880LL);
    v9 = HIDWORD(v24);
    v25 = *((_QWORD *)Valid + 2);
    v26 = *(_QWORD *)(v25 + 424);
    v11 = *(_QWORD *)(v26 + 880);
    if ( gbEnforceUIPI
      && (unsigned int)v11 <= (unsigned int)v24
      && ((_DWORD)v11 != (_DWORD)v24 || HIDWORD(v11) != HIDWORD(v24) && HIDWORD(v11) != -1 && HIDWORD(v24) != -1) )
    {
      if ( *(int *)(v26 + 12) >= 0 )
      {
        v15 &= ~0x10u;
        LOBYTE(v24) = v15;
        EtwTraceUIPIHookError(Valid, v24, v25, gptiCurrent, v8, a2, v71, v70);
      }
      v23 = 1;
    }
LABEL_80:
    if ( !v23
      && (*((_DWORD *)Valid + 16) & 1) != 0
      && !(unsigned int)IsImmersiveBroker(*(_QWORD *)(*((_QWORD *)Valid + 2) + 424LL)) )
    {
      v33 = *(_QWORD *)(*((_QWORD *)Valid + 2) + 424LL);
      if ( *(int *)(v33 + 12) >= 0 )
      {
        v34 = *(_QWORD *)(gptiCurrent + 424LL);
        if ( v33 != v34 && (*(_DWORD *)(v33 + 820) & 0x100) == 0 )
        {
          if ( (unsigned int)IsImmersiveAppRestricted(v34)
            || (ProcessInformation = 6,
                ZwQueryInformationProcess(
                  (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                  ProcessCookie|ProcessUserModeIOPL,
                  &ProcessInformation,
                  8u,
                  0LL) < 0)
            || (v76 & 1) != 0 )
          {
            v23 = 1;
          }
        }
      }
    }
    v90[0] = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = v90;
    v90[1] = Valid;
    _InterlockedAdd((volatile signed __int32 *)Valid + 2, 1u);
    if ( v23 )
      break;
    v35 = *((unsigned int *)Valid + 17);
    if ( (_DWORD)v35 != -1 )
    {
      v36 = *(unsigned int *)(*(_QWORD *)(gptiCurrent + 424LL) + 412LL);
      if ( !_bittest((const int *)&v36, v35) )
      {
        CurrentProcess = PsGetCurrentProcess(v36, v35, v11, v9);
        if ( (unsigned int)PsIsProtectedProcess(CurrentProcess)
          || (unsigned int)PsGetWin32KFilterSet(v39, v38, v40) == 5
          || !xxxLoadHmodIndex(*((_DWORD *)Valid + 17), v41) )
        {
          v6 = a2;
          goto LABEL_150;
        }
      }
    }
    if ( ((*(_DWORD *)(**(_QWORD **)(gptiCurrent + 464LL) + 16LL) | *(_DWORD *)(gptiCurrent + 680LL)) & 0x400) == 0
      || *((_DWORD *)Valid + 12) == 9 )
    {
      v42 = v70;
    }
    else
    {
      memset(v94, 0, sizeof(v94));
      v94[0] = (unsigned int)PsGetThreadId((PETHREAD)*gptiCurrent);
      v6 = a2;
      LODWORD(v94[3]) = a2;
      v94[2] = v71;
      v42 = v70;
      v94[1] = v70;
      if ( (unsigned int)xxxCallHook(0, *((int *)Valid + 12), (__int64)v94, 9) )
        goto LABEL_150;
    }
    v43 = *(_QWORD *)(gptiCurrent + 688LL);
    v78 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v78;
    v79 = v43;
    if ( v43 )
      _InterlockedAdd((volatile signed __int32 *)(v43 + 8), 1u);
    if ( *(_QWORD *)(gptiCurrent + 480LL) )
    {
      v44 = (_QWORD *)PhkNextValid((__int64)Valid);
      v72 = *(_QWORD *)(v45 + 48);
      if ( v44 )
        v44 = (_QWORD *)*v44;
      *(_QWORD *)(v45 + 48) = v44;
    }
    *(_QWORD *)&v85 = gptiCurrent + 688LL;
    *((_QWORD *)&v85 + 1) = Valid;
    v86 = v85;
    HMAssignmentLock(&v86);
    v69 = xxxHkCallHook((__int64)Valid, a2, v71, v42);
    *(_QWORD *)&v73 = gptiCurrent + 688LL;
    *((_QWORD *)&v73 + 1) = v43;
    v87 = v73;
    HMAssignmentLock(&v87);
    v47 = *(_QWORD *)(gptiCurrent + 480LL);
    if ( v47 )
      *(_QWORD *)(v47 + 48) = v72;
    ThreadUnlock1(v47, v46);
    if ( (*((_DWORD *)Valid + 16) & 0x10) == 0 )
      goto LABEL_147;
    Valid = (struct tagHOOK *)PhkNextValid((__int64)Valid);
    v52 = (struct tagHOOK *)ThreadUnlock1(v51, v50);
    if ( v52 )
      FreeHook(v52);
    v6 = a2;
LABEL_113:
    if ( !Valid )
      return dword_1C02CF720[v8 + 1];
  }
  v6 = a2;
  if ( (v15 & 0x10) == 0
    || (v53 = 200,
        v82 = v70,
        v80 = Valid,
        v81 = a2,
        v83 = -1LL,
        v84 = -1LL,
        (*(_DWORD *)(*((_QWORD *)Valid + 2) + 1208LL) & 0x20) != 0) )
  {
LABEL_150:
    Valid = (struct tagHOOK *)PhkNextValid((__int64)Valid);
    v65 = ThreadUnlock1(v64, v63);
    if ( v65 && (*(_DWORD *)(v65 + 64) & 0x10) != 0 )
      FreeHook((struct tagHOOK *)v65);
    goto LABEL_113;
  }
  v54 = *(_QWORD *)(gptiCurrent + 688LL);
  v78 = *(_QWORD *)(gptiCurrent + 416LL);
  *(_QWORD *)(gptiCurrent + 416LL) = &v78;
  v79 = v54;
  if ( v54 )
    _InterlockedIncrement((volatile signed __int32 *)(v54 + 8));
  *(_QWORD *)&v73 = gptiCurrent + 688LL;
  *((_QWORD *)&v73 + 1) = Valid;
  v88 = v73;
  HMAssignmentLock(&v88);
  if ( *(_QWORD *)(gptiCurrent + 480LL) )
  {
    v55 = (_QWORD *)PhkNextValid((__int64)Valid);
    v72 = *(_QWORD *)(v56 + 48);
    if ( v55 )
      v55 = (_QWORD *)*v55;
    *(_QWORD *)(v56 + 48) = v55;
  }
  v57 = v15 & 0x20;
  if ( (v15 & 0x20) != 0 )
  {
    v53 = gnllHooksTimeout;
    if ( (*((_BYTE *)Valid + 64) & 0x40) != 0 )
      v53 = 30000;
    if ( *((char *)Valid + 88) < 0 )
      v53 = 20;
  }
  if ( v57 || (v15 & 4) == 0 && (*(_DWORD *)(gptiCurrent + 488LL) & 0xC) != 0 )
  {
    v91[0] = 2;
    v91[8] = 2;
    v91[9] = v53;
    v92 = &v69;
    if ( v57 )
    {
      v83 = *(_QWORD *)(gptiCurrent + 1336LL);
      v84 = *(_QWORD *)(gptiCurrent + 1344LL);
      v82 = *(_QWORD *)(gptiCurrent + 1352LL);
    }
    if ( (*(_DWORD *)(gptiCurrent + 488LL) & 0x20000) != 0
      || (unsigned int)IsThreadHung(*((_QWORD **)Valid + 2), 0)
      || (LODWORD(v67) = 1,
          LODWORD(ReturnLength) = 1,
          !xxxInterSendMsgEx(0LL, 0x314u, v71, &v80, ReturnLength, *((_QWORD *)Valid + 2), v91, v67, 0)) )
    {
      v69 = dword_1C02CF720[v74 + 1];
    }
    if ( v57 && v69 )
      _InterlockedExchange(
        (volatile __int32 *)(*(_QWORD *)(*((_QWORD *)Valid + 2) + 448LL) + 12LL),
        (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
  }
  else
  {
    v58 = PsChargeProcessWakeCounter(**(_QWORD **)(*((_QWORD *)Valid + 2) + 424LL), 0LL, 2LL);
    v59 = v58;
    if ( v58 )
      PushW32ThreadLock(v58, v93, (__int64)ReleaseWakeReference);
    LODWORD(v67) = 1;
    LODWORD(ReturnLength) = 1;
    v69 = xxxInterSendMsgEx(0LL, 0x314u, v71, &v80, ReturnLength, *((_QWORD *)Valid + 2), 0LL, v67, 0);
    if ( v59 )
      PopAndFreeAlwaysW32ThreadLock((__int64)v93, v60);
  }
  *(_QWORD *)&v73 = gptiCurrent + 688LL;
  *((_QWORD *)&v73 + 1) = v54;
  v89 = v73;
  HMAssignmentLock(&v89);
  v62 = *(_QWORD *)(gptiCurrent + 480LL);
  if ( v62 )
    *(_QWORD *)(v62 + 48) = v72;
  ThreadUnlock1(v62, v61);
LABEL_147:
  ThreadUnlock1(v49, v48);
  return v69;
}
