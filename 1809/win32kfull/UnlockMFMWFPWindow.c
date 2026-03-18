/*
 * XREFs of UnlockMFMWFPWindow @ 0x1C020B4D4
 * Callers:
 *     xxxMNEndMenuStateInternal @ 0x1C01FA0A0 (xxxMNEndMenuStateInternal.c)
 *     xxxHandleMenuMessages @ 0x1C0208A7C (xxxHandleMenuMessages.c)
 *     LockMFMWFPWindow @ 0x1C020B074 (LockMFMWFPWindow.c)
 *     MNCheckButtonDownState @ 0x1C020B1B4 (MNCheckButtonDownState.c)
 *     NtUserMNDragLeave @ 0x1C0219570 (NtUserMNDragLeave.c)
 * Callees:
 *     IsMFMWFPWindow @ 0x1C020B04C (IsMFMWFPWindow.c)
 */

__int64 __fastcall UnlockMFMWFPWindow(__int64 *a1)
{
  __int64 result; // rax
  _QWORD *v2; // rdx

  result = IsMFMWFPWindow(*a1);
  if ( (_DWORD)result )
    return HMAssignmentUnlock(v2);
  *v2 = 0LL;
  return result;
}
