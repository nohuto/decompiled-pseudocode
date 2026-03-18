/*
 * XREFs of UserGetLastStatus @ 0x1C01389B0
 * Callers:
 *     xxxLoadHmodIndex @ 0x1C00B29DC (xxxLoadHmodIndex.c)
 * Callees:
 *     <none>
 */

__int64 UserGetLastStatus()
{
  __int64 v0; // rcx
  bool v1; // zf
  struct _NT_TIB *Self; // rax

  if ( (unsigned __int8)KeIsAttachedProcess() )
    return 0LL;
  v1 = PsGetCurrentProcessWow64Process(v0) == 0;
  Self = KeGetPcr()->NtTib.Self;
  if ( v1 )
    return LODWORD(Self[83].ArbitraryUserPointer);
  else
    return HIDWORD(Self[200].Self);
}
