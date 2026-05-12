/*
 * XREFs of StorPortAdapterPowerNotRequiredStep2Passive @ 0x1C0043C00
 * Callers:
 *     <none>
 * Callees:
 *     StorPortAdapterPowerNotRequiredStep2 @ 0x1C00259A4 (StorPortAdapterPowerNotRequiredStep2.c)
 */

void __fastcall StorPortAdapterPowerNotRequiredStep2Passive(PDEVICE_OBJECT DeviceObject, volatile __int32 *Context)
{
  _InterlockedExchange(Context + 1464, 0);
  StorPortAdapterPowerNotRequiredStep2((PVOID)Context);
}
