/*
 * XREFs of PopShutdownSystem @ 0x14057E014
 * Callers:
 *     PopGracefulShutdown @ 0x14057C9C0 (PopGracefulShutdown.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401BBBA0 (KeBugCheckEx.c)
 *     HvlConfigureMemoryZeroingOnReset @ 0x140270AA8 (HvlConfigureMemoryZeroingOnReset.c)
 *     VslNotifyShutdown @ 0x14027B7DC (VslNotifyShutdown.c)
 *     DbgUnLoadImageSymbols @ 0x1402EC91C (DbgUnLoadImageSymbols.c)
 *     PopInvokeSystemStateHandler @ 0x140568DB8 (PopInvokeSystemStateHandler.c)
 *     PopSetMemoryOverwriteRequestAction @ 0x14057C8FC (PopSetMemoryOverwriteRequestAction.c)
 *     PopNotifyShutdownListener @ 0x14057DFB4 (PopNotifyShutdownListener.c)
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
    qword_1404181E8 = (__int64)PopShutdownHandler;
  }
  PopInvokeSystemStateHandler(4, 0LL);
  HalReturnToFirmware(1LL);
}
