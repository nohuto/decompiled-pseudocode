/*
 * XREFs of MiReturnProcessPhysicalPages @ 0x14085BC20
 * Callers:
 *     MiFreePhysicalPageChain @ 0x1402B04BC (MiFreePhysicalPageChain.c)
 * Callees:
 *     <none>
 */

void __fastcall MiReturnProcessPhysicalPages(__int64 a1, __int64 a2)
{
  _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1600), -a2);
}
