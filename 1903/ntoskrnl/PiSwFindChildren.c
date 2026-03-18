/*
 * XREFs of PiSwFindChildren @ 0x1406FE9C0
 * Callers:
 *     PiSwProcessParentStartIrp @ 0x1406FE940 (PiSwProcessParentStartIrp.c)
 *     PipEnumerateCompleted @ 0x140705EC0 (PipEnumerateCompleted.c)
 *     PiSwStopDestroy @ 0x140730CC8 (PiSwStopDestroy.c)
 * Callees:
 *     PiSwFindBusRelations @ 0x1406FE9E4 (PiSwFindBusRelations.c)
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
