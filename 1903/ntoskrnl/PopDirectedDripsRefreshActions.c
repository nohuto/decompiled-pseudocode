/*
 * XREFs of PopDirectedDripsRefreshActions @ 0x1408A4910
 * Callers:
 *     PopDirectedDripsProcessWork @ 0x1408A47F0 (PopDirectedDripsProcessWork.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401C0310 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1401C03B0 (ZwQueryValueKey.c)
 *     ZwCreateKey @ 0x1401C0470 (ZwCreateKey.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

int __fastcall PopDirectedDripsRefreshActions(__int64 a1)
{
  bool v2; // zf
  int result; // eax
  HANDLE KeyHandle; // [rsp+40h] [rbp-19h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-11h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-1h] BYREF
  ULONG Disposition; // [rsp+88h] [rbp+2Fh] BYREF
  ULONG ResultLength; // [rsp+8Ch] [rbp+33h] BYREF
  __int64 KeyValueInformation; // [rsp+90h] [rbp+37h] BYREF
  __int64 v10; // [rsp+98h] [rbp+3Fh]
  int v11; // [rsp+A0h] [rbp+47h]

  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  KeyHandle = (HANDLE)-1LL;
  v2 = *(_QWORD *)(a1 + 568) == -1LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  KeyValueInformation = 0LL;
  v10 = 0LL;
  v11 = 0;
  if ( !v2 )
    goto LABEL_5;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &CmRegistryMachineSystemCurrentControlSet;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( result >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"Control\\Power");
    ObjectAttributes.RootDirectory = KeyHandle;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    result = ZwCreateKey((PHANDLE)(a1 + 568), 0x20019u, &ObjectAttributes, 0, 0LL, 0, &Disposition);
    if ( result >= 0 )
    {
LABEL_5:
      RtlInitUnicodeString(&DestinationString, L"DirectedDripsAction");
      result = ZwQueryValueKey(
                 *(HANDLE *)(a1 + 568),
                 &DestinationString,
                 KeyValuePartialInformation,
                 &KeyValueInformation,
                 0x14u,
                 &ResultLength);
      if ( result >= 0 && (_DWORD)v10 == 4 )
      {
        result = HIDWORD(v10);
        *(_DWORD *)(a1 + 48) = HIDWORD(v10);
      }
    }
  }
  if ( KeyHandle != (HANDLE)-1LL )
    return ZwClose(KeyHandle);
  return result;
}
