/*
 * XREFs of PiSwFindBusRelations @ 0x1406FE9E4
 * Callers:
 *     PiSwFindChildren @ 0x1406FE9C0 (PiSwFindChildren.c)
 *     PiSwCloseDescendants @ 0x140730E50 (PiSwCloseDescendants.c)
 * Callees:
 *     RtlLookupElementGenericTableAvl @ 0x1400028D0 (RtlLookupElementGenericTableAvl.c)
 */

PVOID __fastcall PiSwFindBusRelations(__int64 a1)
{
  bool v1; // zf
  _OWORD Buffer[2]; // [rsp+20h] [rbp-28h] BYREF

  v1 = *(_QWORD *)(a1 + 8) == 0LL;
  Buffer[1] = 0LL;
  if ( v1 )
    return 0LL;
  Buffer[0] = *(_OWORD *)a1;
  return RtlLookupElementGenericTableAvl(&PiSwBusRelationsTable, Buffer);
}
