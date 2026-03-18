/*
 * XREFs of IrqArbGsivFromIrq @ 0x1C0099C64
 * Callers:
 *     IrqArbpSetDeviceProperties @ 0x1C00988AC (IrqArbpSetDeviceProperties.c)
 *     IrqArbAddAllocation @ 0x1C0098B50 (IrqArbAddAllocation.c)
 *     IrqTranslateResources @ 0x1C0099870 (IrqTranslateResources.c)
 *     IcCopyInputStateToDeviceState @ 0x1C0099B20 (IcCopyInputStateToDeviceState.c)
 *     IrqArbpUnreferenceArbitrationList @ 0x1C009A324 (IrqArbpUnreferenceArbitrationList.c)
 *     IrqArbpFindSuitableRangePci @ 0x1C009C72C (IrqArbpFindSuitableRangePci.c)
 *     IrqArbpFindSuitableRangeIsa @ 0x1C009CB5C (IrqArbpFindSuitableRangeIsa.c)
 *     IrqTransGetInterruptVector @ 0x1C00B64E0 (IrqTransGetInterruptVector.c)
 *     IrqArbBacktrackAllocation @ 0x1C00B67C0 (IrqArbBacktrackAllocation.c)
 *     IrqArbUpdateInterruptProperties @ 0x1C00B6A34 (IrqArbUpdateInterruptProperties.c)
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
