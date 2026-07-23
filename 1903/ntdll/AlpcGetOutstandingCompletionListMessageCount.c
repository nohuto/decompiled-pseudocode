/*
 * XREFs of AlpcGetOutstandingCompletionListMessageCount @ 0x1800850A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG __cdecl AlpcGetOutstandingCompletionListMessageCount(PVOID CompletionList)
{
  return *((_DWORD *)CompletionList + 32) - *((_DWORD *)CompletionList + 48);
}
