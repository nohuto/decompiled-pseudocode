/*
 * XREFs of UnlockMFMWFPWindow @ 0x1C0223004
 * Callers:
 *     xxxMNEndMenuStateInternal @ 0x1C0210D60 (xxxMNEndMenuStateInternal.c)
 *     xxxHandleMenuMessages @ 0x1C0220464 (xxxHandleMenuMessages.c)
 *     LockMFMWFPWindow @ 0x1C0222B98 (LockMFMWFPWindow.c)
 *     MNCheckButtonDownState @ 0x1C0222CDC (MNCheckButtonDownState.c)
 *     NtUserMNDragLeave @ 0x1C02313E0 (NtUserMNDragLeave.c)
 * Callees:
 *     IsMFMWFPWindow @ 0x1C0222B70 (IsMFMWFPWindow.c)
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
