/*
 * XREFs of UnlockMFMWFPWindow @ 0x1C01E55A8
 * Callers:
 *     xxxMNEndMenuStateInternal @ 0x1C01D54B0 (xxxMNEndMenuStateInternal.c)
 *     xxxHandleMenuMessages @ 0x1C01E2BFC (xxxHandleMenuMessages.c)
 *     LockMFMWFPWindow @ 0x1C01E5158 (LockMFMWFPWindow.c)
 *     MNCheckButtonDownState @ 0x1C01E5288 (MNCheckButtonDownState.c)
 *     NtUserMNDragLeave @ 0x1C01F1FE0 (NtUserMNDragLeave.c)
 * Callees:
 *     IsMFMWFPWindow @ 0x1C01E5130 (IsMFMWFPWindow.c)
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
