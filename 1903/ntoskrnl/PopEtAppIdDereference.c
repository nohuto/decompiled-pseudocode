/*
 * XREFs of PopEtAppIdDereference @ 0x1406131F0
 * Callers:
 *     PopEtAggregateKeyCleanup @ 0x140613120 (PopEtAggregateKeyCleanup.c)
 *     PoEnergyContextCleanup @ 0x140671134 (PoEnergyContextCleanup.c)
 *     PopEtGetProcessAppId @ 0x1406933FC (PopEtGetProcessAppId.c)
 * Callees:
 *     RtlInternEntryDereference @ 0x14061321C (RtlInternEntryDereference.c)
 */

__int64 __fastcall PopEtAppIdDereference(__int64 a1)
{
  __int64 result; // rax

  if ( *(_WORD *)(a1 + 24) )
    return RtlInternEntryDereference(PopEtGlobals + 56);
  return result;
}
