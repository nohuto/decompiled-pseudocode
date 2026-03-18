/*
 * XREFs of UserGetLastError @ 0x1C00D8FA4
 * Callers:
 *     xxxLoadHmodIndex @ 0x1C00D86B0 (xxxLoadHmodIndex.c)
 * Callees:
 *     <none>
 */

__int64 UserGetLastError()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 CurrentProcessWow64Process; // rax
  struct _NT_TIB *Self; // rcx

  if ( (unsigned __int8)KeIsAttachedProcess() )
    return 0LL;
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v1, v0, v2, v3);
  Self = KeGetPcr()->NtTib.Self;
  if ( CurrentProcessWow64Process )
    return HIDWORD(Self[147].StackBase);
  else
    return LODWORD(Self[1].Self);
}
