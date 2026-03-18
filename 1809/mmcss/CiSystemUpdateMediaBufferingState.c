/*
 * XREFs of CiSystemUpdateMediaBufferingState @ 0x1C0002AE0
 * Callers:
 *     CiSchedulerTaskIndexYield @ 0x1C0001480 (CiSchedulerTaskIndexYield.c)
 *     CiSchedulerProcessDeadlines @ 0x1C0001E30 (CiSchedulerProcessDeadlines.c)
 *     CiSchedulerCancelTaskIndexYield @ 0x1C0002B30 (CiSchedulerCancelTaskIndexYield.c)
 *     CiSchedulerRemoveTaskIndex @ 0x1C0002C40 (CiSchedulerRemoveTaskIndex.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CiSystemUpdateMediaBufferingState(__int64 a1)
{
  __int64 result; // rax

  if ( (CiTotalTasksBuffering != 0) != CiCurrentMediaBufferingState
    && (!CiTotalTasksBuffering || !CiTotalTasksDeadlineExpired) )
  {
    CiCurrentMediaBufferingState = CiTotalTasksBuffering != 0;
    LOBYTE(a1) = CiTotalTasksBuffering != 0;
    return PoNotifyMediaBuffering(a1);
  }
  return result;
}
