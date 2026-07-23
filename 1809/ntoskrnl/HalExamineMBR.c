/*
 * XREFs of HalExamineMBR @ 0x140817F00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall HalExamineMBR(PDEVICE_OBJECT DeviceObject, ULONG SectorSize, ULONG MBRTypeIdentifier, PVOID *Buffer)
{
  *Buffer = 0LL;
}
