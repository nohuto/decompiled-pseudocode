/*
 * XREFs of WheapLogIpmiSELEvent @ 0x140341888
 * Callers:
 *     WheaSelLogErrorPkt @ 0x140342FA8 (WheaSelLogErrorPkt.c)
 *     WheaSelLogEvent @ 0x140343094 (WheaSelLogEvent.c)
 * Callees:
 *     memmove @ 0x1401D6880 (memmove.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     WheapLogIpmiSELEventHighIrql @ 0x140341920 (WheapLogIpmiSELEventHighIrql.c)
 */

__int64 __fastcall WheapLogIpmiSELEvent(void *Src, size_t Size, int a3)
{
  ULONG v4; // ebx
  ULONG v6; // r9d

  v4 = Size;
  memset(&WheapDispatchPtr.Queue.Wcb.NumberOfMapRegisters + 1, 0, 0xFECuLL);
  WheapDispatchPtr.Queue.Wcb.DeviceRoutine = (PDRIVER_CONTROL)0x15253534FLL;
  v6 = 4075;
  HIDWORD(WheapDispatchPtr.Queue.Wcb.DeviceContext) = a3;
  if ( v4 + 21 <= 0x1000 )
    v6 = v4;
  WheapDispatchPtr.Queue.Wcb.NumberOfMapRegisters = v6;
  LODWORD(WheapDispatchPtr.Queue.Wcb.DeviceContext) = v6 + 20;
  memmove(&WheapDispatchPtr.Queue.Wcb.NumberOfMapRegisters + 1, Src, v6);
  return WheapLogIpmiSELEventHighIrql();
}
