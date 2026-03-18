/*
 * XREFs of isRootPartition @ 0x1C010FEA0
 * Callers:
 *     isChildPartition @ 0x1C010FE74 (isChildPartition.c)
 * Callees:
 *     <none>
 */

__int64 isRootPartition()
{
  __int64 result; // rax

  result = 1LL;
  if ( gSessionId != 1 || !gbRootPartition )
    return 0LL;
  return result;
}
