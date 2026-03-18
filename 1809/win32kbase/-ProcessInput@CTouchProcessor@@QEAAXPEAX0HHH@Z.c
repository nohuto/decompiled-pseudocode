/*
 * XREFs of ?ProcessInput@CTouchProcessor@@QEAAXPEAX0HHH@Z @ 0x1C0141A34
 * Callers:
 *     ?ProcessInput@CHidInput@@EEAAJPEAXKK0@Z @ 0x1C014CF80 (-ProcessInput@CHidInput@@EEAAJPEAXKK0@Z.c)
 * Callees:
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C0030308 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z @ 0x1C0030404 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z.c)
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     ??1CInpLockGuardExclusive@@QEAA@XZ @ 0x1C0063118 (--1CInpLockGuardExclusive@@QEAA@XZ.c)
 *     wil_details_FeaturePropertyCache_ReportUsageToService @ 0x1C00A84A4 (wil_details_FeaturePropertyCache_ReportUsageToService.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00AD204 (--0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?ReferenceFrameInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEAU2@W4CPointerInputFramePhase@@@Z @ 0x1C00AD4F8 (-ReferenceFrameInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEAU2@W4CPointerInputFramePhase@.c)
 *     ?BufferInDelayZone@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@@Z @ 0x1C0133F24 (-BufferInDelayZone@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@@Z.c)
 *     ?CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z @ 0x1C0135D6C (-CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z.c)
 *     ?ProcessDelayZonePalmRejection@CTouchProcessor@@AEAA_NPEAUCPointerInputFrame@@@Z @ 0x1C0141370 (-ProcessDelayZonePalmRejection@CTouchProcessor@@AEAA_NPEAUCPointerInputFrame@@@Z.c)
 *     ?ProcessInputPostDelayZonePalmRejection@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@@Z @ 0x1C0141C10 (-ProcessInputPostDelayZonePalmRejection@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEAURIMCOM.c)
 *     ApiSetSanitizeRIMCOMPLETEFRAME @ 0x1C0164AA4 (ApiSetSanitizeRIMCOMPLETEFRAME.c)
 */

void __fastcall CTouchProcessor::ProcessInput(CTouchProcessor *this, LPCWSTR *a2, struct RIMCOMPLETEFRAME *a3)
{
  __int64 *Blink; // rdi
  PDEVICE_OBJECT v5; // rcx
  unsigned __int16 v6; // r9
  struct CPointerInputFrame *v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // r8
  _QWORD *v10; // rdx
  _QWORD *v11; // rax
  __int64 v12; // r8
  struct RIMCOMPLETEFRAME *v13; // r8
  CInpLockGuard *v14[6]; // [rsp+30h] [rbp-48h] BYREF
  LPCWSTR *v15; // [rsp+88h] [rbp+10h] BYREF

  v15 = a2;
  Blink = (__int64 *)WPP_MAIN_CB.Queue.ListEntry.Blink;
  CInpLockGuardExclusive::CInpLockGuardExclusive(
    (CInpLockGuardExclusive *)v14,
    (struct CInpLockGuard *)&WPP_MAIN_CB.Queue.ListEntry.Blink[3].Blink,
    0LL);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0xAu,
      (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v15, L"ProcessTouchOrPenInput", 0LL);
  if ( ApiSetSanitizeRIMCOMPLETEFRAME(a3) )
  {
    v7 = CTouchProcessor::CommitRimCompleteFrame((CTouchProcessor *)Blink, a3, 0, 0);
    if ( v7 )
    {
      wil_details_FeaturePropertyCache_ReportUsageToService(
        (__int64)&Feature_InputVirtualization__private_propertyCache,
        0xF89686u,
        (__int64)&unk_1C01933C8,
        0,
        3u);
      CTouchProcessor::ReferenceFrameInt(v8, (__int64)v7, v9);
      v10 = (_QWORD *)((char *)v7 + 24);
      v11 = (_QWORD *)((char *)gptiCurrent + 1120);
      v12 = *((_QWORD *)gptiCurrent + 140);
      if ( *(struct tagTHREADINFO **)(v12 + 8) != (struct tagTHREADINFO *)((char *)gptiCurrent + 1120) )
        __fastfail(3u);
      *v10 = v12;
      *((_QWORD *)v7 + 4) = v11;
      *(_QWORD *)(v12 + 8) = v10;
      *v11 = v10;
      if ( CTouchProcessor::ProcessDelayZonePalmRejection((CTouchProcessor *)Blink, v7) )
      {
        CTouchProcessor::ProcessInputPostDelayZonePalmRejection((CTouchProcessor *)Blink, v7, v13);
        v5 = WPP_GLOBAL_Control;
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          v6 = 15;
          goto LABEL_15;
        }
      }
      else
      {
        InputTraceLogging::Pointer::BufferInDelayZone(v7);
      }
    }
    else
    {
      WPP_RECORDER_SF_(Blink[1], 2u, 0xBu, 0xDu, (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
      v5 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v6 = 14;
        goto LABEL_15;
      }
    }
  }
  else
  {
    WPP_RECORDER_SF_(Blink[1], 2u, 0xBu, 0xBu, (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
    v5 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v6 = 12;
LABEL_15:
      WPP_RECORDER_SF_(
        (__int64)v5->DeviceExtension,
        5u,
        0xBu,
        v6,
        (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
    }
  }
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v15);
  CInpLockGuardExclusive::~CInpLockGuardExclusive(v14);
}
