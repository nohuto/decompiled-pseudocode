/*
 * XREFs of PiSwFindChildren @ 0x1406E93BC
 * Callers:
 *     PipEnumerateCompleted @ 0x1406E60B0 (PipEnumerateCompleted.c)
 *     PiSwProcessParentStartIrp @ 0x1406ECC7C (PiSwProcessParentStartIrp.c)
 *     PiSwStopDestroy @ 0x1406EE438 (PiSwStopDestroy.c)
 * Callees:
 *     PiSwFindBusRelations @ 0x1406E93E0 (PiSwFindBusRelations.c)
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
