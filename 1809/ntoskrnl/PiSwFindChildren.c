/*
 * XREFs of PiSwFindChildren @ 0x1406E813C
 * Callers:
 *     PipEnumerateCompleted @ 0x1406E4E30 (PipEnumerateCompleted.c)
 *     PiSwProcessParentStartIrp @ 0x1406EB9FC (PiSwProcessParentStartIrp.c)
 *     PiSwStopDestroy @ 0x1406ED1B8 (PiSwStopDestroy.c)
 * Callees:
 *     PiSwFindBusRelations @ 0x1406E8160 (PiSwFindBusRelations.c)
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
