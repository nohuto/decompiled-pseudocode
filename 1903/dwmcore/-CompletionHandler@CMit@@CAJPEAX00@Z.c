/*
 * XREFs of ?CompletionHandler@CMit@@CAJPEAX00@Z @ 0x1800CE330
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CMit::CompletionHandler(void *a1, void *a2, void *a3)
{
  NtMITDispatchCompletion(a2, a3);
  return 0LL;
}
