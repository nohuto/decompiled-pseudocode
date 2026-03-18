/*
 * XREFs of RawInputManagerDeviceObjectReference @ 0x1C011CB60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall RawInputManagerDeviceObjectReference(void *a1)
{
  return ObReferenceObjectByPointer(a1, 3u, ExRawInputManagerObjectType, 0);
}
