/*
 * XREFs of UserGetLastError @ 0x1C01310C0
 * Callers:
 *     xxxCreateWindowEx @ 0x1C003DE94 (xxxCreateWindowEx.c)
 *     xxxLoadHmodIndex @ 0x1C00B5F5C (xxxLoadHmodIndex.c)
 *     NtUserOpenClipboard @ 0x1C00D92E0 (NtUserOpenClipboard.c)
 *     NtUserCloseClipboard @ 0x1C00D9890 (NtUserCloseClipboard.c)
 *     NtUserSetClipboardData @ 0x1C00DB250 (NtUserSetClipboardData.c)
 *     NtUserGetClipboardData @ 0x1C00DCA10 (NtUserGetClipboardData.c)
 * Callees:
 *     <none>
 */

__int64 UserGetLastError()
{
  __int64 v0; // rcx
  __int64 CurrentProcessWow64Process; // rax
  struct _NT_TIB *Self; // rcx

  if ( (unsigned __int8)KeIsAttachedProcess() )
    return 0LL;
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v0);
  Self = KeGetPcr()->NtTib.Self;
  if ( CurrentProcessWow64Process )
    return HIDWORD(Self[147].StackBase);
  else
    return LODWORD(Self[1].Self);
}
