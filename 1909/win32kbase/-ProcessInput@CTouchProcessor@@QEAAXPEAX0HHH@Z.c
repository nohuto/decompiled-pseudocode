/*
 * XREFs of ?ProcessInput@CTouchProcessor@@QEAAXPEAX0HHH@Z @ 0x1C016E420
 * Callers:
 *     ?ProcessInput@CHidInput@@EEAAJPEAXKK0@Z @ 0x1C017D3F0 (-ProcessInput@CHidInput@@EEAAJPEAXKK0@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C0031A80 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z @ 0x1C0031DC0 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z.c)
 *     ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C00A3EB0 (-UnLock@CInpLockGuard@@QEAAXXZ.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C00B766C (--0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     ?BufferInDelayZone@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@@Z @ 0x1C015F024 (-BufferInDelayZone@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@@Z.c)
 *     ?CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z @ 0x1C0161A70 (-CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z.c)
 *     ?CreateInputPointerNodesForFrame@CTouchProcessor@@AEAA_NPEAX@Z @ 0x1C01628D4 (-CreateInputPointerNodesForFrame@CTouchProcessor@@AEAA_NPEAX@Z.c)
 *     ?ProcessDelayZonePalmRejection@CTouchProcessor@@AEAA_NPEAUCPointerInputFrame@@@Z @ 0x1C016DC40 (-ProcessDelayZonePalmRejection@CTouchProcessor@@AEAA_NPEAUCPointerInputFrame@@@Z.c)
 *     ?ProcessInputPostDelayZonePalmRejection@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@@Z @ 0x1C016E674 (-ProcessInputPostDelayZonePalmRejection@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEAURIMCOM.c)
 *     ApiSetSanitizeRIMCOMPLETEFRAME @ 0x1C019E42C (ApiSetSanitizeRIMCOMPLETEFRAME.c)
 */

void __fastcall CTouchProcessor::ProcessInput(CTouchProcessor *this, LPCWSTR *a2, struct RIMCOMPLETEFRAME *a3)
{
  CTouchProcessor *v3; // rdi
  int v5; // edx
  int v6; // edx
  int v7; // edx
  PDEVICE_OBJECT v8; // rcx
  int v9; // r9d
  struct CPointerInputFrame *v10; // rax
  int v11; // edx
  struct CPointerInputFrame *v12; // rbx
  _QWORD *v13; // rcx
  _QWORD *v14; // rax
  __int64 v15; // rdx
  int v16; // edx
  struct RIMCOMPLETEFRAME *v17; // r8
  CInpLockGuard *v18; // [rsp+60h] [rbp+8h] BYREF
  LPCWSTR *v19; // [rsp+68h] [rbp+10h] BYREF

  v19 = a2;
  v18 = this;
  v3 = gpTouchProcessor;
  CInpLockGuardExclusive::CInpLockGuardExclusive(
    (CInpLockGuardExclusive *)&v18,
    (CTouchProcessor *)((char *)gpTouchProcessor + 48));
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v5) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v5,
      7,
      10,
      (__int64)&WPP_dde6ae6ba4d53e169de0efe5dbb74602_Traceguids);
  }
  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v19, L"ProcessTouchOrPenInput", 0LL);
  if ( ApiSetSanitizeRIMCOMPLETEFRAME(a3) )
  {
    v10 = CTouchProcessor::CommitRimCompleteFrame(v3, a3, 0, 0);
    v12 = v10;
    if ( v10 )
    {
      _InterlockedIncrement((volatile signed __int32 *)v10 + 11);
      v13 = (_QWORD *)((char *)v10 + 24);
      v14 = (_QWORD *)((char *)gptiCurrent + 1136);
      v15 = *((_QWORD *)gptiCurrent + 142);
      if ( *(struct tagTHREADINFO **)(v15 + 8) != (struct tagTHREADINFO *)((char *)gptiCurrent + 1136) )
        __fastfail(3u);
      *v13 = v15;
      v13[1] = v14;
      *(_QWORD *)(v15 + 8) = v13;
      *v14 = v13;
      if ( CTouchProcessor::CreateInputPointerNodesForFrame(v3, v12) )
      {
        if ( CTouchProcessor::ProcessDelayZonePalmRejection(v3, v12) )
        {
          CTouchProcessor::ProcessInputPostDelayZonePalmRejection(v3, v12, v17);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v8 = WPP_GLOBAL_Control;
            if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            {
              v9 = 17;
              goto LABEL_26;
            }
          }
        }
        else
        {
          InputTraceLogging::Pointer::BufferInDelayZone(v12);
        }
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v16) = 2;
        WPP_RECORDER_SF_((_DWORD)gBaseLog, v16, 7, 15, (__int64)&WPP_dde6ae6ba4d53e169de0efe5dbb74602_Traceguids);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v8 = WPP_GLOBAL_Control;
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            v9 = 16;
            goto LABEL_26;
          }
        }
      }
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v11) = 2;
      WPP_RECORDER_SF_((_DWORD)gBaseLog, v11, 7, 13, (__int64)&WPP_dde6ae6ba4d53e169de0efe5dbb74602_Traceguids);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v8 = WPP_GLOBAL_Control;
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          v9 = 14;
          goto LABEL_26;
        }
      }
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v6) = 2;
    WPP_RECORDER_SF_((_DWORD)gBaseLog, v6, 7, 11, (__int64)&WPP_dde6ae6ba4d53e169de0efe5dbb74602_Traceguids);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v8 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v9 = 12;
LABEL_26:
        LOBYTE(v7) = 5;
        WPP_RECORDER_SF_(v8->DeviceExtension, v7, 7, v9, (__int64)&WPP_dde6ae6ba4d53e169de0efe5dbb74602_Traceguids);
      }
    }
  }
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v19);
  CInpLockGuard::UnLock(v18);
}
