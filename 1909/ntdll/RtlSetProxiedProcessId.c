/*
 * XREFs of RtlSetProxiedProcessId @ 0x180084FD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlSetProxiedProcessId(unsigned int a1)
{
  struct _TEB *v1; // rdx
  __int64 result; // rax

  v1 = NtCurrentTeb();
  if ( !v1 )
    return 0LL;
  result = v1->ProxiedProcessId;
  v1->ProxiedProcessId = a1;
  return result;
}
