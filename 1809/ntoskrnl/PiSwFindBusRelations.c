/*
 * XREFs of PiSwFindBusRelations @ 0x1406E93E0
 * Callers:
 *     PiSwFindChildren @ 0x1406E93BC (PiSwFindChildren.c)
 *     PiSwCloseDescendants @ 0x1406EE5B8 (PiSwCloseDescendants.c)
 * Callees:
 *     RtlLookupElementGenericTableAvl @ 0x140006BF0 (RtlLookupElementGenericTableAvl.c)
 */

PVOID __fastcall PiSwFindBusRelations(__int128 *a1)
{
  __int128 Buffer; // [rsp+20h] [rbp-28h] BYREF

  if ( !*((_QWORD *)a1 + 1) )
    return 0LL;
  Buffer = *a1;
  return RtlLookupElementGenericTableAvl(&PiSwBusRelationsTable, &Buffer);
}
