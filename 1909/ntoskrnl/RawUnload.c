/*
 * XREFs of RawUnload @ 0x1408CD500
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 */

LONG_PTR RawUnload()
{
  ObfDereferenceObject(RawDeviceTapeObject);
  ObfDereferenceObject(RawDeviceCdRomObject);
  return ObfDereferenceObject(RawDeviceDiskObject);
}
