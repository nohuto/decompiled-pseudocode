/*
 * XREFs of PiInvalidateSpeculativeRelations @ 0x1406F0304
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x1406F0A30 (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     PnpInvalidateRelationsInList @ 0x1406EEF50 (PnpInvalidateRelationsInList.c)
 *     IopRemoveDeviceRelationsFromList @ 0x1406F0340 (IopRemoveDeviceRelationsFromList.c)
 */

__int64 __fastcall PiInvalidateSpeculativeRelations(unsigned int a1, _QWORD *a2)
{
  __int64 result; // rax

  result = a1 - 2;
  if ( (result & 0xFFFFFFFC) == 0 && a1 != 4 )
  {
    PnpInvalidateRelationsInList(a2, a1, 1, 0);
    return IopRemoveDeviceRelationsFromList(a2);
  }
  return result;
}
