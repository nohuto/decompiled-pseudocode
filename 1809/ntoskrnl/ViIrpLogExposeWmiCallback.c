/*
 * XREFs of ViIrpLogExposeWmiCallback @ 0x1409418F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B9A70 (RtlInitUnicodeString.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     IoCreateDriver @ 0x14073A0B0 (IoCreateDriver.c)
 */

void __fastcall ViIrpLogExposeWmiCallback(PVOID P)
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  RtlInitUnicodeString(&ViDdiWmiMofKey, &word_140921C30);
  RtlInitUnicodeString(&ViDdiWmiMofResourceName, &word_140921C30);
  RtlInitUnicodeString(&DestinationString, L"\\DRIVER\\VERIFIER_DDI");
  IoCreateDriver(&DestinationString, (__int64 (__fastcall *)(PVOID, _QWORD))ViDdiDriverEntry);
  ViIrpLogDdiLock = 2;
  ExFreePoolWithTag(P, 0);
}
