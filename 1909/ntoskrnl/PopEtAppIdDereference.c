/*
 * XREFs of PopEtAppIdDereference @ 0x140614D00
 * Callers:
 *     PopEtAggregateKeyCleanup @ 0x140614C30 (PopEtAggregateKeyCleanup.c)
 *     PoEnergyContextCleanup @ 0x140651F64 (PoEnergyContextCleanup.c)
 *     PopEtGetProcessAppId @ 0x14068696C (PopEtGetProcessAppId.c)
 * Callees:
 *     RtlInternEntryDereference @ 0x140614D2C (RtlInternEntryDereference.c)
 */

__int64 __fastcall PopEtAppIdDereference(__int64 a1)
{
  __int64 result; // rax

  if ( *(_WORD *)(a1 + 24) )
    return RtlInternEntryDereference(PopEtGlobals + 56);
  return result;
}
