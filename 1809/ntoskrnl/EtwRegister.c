/*
 * XREFs of EtwRegister @ 0x1406BE560
 * Callers:
 *     KiIntSteerConnect @ 0x14016DE84 (KiIntSteerConnect.c)
 *     BapdRegisterEtwProvider @ 0x140178AB4 (BapdRegisterEtwProvider.c)
 *     McGenEventRegister @ 0x140181CFC (McGenEventRegister.c)
 *     IoInitializeLiveDump @ 0x1401936FC (IoInitializeLiveDump.c)
 *     HvlpEtwRegister @ 0x1402782B8 (HvlpEtwRegister.c)
 *     PsDispatchIumService @ 0x1402EAA94 (PsDispatchIumService.c)
 *     PfSnBeginBootPhase @ 0x14056F13C (PfSnBeginBootPhase.c)
 *     TraceLoggingRegisterEx @ 0x14071DC58 (TraceLoggingRegisterEx.c)
 *     WdipSemEnableSemProvider @ 0x1407437AC (WdipSemEnableSemProvider.c)
 *     PopDiagSleepStudyInitialize @ 0x140745590 (PopDiagSleepStudyInitialize.c)
 *     DbgkpStartSystemErrorHandler @ 0x1408112C4 (DbgkpStartSystemErrorHandler.c)
 *     DbgkCaptureLiveDump @ 0x140811740 (DbgkCaptureLiveDump.c)
 *     sub_1408CF024 @ 0x1408CF024 (sub_1408CF024.c)
 *     sub_1408CF3E4 @ 0x1408CF3E4 (sub_1408CF3E4.c)
 *     WheapInitializeEventing @ 0x1409AEE24 (WheapInitializeEventing.c)
 *     KseInitialize @ 0x1409AF930 (KseInitialize.c)
 *     IoInitSystemPreDrivers @ 0x1409B1F54 (IoInitSystemPreDrivers.c)
 *     PoInitSystem @ 0x1409B2C10 (PoInitSystem.c)
 *     PnpDiagInitialize @ 0x1409C8614 (PnpDiagInitialize.c)
 *     EtwpInitialize @ 0x1409D0620 (EtwpInitialize.c)
 *     PerfDiagInitialize @ 0x1409D0A80 (PerfDiagInitialize.c)
 *     PopDiagInitialize @ 0x1409D0B90 (PopDiagInitialize.c)
 *     SmInitSystem @ 0x1409D6CD8 (SmInitSystem.c)
 *     PopBatteryInitPhaseTwo @ 0x1409DAE54 (PopBatteryInitPhaseTwo.c)
 *     KitInitialize @ 0x1409DD5B4 (KitInitialize.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140109D20 (PsGetCurrentServerSiloGlobals.c)
 *     EtwpRegisterProvider @ 0x1406BE5CC (EtwpRegisterProvider.c)
 */

NTSTATUS __stdcall EtwRegister(
        LPCGUID ProviderId,
        PETWENABLECALLBACK EnableCallback,
        PVOID CallbackContext,
        PREGHANDLE RegHandle)
{
  int v6; // esi
  int v7; // ebp
  __int64 v8; // rcx
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v6 = (int)EnableCallback;
  v7 = (int)ProviderId;
  v8 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 108);
  return EtwpRegisterProvider(v8, v7, 3, v6, (__int64)CallbackContext, retaddr, (__int64)RegHandle);
}
