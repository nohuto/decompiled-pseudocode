/*
 * XREFs of EtwRegister @ 0x14071A330
 * Callers:
 *     KiIntSteerConnect @ 0x14017CD2C (KiIntSteerConnect.c)
 *     BapdRegisterEtwProvider @ 0x140182B88 (BapdRegisterEtwProvider.c)
 *     McGenEventRegister @ 0x140189CC0 (McGenEventRegister.c)
 *     IoInitializeLiveDump @ 0x14019E40C (IoInitializeLiveDump.c)
 *     HvlpEtwRegister @ 0x14028C3A4 (HvlpEtwRegister.c)
 *     PsDispatchIumService @ 0x140308164 (PsDispatchIumService.c)
 *     PfSnBeginBootPhase @ 0x14059EB50 (PfSnBeginBootPhase.c)
 *     TraceLoggingRegisterEx @ 0x140747E64 (TraceLoggingRegisterEx.c)
 *     PopDiagSleepStudyInitialize @ 0x14075FA20 (PopDiagSleepStudyInitialize.c)
 *     WdipSemEnableSemProvider @ 0x14076E520 (WdipSemEnableSemProvider.c)
 *     DbgkpStartSystemErrorHandler @ 0x14084A38C (DbgkpStartSystemErrorHandler.c)
 *     DbgkCaptureLiveDump @ 0x14084A848 (DbgkCaptureLiveDump.c)
 *     sub_14090C0B4 @ 0x14090C0B4 (sub_14090C0B4.c)
 *     sub_14090C5A4 @ 0x14090C5A4 (sub_14090C5A4.c)
 *     PnpDiagInitialize @ 0x1409F82CC (PnpDiagInitialize.c)
 *     KseInitialize @ 0x140A030C8 (KseInitialize.c)
 *     IoInitSystemPreDrivers @ 0x140A05968 (IoInitSystemPreDrivers.c)
 *     PopDiagInitialize @ 0x140A06520 (PopDiagInitialize.c)
 *     EtwpInitialize @ 0x140A15AEC (EtwpInitialize.c)
 *     PerfDiagInitialize @ 0x140A15F80 (PerfDiagInitialize.c)
 *     WheapInitializeEventing @ 0x140A19918 (WheapInitializeEventing.c)
 *     SmInitSystem @ 0x140A19F08 (SmInitSystem.c)
 *     KitInitialize @ 0x140A20314 (KitInitialize.c)
 *     PopBatteryInitPhaseTwo @ 0x140A22344 (PopBatteryInitPhaseTwo.c)
 *     PpmEventInitialize @ 0x140A22DE4 (PpmEventInitialize.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1400EBE80 (PsGetCurrentServerSiloGlobals.c)
 *     EtwpRegisterProvider @ 0x14071A39C (EtwpRegisterProvider.c)
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
