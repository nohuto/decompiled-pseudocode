/*
 * XREFs of ExSetLeapSecondEnabled @ 0x1408CD0E8
 * Callers:
 *     NtSetSystemInformation @ 0x140663E10 (NtSetSystemInformation.c)
 * Callees:
 *     ZwClose @ 0x1401B8350 (ZwClose.c)
 *     ZwSetValueKey @ 0x1401B8D70 (ZwSetValueKey.c)
 *     ExpGetLeapSecondDataRegistryKeyHandle @ 0x140735664 (ExpGetLeapSecondDataRegistryKeyHandle.c)
 */

__int64 __fastcall ExSetLeapSecondEnabled(char a1)
{
  NTSTATUS LeapSecondDataRegistryKeyHandle; // edi
  BOOL Data; // [rsp+48h] [rbp+10h] BYREF
  HANDLE KeyHandle; // [rsp+50h] [rbp+18h] BYREF

  LeapSecondDataRegistryKeyHandle = ExpGetLeapSecondDataRegistryKeyHandle(&KeyHandle);
  if ( LeapSecondDataRegistryKeyHandle >= 0 )
  {
    Data = a1 != 0;
    LeapSecondDataRegistryKeyHandle = ZwSetValueKey(
                                        KeyHandle,
                                        (PUNICODE_STRING)&ExpLeapSecondRegkeyValueEnabled,
                                        0,
                                        4u,
                                        &Data,
                                        4u);
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)LeapSecondDataRegistryKeyHandle;
}
