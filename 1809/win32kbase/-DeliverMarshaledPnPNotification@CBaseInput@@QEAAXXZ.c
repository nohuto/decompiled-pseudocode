/*
 * XREFs of ?DeliverMarshaledPnPNotification@CBaseInput@@QEAAXXZ @ 0x1C00A50FC
 * Callers:
 *     ExecuteMarshaledPnpRequest @ 0x1C00A50B0 (ExecuteMarshaledPnpRequest.c)
 * Callees:
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C0030308 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z @ 0x1C0030404 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z.c)
 *     RIMLockExclusive @ 0x1C0031320 (RIMLockExclusive.c)
 *     ?_CalledOnInputThread@CInputThread@@AEBA_NXZ @ 0x1C0031678 (-_CalledOnInputThread@CInputThread@@AEBA_NXZ.c)
 *     RimInputTypeToDeviceInputType @ 0x1C004AFEC (RimInputTypeToDeviceInputType.c)
 *     ?CallUserModeLockFree@InputExtensibilityCallout@@QEAAXPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z @ 0x1C00A52A0 (-CallUserModeLockFree@InputExtensibilityCallout@@QEAAXPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     memset @ 0x1C00AF780 (memset.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CBaseInput::DeliverMarshaledPnPNotification(CBaseInput *this)
{
  CInputThread *v1; // rdi
  bool v3; // bl
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  _QWORD *v7; // rax
  _QWORD *v8; // rbx
  int v9; // eax
  _QWORD *v10; // [rsp+28h] [rbp-E0h] BYREF
  LPCWSTR *v11; // [rsp+30h] [rbp-D8h] BYREF
  _BYTE v12[32]; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD v13[32]; // [rsp+58h] [rbp-B0h] BYREF

  v1 = *(CInputThread **)&WPP_MAIN_CB.AlignmentRequirement;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v1, 0LL);
  v3 = CInputThread::_CalledOnInputThread(v1);
  ExReleasePushLockSharedEx(v1, 0LL);
  KeLeaveCriticalRegion();
  if ( !v3 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v4, v6);
  RIMLockExclusive((__int64)this + 1096);
  v7 = (_QWORD *)*((_QWORD *)this + 136);
  *((_QWORD *)this + 136) = 0LL;
  *((_QWORD *)this + 138) = 0LL;
  v10 = v7;
  ExReleasePushLockExclusiveEx((char *)this + 1096, 0LL);
  KeLeaveCriticalRegion();
  while ( 1 )
  {
    v8 = v10;
    if ( !v10 )
      break;
    v10 = (_QWORD *)*v10;
    InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v11, L"PnPNotificationCallout", 0LL);
    LODWORD(v13[0]) = RimInputTypeToDeviceInputType(*((_DWORD *)this + 36));
    memset((char *)v13 + 4, 0, 0xF4uLL);
    v9 = *((_DWORD *)v8 - 2);
    v13[1] = *(v8 - 2);
    LODWORD(v13[2]) = v9;
    Win32FreePool((__int64)(v8 - 2));
    PushW32ThreadLock(&v10, v12, lambda_58dd855ded0ce1927ff06923159bc2eb_::_lambda_invoker_cdecl_);
    InputExtensibilityCallout::CallUserModeLockFree(
      *(InputExtensibilityCallout **)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels,
      (struct _CLIENT_DEVICE_NOTIFICATION *)v13);
    PopW32ThreadLock(v12);
    InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v11);
  }
}
