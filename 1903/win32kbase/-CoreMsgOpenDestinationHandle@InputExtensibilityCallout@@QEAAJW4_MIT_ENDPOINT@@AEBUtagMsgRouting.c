/*
 * XREFs of ?CoreMsgOpenDestinationHandle@InputExtensibilityCallout@@QEAAJW4_MIT_ENDPOINT@@AEBUtagMsgRoutingInfo@@@Z @ 0x1C00AA884
 * Callers:
 *     NtMITCoreMsgKOpenConnectionTo @ 0x1C009CA70 (NtMITCoreMsgKOpenConnectionTo.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C00320D0 (RIMLockExclusive.c)
 *     CoreMsgOpenConnection @ 0x1C00AA998 (CoreMsgOpenConnection.c)
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall InputExtensibilityCallout::CoreMsgOpenDestinationHandle(__int64 a1, __int64 a2, __int64 a3)
{
  InputExtensibilityCallout *v3; // rbp
  __int64 v5; // rsi
  PVOID CurrentProcess; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  void (__fastcall *v10)(__int64, __int64); // rdi
  __int64 v11; // r15
  __int64 v12; // r14
  int v13; // esi
  __int128 v15; // [rsp+20h] [rbp-38h]

  v3 = gpInputExtensibilityCallout;
  v5 = (int)a2;
  if ( (unsigned int)a2 >= 0x11 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  CurrentProcess = (PVOID)PsGetCurrentProcess(a1, a2);
  if ( !CurrentProcess || CurrentProcess != g_pepDwm )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7, v9);
  v10 = 0LL;
  LOBYTE(v15) = 0;
  v11 = 0LL;
  RIMLockExclusive((__int64)v3 + 8);
  v12 = 5 * v5;
  if ( *((_QWORD *)v3 + 5 * v5 + 4) )
  {
    v13 = -2147020579;
  }
  else
  {
    v13 = CoreMsgOpenConnection(0LL, a3);
    if ( v13 >= 0 )
    {
      v15 = *(_OWORD *)((char *)v3 + 8 * v12 + 48);
      v10 = (void (__fastcall *)(__int64, __int64))*((_QWORD *)v3 + v12 + 7);
      v11 = *((_QWORD *)v3 + v12 + 8);
    }
  }
  *((_QWORD *)v3 + 2) = 0LL;
  ExReleasePushLockExclusiveEx((char *)v3 + 8, 0LL);
  KeLeaveCriticalRegion();
  if ( v10 && (v15 & 1) != 0 )
    v10(1LL, v11);
  return (unsigned int)v13;
}
