/*
 * XREFs of ?CompletionHandler@CMit@@CAJPEAX00@Z @ 0x180071D90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CMit::CompletionHandler(void *a1, void *a2, void *a3)
{
  MITDispatchCompletion(a2, a3);
  return 0LL;
}
