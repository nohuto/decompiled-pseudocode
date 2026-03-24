/*
 * XREFs of PiSwFindChildren @ 0x1406E811C
 * Callers:
 *     PipEnumerateCompleted @ 0x1406E4E10 (PipEnumerateCompleted.c)
 *     PiSwProcessParentStartIrp @ 0x1406EB9DC (PiSwProcessParentStartIrp.c)
 *     PiSwStopDestroy @ 0x1406ED198 (PiSwStopDestroy.c)
 * Callees:
 *     PiSwFindBusRelations @ 0x1406E8140 (PiSwFindBusRelations.c)
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
