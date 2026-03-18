/*
 * XREFs of ViIrpLogExposeWmiCallback @ 0x1409811A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     IoCreateDriver @ 0x140754B70 (IoCreateDriver.c)
 */

void __fastcall ViIrpLogExposeWmiCallback(PVOID P)
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  RtlInitUnicodeString(&ViDdiWmiMofKey, &word_140960C00);
  RtlInitUnicodeString(&ViDdiWmiMofResourceName, &word_140960C00);
  RtlInitUnicodeString(&DestinationString, L"\\DRIVER\\VERIFIER_DDI");
  IoCreateDriver(&DestinationString, (__int64 (__fastcall *)(PVOID, _QWORD))ViDdiDriverEntry);
  ViIrpLogDdiLock = 2;
  ExFreePoolWithTag(P, 0);
}
