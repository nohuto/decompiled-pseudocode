/*
 * XREFs of ?EntryInList@@YAHQEAU_LIST_ENTRY@@AEBU1@@Z @ 0x1C0164298
 * Callers:
 *     FreeTimer @ 0x1C00DAA90 (FreeTimer.c)
 *     NtUserKillTimer @ 0x1C00DABB0 (NtUserKillTimer.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EntryInList(struct _LIST_ENTRY *const a1, const struct _LIST_ENTRY *a2)
{
  struct _LIST_ENTRY *i; // rax

  for ( i = a2->Flink; ; i = i->Flink )
  {
    if ( i == a2 )
      return 0LL;
    if ( i == a1 )
      break;
  }
  return 1LL;
}
