/*
 * XREFs of PfpScenCtxStart @ 0x14077BB4C
 * Callers:
 *     PfInitializeSuperfetch @ 0x140A19260 (PfInitializeSuperfetch.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     PfpCreateEvent @ 0x14077BBD0 (PfpCreateEvent.c)
 */

__int64 __fastcall PfpScenCtxStart(__int64 a1)
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\KernelObjects\\SuperfetchScenarioNotify");
  return PfpCreateEvent(&DestinationString, 0LL, a1 + 64);
}
