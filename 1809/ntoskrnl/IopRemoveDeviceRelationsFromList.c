/*
 * XREFs of IopRemoveDeviceRelationsFromList @ 0x1406F0340
 * Callers:
 *     PiInvalidateSpeculativeRelations @ 0x1406F0304 (PiInvalidateSpeculativeRelations.c)
 * Callees:
 *     PipDeviceObjectListElementAt @ 0x140702174 (PipDeviceObjectListElementAt.c)
 *     PipDeviceObjectListRemove @ 0x140707CC4 (PipDeviceObjectListRemove.c)
 */

__int64 __fastcall IopRemoveDeviceRelationsFromList(unsigned int **a1)
{
  unsigned int v2; // ebx
  int v4; // [rsp+40h] [rbp+8h] BYREF
  char v5; // [rsp+48h] [rbp+10h] BYREF

  v2 = **a1;
  while ( (--v2 & 0x80000000) == 0 )
  {
    PipDeviceObjectListElementAt((unsigned int)*a1, v2, (unsigned int)&v5, (unsigned int)&v4, 0LL);
    if ( !v4 )
      PipDeviceObjectListRemove(*a1, v2);
  }
  return 0LL;
}
