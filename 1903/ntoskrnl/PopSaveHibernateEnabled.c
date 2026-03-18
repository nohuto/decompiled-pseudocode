/*
 * XREFs of PopSaveHibernateEnabled @ 0x1408A26E4
 * Callers:
 *     PopEnableHiberFile @ 0x14074AAD0 (PopEnableHiberFile.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     PopOpenKey @ 0x140182538 (PopOpenKey.c)
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     ZwSetValueKey @ 0x1401C0CD0 (ZwSetValueKey.c)
 */

NTSTATUS PopSaveHibernateEnabled()
{
  NTSTATUS result; // eax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF
  HANDLE KeyHandle; // [rsp+50h] [rbp+8h] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  PopHiberEnabledReg = PopHiberEnabled != 0;
  result = PopOpenKey(&KeyHandle, L"Control\\Power", 0x20006u);
  if ( result >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"HibernateEnabled");
    result = ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, &PopHiberEnabledReg, 4u);
    if ( KeyHandle )
      return ZwClose(KeyHandle);
  }
  return result;
}
