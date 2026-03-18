/*
 * XREFs of RawInputManagerDeviceObjectReference @ 0x1C00F1DE0
 * Callers:
 *     rimOnPnpArrived @ 0x1C00FCE28 (rimOnPnpArrived.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall RawInputManagerDeviceObjectReference(void *a1)
{
  return ObReferenceObjectByPointer(a1, 3u, ExRawInputManagerObjectType, 0);
}
