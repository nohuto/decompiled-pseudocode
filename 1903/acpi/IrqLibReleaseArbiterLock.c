/*
 * XREFs of IrqLibReleaseArbiterLock @ 0x1C001D974
 * Callers:
 *     IrqTranslateResources @ 0x1C0099870 (IrqTranslateResources.c)
 *     LinkNodepAddLinkNodeWorker @ 0x1C009C250 (LinkNodepAddLinkNodeWorker.c)
 *     AcpiUpdateInterruptProperties @ 0x1C00AEED0 (AcpiUpdateInterruptProperties.c)
 *     IrqLibAllocateMessageTarget @ 0x1C00B5DC0 (IrqLibAllocateMessageTarget.c)
 *     IrqLibFreeMessageTarget @ 0x1C00B6070 (IrqLibFreeMessageTarget.c)
 *     IrqTransGetInterruptVector @ 0x1C00B64E0 (IrqTransGetInterruptVector.c)
 * Callees:
 *     <none>
 */

LONG IrqLibReleaseArbiterLock()
{
  return KeSetEvent(Object, 0, 0);
}
