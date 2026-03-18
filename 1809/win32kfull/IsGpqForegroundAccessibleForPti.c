/*
 * XREFs of IsGpqForegroundAccessibleForPti @ 0x1C00AFFE8
 * Callers:
 *     IsGpqForegroundAccessible @ 0x1C00AFFBC (IsGpqForegroundAccessible.c)
 *     ?CheckCursorClipAccess@@YAHW4CursorClipAccess@@H@Z @ 0x1C00D8060 (-CheckCursorClipAccess@@YAHW4CursorClipAccess@@H@Z.c)
 *     ?zzzSetCursorPos@@YA_NHHK@Z @ 0x1C01205AC (-zzzSetCursorPos@@YA_NHHK@Z.c)
 * Callees:
 *     IsForegroundShellFrameQueueAccessible @ 0x1C0006640 (IsForegroundShellFrameQueueAccessible.c)
 */

__int64 __fastcall IsGpqForegroundAccessibleForPti(__int64 a1, int a2)
{
  unsigned int v2; // ebx
  __int64 v3; // r9
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // r8
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // r8

  v2 = 0;
  if ( !a2 )
    return 1;
  if ( !gpqForeground )
    return 1;
  v3 = *(_QWORD *)(a1 + 424);
  v4 = *(_QWORD *)(gpqForeground + 428LL);
  v5 = *(_QWORD *)(v3 + 880);
  if ( !gbEnforceUIPI )
    return 1;
  if ( (unsigned int)v5 > (unsigned int)v4 )
    return 1;
  if ( (_DWORD)v5 == (_DWORD)v4 )
  {
    v6 = HIDWORD(v4);
    v7 = HIDWORD(v5);
    if ( (_DWORD)v7 == (_DWORD)v6 || (_DWORD)v7 == -1 || (_DWORD)v6 == -1 )
      return 1;
  }
  if ( *(int *)(v3 + 12) < 0 || IsForegroundShellFrameQueueAccessible(a1) )
    return 1;
  return v2;
}
