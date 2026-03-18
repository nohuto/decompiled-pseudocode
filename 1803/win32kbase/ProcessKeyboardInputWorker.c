/*
 * XREFs of ProcessKeyboardInputWorker @ 0x1C012FD50
 * Callers:
 *     ?ProcessInput@CKeyboardProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYBOARD_INPUT_DATA@@K_N@Z @ 0x1C01269F8 (-ProcessInput@CKeyboardProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYBOARD_I.c)
 *     ?MapFlexibleKeys@@YAHPEAUtagKE@@EPEAUDEVICEINFO@@@Z @ 0x1C012F118 (-MapFlexibleKeys@@YAHPEAUtagKE@@EPEAUDEVICEINFO@@@Z.c)
 * Callees:
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0030320 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00303C0 (UserSessionSwitchLeaveCrit.c)
 *     ??0?$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ @ 0x1C0030418 (--0-$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ.c)
 *     ?GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z @ 0x1C0030660 (-GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z.c)
 *     ?UnLock@tagObjLock@@QEAAXXZ @ 0x1C0030710 (-UnLock@tagObjLock@@QEAAXXZ.c)
 *     ?LockExclusive@tagObjLock@@QEAAXXZ @ 0x1C00307A0 (-LockExclusive@tagObjLock@@QEAAXXZ.c)
 *     InternalMapVirtualKeyEx @ 0x1C0033890 (InternalMapVirtualKeyEx.c)
 *     HMUnlockObject @ 0x1C003A140 (HMUnlockObject.c)
 *     VKFromVSC @ 0x1C00667A0 (VKFromVSC.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     ?AccessProceduresStream@@YAHPEAUtagKE@@KH@Z @ 0x1C0109D10 (-AccessProceduresStream@@YAHPEAUtagKE@@KH@Z.c)
 *     ?AccessTimeOut@@YAXXZ @ 0x1C0109D80 (-AccessTimeOut@@YAXXZ.c)
 *     ?MapScancode@@YAHPEAUtagKE@@PEAEPEAUDEVICEINFO@@@Z @ 0x1C012F400 (-MapScancode@@YAHPEAUtagKE@@PEAEPEAUDEVICEINFO@@@Z.c)
 *     ?RemoteSyncToggleKeys@@YAXK@Z @ 0x1C012F490 (-RemoteSyncToggleKeys@@YAXK@Z.c)
 *     xxxProcessKeyEvent @ 0x1C0130400 (xxxProcessKeyEvent.c)
 *     ApiSetEditionRawInputRequestedForKeyboard @ 0x1C013FC34 (ApiSetEditionRawInputRequestedForKeyboard.c)
 *     ApiSetEditionUserBeep @ 0x1C0140438 (ApiSetEditionUserBeep.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall ProcessKeyboardInputWorker(__int64 *a1, struct DEVICEINFO *a2, int a3)
{
  __int64 v3; // rdi
  unsigned __int16 v7; // cx
  int v8; // r12d
  int v9; // r13d
  __int16 v10; // dx
  int v11; // eax
  unsigned __int8 v12; // dl
  __int16 v13; // ax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v18; // rbx
  struct tagTHREADINFO **v19; // rax
  __int64 v20; // rcx
  PVOID CurrentProcess; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 *DomainLockRef; // rbx
  __int64 v31; // rdx
  __int64 *v32; // rsi
  char v33; // r14
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int16 v36; // dx
  char v37; // cl
  __int64 v38; // rdx
  __int64 v39; // rax
  __int64 v40; // r8
  __int16 v41; // ax
  int v42; // edx
  int v43; // r9d
  int v44; // r8d
  int v45; // ecx
  char v46[8]; // [rsp+30h] [rbp-40h] BYREF
  tagObjLock *v47; // [rsp+38h] [rbp-38h] BYREF
  __int16 v48; // [rsp+40h] [rbp-30h] BYREF
  __int16 v49; // [rsp+42h] [rbp-2Eh]
  int v50; // [rsp+44h] [rbp-2Ch]
  __int64 v51; // [rsp+48h] [rbp-28h]
  __int64 v52; // [rsp+50h] [rbp-20h]
  int v53; // [rsp+58h] [rbp-18h]

  v3 = 0LL;
  v7 = *((_WORD *)a1 + 2);
  v8 = 0;
  v9 = 0;
  v10 = v7 & 0x10;
  if ( (v7 & 0x10) != 0 || a2 && (*((_DWORD *)a2 + 46) & 0x1000) != 0 || *(_WORD *)a1 == 0xFFFE )
    v9 = 1;
  if ( a2 )
    v51 = *(_QWORD *)a2;
  else
    v51 = 0LL;
  v11 = *((_DWORD *)a1 + 2);
  v52 = *a1;
  v53 = v11;
  v50 = 0;
  if ( (v7 & 0x28) != 0 )
  {
    if ( (v7 & 8) != 0 )
    {
      v45 = v11;
      if ( v10 )
      {
        v45 = v11 | 0x4000;
        *((_DWORD *)a1 + 2) = v11 | 0x4000;
      }
      RemoteSyncToggleKeys(v45);
      v7 = *((_WORD *)a1 + 2);
    }
    if ( (v7 & 0x20) != 0 )
    {
      v48 = *((_WORD *)a1 + 1);
      v49 = ((v7 & 1) << 15) | 0x10E7;
      if ( a2 && (*((_DWORD *)a2 + 46) & 0x1000) != 0 )
        v3 = (__int64)a2 + 392;
      v44 = (v7 >> 4) & 1;
      v43 = 0;
      v42 = 0;
LABEL_110:
      xxxProcessKeyEvent((unsigned int)&v48, v42, v44, v43, v3);
      return;
    }
    return;
  }
  if ( (WORD2(WPP_MAIN_CB.Queue.Wcb.DeviceContext) & 0x8000) != 0 )
  {
    RemoteSyncToggleKeys(SHIDWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext));
    v7 = *((_WORD *)a1 + 2);
  }
  if ( (v7 & 2) != 0 )
    v12 = -32;
  else
    v12 = (v7 & 4) != 0 ? 0xE1 : 0;
  v13 = *((_WORD *)a1 + 1);
  v46[0] = v12;
  if ( v13 == 255 )
  {
    if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
    UserSessionSwitchLeaveCrit((unsigned int)gdwInAtomicOperation);
    ApiSetEditionUserBeep();
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v15, v14, v16);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    v18 = 0LL;
    while ( 1 )
    {
      v19 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
      if ( v19 )
        v18 = *v19;
      CurrentProcess = (PVOID)PsGetCurrentProcess(v20);
      if ( CurrentProcess )
      {
        if ( CurrentProcess == g_pepDwm )
          break;
      }
      if ( (PVOID)PsGetCurrentProcess(v23) == gpepCSRSS && v18 != (struct tagTHREADINFO *)gptiTSRequest
        || gbDITInHitTest != 1
        || v18 == gptiRit )
      {
        break;
      }
      ++gcDITHitTestWaiters;
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
    }
    EtwTraceAcquiredExclusiveUserCrit(v23, v22, v24);
    gptiCurrent = v18;
    gbValidateHandleForIL = 1;
    CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v47);
    while ( 1 )
    {
      v32 = (__int64 *)gpducstulHead;
      if ( !gpducstulHead )
        break;
      gpducstulHead = *(_QWORD *)(gpducstulHead + 16);
      v27 = *v32;
      v32[2] = 0LL;
      if ( !*(_DWORD *)(v27 + 8) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v26, v25);
      DomainLockRef = GetDomainLockRef(8LL, v25);
      if ( DomainLockRef == &gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v29, v28);
      tagObjLock::UnLock((tagObjLock *)DomainLockRef);
      HMUnlockObject(*v32);
      tagObjLock::LockExclusive((struct _KTHREAD **)DomainLockRef, v31);
    }
    tagObjLock::UnLock(v47);
    return;
  }
  LOBYTE(v48) = v13 & 0x7F;
  if ( a3 && (gpScancodeMap || *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels) )
  {
    v49 = 0;
    if ( (v7 & 1) != 0 )
      v49 = 0x8000;
    if ( !(unsigned int)MapScancode((struct tagKE *)&v48, v46, a2) )
      return;
    v12 = v46[0];
  }
  BYTE2(WPP_MAIN_CB.Queue.Wcb.DeviceContext) = VKFromVSC((unsigned __int8 *)&v48, v12);
  v33 = BYTE2(WPP_MAIN_CB.Queue.Wcb.DeviceContext);
  if ( !BYTE2(WPP_MAIN_CB.Queue.Wcb.DeviceContext) )
  {
    if ( gpqForeground )
    {
      v35 = *(_QWORD *)(gpqForeground + 120);
      if ( v35 )
        v34 = *(_QWORD *)(v35 + 16);
      else
        v34 = *(_QWORD *)(gpqForeground + 96);
    }
    else
    {
      v34 = 0LL;
    }
    if ( !(unsigned int)ApiSetEditionRawInputRequestedForKeyboard(v34) )
      return;
    v8 = 1;
    goto LABEL_54;
  }
  if ( (unsigned __int8)(BYTE2(WPP_MAIN_CB.Queue.Wcb.DeviceContext) - 91) > 1u )
  {
LABEL_54:
    v36 = *((_WORD *)a1 + 2);
    v37 = v36;
    goto LABEL_55;
  }
  v36 = *((_WORD *)a1 + 2);
  v37 = v36;
  if ( (v36 & 1) != 0 )
  {
LABEL_55:
    if ( LOWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) )
    {
      if ( *((_WORD *)a1 + 1) == LOWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) )
      {
        v33 = 76;
        BYTE2(WPP_MAIN_CB.Queue.Wcb.DeviceContext) = 76;
        v49 = 76;
      }
      if ( (gfsSASModifiersDown & 8) == 0 || (v36 & 1) != 0 && (v33 == 91 || v33 == 92) )
        LOWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) = 0;
    }
    goto LABEL_63;
  }
  if ( gptiForeground && (v39 = *((_QWORD *)gptiForeground + 54)) != 0 )
    v40 = *(_QWORD *)(*(_QWORD *)(v39 + 48) + 32LL);
  else
    v40 = gpKbdTbl;
  if ( !LOWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) )
  {
    v41 = InternalMapVirtualKeyEx(0x4Cu, 0, v40);
    v36 = *((_WORD *)a1 + 2);
    LOWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) = v41;
  }
  v37 = v36;
LABEL_63:
  if ( (v37 & 1) != 0 )
    v49 |= 0x8000u;
  if ( !(unsigned int)IsRemoteConnection() || (unsigned __int8)(v49 - 91) > 1u || gfEnableWindowsKey )
  {
    if ( v33 == 91 )
    {
      LOBYTE(v38) = 64;
    }
    else
    {
      if ( v33 == 92 )
      {
        LOBYTE(v38) = 0x80;
        gCurrentModifierBit = 0x80;
LABEL_85:
        if ( (*((_BYTE *)a1 + 4) & 1) != 0 )
        {
          LOBYTE(v38) = ~(_BYTE)v38;
          gPhysModifierState &= v38;
        }
        else
        {
          gPhysModifierState |= v38;
        }
LABEL_88:
        if ( v33 == 13 && (*((_BYTE *)a1 + 4) & 1) == 0 )
          PoLatencySensitivityHint(1LL, v38);
        if ( (gdwPUDFlags & 0x100) != 0 )
        {
          AccessTimeOut();
          if ( !(unsigned int)AccessProceduresStream((struct tagKE *)&v48, *((_DWORD *)a1 + 2), 0) )
            return;
          if ( a2 && (*((_DWORD *)a2 + 46) & 0x1000) != 0 )
            v3 = (__int64)a2 + 392;
          v43 = v8;
          v42 = *((_DWORD *)a1 + 2);
          v44 = (*((unsigned __int16 *)a1 + 2) >> 4) & 1;
        }
        else
        {
          if ( a2 && (*((_DWORD *)a2 + 46) & 0x1000) != 0 )
            v3 = (__int64)a2 + 392;
          v42 = *((_DWORD *)a1 + 2);
          v43 = v8;
          v44 = v9;
        }
        goto LABEL_110;
      }
      if ( (unsigned __int8)(v33 + 96) > 5u )
      {
        LOBYTE(v38) = 0;
      }
      else
      {
        v38 = 1LL;
        LOBYTE(v38) = 1 << (v33 & 0xF);
      }
    }
    gCurrentModifierBit = v38;
    if ( !(_BYTE)v38 )
      goto LABEL_88;
    goto LABEL_85;
  }
}
