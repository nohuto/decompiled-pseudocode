/*
 * XREFs of strnlen @ 0x1401A1BA0
 * Callers:
 *     EtwpGetEventNameFromEventMetadata @ 0x140332C98 (EtwpGetEventNameFromEventMetadata.c)
 *     EtwpSetProviderTraitsCommon @ 0x1405C43F0 (EtwpSetProviderTraitsCommon.c)
 *     EtwpGetProviderGroupFromTraits @ 0x1405C4684 (EtwpGetProviderGroupFromTraits.c)
 *     EtwpAllocateEventNameFilter @ 0x1408FE5E0 (EtwpAllocateEventNameFilter.c)
 * Callees:
 *     <none>
 */

size_t __cdecl strnlen(const char *Str, size_t MaxCount)
{
  size_t result; // rax

  for ( result = 0LL; result < MaxCount; ++Str )
  {
    if ( !*Str )
      break;
    ++result;
  }
  return result;
}
