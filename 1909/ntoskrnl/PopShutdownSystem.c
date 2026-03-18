/*
 * XREFs of PopShutdownSystem @ 0x1405ADEE4
 * Callers:
 *     PopGracefulShutdown @ 0x1405AC850 (PopGracefulShutdown.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     HvlConfigureMemoryZeroingOnReset @ 0x140284608 (HvlConfigureMemoryZeroingOnReset.c)
 *     VslNotifyShutdown @ 0x14028FD60 (VslNotifyShutdown.c)
 *     DbgUnLoadImageSymbols @ 0x14030AC9C (DbgUnLoadImageSymbols.c)
 *     PopInvokeSystemStateHandler @ 0x14059871C (PopInvokeSystemStateHandler.c)
 *     PopSetMemoryOverwriteRequestAction @ 0x1405AC78C (PopSetMemoryOverwriteRequestAction.c)
 *     PopNotifyShutdownListener @ 0x1405ADE7C (PopNotifyShutdownListener.c)
 */

void __fastcall __noreturn PopShutdownSystem(int a1)
{
  int v2; // ebx
  int v3; // ebx

  PopNotifyShutdownListener();
  VslNotifyShutdown(0);
  HvlConfigureMemoryZeroingOnReset(0);
  PopSetMemoryOverwriteRequestAction();
  DbgUnLoadImageSymbols(0LL, (PVOID)0xFFFFFFFFFFFFFFFFLL, 0LL);
  if ( (PopSimulate & 0x800) != 0 && ((a1 - 4) & 0xFFFFFFFD) == 0 )
    a1 = 5;
  v2 = a1 - 4;
  if ( v2 )
  {
    v3 = v2 - 1;
    if ( !v3 )
    {
      PopInvokeSystemStateHandler(5, 0LL);
      goto LABEL_12;
    }
    if ( v3 != 1 )
LABEL_12:
      HalReturnToFirmware(3LL);
  }
  else if ( PopShutdownPowerOffPolicy )
  {
    qword_140443B28 = (__int64)PopShutdownHandler;
  }
  PopInvokeSystemStateHandler(4, 0LL);
  HalReturnToFirmware(1LL);
}
