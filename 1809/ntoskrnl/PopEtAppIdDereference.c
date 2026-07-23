/*
 * XREFs of PopEtAppIdDereference @ 0x140601278
 * Callers:
 *     PopEtAggregateKeyCleanup @ 0x1406011A4 (PopEtAggregateKeyCleanup.c)
 *     PoEnergyContextCleanup @ 0x1406088D0 (PoEnergyContextCleanup.c)
 *     PopEtGetProcessAppId @ 0x14069FEA8 (PopEtGetProcessAppId.c)
 * Callees:
 *     RtlInternEntryDereference @ 0x1406012A4 (RtlInternEntryDereference.c)
 */

__int64 __fastcall PopEtAppIdDereference(__int64 a1)
{
  __int64 result; // rax

  if ( *(_WORD *)(a1 + 24) )
    return RtlInternEntryDereference(PopEtGlobals + 56);
  return result;
}
