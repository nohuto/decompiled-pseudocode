/*
 * XREFs of xxxCloseClipboard @ 0x1C00B78A0
 * Callers:
 *     NtUserCloseClipboard @ 0x1C00B75E0 (NtUserCloseClipboard.c)
 *     FreeWindowStation @ 0x1C0125370 (FreeWindowStation.c)
 *     xxxSnapWindow @ 0x1C015CA8C (xxxSnapWindow.c)
 * Callees:
 *     ?xxxDrawClipboard@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C0011998 (-xxxDrawClipboard@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 *     PushW32ThreadLock @ 0x1C001F0A0 (PushW32ThreadLock.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     ?MungeClipData@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C00B6B40 (-MungeClipData@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 *     CheckClipboardAccess @ 0x1C00B7CBC (CheckClipboardAccess.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00D0DF0 (PopAndFreeW32ThreadLock.c)
 *     ?CloseClipboardToken@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C0125520 (-CloseClipboardToken@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 */

__int64 __fastcall xxxCloseClipboard(struct tagWINDOWSTATION *a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct tagWINDOWSTATION *v4; // rbx
  PACCESS_TOKEN v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  struct _KPROCESS *CurrentProcess; // rax
  _QWORD v12[5]; // [rsp+20h] [rbp-28h] BYREF
  unsigned __int8 EffectiveOnly; // [rsp+50h] [rbp+8h] BYREF
  unsigned __int8 CopyOnOpen; // [rsp+58h] [rbp+10h] BYREF
  enum _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel; // [rsp+60h] [rbp+18h] BYREF

  v4 = a1;
  memset(v12, 0, 24);
  if ( !a1 )
  {
    v4 = (struct tagWINDOWSTATION *)CheckClipboardAccess(0LL, a2, a3);
    if ( !v4 )
      return 0LL;
  }
  if ( *((_QWORD *)v4 + 6) != gptiCurrent )
  {
    UserSetLastError(1418LL, a2, a3, a4);
    return 0LL;
  }
  PushW32ThreadLock((__int64)v4, v12, UserDereferenceObject, a4);
  ObfReferenceObject(v4);
  if ( (*((_DWORD *)v4 + 8) & 0x40) != 0 )
  {
    MungeClipData(v4);
    CloseClipboardToken(v4);
    if ( *((_DWORD *)v4 + 26) )
    {
      v6 = PsReferenceImpersonationToken(KeGetCurrentThread(), &CopyOnOpen, &EffectiveOnly, &ImpersonationLevel);
      if ( v6 )
      {
        *((_DWORD *)v4 + 8) |= 0x400u;
      }
      else
      {
        CurrentProcess = (struct _KPROCESS *)PsGetCurrentProcess(v8, v7, v9, v10);
        v6 = PsReferencePrimaryToken(CurrentProcess);
      }
      *((_QWORD *)v4 + 16) = v6;
    }
  }
  HMAssignmentUnlock((char *)v4 + 64);
  *((_QWORD *)v4 + 6) = 0LL;
  if ( (*((_DWORD *)v4 + 8) & 0x40) != 0 )
    xxxDrawClipboard(v4);
  PopAndFreeW32ThreadLock(v12);
  return 1LL;
}
