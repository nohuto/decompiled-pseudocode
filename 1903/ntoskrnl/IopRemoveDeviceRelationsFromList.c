/*
 * XREFs of IopRemoveDeviceRelationsFromList @ 0x14072F78C
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x14072E630 (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     PipDeviceObjectListRemove @ 0x14072D944 (PipDeviceObjectListRemove.c)
 *     PipDeviceObjectListElementAt @ 0x140739564 (PipDeviceObjectListElementAt.c)
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
