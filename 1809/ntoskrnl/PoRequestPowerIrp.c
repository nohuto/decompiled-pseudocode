/*
 * XREFs of PoRequestPowerIrp @ 0x140172630
 * Callers:
 *     <none>
 * Callees:
 *     PopRequestPowerIrp @ 0x140172660 (PopRequestPowerIrp.c)
 */

NTSTATUS __stdcall PoRequestPowerIrp(
        PDEVICE_OBJECT DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        PREQUEST_POWER_COMPLETE CompletionFunction,
        PVOID Context,
        PIRP *Irp)
{
  return ((__int64 (__fastcall *)(_DWORD, _BYTE, _DWORD, _DWORD, __int64, char, PIRP))PopRequestPowerIrp)(
           (_DWORD)DeviceObject,
           MinorFunction,
           (POWER_STATE)PowerState.SystemState,
           (_DWORD)CompletionFunction,
           (__int64)Context,
           0,
           (PIRP)Irp);
}
