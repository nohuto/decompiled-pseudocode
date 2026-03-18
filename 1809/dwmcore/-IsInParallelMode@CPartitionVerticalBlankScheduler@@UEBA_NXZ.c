/*
 * XREFs of ?IsInParallelMode@CPartitionVerticalBlankScheduler@@UEBA_NXZ @ 0x180149B80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall CPartitionVerticalBlankScheduler::IsInParallelMode(CPartitionVerticalBlankScheduler *this)
{
  char result; // al

  result = 0;
  if ( *((_DWORD *)this + 7642) || *((_DWORD *)this + 7643) )
    return 1;
  return result;
}
