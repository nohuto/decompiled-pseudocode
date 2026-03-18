/*
 * XREFs of IrqLibReleaseArbiterLock @ 0x1C000EECC
 * Callers:
 *     LinkNodepAddLinkNodeWorker @ 0x1C008F500 (LinkNodepAddLinkNodeWorker.c)
 *     IrqTranslateResources @ 0x1C0090E70 (IrqTranslateResources.c)
 *     AcpiUpdateInterruptProperties @ 0x1C00AB7F0 (AcpiUpdateInterruptProperties.c)
 *     IrqLibAllocateMessageTarget @ 0x1C00B23F0 (IrqLibAllocateMessageTarget.c)
 *     IrqLibFreeMessageTarget @ 0x1C00B2690 (IrqLibFreeMessageTarget.c)
 *     IrqTransGetInterruptVector @ 0x1C00B2A60 (IrqTransGetInterruptVector.c)
 * Callees:
 *     <none>
 */

LONG IrqLibReleaseArbiterLock()
{
  return KeSetEvent(Object, 0, 0);
}
