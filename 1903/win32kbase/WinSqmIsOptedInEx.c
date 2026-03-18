/*
 * XREFs of WinSqmIsOptedInEx @ 0x1C00A5780
 * Callers:
 *     WinSqmIsOptedIn @ 0x1C0121060 (WinSqmIsOptedIn.c)
 *     DriverEntry @ 0x1C0266500 (DriverEntry.c)
 * Callees:
 *     ?ReadUlongFromKey@@YAJPEAXPEBGPEAK@Z @ 0x1C00A58F4 (-ReadUlongFromKey@@YAJPEAXPEBGPEAK@Z.c)
 *     memset @ 0x1C00C1440 (memset.c)
 */

_BOOL8 __fastcall WinSqmIsOptedInEx(int a1)
{
  bool v2; // bl
  int v4; // eax
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  unsigned int v7; // [rsp+80h] [rbp+20h] BYREF
  HANDLE Handle; // [rsp+88h] [rbp+28h] BYREF
  void *KeyHandle; // [rsp+90h] [rbp+30h] BYREF

  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  v2 = 0;
  KeyHandle = 0LL;
  Handle = 0LL;
  v7 = 0;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  if ( a1 != 2 )
  {
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\Software\\Policies\\Microsoft\\SQMClient\\Windows");
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
    {
      v4 = ReadUlongFromKey(KeyHandle, L"CEIPEnable", &v7);
      if ( v4 >= 0 )
      {
LABEL_16:
        v2 = v7 == 1;
        goto LABEL_9;
      }
      if ( v4 != -1073741772 )
      {
        v2 = 0;
        goto LABEL_9;
      }
    }
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\Software\\Microsoft\\SQMClient\\Windows");
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&Handle, 0x20019u, &ObjectAttributes) < 0 )
      goto LABEL_9;
    if ( (int)ReadUlongFromKey(Handle, L"CEIPEnable", &v7) >= 0 )
      v2 = v7 == 1;
  }
  if ( (a1 & 3) != 0 && (v2 || a1 == 2) && (int)ReadUlongFromKey(Handle, L"CEIPSampledIn", &v7) >= 0 )
    goto LABEL_16;
LABEL_9:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( Handle )
    ZwClose(Handle);
  return v2;
}
