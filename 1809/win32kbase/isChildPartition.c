/*
 * XREFs of isChildPartition @ 0x1C010FE74
 * Callers:
 *     ?ivCallback@CHidInput@@MEAAJPEAX@Z @ 0x1C014D340 (-ivCallback@CHidInput@@MEAAJPEAX@Z.c)
 *     ?ivChildLoop@CBaseInput@@IEAAJXZ @ 0x1C0156A3C (-ivChildLoop@CBaseInput@@IEAAJXZ.c)
 * Callees:
 *     isRootPartition @ 0x1C010FEA0 (isRootPartition.c)
 */

__int64 isChildPartition()
{
  unsigned int v0; // ecx

  if ( gSessionId != 1 || (unsigned int)isRootPartition() )
    return 0;
  return v0;
}
