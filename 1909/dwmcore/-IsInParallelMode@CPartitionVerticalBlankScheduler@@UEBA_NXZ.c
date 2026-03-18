/*
 * XREFs of ?IsInParallelMode@CPartitionVerticalBlankScheduler@@UEBA_NXZ @ 0x1801780E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall CPartitionVerticalBlankScheduler::IsInParallelMode(CPartitionVerticalBlankScheduler *this)
{
  char result; // al

  result = 0;
  if ( *((_DWORD *)this + 7724) || *((_DWORD *)this + 7725) )
    return 1;
  return result;
}
