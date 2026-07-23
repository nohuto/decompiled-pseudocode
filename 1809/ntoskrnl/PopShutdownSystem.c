/*
 * XREFs of PopShutdownSystem @ 0x14057F014
 * Callers:
 *     PopGracefulShutdown @ 0x14057D9C0 (PopGracefulShutdown.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     HvlConfigureMemoryZeroingOnReset @ 0x140270D98 (HvlConfigureMemoryZeroingOnReset.c)
 *     VslNotifyShutdown @ 0x14027BACC (VslNotifyShutdown.c)
 *     DbgUnLoadImageSymbols @ 0x1402ECC0C (DbgUnLoadImageSymbols.c)
 *     PopInvokeSystemStateHandler @ 0x140569DB8 (PopInvokeSystemStateHandler.c)
 *     PopSetMemoryOverwriteRequestAction @ 0x14057D8FC (PopSetMemoryOverwriteRequestAction.c)
 *     PopNotifyShutdownListener @ 0x14057EFB4 (PopNotifyShutdownListener.c)
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
    qword_140419288 = (__int64)PopShutdownHandler;
  }
  PopInvokeSystemStateHandler(4, 0LL);
  HalReturnToFirmware(1LL);
}
