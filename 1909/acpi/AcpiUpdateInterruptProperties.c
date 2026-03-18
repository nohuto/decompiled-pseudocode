/*
 * XREFs of AcpiUpdateInterruptProperties @ 0x1C00AEED0
 * Callers:
 *     <none>
 * Callees:
 *     IrqLibReleaseArbiterLock @ 0x1C001D974 (IrqLibReleaseArbiterLock.c)
 *     IrqLibAcquireArbiterLock @ 0x1C001D99C (IrqLibAcquireArbiterLock.c)
 *     IcIsInterruptTypeSecondary @ 0x1C009983C (IcIsInterruptTypeSecondary.c)
 *     ProcessorUpdateInterruptProperties @ 0x1C00B6604 (ProcessorUpdateInterruptProperties.c)
 *     IrqArbUpdateInterruptProperties @ 0x1C00B6A34 (IrqArbUpdateInterruptProperties.c)
 *     IcUpdateInterruptProperties @ 0x1C00B6F18 (IcUpdateInterruptProperties.c)
 */

__int64 __fastcall AcpiUpdateInterruptProperties(unsigned int a1, unsigned int a2, unsigned int a3)
{
  int updated; // ebx

  IrqLibAcquireArbiterLock(1);
  if ( IcIsInterruptTypeSecondary(a1) && a1 < 0xFFF00000 )
  {
    updated = ProcessorUpdateInterruptProperties(a1, a2);
    if ( updated >= 0 )
    {
      updated = IcUpdateInterruptProperties(a1, a2, a3);
      if ( updated >= 0 )
        updated = IrqArbUpdateInterruptProperties(a1);
    }
  }
  else
  {
    updated = -1073741811;
  }
  IrqLibReleaseArbiterLock();
  return (unsigned int)updated;
}
