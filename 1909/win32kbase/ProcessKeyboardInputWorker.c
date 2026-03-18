/*
 * XREFs of ProcessKeyboardInputWorker @ 0x1C01837A0
 * Callers:
 *     ?ProcessInputNoLock@CKeyboardProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYBOARD_INPUT_DATA@@K_NPEAU_KEYBOARD_VIRTUAL_DEVICE_INFO@@@Z @ 0x1C017B370 (-ProcessInputNoLock@CKeyboardProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYB.c)
 *     ?MapFlexibleKeys@@YAHPEAUtagKE@@EPEAUDEVICEINFO@@@Z @ 0x1C0182E84 (-MapFlexibleKeys@@YAHPEAUtagKE@@EPEAUDEVICEINFO@@@Z.c)
 * Callees:
 *     HMUnlockObject @ 0x1C0025870 (HMUnlockObject.c)
 *     IsValidGuiThreadContext @ 0x1C0026550 (IsValidGuiThreadContext.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C00268F0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0026E20 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00290C0 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C002B0B0 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     InternalMapVirtualKeyEx @ 0x1C002E050 (InternalMapVirtualKeyEx.c)
 *     _TlgKeywordOn @ 0x1C0031E60 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0084244 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     ?AccessProceduresStream@@YAHPEAUtagKE@@KH@Z @ 0x1C015BC40 (-AccessProceduresStream@@YAHPEAUtagKE@@KH@Z.c)
 *     ?AccessTimeOut@@YAXXZ @ 0x1C015BCB0 (-AccessTimeOut@@YAXXZ.c)
 *     ?DropInput@Keyboard@InputTraceLogging@@SAXW4DropReason@12@@Z @ 0x1C017ABD0 (-DropInput@Keyboard@InputTraceLogging@@SAXW4DropReason@12@@Z.c)
 *     ?MapScancode@@YAHPEAUtagKE@@PEAEPEAUDEVICEINFO@@@Z @ 0x1C018316C (-MapScancode@@YAHPEAUtagKE@@PEAEPEAUDEVICEINFO@@@Z.c)
 *     ?RemoteSyncToggleKeys@@YAXK@Z @ 0x1C0183240 (-RemoteSyncToggleKeys@@YAXK@Z.c)
 *     PtiKbdFromQ @ 0x1C0183F68 (PtiKbdFromQ.c)
 *     xxxProcessKeyEvent @ 0x1C01843C0 (xxxProcessKeyEvent.c)
 *     VKFromVSC @ 0x1C0184900 (VKFromVSC.c)
 *     ApiSetEditionRawInputRequestedForKeyboard @ 0x1C019BC20 (ApiSetEditionRawInputRequestedForKeyboard.c)
 *     ApiSetEditionUserBeep @ 0x1C019C60C (ApiSetEditionUserBeep.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall ProcessKeyboardInputWorker(__int64 *a1, __int64 a2, int a3)
{
  unsigned __int16 v5; // cx
  int v7; // r15d
  int v8; // r12d
  __int64 v9; // rdx
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v14; // rax
  struct tagTHREADINFO *v15; // rbx
  struct tagTHREADINFO **v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  PVOID CurrentProcess; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  unsigned int v22; // r9d
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // rdx
  __int64 v26; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v28; // r8
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  PERESOURCE *v38; // rdi
  __int64 v39; // r8
  __int64 *v40; // rsi
  __int64 v41; // r8
  unsigned __int8 v42; // di
  __int64 v43; // rax
  __int64 v44; // rcx
  __int64 v45; // rdx
  __int64 v46; // rdx
  __int64 v47; // rax
  unsigned __int16 v48; // ax
  int v49; // edx
  int v50; // r9d
  int v51; // r8d
  int v52; // ecx
  char v53[4]; // [rsp+30h] [rbp-D0h] BYREF
  int v54; // [rsp+34h] [rbp-CCh] BYREF
  int v55; // [rsp+38h] [rbp-C8h] BYREF
  int v56; // [rsp+3Ch] [rbp-C4h] BYREF
  _DWORD v57[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v58; // [rsp+48h] [rbp-B8h]
  __int64 v59; // [rsp+50h] [rbp-B0h]
  int v60; // [rsp+58h] [rbp-A8h]
  int v61; // [rsp+5Ch] [rbp-A4h]
  __int64 v62; // [rsp+60h] [rbp-A0h]
  unsigned __int8 v63; // [rsp+68h] [rbp-98h]
  GUID ActivityId; // [rsp+6Ch] [rbp-94h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+80h] [rbp-80h] BYREF
  int *v66; // [rsp+A0h] [rbp-60h]
  __int64 v67; // [rsp+A8h] [rbp-58h]
  EVENT_DATA_DESCRIPTOR v68; // [rsp+B0h] [rbp-50h] BYREF
  int *v69; // [rsp+D0h] [rbp-30h]
  __int64 v70; // [rsp+D8h] [rbp-28h]
  EVENT_DATA_DESCRIPTOR v71; // [rsp+E0h] [rbp-20h] BYREF
  int *v72; // [rsp+100h] [rbp+0h]
  __int64 v73; // [rsp+108h] [rbp+8h]

  v57[0] = 0;
  v5 = *((_WORD *)a1 + 2);
  v9 = v5;
  v61 = 0;
  v7 = 0;
  v8 = 0;
  LOWORD(v9) = v5 & 0x10;
  if ( (v5 & 0x10) != 0 || a2 && (*(_DWORD *)(a2 + 184) & 0x2000) != 0 || *(_WORD *)a1 == 0xFFFE )
    v8 = 1;
  if ( a2 )
    v58 = *(_QWORD *)a2;
  else
    v58 = 0LL;
  v10 = *((_DWORD *)a1 + 2);
  v59 = *a1;
  v60 = v10;
  v57[1] = 0;
  if ( (v5 & 0x28) == 0 )
  {
    if ( (gSetLedReceived & 0x8000) != 0 )
    {
      RemoteSyncToggleKeys(gSetLedReceived);
      v5 = *((_WORD *)a1 + 2);
    }
    if ( (v5 & 2) != 0 )
      LOBYTE(v9) = -32;
    else
      LOBYTE(v9) = (v5 & 4) != 0 ? 0xE1 : 0;
    v53[0] = v9;
    if ( *((_WORD *)a1 + 1) == 255 )
    {
      if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
      UserSessionSwitchLeaveCrit((unsigned int)gdwInAtomicOperation, v9);
      ApiSetEditionUserBeep();
      CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v11);
      if ( CurrentThreadWin32Thread )
        CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
      *(_QWORD *)&ActivityId.Data1 = 0LL;
      *(_QWORD *)ActivityId.Data4 = 0LL;
      if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
      {
        v63 = 1;
        v14 = PsGetCurrentThreadWin32Thread(v12);
        v62 = v14;
        if ( v14 && (*(int *)(v14 + 24) > 0 || *(_DWORD *)(v62 + 48)) )
        {
          EtwActivityIdControl(3u, &ActivityId);
          if ( dword_1C020CB50 > 6u )
          {
            if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
            {
              v54 = v63;
              v66 = &v54;
              v67 = 4LL;
              TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E1517, &ActivityId, 0LL, 3u, &pData);
            }
          }
        }
      }
      else
      {
        v62 = 0LL;
      }
      v15 = 0LL;
      while ( 1 )
      {
        v16 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
        if ( v16 )
          v15 = *v16;
        CurrentProcess = (PVOID)PsGetCurrentProcess(v18, v17);
        if ( CurrentProcess )
        {
          if ( CurrentProcess == g_pepDwm )
            break;
        }
        if ( (PVOID)PsGetCurrentProcess(v21, v20) == gpepCSRSS && v15 != (struct tagTHREADINFO *)gptiTSRequest
          || gbDITInHitTest != 1
          || v15 == gptiRit )
        {
          break;
        }
        ++gcDITHitTestWaiters;
        ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
        KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
      }
      if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v62 && (*(_DWORD *)(v62 + 48) || *(int *)(v62 + 24) > 0) )
      {
        *(_DWORD *)(v62 + 44) = 1;
        *(GUID *)(v62 + 28) = ActivityId;
        if ( dword_1C020CB50 > 6u )
        {
          if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
          {
            v55 = v63;
            v69 = &v55;
            v70 = 4LL;
            TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E14C0, &ActivityId, 0LL, 3u, &v68);
            v22 = dword_1C020CB50;
          }
          if ( v22 > 6 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
          {
            v56 = v63;
            v72 = &v56;
            v73 = 4LL;
            TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E14ED, &ActivityId, 0LL, 3u, &v71);
          }
        }
      }
      EtwTraceAcquiredExclusiveUserCrit();
      gptiCurrent = v15;
      gbValidateHandleForIL = 1;
      if ( IsValidGuiThreadContext() )
      {
        DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, v23, v24);
        if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v26, v25, v28);
        if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v30, v29, v31);
        ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
        while ( 1 )
        {
          v40 = (__int64 *)gpducstulHead;
          if ( !gpducstulHead )
            break;
          gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpducstulHead + 2);
          v35 = *v40;
          v40[2] = 0LL;
          if ( !*(_DWORD *)(v35 + 8) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v33, v32, v34);
          v38 = (PERESOURCE *)GetDomainLockRef(12LL, v32, v34);
          if ( v38 == (PERESOURCE *)&gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v37, v36, v39);
          ExReleaseResourceAndLeaveCriticalRegion(*v38);
          HMUnlockObject(*v40);
          tagDomLock::LockExclusive(v38);
        }
        ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
      }
      goto LABEL_62;
    }
    LOBYTE(v57[0]) = *((_BYTE *)a1 + 2) & 0x7F;
    if ( a3 && (gpScancodeMap || gpFlexMap) )
    {
      HIWORD(v57[0]) = 0;
      if ( (v5 & 1) != 0 )
        HIWORD(v57[0]) = 0x8000;
      if ( !(unsigned int)MapScancode((struct tagKE *)v57, v53, (struct DEVICEINFO *)a2) )
        goto LABEL_62;
      LOBYTE(v9) = v53[0];
    }
    gbVKLastDown = VKFromVSC(v57, v9, gafRawKeyState);
    v42 = gbVKLastDown;
    if ( gbVKLastDown )
    {
      if ( (unsigned __int8)(gbVKLastDown - 91) <= 1u )
      {
        v44 = *((unsigned __int16 *)a1 + 2);
        v45 = (unsigned __int16)v44;
        if ( (v44 & 1) == 0 )
        {
          if ( gptiForeground && (v47 = *((_QWORD *)gptiForeground + 54)) != 0 )
            v41 = *(_QWORD *)(*(_QWORD *)(v47 + 48) + 32LL);
          else
            v41 = gpKbdTbl;
          if ( !LScanCode )
          {
            v48 = InternalMapVirtualKeyEx(0x4Cu, 0LL, v41);
            v44 = *((unsigned __int16 *)a1 + 2);
            LScanCode = v48;
          }
LABEL_85:
          if ( (v44 & 1) != 0 )
            HIWORD(v57[0]) |= 0x8000u;
          if ( (unsigned int)IsRemoteConnection(v44, v45, v41)
            && (unsigned __int8)(BYTE2(v57[0]) - 91) <= 1u
            && !gfEnableWindowsKey )
          {
            goto LABEL_62;
          }
          if ( v42 == 91 )
          {
            LOBYTE(v46) = 64;
          }
          else
          {
            if ( v42 == 92 )
            {
              LOBYTE(v46) = 0x80;
              gCurrentModifierBit = 0x80;
LABEL_108:
              if ( (*((_BYTE *)a1 + 4) & 1) != 0 )
              {
                LOBYTE(v46) = ~(_BYTE)v46;
                gPhysModifierState &= v46;
              }
              else
              {
                gPhysModifierState |= v46;
              }
LABEL_111:
              if ( v42 == 13 && (*((_BYTE *)a1 + 4) & 1) == 0 )
                PoLatencySensitivityHint(1LL, v46);
              if ( (gdwPUDFlags & 0x100) != 0 )
              {
                AccessTimeOut();
                if ( !(unsigned int)AccessProceduresStream((struct tagKE *)v57, *((_DWORD *)a1 + 2), 0) )
                  return;
                v50 = v7;
                v49 = *((_DWORD *)a1 + 2);
                v51 = (*((unsigned __int16 *)a1 + 2) >> 4) & 1;
              }
              else
              {
                v49 = *((_DWORD *)a1 + 2);
                v50 = v7;
                v51 = v8;
              }
              goto LABEL_124;
            }
            if ( (unsigned __int8)(v42 + 96) > 5u )
            {
              LOBYTE(v46) = 0;
            }
            else
            {
              v46 = 1LL;
              LOBYTE(v46) = 1 << (v42 & 0xF);
            }
          }
          gCurrentModifierBit = v46;
          if ( !(_BYTE)v46 )
            goto LABEL_111;
          goto LABEL_108;
        }
LABEL_77:
        if ( LScanCode )
        {
          if ( *((_WORD *)a1 + 1) == LScanCode )
          {
            v42 = 76;
            gbVKLastDown = 76;
            HIWORD(v57[0]) = 76;
          }
          v41 = (unsigned __int16)v44;
          if ( (gfsSASModifiersDown & 8) == 0
            || (v44 = (unsigned __int16)v45, (v45 & 1) != 0) && ((v41 = (unsigned __int16)v45, v42 == 91) || v42 == 92) )
          {
            LScanCode = 0;
            v44 = (unsigned __int16)v41;
          }
        }
        goto LABEL_85;
      }
    }
    else
    {
      if ( gpqForeground )
        v43 = PtiKbdFromQ(gpqForeground);
      else
        v43 = 0LL;
      if ( !(unsigned int)ApiSetEditionRawInputRequestedForKeyboard(v43) )
      {
LABEL_62:
        InputTraceLogging::Keyboard::DropInput();
        return;
      }
      v7 = 1;
    }
    v44 = *((unsigned __int16 *)a1 + 2);
    v45 = (unsigned __int16)v44;
    goto LABEL_77;
  }
  if ( (v5 & 8) != 0 )
  {
    v52 = v10;
    if ( (_WORD)v9 )
    {
      v52 = v10 | 0x4000;
      *((_DWORD *)a1 + 2) = v10 | 0x4000;
    }
    RemoteSyncToggleKeys(v52);
    v5 = *((_WORD *)a1 + 2);
  }
  if ( (v5 & 0x20) != 0 )
  {
    LOWORD(v57[0]) = *((_WORD *)a1 + 1);
    v51 = (v5 >> 4) & 1;
    v50 = 0;
    HIWORD(v57[0]) = ((v5 & 1) << 15) | 0x10E7;
    v49 = 0;
LABEL_124:
    xxxProcessKeyEvent((unsigned int)v57, v49, v51, v50, a2, 0LL);
  }
}
