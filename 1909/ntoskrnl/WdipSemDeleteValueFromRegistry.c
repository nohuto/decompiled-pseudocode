/*
 * XREFs of WdipSemDeleteValueFromRegistry @ 0x14076FAAC
 * Callers:
 *     WdipSemLoadConfigInfo @ 0x14076E430 (WdipSemLoadConfigInfo.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     ZwDeleteValueKey @ 0x1401C2690 (ZwDeleteValueKey.c)
 */

NTSTATUS __fastcall WdipSemDeleteValueFromRegistry(HANDLE KeyHandle)
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  if ( !KeyHandle )
    return -1073741811;
  RtlInitUnicodeString(&DestinationString, L"SEMUpdate");
  return ZwDeleteValueKey(KeyHandle, &DestinationString);
}
