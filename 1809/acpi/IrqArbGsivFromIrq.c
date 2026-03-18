/*
 * XREFs of IrqArbGsivFromIrq @ 0x1C0091218
 * Callers:
 *     IrqArbpSetDeviceProperties @ 0x1C008FF20 (IrqArbpSetDeviceProperties.c)
 *     IrqArbAddAllocation @ 0x1C00901A0 (IrqArbAddAllocation.c)
 *     IrqTranslateResources @ 0x1C0090E70 (IrqTranslateResources.c)
 *     IcCopyInputStateToDeviceState @ 0x1C00910F0 (IcCopyInputStateToDeviceState.c)
 *     IrqArbpUnreferenceArbitrationList @ 0x1C0091878 (IrqArbpUnreferenceArbitrationList.c)
 *     IrqArbpFindSuitableRangePci @ 0x1C0093A44 (IrqArbpFindSuitableRangePci.c)
 *     IrqArbpFindSuitableRangeIsa @ 0x1C0093E2C (IrqArbpFindSuitableRangeIsa.c)
 *     IrqTransGetInterruptVector @ 0x1C00B2A60 (IrqTransGetInterruptVector.c)
 *     IrqArbBacktrackAllocation @ 0x1C00B2D30 (IrqArbBacktrackAllocation.c)
 *     IrqArbUpdateInterruptProperties @ 0x1C00B2F74 (IrqArbUpdateInterruptProperties.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IrqArbGsivFromIrq(unsigned __int64 a1)
{
  if ( a1 < 0x10 )
    return *((unsigned int *)&IsaVectorOverrides + 2 * (unsigned __int8)a1);
  else
    return (unsigned int)a1;
}
