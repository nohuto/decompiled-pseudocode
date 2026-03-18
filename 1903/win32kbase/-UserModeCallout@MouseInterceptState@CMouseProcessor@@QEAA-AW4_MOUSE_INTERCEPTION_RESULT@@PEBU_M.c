/*
 * XREFs of ?UserModeCallout@MouseInterceptState@CMouseProcessor@@QEAA?AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_MouseInterceptorData@@PEAU_MouseProcessorData@@@Z @ 0x1C0193390
 * Callers:
 *     ?CallInterceptor@MouseInterceptState@CMouseProcessor@@QEAA?AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_MouseInterceptorData@@PEAU_MouseProcessorData@@@Z @ 0x1C0190448 (-CallInterceptor@MouseInterceptState@CMouseProcessor@@QEAA-AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_M.c)
 *     ?InvokeMarshaledInterceptRequest@MouseInterceptState@CMouseProcessor@@QEAAXXZ @ 0x1C0191D80 (-InvokeMarshaledInterceptRequest@MouseInterceptState@CMouseProcessor@@QEAAXXZ.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C00320D0 (RIMLockExclusive.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C00327D0 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z @ 0x1C0032B10 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     memset @ 0x1C00C1440 (memset.c)
 *     ?CallUserModeLockFree@InputExtensibilityCallout@@QEAAXPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z @ 0x1C0177D90 (-CallUserModeLockFree@InputExtensibilityCallout@@QEAAXPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z.c)
 */

__int64 __fastcall CMouseProcessor::MouseInterceptState::UserModeCallout(__int64 a1, __int128 *a2, int *a3)
{
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int64 v9; // xmm1_8
  __int128 v10; // xmm0
  unsigned int v11; // ebx
  LPCWSTR *v13; // [rsp+20h] [rbp-99h] BYREF
  __int128 v14; // [rsp+28h] [rbp-91h]
  __int64 v15; // [rsp+38h] [rbp-81h]
  _DWORD v16[2]; // [rsp+40h] [rbp-79h] BYREF
  __int128 v17; // [rsp+48h] [rbp-71h]
  __int128 v18; // [rsp+58h] [rbp-61h]
  __int128 v19; // [rsp+68h] [rbp-51h]
  __int128 v20; // [rsp+78h] [rbp-41h]
  __int64 v21; // [rsp+88h] [rbp-31h]
  _BYTE v22[88]; // [rsp+90h] [rbp-29h] BYREF

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v13, L"MouseInterceptionCallout", 0LL);
  *(_QWORD *)(a1 + 8) = 0LL;
  ExReleasePushLockExclusiveEx(a1, 0LL);
  KeLeaveCriticalRegion();
  memset(v22, 0, sizeof(v22));
  v6 = *a2;
  v16[0] = 0;
  v7 = a2[1];
  v14 = 0uLL;
  v15 = 0LL;
  v16[1] = 1;
  v17 = v6;
  v8 = a2[2];
  v18 = v7;
  v9 = 0LL;
  v21 = 0LL;
  v19 = v8;
  v10 = 0uLL;
  v20 = 0uLL;
  if ( gpInputExtensibilityCallout )
  {
    InputExtensibilityCallout::CallUserModeLockFree(
      gpInputExtensibilityCallout,
      (struct _CLIENT_DEVICE_NOTIFICATION *)v16);
    v9 = v21;
    v10 = v20;
  }
  *(_OWORD *)a3 = v10;
  *((_QWORD *)a3 + 2) = v9;
  v11 = *a3;
  RIMLockExclusive(a1);
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v13);
  return v11;
}
