/*
 * XREFs of PopSetHiberFileSize @ 0x14086BBE4
 * Callers:
 *     NtPowerInformation @ 0x14058C170 (NtPowerInformation.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B9A70 (RtlInitUnicodeString.c)
 *     PopOpenKey @ 0x140178B34 (PopOpenKey.c)
 *     ZwClose @ 0x1401B8350 (ZwClose.c)
 *     ZwSetValueKey @ 0x1401B8D70 (ZwSetValueKey.c)
 *     PopValidateHiberFileSize @ 0x1406DFE54 (PopValidateHiberFileSize.c)
 *     PopCalculateHiberFileSize @ 0x14071DFC4 (PopCalculateHiberFileSize.c)
 *     PopSetHiberFileType @ 0x14086BCF0 (PopSetHiberFileType.c)
 */

__int64 __fastcall PopSetHiberFileSize(unsigned int a1, _QWORD *a2)
{
  int v3; // edi
  HANDLE v4; // rbp
  int v5; // ebx
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF
  HANDLE KeyHandle; // [rsp+60h] [rbp+18h] BYREF

  if ( a1 > 0x64 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v3 = PopHiberFileSizePercent;
    PopHiberFileSizePercent = a1;
    PopCalculateHiberFileSize(&KeyHandle, 0LL);
    v4 = KeyHandle;
    v5 = PopValidateHiberFileSize((__int64)KeyHandle, 0LL, 0LL);
    if ( v5 < 0
      || (unsigned int)PopHiberFileSizePercent >= 0x28 && (v5 = PopSetHiberFileType(2LL, 0LL), v5 < 0)
      || (v5 = PopOpenKey(&KeyHandle, L"Control\\Power", 0x20006u), v5 < 0)
      || (RtlInitUnicodeString(&DestinationString, L"HiberFileSizePercent"),
          v5 = ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, &PopHiberFileSizePercent, 4u),
          ZwClose(KeyHandle),
          v5 < 0) )
    {
      PopHiberFileSizePercent = v3;
    }
    else if ( a2 )
    {
      *a2 = v4;
    }
  }
  return (unsigned int)v5;
}
