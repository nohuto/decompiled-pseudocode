/*
 * XREFs of PortOpenDeviceKey @ 0x1C006D094
 * Callers:
 *     PortGetLinkTimeoutValue @ 0x1C001A3FC (PortGetLinkTimeoutValue.c)
 *     PortGetRegistrySettings @ 0x1C006E5C0 (PortGetRegistrySettings.c)
 *     PortGetDriverParameters @ 0x1C006E638 (PortGetDriverParameters.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x1C0017E38 (RtlStringCbPrintfW.c)
 *     __security_check_cookie @ 0x1C0023420 (__security_check_cookie.c)
 *     memset @ 0x1C0024DC0 (memset.c)
 *     PortpOpenParametersKey @ 0x1C006D344 (PortpOpenParametersKey.c)
 */

void *__fastcall PortOpenDeviceKey(__int64 a1, unsigned int a2)
{
  void *v4; // rbx
  void *KeyHandle; // [rsp+20h] [rbp-89h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+28h] [rbp-81h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+38h] [rbp-71h] BYREF
  wchar_t pszDest[64]; // [rsp+70h] [rbp-39h] BYREF

  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  KeyHandle = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v4 = (void *)PortpOpenParametersKey(a1);
  if ( v4 )
  {
    if ( a2 == -1 )
      RtlStringCbPrintfW(pszDest, 0x80uLL, L"Device");
    else
      RtlStringCbPrintfW(pszDest, 0x80uLL, L"Device%d", a2);
    RtlInitUnicodeString(&DestinationString, pszDest);
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.RootDirectory = v4;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
    ZwClose(v4);
  }
  return KeyHandle;
}
