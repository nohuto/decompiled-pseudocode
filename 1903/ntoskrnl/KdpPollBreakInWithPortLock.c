/*
 * XREFs of KdpPollBreakInWithPortLock @ 0x1402A2E60
 * Callers:
 *     KdpPrintString @ 0x140957D2C (KdpPrintString.c)
 * Callees:
 *     <none>
 */

bool KdpPollBreakInWithPortLock()
{
  char v0; // bl

  v0 = 0;
  if ( (_BYTE)KdDebuggerEnabled )
  {
    if ( BYTE4(KdpContext) )
    {
      v0 = 1;
      BYTE4(KdpContext) = 0;
    }
    else
    {
      return (unsigned int)KdReceivePacket(8LL, 0LL, 0LL, 0LL, 0LL) == 0;
    }
  }
  return v0;
}
