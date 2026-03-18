/*
 * XREFs of ?compModeCap@@YAHPEAUtagModeCap@@0@Z @ 0x1C00577C4
 * Callers:
 *     ?InsertModecapList@@YAKPEAUtagModeCap@@0K@Z @ 0x1C00571DC (-InsertModecapList@@YAKPEAUtagModeCap@@0K@Z.c)
 *     ?PruneMode@@YAHPEAU_devicemodeW@@PEAUtagModeCap@@HPEAU_FREQUENCY_RAGE@@K@Z @ 0x1C00575D0 (-PruneMode@@YAHPEAU_devicemodeW@@PEAUtagModeCap@@HPEAU_FREQUENCY_RAGE@@K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall compModeCap(struct tagModeCap *a1, struct tagModeCap *a2)
{
  if ( *(_DWORD *)a1 == *(_DWORD *)a2 )
    return (unsigned int)(*((_DWORD *)a1 + 1) - *((_DWORD *)a2 + 1));
  else
    return (unsigned int)(*(_DWORD *)a1 - *(_DWORD *)a2);
}
