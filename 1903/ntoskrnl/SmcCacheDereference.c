/*
 * XREFs of SmcCacheDereference @ 0x1408EBA80
 * Callers:
 *     SmcProcessCreateRequest @ 0x1408E8DC8 (SmcProcessCreateRequest.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140043820 (ExReleaseRundownProtection_0.c)
 */

void __fastcall SmcCacheDereference(__int64 a1, char a2)
{
  ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(32LL * (a2 & 0xF) + a1 + 8));
}
