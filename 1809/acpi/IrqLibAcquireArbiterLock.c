/*
 * XREFs of IrqLibAcquireArbiterLock @ 0x1C000EEF4
 * Callers:
 *     IrqLibpGetVectorInput @ 0x1C002CA10 (IrqLibpGetVectorInput.c)
 *     ProcessorpAddInstanceCallback @ 0x1C006A030 (ProcessorpAddInstanceCallback.c)
 *     LinkNodepAddLinkNodeWorker @ 0x1C008F500 (LinkNodepAddLinkNodeWorker.c)
 *     IrqTranslateResources @ 0x1C0090E70 (IrqTranslateResources.c)
 *     AcpiUpdateInterruptProperties @ 0x1C00AB7F0 (AcpiUpdateInterruptProperties.c)
 *     IrqLibAllocateMessageTarget @ 0x1C00B23F0 (IrqLibAllocateMessageTarget.c)
 *     IrqLibFreeMessageTarget @ 0x1C00B2690 (IrqLibFreeMessageTarget.c)
 *     IrqTransGetInterruptVector @ 0x1C00B2A60 (IrqTransGetInterruptVector.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall IrqLibAcquireArbiterLock(char a1)
{
  NTSTATUS result; // eax

  result = KeWaitForSingleObject(Object, Executive, 0, 0, 0LL);
  if ( a1 )
  {
    while ( byte_1C007F6E8 )
    {
      KeSetEvent(Object, 0, 0);
      KeWaitForSingleObject(qword_1C007F6F0, Executive, 0, 0, 0LL);
      result = KeWaitForSingleObject(Object, Executive, 0, 0, 0LL);
    }
  }
  return result;
}
