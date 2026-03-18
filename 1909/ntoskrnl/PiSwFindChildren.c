/*
 * XREFs of PiSwFindChildren @ 0x1407007A0
 * Callers:
 *     PiSwProcessParentStartIrp @ 0x140700720 (PiSwProcessParentStartIrp.c)
 *     PipEnumerateCompleted @ 0x140707CA0 (PipEnumerateCompleted.c)
 *     PiSwStopDestroy @ 0x140732F28 (PiSwStopDestroy.c)
 * Callees:
 *     PiSwFindBusRelations @ 0x1407007C4 (PiSwFindBusRelations.c)
 */

__int64 PiSwFindChildren()
{
  __int64 BusRelations; // rcx
  __int64 result; // rax

  BusRelations = PiSwFindBusRelations();
  result = 0LL;
  if ( BusRelations )
    return BusRelations + 16;
  return result;
}
