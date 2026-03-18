/*
 * XREFs of ?Send2FingerTap@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1C0196744
 * Callers:
 *     ?Process2FingerTap@CPTPEngine@@AEAAHPEAUPTPInput@@H@Z @ 0x1C0194BE0 (-Process2FingerTap@CPTPEngine@@AEAAHPEAUPTPInput@@H@Z.c)
 *     ?ProcessTapsFor3orMoreContacts@CPTPEngine@@AEAAHPEAUPTPInput@@K@Z @ 0x1C01953F8 (-ProcessTapsFor3orMoreContacts@CPTPEngine@@AEAAHPEAUPTPInput@@K@Z.c)
 * Callees:
 *     ?SendMouseDownAtPoint@CPTPEngine@@AEAAXIUtagPOINT@@HK@Z @ 0x1C0196C14 (-SendMouseDownAtPoint@CPTPEngine@@AEAAXIUtagPOINT@@HK@Z.c)
 *     ?SendTelemetryOutput@CBasePTPEngine@@IEAAXW4Action@Telemetry@Payload@PTPTelemetryOutput@@TParameters@345@@Z @ 0x1C0196ED4 (-SendTelemetryOutput@CBasePTPEngine@@IEAAXW4Action@Telemetry@Payload@PTPTelemetryOutput@@TParame.c)
 */

void __fastcall CPTPEngine::Send2FingerTap(CPTPEngine *this, struct PTPInput *a2)
{
  __int128 v3; // [rsp+50h] [rbp-28h] BYREF
  __int64 v4; // [rsp+60h] [rbp-18h]

  *((_QWORD *)this + 403) = *(_QWORD *)a2;
  CPTPEngine::SendMouseDownAtPoint(this, 8u, *(struct tagPOINT *)((char *)a2 + 28), 0, *((_DWORD *)this + 100));
  v4 = 0LL;
  v3 = 2uLL;
  CBasePTPEngine::SendTelemetryOutput(this, 4LL, &v3);
}
