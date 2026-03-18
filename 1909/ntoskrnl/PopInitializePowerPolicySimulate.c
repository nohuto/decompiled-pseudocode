/*
 * XREFs of PopInitializePowerPolicySimulate @ 0x140748C24
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140596DBC (PopTransitionSystemPowerStateEx.c)
 *     PoInitSystem @ 0x140A0685C (PoInitSystem.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     ZwOpenKey @ 0x1401C0E90 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1401C0F30 (ZwQueryValueKey.c)
 *     ZwCreateKey @ 0x1401C0FF0 (ZwCreateKey.c)
 */

NTSTATUS PopInitializePowerPolicySimulate()
{
  NTSTATUS result; // eax
  NTSTATUS v1; // ebx
  NTSTATUS v2; // ebx
  ULONG ResultLength; // [rsp+40h] [rbp-29h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-21h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-19h] BYREF
  HANDLE KeyHandle; // [rsp+60h] [rbp-9h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-1h] BYREF
  ULONG Disposition; // [rsp+98h] [rbp+2Fh] BYREF
  __int64 KeyValueInformation; // [rsp+A0h] [rbp+37h] BYREF
  __int64 v10; // [rsp+A8h] [rbp+3Fh]
  int v11; // [rsp+B0h] [rbp+47h]

  *(&ObjectAttributes.Length + 1) = 0;
  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  ObjectAttributes.RootDirectory = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  KeyValueInformation = 0LL;
  v10 = 0LL;
  v11 = 0;
  PopSimulate = PopSimulateManual;
  ObjectAttributes.ObjectName = &CmRegistryMachineSystemCurrentControlSet;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  result = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( result >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"Control\\Session Manager");
    ObjectAttributes.RootDirectory = KeyHandle;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v1 = ZwCreateKey(&Handle, 0x20019u, &ObjectAttributes, 0, 0LL, 0, &Disposition);
    result = ZwClose(KeyHandle);
    if ( v1 >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, L"PowerSimulateHiberBugcheck");
      if ( ZwQueryValueKey(
             Handle,
             &DestinationString,
             KeyValuePartialInformation,
             &KeyValueInformation,
             0x14u,
             &ResultLength) >= 0
        && (_DWORD)v10 == 4 )
      {
        PopSimulateHiberBugcheck = HIDWORD(v10);
      }
      RtlInitUnicodeString(&DestinationString, L"PowerPolicySimulate");
      v2 = ZwQueryValueKey(
             Handle,
             &DestinationString,
             KeyValuePartialInformation,
             &KeyValueInformation,
             0x14u,
             &ResultLength);
      result = ZwClose(Handle);
      if ( v2 >= 0 && (_DWORD)v10 == 4 )
      {
        result = HIDWORD(v10);
        PopSimulate |= HIDWORD(v10);
      }
    }
  }
  return result;
}
