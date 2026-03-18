/*
 * XREFs of SetDpiAllHWProfileSetting @ 0x1C000ADAC
 * Callers:
 *     SetDpiSetting @ 0x1C000ACD0 (SetDpiSetting.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     memset @ 0x1C0166840 (memset.c)
 */

__int64 __fastcall SetDpiAllHWProfileSetting(int a1)
{
  ULONG v1; // ebx
  ULONG i; // edx
  _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-D0h] BYREF
  void *KeyHandle; // [rsp+40h] [rbp-C0h] BYREF
  int ValueData; // [rsp+48h] [rbp-B8h] BYREF
  ULONG ResultLength; // [rsp+50h] [rbp-B0h] BYREF
  UNICODE_STRING Source; // [rsp+58h] [rbp-A8h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-98h] BYREF
  _BYTE KeyInformation[12]; // [rsp+A0h] [rbp-60h] BYREF
  int v11; // [rsp+ACh] [rbp-54h]
  char v12; // [rsp+B0h] [rbp-50h] BYREF
  char v13; // [rsp+1A0h] [rbp+A0h] BYREF

  ValueData = a1;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  *(_QWORD *)&Source.Length = 0LL;
  Source.Buffer = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  KeyHandle = 0LL;
  v1 = 0;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Hardware Profiles");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) < 0 )
    return 3221225474LL;
  for ( i = 0; ZwEnumerateKey(KeyHandle, i, KeyBasicInformation, KeyInformation, 0x100u, &ResultLength) >= 0; i = v1 )
  {
    ++v1;
    Source.Buffer = (PWSTR)&v12;
    Source.Length = v11;
    Source.MaximumLength = v11;
    *(_QWORD *)&DestinationString.Length = 0x2000000LL;
    DestinationString.Buffer = (PWSTR)&v13;
    if ( RtlAppendUnicodeToString(
           &DestinationString,
           L"\\Registry\\Machine\\System\\CurrentControlSet\\Hardware Profiles\\") >= 0
      && RtlAppendUnicodeStringToString(&DestinationString, &Source) >= 0
      && RtlAppendUnicodeToString(&DestinationString, L"\\Software\\Fonts") >= 0 )
    {
      RtlWriteRegistryValue(0, DestinationString.Buffer, L"LogPixels", 4u, &ValueData, 4u);
    }
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return 0LL;
}
