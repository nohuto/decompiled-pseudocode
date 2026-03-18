/*
 * XREFs of ?CoreMsgOpenDestinationHandle@InputExtensibilityCallout@@QEAAJW4_MIT_ENDPOINT@@AEBUtagMsgRoutingInfo@@@Z @ 0x1C0084AC4
 * Callers:
 *     NtMITCoreMsgKOpenConnectionTo @ 0x1C008B770 (NtMITCoreMsgKOpenConnectionTo.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0031320 (RIMLockExclusive.c)
 *     CoreMsgOpenConnection @ 0x1C0084BE0 (CoreMsgOpenConnection.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredMsgKM @ 0x1C0186064 (MicrosoftTelemetryAssertTriggeredMsgKM.c)
 */

__int64 __fastcall InputExtensibilityCallout::CoreMsgOpenDestinationHandle(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // rbp
  __int64 v5; // rsi
  PVOID CurrentProcess; // rax
  void (__fastcall *v7)(__int64, __int64); // rdi
  __int64 v8; // r15
  __int64 v9; // r14
  int v10; // esi
  __int128 v12; // [rsp+20h] [rbp-38h]

  v3 = *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels;
  v5 = (int)a2;
  if ( a2 >= 0xB )
    MicrosoftTelemetryAssertTriggeredMsgKM("Check MIT_ENDPOINT enum. You made a mistake. You are about to crash");
  CurrentProcess = (PVOID)PsGetCurrentProcess(a1);
  if ( !CurrentProcess || CurrentProcess != g_pepDwm )
    MicrosoftTelemetryAssertTriggeredMsgKM("Expect callable on DWM-only");
  v7 = 0LL;
  LOBYTE(v12) = 0;
  v8 = 0LL;
  RIMLockExclusive(v3 + 24);
  v9 = 5 * v5;
  if ( *(_QWORD *)(v3 + 48 + 40 * v5) )
  {
    v10 = -2147020579;
  }
  else
  {
    v10 = CoreMsgOpenConnection(0LL, a3);
    if ( v10 >= 0 )
    {
      v12 = *(_OWORD *)(v3 + 8 * v9 + 64);
      v7 = *(void (__fastcall **)(__int64, __int64))(v3 + 8 * v9 + 72);
      v8 = *(_QWORD *)(v3 + 8 * v9 + 80);
    }
  }
  *(_QWORD *)(v3 + 32) = 0LL;
  ExReleasePushLockExclusiveEx(v3 + 24, 0LL);
  KeLeaveCriticalRegion();
  if ( v7 && (v12 & 1) != 0 )
    v7(1LL, v8);
  return (unsigned int)v10;
}
