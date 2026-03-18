/*
 * XREFs of xxxCloseClipboard @ 0x1C00D9B50
 * Callers:
 *     NtUserCloseClipboard @ 0x1C00D9890 (NtUserCloseClipboard.c)
 *     FreeWindowStation @ 0x1C00E03A0 (FreeWindowStation.c)
 *     xxxSnapWindow @ 0x1C0155AF4 (xxxSnapWindow.c)
 * Callees:
 *     PopAndFreeW32ThreadLock @ 0x1C0037100 (PopAndFreeW32ThreadLock.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     PushW32ThreadLock @ 0x1C00AF710 (PushW32ThreadLock.c)
 *     CheckClipboardAccess @ 0x1C00D9EE8 (CheckClipboardAccess.c)
 *     ?MungeClipData@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C00DA8D4 (-MungeClipData@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 *     ?xxxDrawClipboard@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C00DC2C8 (-xxxDrawClipboard@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 *     ?CloseClipboardToken@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C00E0358 (-CloseClipboardToken@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 */

__int64 __fastcall xxxCloseClipboard(struct tagWINDOWSTATION *a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct tagWINDOWSTATION *v4; // rbx
  __int64 v5; // rdx
  PACCESS_TOKEN v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  struct _KPROCESS *CurrentProcess; // rax
  _QWORD v13[5]; // [rsp+20h] [rbp-28h] BYREF
  unsigned __int8 EffectiveOnly; // [rsp+50h] [rbp+8h] BYREF
  unsigned __int8 CopyOnOpen; // [rsp+58h] [rbp+10h] BYREF
  enum _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel; // [rsp+60h] [rbp+18h] BYREF

  v4 = a1;
  if ( !a1 )
  {
    v4 = (struct tagWINDOWSTATION *)CheckClipboardAccess();
    if ( !v4 )
      return 0LL;
  }
  if ( *((_QWORD *)v4 + 6) != gptiCurrent )
  {
    UserSetLastError(1418LL, a2, a3, a4);
    return 0LL;
  }
  PushW32ThreadLock((__int64)v4, v13, UserDereferenceObject);
  ObfReferenceObject(v4);
  if ( (*((_DWORD *)v4 + 8) & 0x40) != 0 )
  {
    MungeClipData(v4);
    CloseClipboardToken(v4);
    if ( *((_DWORD *)v4 + 26) )
    {
      v7 = PsReferenceImpersonationToken(KeGetCurrentThread(), &CopyOnOpen, &EffectiveOnly, &ImpersonationLevel);
      if ( v7 )
      {
        *((_DWORD *)v4 + 8) |= 0x400u;
      }
      else
      {
        CurrentProcess = (struct _KPROCESS *)PsGetCurrentProcess(v9, v8, v10, v11);
        v7 = PsReferencePrimaryToken(CurrentProcess);
      }
      *((_QWORD *)v4 + 16) = v7;
    }
  }
  HMAssignmentUnlock((char *)v4 + 64);
  *((_QWORD *)v4 + 6) = 0LL;
  if ( (*((_DWORD *)v4 + 8) & 0x40) != 0 )
    xxxDrawClipboard(v4);
  PopAndFreeW32ThreadLock((__int64)v13, v5);
  return 1LL;
}
