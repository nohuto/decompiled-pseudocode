/*
 * XREFs of xxxCloseClipboard @ 0x1C00B6410
 * Callers:
 *     FreeWindowStation @ 0x1C00B54D0 (FreeWindowStation.c)
 *     NtUserCloseClipboard @ 0x1C00B63D0 (NtUserCloseClipboard.c)
 *     xxxSnapWindow @ 0x1C0134044 (xxxSnapWindow.c)
 * Callees:
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     PopAndFreeW32ThreadLock @ 0x1C005D3C0 (PopAndFreeW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C005D730 (PushW32ThreadLock.c)
 *     ?xxxDrawClipboard@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C00B5D90 (-xxxDrawClipboard@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 *     ?MungeClipData@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C00B661C (-MungeClipData@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 *     CheckClipboardAccess @ 0x1C00B69B0 (CheckClipboardAccess.c)
 *     ?CloseClipboardToken@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C00B6C94 (-CloseClipboardToken@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 */

__int64 __fastcall xxxCloseClipboard(struct tagWINDOWSTATION *a1, __int64 a2)
{
  struct tagWINDOWSTATION *v2; // rbx
  __int64 v3; // rdx
  PACCESS_TOKEN v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct _KPROCESS *CurrentProcess; // rax
  _QWORD v9[5]; // [rsp+20h] [rbp-28h] BYREF
  unsigned __int8 EffectiveOnly; // [rsp+50h] [rbp+8h] BYREF
  unsigned __int8 CopyOnOpen; // [rsp+58h] [rbp+10h] BYREF
  enum _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel; // [rsp+60h] [rbp+18h] BYREF

  v2 = a1;
  if ( !a1 )
  {
    v2 = (struct tagWINDOWSTATION *)CheckClipboardAccess();
    if ( !v2 )
      return 0LL;
  }
  if ( *((_QWORD *)v2 + 6) != gptiCurrent )
  {
    UserSetLastError(1418LL, a2);
    return 0LL;
  }
  PushW32ThreadLock((__int64)v2, v9, UserDereferenceObject);
  ObfReferenceObject(v2);
  if ( (*((_DWORD *)v2 + 8) & 0x40) != 0 )
  {
    MungeClipData(v2);
    CloseClipboardToken(v2);
    if ( *((_DWORD *)v2 + 26) )
    {
      v5 = PsReferenceImpersonationToken(KeGetCurrentThread(), &CopyOnOpen, &EffectiveOnly, &ImpersonationLevel);
      if ( v5 )
      {
        *((_DWORD *)v2 + 8) |= 0x400u;
      }
      else
      {
        CurrentProcess = (struct _KPROCESS *)PsGetCurrentProcess(v7, v6);
        v5 = PsReferencePrimaryToken(CurrentProcess);
      }
      *((_QWORD *)v2 + 16) = v5;
    }
  }
  HMAssignmentUnlock((char *)v2 + 64);
  *((_QWORD *)v2 + 6) = 0LL;
  if ( (*((_DWORD *)v2 + 8) & 0x40) != 0 )
    xxxDrawClipboard(v2, v3);
  PopAndFreeW32ThreadLock((__int64)v9, v3);
  return 1LL;
}
