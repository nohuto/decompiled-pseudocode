/*
 * XREFs of PfpScenCtxStart @ 0x140752E14
 * Callers:
 *     PfInitializeSuperfetch @ 0x1409D4634 (PfInitializeSuperfetch.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B9A70 (RtlInitUnicodeString.c)
 *     PfpCreateEvent @ 0x140752E90 (PfpCreateEvent.c)
 */

__int64 __fastcall PfpScenCtxStart(__int64 a1)
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  RtlInitUnicodeString(&DestinationString, L"\\KernelObjects\\SuperfetchScenarioNotify");
  return PfpCreateEvent(&DestinationString, 0LL, a1 + 64);
}
