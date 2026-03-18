/*
 * XREFs of PcisuppReleasePciRouting @ 0x1C00B23BC
 * Callers:
 *     PcisuppAcquirePciInterfaces @ 0x1C008E1FC (PcisuppAcquirePciInterfaces.c)
 *     PcisuppReleasePciInterfaces @ 0x1C00B22C0 (PcisuppReleasePciInterfaces.c)
 * Callees:
 *     <none>
 */

void PcisuppReleasePciRouting()
{
  if ( InterruptRouting )
  {
    ExFreePoolWithTag(InterruptRouting, 0);
    InterruptRouting = 0LL;
  }
}
