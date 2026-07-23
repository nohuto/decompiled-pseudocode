/*
 * XREFs of CmpInitializeLoadOptions @ 0x140180EE8
 * Callers:
 *     CmInitSystem1 @ 0x1409C4050 (CmInitSystem1.c)
 * Callees:
 *     RtlInitAnsiString @ 0x1400EEE10 (RtlInitAnsiString.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     RtlAnsiStringToUnicodeString @ 0x1405ABDA0 (RtlAnsiStringToUnicodeString.c)
 */

wchar_t *__fastcall CmpInitializeLoadOptions(ULONG_PTR BugCheckParameter3)
{
  wchar_t *result; // rax
  _STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  RtlInitAnsiString(&DestinationString, *(PCSZ *)(BugCheckParameter3 + 216));
  CmpLoadOptions.Length = 0;
  CmpLoadOptions.MaximumLength = 2 * (DestinationString.Length + 1);
  CmpLoadOptions.Buffer = (wchar_t *)ExAllocatePoolWithTag(
                                       PagedPool,
                                       2LL * ((unsigned int)DestinationString.Length + 1),
                                       0x30394D43u);
  if ( !CmpLoadOptions.Buffer )
    KeBugCheckEx(0x74u, 3uLL, 1uLL, BugCheckParameter3, 0LL);
  RtlAnsiStringToUnicodeString(&CmpLoadOptions, &DestinationString, 0);
  result = CmpLoadOptions.Buffer;
  CmpLoadOptions.Buffer[DestinationString.Length] = 0;
  CmpLoadOptions.Length += 2;
  return result;
}
