/*
 * XREFs of ProcessKeyboardInputWorker @ 0x1C01524E0
 * Callers:
 *     ?ProcessInput@CKeyboardProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYBOARD_INPUT_DATA@@K_N@Z @ 0x1C014C5A4 (-ProcessInput@CKeyboardProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYBOARD_I.c)
 *     ?MapFlexibleKeys@@YAHPEAUtagKE@@EPEAUDEVICEINFO@@@Z @ 0x1C0151C68 (-MapFlexibleKeys@@YAHPEAUtagKE@@EPEAUDEVICEINFO@@@Z.c)
 * Callees:
 *     ??0?$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ @ 0x1C0028578 (--0-$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C0028A40 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     ?GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z @ 0x1C0028A90 (-GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z.c)
 *     ??0CritAcquire@Perf@InputTraceLogging@@QEAA@_N@Z @ 0x1C0028B38 (--0CritAcquire@Perf@InputTraceLogging@@QEAA@_N@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0028C60 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagObjLock@@QEAAXXZ @ 0x1C0028D60 (-LockExclusive@tagObjLock@@QEAAXXZ.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0028DCC (EtwTraceAcquiredExclusiveUserCrit.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C0028E70 (EnterCritAvoidingDitHitTestHazard.c)
 *     InternalMapVirtualKeyEx @ 0x1C002BAC0 (InternalMapVirtualKeyEx.c)
 *     HMUnlockObject @ 0x1C002FD78 (HMUnlockObject.c)
 *     xxxProcessKeyEvent @ 0x1C0034E70 (xxxProcessKeyEvent.c)
 *     ?UnLock@tagObjLock@@QEAAXXZ @ 0x1C005EBF0 (-UnLock@tagObjLock@@QEAAXXZ.c)
 *     VKFromVSC @ 0x1C00838B0 (VKFromVSC.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     ?AccessProceduresStream@@YAHPEAUtagKE@@KH@Z @ 0x1C0131330 (-AccessProceduresStream@@YAHPEAUtagKE@@KH@Z.c)
 *     ?AccessTimeOut@@YAXXZ @ 0x1C01313A0 (-AccessTimeOut@@YAXXZ.c)
 *     ?MapScancode@@YAHPEAUtagKE@@PEAEPEAUDEVICEINFO@@@Z @ 0x1C0151F50 (-MapScancode@@YAHPEAUtagKE@@PEAEPEAUDEVICEINFO@@@Z.c)
 *     ?RemoteSyncToggleKeys@@YAXK@Z @ 0x1C0151FE4 (-RemoteSyncToggleKeys@@YAXK@Z.c)
 *     ApiSetEditionRawInputRequestedForKeyboard @ 0x1C0163358 (ApiSetEditionRawInputRequestedForKeyboard.c)
 *     ApiSetEditionUserBeep @ 0x1C0163B08 (ApiSetEditionUserBeep.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 *DomainLockRef; // rbx
  __int64 v26; // r8
  __int64 *v27; // rsi
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  unsigned __int8 v31; // r14
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rax
  __int64 v36; // rdx
  int v37; // r9d
  unsigned int v38; // r8d
  int v39; // ecx
  char v40[8]; // [rsp+30h] [rbp-39h] BYREF
  tagObjLock *v41; // [rsp+38h] [rbp-31h] BYREF
  unsigned __int16 v42; // [rsp+40h] [rbp-29h] BYREF
  __int16 v43; // [rsp+42h] [rbp-27h]
  int v44; // [rsp+44h] [rbp-25h]
  __int64 v45; // [rsp+48h] [rbp-21h]
  __int64 v46; // [rsp+50h] [rbp-19h]
  int v47; // [rsp+58h] [rbp-11h]
  _BYTE v48[32]; // [rsp+60h] [rbp-9h] BYREF

  v3 = 0LL;
  v7 = *((_WORD *)a1 + 2);
  v8 = 0;
  v9 = 0;
  v10 = v7 & 0x10;
  if ( (v7 & 0x10) != 0 || a2 && (*((_DWORD *)a2 + 46) & 0x2000) != 0 || *(_WORD *)a1 == 0xFFFE )
    v9 = 1;
  if ( a2 )
    v45 = *(_QWORD *)a2;
  else
    v45 = 0LL;
  v11 = *((_DWORD *)a1 + 2);
  v46 = *a1;
  v47 = v11;
  v44 = 0;
  if ( (v7 & 0x28) != 0 )
  {
    if ( (v7 & 8) != 0 )
    {
      v39 = v11;
      if ( v10 )
      {
        v39 = v11 | 0x4000;
        *((_DWORD *)a1 + 2) = v11 | 0x4000;
      }
      RemoteSyncToggleKeys(v39);
      v7 = *((_WORD *)a1 + 2);
    }
    if ( (v7 & 0x20) != 0 )
    {
      v42 = *((_WORD *)a1 + 1);
      v43 = ((v7 & 1) << 15) | 0x10E7;
      if ( a2 && (*((_DWORD *)a2 + 46) & 0x2000) != 0 )
        v3 = (__int64)a2 + 392;
      v38 = (v7 >> 4) & 1;
      v37 = 0;
      v36 = 0LL;
LABEL_97:
      xxxProcessKeyEvent(&v42, v36, v38, v37, v3);
    }
  }
  else
  {
    if ( (gSetLedReceived & 0x8000) != 0 )
    {
      RemoteSyncToggleKeys(gSetLedReceived);
      v7 = *((_WORD *)a1 + 2);
    }
    if ( (v7 & 2) != 0 )
      v12 = -32;
    else
      v12 = (v7 & 4) != 0 ? 0xE1 : 0;
    v13 = *((_WORD *)a1 + 1);
    v40[0] = v12;
    if ( v13 == 255 )
    {
      if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
      UserSessionSwitchLeaveCrit();
      ApiSetEditionUserBeep();
      CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v15, v14, v16);
      if ( CurrentThreadWin32Thread )
        CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
      InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v48, 1);
      v18 = EnterCritAvoidingDitHitTestHazard(0, 1);
      InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v48);
      EtwTraceAcquiredExclusiveUserCrit();
      gptiCurrent = v18;
      gbValidateHandleForIL = 1;
      CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v41);
      while ( 1 )
      {
        v27 = (__int64 *)gpducstulHead;
        if ( !gpducstulHead )
          break;
        gpducstulHead = *(_QWORD *)(gpducstulHead + 16);
        v22 = *v27;
        v27[2] = 0LL;
        if ( !*(_DWORD *)(v22 + 8) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v20, v19, v21);
        DomainLockRef = GetDomainLockRef(8);
        if ( DomainLockRef == &gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v24, v23, v26);
        tagObjLock::UnLock((tagObjLock *)DomainLockRef);
        HMUnlockObject(*v27);
        tagObjLock::LockExclusive((struct _KTHREAD **)DomainLockRef);
      }
      tagObjLock::UnLock(v41);
      return;
    }
    LOBYTE(v42) = v13 & 0x7F;
    if ( !a3 || !gpScancodeMap && !gpFlexMap )
    {
LABEL_36:
      gbVKLastDown = VKFromVSC((unsigned __int8 *)&v42, v12);
      v31 = gbVKLastDown;
      if ( gbVKLastDown )
      {
        if ( (unsigned __int8)(gbVKLastDown - 91) <= 1u && (*((_BYTE *)a1 + 4) & 1) == 0 )
        {
          if ( gptiForeground && (v35 = *((_QWORD *)gptiForeground + 55)) != 0 )
            v30 = *(_QWORD *)(*(_QWORD *)(v35 + 48) + 32LL);
          else
            v30 = gpKbdTbl;
          if ( !LScanCode )
            LScanCode = InternalMapVirtualKeyEx(0x4Cu, 0, v30);
          goto LABEL_51;
        }
      }
      else
      {
        if ( gpqForeground )
        {
          v33 = *(_QWORD *)(gpqForeground + 120);
          if ( v33 )
            v32 = *(_QWORD *)(v33 + 16);
          else
            v32 = *(_QWORD *)(gpqForeground + 96);
        }
        else
        {
          v32 = 0LL;
        }
        if ( !(unsigned int)ApiSetEditionRawInputRequestedForKeyboard(v32) )
          return;
        v8 = 1;
      }
      if ( LScanCode )
      {
        if ( *((_WORD *)a1 + 1) == LScanCode )
        {
          v31 = 76;
          gbVKLastDown = 76;
          v43 = 76;
        }
        if ( (gfsSASModifiersDown & 8) == 0 )
          goto LABEL_50;
        if ( (*((_BYTE *)a1 + 4) & 1) == 0 )
          goto LABEL_53;
        if ( (unsigned __int8)(v31 - 91) <= 1u )
LABEL_50:
          LScanCode = 0;
      }
LABEL_51:
      if ( (*((_BYTE *)a1 + 4) & 1) != 0 )
        v43 |= 0x8000u;
LABEL_53:
      if ( (unsigned int)IsRemoteConnection(v29, v28, v30) && (unsigned __int8)(v43 - 91) <= 1u && !gfEnableWindowsKey )
        return;
      if ( v31 == 91 )
      {
        LOBYTE(v34) = 64;
      }
      else
      {
        if ( v31 == 92 )
        {
          LOBYTE(v34) = 0x80;
          gCurrentModifierBit = 0x80;
LABEL_72:
          if ( (*((_BYTE *)a1 + 4) & 1) != 0 )
          {
            LOBYTE(v34) = ~(_BYTE)v34;
            gPhysModifierState &= v34;
          }
          else
          {
            gPhysModifierState |= v34;
          }
LABEL_75:
          if ( v31 == 13 && (*((_BYTE *)a1 + 4) & 1) == 0 )
            PoLatencySensitivityHint(1LL, v34);
          if ( (gdwPUDFlags & 0x100) != 0 )
          {
            AccessTimeOut();
            if ( !(unsigned int)AccessProceduresStream((struct tagKE *)&v42, *((_DWORD *)a1 + 2), 0) )
              return;
            if ( a2 && (*((_DWORD *)a2 + 46) & 0x2000) != 0 )
              v3 = (__int64)a2 + 392;
            v37 = v8;
            v36 = *((unsigned int *)a1 + 2);
            v38 = (*((unsigned __int16 *)a1 + 2) >> 4) & 1;
          }
          else
          {
            if ( a2 && (*((_DWORD *)a2 + 46) & 0x2000) != 0 )
              v3 = (__int64)a2 + 392;
            v36 = *((unsigned int *)a1 + 2);
            v37 = v8;
            v38 = v9;
          }
          goto LABEL_97;
        }
        if ( (unsigned __int8)(v31 + 96) > 5u )
        {
          LOBYTE(v34) = 0;
        }
        else
        {
          v34 = 1LL;
          LOBYTE(v34) = 1 << (v31 & 0xF);
        }
      }
      gCurrentModifierBit = v34;
      if ( !(_BYTE)v34 )
        goto LABEL_75;
      goto LABEL_72;
    }
    v43 = 0;
    if ( (v7 & 1) != 0 )
      v43 = 0x8000;
    if ( (unsigned int)MapScancode((struct tagKE *)&v42, v40, a2) )
    {
      v12 = v40[0];
      goto LABEL_36;
    }
  }
}
