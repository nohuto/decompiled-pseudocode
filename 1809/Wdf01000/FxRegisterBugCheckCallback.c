/*
 * XREFs of FxRegisterBugCheckCallback @ 0x1C00929C0
 * Callers:
 *     FxInitialize @ 0x1C00593DC (FxInitialize.c)
 * Callees:
 *     memset @ 0x1C001C1C0 (memset.c)
 *     ?Register@_FX_DRIVER_TRACKER_CACHE_AWARE@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0092480 (-Register@_FX_DRIVER_TRACKER_CACHE_AWARE@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     FxpGetImageBase @ 0x1C0092D38 (FxpGetImageBase.c)
 */

void __fastcall FxRegisterBugCheckCallback(_FX_DRIVER_GLOBALS *FxDriverGlobals, _DRIVER_OBJECT *DriverObject)
{
  unsigned __int8 FxTrackDriverForMiniDumpLog; // bp
  _KBUGCHECK_REASON_CALLBACK_RECORD *p_BugCheckCallbackRecord; // rsi
  _FX_DRIVER_GLOBALS *v6; // rdx
  void (__fastcall *SystemRoutineAddress)(_KBUGCHECK_REASON_CALLBACK_RECORD *, _QWORD, __int64, char *); // rbx
  _UNICODE_STRING funcName; // [rsp+30h] [rbp-18h] BYREF

  FxTrackDriverForMiniDumpLog = FxDriverGlobals->FxTrackDriverForMiniDumpLog;
  p_BugCheckCallbackRecord = &FxDriverGlobals->BugCheckCallbackRecord;
  FxDriverGlobals->FxTrackDriverForMiniDumpLog = 0;
  memset(&FxDriverGlobals->BugCheckCallbackRecord, 0, sizeof(FxDriverGlobals->BugCheckCallbackRecord));
  FxDriverGlobals->ImageAddress = 0LL;
  FxDriverGlobals->ImageSize = 0;
  if ( FxpGetImageBase(DriverObject, &FxDriverGlobals->ImageAddress, &FxDriverGlobals->ImageSize) >= 0 && !unk_1C00ABE7A )
  {
    RtlInitUnicodeString(&funcName, L"KeRegisterBugCheckReasonCallback");
    SystemRoutineAddress = (void (__fastcall *)(_KBUGCHECK_REASON_CALLBACK_RECORD *, _QWORD, __int64, char *))MmGetSystemRoutineAddress(&funcName);
    if ( SystemRoutineAddress )
    {
      if ( FxTrackDriverForMiniDumpLog )
      {
        if ( (int)_FX_DRIVER_TRACKER_CACHE_AWARE::Register(&stru_1C00ABE58, v6) >= 0 )
          FxDriverGlobals->FxTrackDriverForMiniDumpLog = 1;
      }
      p_BugCheckCallbackRecord->State = 0;
      SystemRoutineAddress(p_BugCheckCallbackRecord, FxpBugCheckCallback, 2LL, FxDriverGlobals->Public.DriverName);
    }
  }
}
