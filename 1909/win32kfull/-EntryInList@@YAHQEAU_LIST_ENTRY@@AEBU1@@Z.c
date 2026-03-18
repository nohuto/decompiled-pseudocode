/*
 * XREFs of ?EntryInList@@YAHQEAU_LIST_ENTRY@@AEBU1@@Z @ 0x1C016552C
 * Callers:
 *     FreeTimer @ 0x1C007A780 (FreeTimer.c)
 *     NtUserKillTimer @ 0x1C007A8A0 (NtUserKillTimer.c)
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
