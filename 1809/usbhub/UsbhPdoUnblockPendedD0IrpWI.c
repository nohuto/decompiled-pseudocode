/*
 * XREFs of UsbhPdoUnblockPendedD0IrpWI @ 0x1C0002340
 * Callers:
 *     UsbhFdoUnblockAllPendedPdoD0Irps @ 0x1C0004B5C (UsbhFdoUnblockAllPendedPdoD0Irps.c)
 * Callees:
 *     UsbhPdoSetD0_Finish @ 0x1C00024DC (UsbhPdoSetD0_Finish.c)
 *     UsbhEtwLogDevicePowerEvent @ 0x1C0003024 (UsbhEtwLogDevicePowerEvent.c)
 *     UsbhReleasePowerContext @ 0x1C0005774 (UsbhReleasePowerContext.c)
 *     UsbhDecHubBusy @ 0x1C000E470 (UsbhDecHubBusy.c)
 *     PdoExt @ 0x1C0010C40 (PdoExt.c)
 *     Log @ 0x1C0012D10 (Log.c)
 *     UsbhDecPdoIoCount @ 0x1C001A400 (UsbhDecPdoIoCount.c)
 */

__int64 __fastcall UsbhPdoUnblockPendedD0IrpWI(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v5; // r9
  ULONG_PTR v6; // rsi
  __int64 v7; // rdi
  __int64 v8; // rbx
  __int64 v9; // rdx

  Log(a1, 16, 1970291760, a3, a2);
  v6 = *(_QWORD *)(v5 + 48);
  v7 = PdoExt(v6);
  v8 = *(_QWORD *)(*(_QWORD *)(a3 + 64) + 184LL);
  UsbhPdoSetD0_Finish(*(_QWORD *)(a3 + 72), v6);
  *(_QWORD *)(v7 + 2560) = MEMORY[0xFFFFF78000000014];
  UsbhDecHubBusy(a1, v9, *(_QWORD *)(a3 + 112));
  *(_QWORD *)(a3 + 112) = 0LL;
  UsbhEtwLogDevicePowerEvent(
    v7,
    *(_QWORD *)(a3 + 64),
    &USBHUB_ETW_EVENT_DEVICE_POWER_SET_D0_COMPLETE,
    *(unsigned int *)(v8 + 24),
    0);
  *(_DWORD *)(*(_QWORD *)(a3 + 64) + 48LL) = 0;
  IofCompleteRequest(*(PIRP *)(a3 + 64), 0);
  UsbhDecPdoIoCount(v6, *(_QWORD *)(a3 + 64));
  return UsbhReleasePowerContext(a1, a3);
}
