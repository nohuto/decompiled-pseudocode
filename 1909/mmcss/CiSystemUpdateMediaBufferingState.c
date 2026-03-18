/*
 * XREFs of CiSystemUpdateMediaBufferingState @ 0x1C0002940
 * Callers:
 *     CiSchedulerProcessDeadlines @ 0x1C0001B30 (CiSchedulerProcessDeadlines.c)
 *     CiSchedulerTaskIndexYield @ 0x1C0001DF0 (CiSchedulerTaskIndexYield.c)
 *     CiSchedulerRemoveTaskIndex @ 0x1C00029C0 (CiSchedulerRemoveTaskIndex.c)
 *     CiSchedulerCancelTaskIndexYield @ 0x1C0002A80 (CiSchedulerCancelTaskIndexYield.c)
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
