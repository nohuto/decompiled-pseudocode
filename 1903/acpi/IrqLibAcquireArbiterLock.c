/*
 * XREFs of IrqLibAcquireArbiterLock @ 0x1C001D99C
 * Callers:
 *     IrqLibpGetVectorInput @ 0x1C002DA90 (IrqLibpGetVectorInput.c)
 *     ProcessorpAddInstanceCallback @ 0x1C006C0A0 (ProcessorpAddInstanceCallback.c)
 *     IrqTranslateResources @ 0x1C0099870 (IrqTranslateResources.c)
 *     LinkNodepAddLinkNodeWorker @ 0x1C009C250 (LinkNodepAddLinkNodeWorker.c)
 *     AcpiUpdateInterruptProperties @ 0x1C00AEED0 (AcpiUpdateInterruptProperties.c)
 *     IrqLibAllocateMessageTarget @ 0x1C00B5DC0 (IrqLibAllocateMessageTarget.c)
 *     IrqLibFreeMessageTarget @ 0x1C00B6070 (IrqLibFreeMessageTarget.c)
 *     IrqTransGetInterruptVector @ 0x1C00B64E0 (IrqTransGetInterruptVector.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall IrqLibAcquireArbiterLock(char a1)
{
  NTSTATUS result; // eax

  result = KeWaitForSingleObject(Object, Executive, 0, 0, 0LL);
  if ( a1 )
  {
    while ( byte_1C00816E8 )
    {
      KeSetEvent(Object, 0, 0);
      KeWaitForSingleObject(qword_1C00816F0, Executive, 0, 0, 0LL);
      result = KeWaitForSingleObject(Object, Executive, 0, 0, 0LL);
    }
  }
  return result;
}
