/*
 * XREFs of EtwRegister @ 0x140718540
 * Callers:
 *     KiIntSteerConnect @ 0x14017C63C (KiIntSteerConnect.c)
 *     BapdRegisterEtwProvider @ 0x140182498 (BapdRegisterEtwProvider.c)
 *     McGenEventRegister @ 0x140189710 (McGenEventRegister.c)
 *     IoInitializeLiveDump @ 0x14019DCEC (IoInitializeLiveDump.c)
 *     HvlpEtwRegister @ 0x14028C644 (HvlpEtwRegister.c)
 *     PsDispatchIumService @ 0x1403086B4 (PsDispatchIumService.c)
 *     PfSnBeginBootPhase @ 0x14059EB70 (PfSnBeginBootPhase.c)
 *     TraceLoggingRegisterEx @ 0x140745F64 (TraceLoggingRegisterEx.c)
 *     PopDiagSleepStudyInitialize @ 0x14075B190 (PopDiagSleepStudyInitialize.c)
 *     WdipSemEnableSemProvider @ 0x14076B6CC (WdipSemEnableSemProvider.c)
 *     DbgkpStartSystemErrorHandler @ 0x14084AC8C (DbgkpStartSystemErrorHandler.c)
 *     DbgkCaptureLiveDump @ 0x14084B148 (DbgkCaptureLiveDump.c)
 *     sub_14090C654 @ 0x14090C654 (sub_14090C654.c)
 *     sub_14090CB44 @ 0x14090CB44 (sub_14090CB44.c)
 *     PnpDiagInitialize @ 0x1409F83BC (PnpDiagInitialize.c)
 *     KseInitialize @ 0x140A02BAC (KseInitialize.c)
 *     IoInitSystemPreDrivers @ 0x140A0544C (IoInitSystemPreDrivers.c)
 *     PopDiagInitialize @ 0x140A06004 (PopDiagInitialize.c)
 *     EtwpInitialize @ 0x140A1590C (EtwpInitialize.c)
 *     PerfDiagInitialize @ 0x140A15DA0 (PerfDiagInitialize.c)
 *     WheapInitializeEventing @ 0x140A19458 (WheapInitializeEventing.c)
 *     SmInitSystem @ 0x140A19D78 (SmInitSystem.c)
 *     KitInitialize @ 0x140A20134 (KitInitialize.c)
 *     PopBatteryInitPhaseTwo @ 0x140A22264 (PopBatteryInitPhaseTwo.c)
 *     PpmEventInitialize @ 0x140A22D04 (PpmEventInitialize.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1400E6EE0 (PsGetCurrentServerSiloGlobals.c)
 *     EtwpRegisterProvider @ 0x1407185AC (EtwpRegisterProvider.c)
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
