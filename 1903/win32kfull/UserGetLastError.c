/*
 * XREFs of UserGetLastError @ 0x1C0138968
 * Callers:
 *     NtUserSendInput @ 0x1C001DEB0 (NtUserSendInput.c)
 *     xxxLoadHmodIndex @ 0x1C00B29DC (xxxLoadHmodIndex.c)
 *     NtUserOpenClipboard @ 0x1C00B7020 (NtUserOpenClipboard.c)
 *     NtUserCloseClipboard @ 0x1C00B75E0 (NtUserCloseClipboard.c)
 *     NtUserSetClipboardData @ 0x1C00B89D0 (NtUserSetClipboardData.c)
 *     xxxCreateWindowEx @ 0x1C00BFE30 (xxxCreateWindowEx.c)
 *     NtUserGetClipboardData @ 0x1C0125AC0 (NtUserGetClipboardData.c)
 *     NtUserInjectTouchInput @ 0x1C02309A0 (NtUserInjectTouchInput.c)
 * Callees:
 *     <none>
 */

__int64 UserGetLastError()
{
  __int64 v0; // rcx
  bool v1; // zf
  struct _NT_TIB *Self; // rax

  if ( (unsigned __int8)KeIsAttachedProcess() )
    return 0LL;
  v1 = PsGetCurrentProcessWow64Process(v0) == 0;
  Self = KeGetPcr()->NtTib.Self;
  if ( v1 )
    return LODWORD(Self[1].Self);
  else
    return HIDWORD(Self[147].StackBase);
}
