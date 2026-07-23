/*
 * XREFs of IoDisconnectInterruptEx @ 0x140711570
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     IoDisconnectInterrupt @ 0x1407115F0 (IoDisconnectInterrupt.c)
 */

void __stdcall IoDisconnectInterruptEx(PIO_DISCONNECT_INTERRUPT_PARAMETERS Parameters)
{
  _DWORD *Generic; // rdi
  unsigned int i; // ebx
  unsigned int j; // ebx

  if ( Parameters->Version == 1 )
    goto LABEL_5;
  if ( Parameters->Version == 2 )
  {
    Generic = Parameters->ConnectionContext.Generic;
    for ( i = 0; i < Generic[65]; ++i )
      IoDisconnectInterrupt((PKINTERRUPT)(*(_QWORD *)&Generic[2 * i + 66] + 112LL));
  }
  else
  {
    if ( Parameters->Version != 3 )
    {
      if ( Parameters->Version == 4 )
      {
LABEL_5:
        IoDisconnectInterrupt(Parameters->ConnectionContext.InterruptObject);
        return;
      }
      if ( Parameters->Version != 5 )
        KeBugCheckEx(0xCAu, 9uLL, Parameters->Version, 0LL, 0LL);
    }
    Generic = Parameters->ConnectionContext.Generic;
    for ( j = 0; j < Generic[1]; ++j )
      IoDisconnectInterrupt(*(PKINTERRUPT *)&Generic[12 * j + 6]);
  }
  ExFreePoolWithTag(Generic, 0);
}
