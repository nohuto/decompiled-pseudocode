/*
 * XREFs of UserGetLastError @ 0x1C01A1E3C
 * Callers:
 *     NtUserReportInertia @ 0x1C0004670 (NtUserReportInertia.c)
 *     NtUserInjectDeviceInput @ 0x1C0119AF0 (NtUserInjectDeviceInput.c)
 *     NtUserInjectGenericHidInput @ 0x1C0119F50 (NtUserInjectGenericHidInput.c)
 *     NtUserInjectKeyboardInput @ 0x1C011A6C0 (NtUserInjectKeyboardInput.c)
 *     NtUserInjectMouseInput @ 0x1C011AB10 (NtUserInjectMouseInput.c)
 *     NtUserInjectPointerInput @ 0x1C011AF50 (NtUserInjectPointerInput.c)
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
