/*
 * XREFs of EtwRegister @ 0x1406BF7E0
 * Callers:
 *     KiIntSteerConnect @ 0x14016DFA4 (KiIntSteerConnect.c)
 *     BapdRegisterEtwProvider @ 0x140178BD4 (BapdRegisterEtwProvider.c)
 *     McGenEventRegister @ 0x140181E5C (McGenEventRegister.c)
 *     IoInitializeLiveDump @ 0x14019385C (IoInitializeLiveDump.c)
 *     HvlpEtwRegister @ 0x1402785A8 (HvlpEtwRegister.c)
 *     PsDispatchIumService @ 0x1402EAD84 (PsDispatchIumService.c)
 *     PfSnBeginBootPhase @ 0x14057013C (PfSnBeginBootPhase.c)
 *     TraceLoggingRegisterEx @ 0x14071EED8 (TraceLoggingRegisterEx.c)
 *     WdipSemEnableSemProvider @ 0x14074497C (WdipSemEnableSemProvider.c)
 *     PopDiagSleepStudyInitialize @ 0x140746760 (PopDiagSleepStudyInitialize.c)
 *     DbgkpStartSystemErrorHandler @ 0x1408124A4 (DbgkpStartSystemErrorHandler.c)
 *     DbgkCaptureLiveDump @ 0x140812920 (DbgkCaptureLiveDump.c)
 *     sub_1408D02C4 @ 0x1408D02C4 (sub_1408D02C4.c)
 *     sub_1408D0684 @ 0x1408D0684 (sub_1408D0684.c)
 *     WheapInitializeEventing @ 0x1409AFE24 (WheapInitializeEventing.c)
 *     KseInitialize @ 0x1409B0930 (KseInitialize.c)
 *     IoInitSystemPreDrivers @ 0x1409B2F54 (IoInitSystemPreDrivers.c)
 *     PoInitSystem @ 0x1409B3C10 (PoInitSystem.c)
 *     PnpDiagInitialize @ 0x1409C9614 (PnpDiagInitialize.c)
 *     EtwpInitialize @ 0x1409D1620 (EtwpInitialize.c)
 *     PerfDiagInitialize @ 0x1409D1A80 (PerfDiagInitialize.c)
 *     PopDiagInitialize @ 0x1409D1B90 (PopDiagInitialize.c)
 *     SmInitSystem @ 0x1409D7CD8 (SmInitSystem.c)
 *     PopBatteryInitPhaseTwo @ 0x1409DBE54 (PopBatteryInitPhaseTwo.c)
 *     KitInitialize @ 0x1409DE5B4 (KitInitialize.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140109DC0 (PsGetCurrentServerSiloGlobals.c)
 *     EtwpRegisterProvider @ 0x1406BF84C (EtwpRegisterProvider.c)
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
