/*
 * XREFs of UserGetLastError @ 0x1C019FB8C
 * Callers:
 *     NtUserReportInertia @ 0x1C0004670 (NtUserReportInertia.c)
 *     NtUserInjectDeviceInput @ 0x1C0117180 (NtUserInjectDeviceInput.c)
 *     NtUserInjectGenericHidInput @ 0x1C01175E0 (NtUserInjectGenericHidInput.c)
 *     NtUserInjectKeyboardInput @ 0x1C0117D50 (NtUserInjectKeyboardInput.c)
 *     NtUserInjectMouseInput @ 0x1C01181A0 (NtUserInjectMouseInput.c)
 *     NtUserInjectPointerInput @ 0x1C01185E0 (NtUserInjectPointerInput.c)
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
