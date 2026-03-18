/*
 * XREFs of MmZeroPageFileAtShutdown @ 0x140887514
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140596DBC (PopTransitionSystemPowerStateEx.c)
 *     PopGracefulShutdown @ 0x1405AC850 (PopGracefulShutdown.c)
 *     PopEnableHiberFile @ 0x140759E1C (PopEnableHiberFile.c)
 * Callees:
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ZwOpenKey @ 0x1401C0E90 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1401C0F30 (ZwQueryValueKey.c)
 *     ObCloseHandle @ 0x140610D90 (ObCloseHandle.c)
 */

__int64 MmZeroPageFileAtShutdown()
{
  int v0; // ebx
  HANDLE KeyHandle; // [rsp+30h] [rbp-29h] BYREF
  _QWORD v3[2]; // [rsp+38h] [rbp-21h] BYREF
  UNICODE_STRING ValueName; // [rsp+48h] [rbp-11h] BYREF
  ULONG ResultLength; // [rsp+58h] [rbp-1h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp+7h] BYREF
  __int64 KeyValueInformation; // [rsp+90h] [rbp+37h] BYREF
  __int64 v8; // [rsp+98h] [rbp+3Fh]
  int v9; // [rsp+A0h] [rbp+47h]

  *(&ObjectAttributes.Length + 1) = 0;
  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  KeyValueInformation = 0LL;
  v8 = 0LL;
  v9 = 0;
  v0 = 0;
  ObjectAttributes.RootDirectory = 0LL;
  v3[1] = L"\\registry\\machine\\SYSTEM\\CurrentControlSet\\Control\\Session Manager\\Memory Management";
  ObjectAttributes.Length = 48;
  ValueName.Buffer = L"ClearPageFileAtShutdown";
  v3[0] = 11141288LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v3;
  *(_QWORD *)&ValueName.Length = 3145774LL;
  ObjectAttributes.Attributes = 576;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) < 0 )
    return 0LL;
  if ( ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, &KeyValueInformation, 0x14u, &ResultLength) >= 0
    && HIDWORD(KeyValueInformation) == 4 )
  {
    v0 = HIDWORD(v8);
  }
  ObCloseHandle(KeyHandle, 0);
  if ( !v0 )
    return 0LL;
  byte_140465F02 = 1;
  return 1LL;
}
