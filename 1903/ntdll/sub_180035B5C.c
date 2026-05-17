/*
 * XREFs of sub_180035B5C @ 0x180035B5C
 * Callers:
 *     sub_180033CE0 @ 0x180033CE0 (sub_180033CE0.c)
 *     sub_180035510 @ 0x180035510 (sub_180035510.c)
 *     sub_180076EC8 @ 0x180076EC8 (sub_180076EC8.c)
 * Callees:
 *     <none>
 */

char sub_180035B5C()
{
  struct _TEB *v0; // rcx
  char result; // al

  v0 = NtCurrentTeb();
  if ( (((unsigned __int64)v0->CurrentTransactionHandle + 1) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
    return 1;
  result = 0;
  if ( v0->TxnScopeEnterCallback || v0->TxnScopeExitCallback || v0->TxnScopeContext || v0->TxFsContext != 65534 )
    return 1;
  return result;
}
