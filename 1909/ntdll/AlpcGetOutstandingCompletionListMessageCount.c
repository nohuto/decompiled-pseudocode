/*
 * XREFs of AlpcGetOutstandingCompletionListMessageCount @ 0x180085740
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG __cdecl AlpcGetOutstandingCompletionListMessageCount(PVOID CompletionList)
{
  return *((_DWORD *)CompletionList + 32) - *((_DWORD *)CompletionList + 48);
}
