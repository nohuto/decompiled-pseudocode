/*
 * XREFs of PipIsDeviceReadyForPowerRelations @ 0x140700890
 * Callers:
 *     PipAddtoRebuildPowerRelationsQueue @ 0x140700804 (PipAddtoRebuildPowerRelationsQueue.c)
 *     PipProcessRebuildPowerRelationsQueue @ 0x1407008C0 (PipProcessRebuildPowerRelationsQueue.c)
 * Callees:
 *     <none>
 */

bool __fastcall PipIsDeviceReadyForPowerRelations(__int64 a1)
{
  __int64 v1; // rcx
  bool result; // al

  result = 0;
  if ( a1 )
  {
    v1 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL);
    if ( v1 )
    {
      if ( *(_DWORD *)(v1 + 300) != 769 )
        return 1;
    }
  }
  return result;
}
