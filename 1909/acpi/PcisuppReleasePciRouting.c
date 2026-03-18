/*
 * XREFs of PcisuppReleasePciRouting @ 0x1C00B5D88
 * Callers:
 *     PcisuppAcquirePciInterfaces @ 0x1C00A25F0 (PcisuppAcquirePciInterfaces.c)
 *     PcisuppReleasePciInterfaces @ 0x1C00B5C78 (PcisuppReleasePciInterfaces.c)
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
