/*
 * XREFs of PortRegistryCreateKeyEx @ 0x1C0019754
 * Callers:
 *     RaidUnitRegisterInterfaces @ 0x1C0018EA4 (RaidUnitRegisterInterfaces.c)
 *     PortMapBuildLunEntry @ 0x1C001919C (PortMapBuildLunEntry.c)
 *     PortMapBuildBusEntry @ 0x1C00193FC (PortMapBuildBusEntry.c)
 *     PortMapBuildAdapterEntry @ 0x1C0019F2C (PortMapBuildAdapterEntry.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0023420 (__security_check_cookie.c)
 *     memset @ 0x1C0024DC0 (memset.c)
 */

__int64 PortRegistryCreateKeyEx(void *a1, ULONG a2, void **a3, const wchar_t *a4, ...)
{
  int v8; // eax
  NTSTATUS v9; // ebx
  ULONG Disposition; // [rsp+40h] [rbp-C0h] BYREF
  void *KeyHandle; // [rsp+48h] [rbp-B8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-A0h] BYREF
  wchar_t Dest[64]; // [rsp+90h] [rbp-70h] BYREF
  va_list Args; // [rsp+180h] [rbp+80h] BYREF

  va_start(Args, a4);
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  v8 = _vsnwprintf(Dest, 0x3EuLL, a4, Args);
  if ( v8 < 0 || (unsigned __int64)v8 >= 0x3E )
    Dest[62] = 0;
  Dest[63] = 0;
  RtlInitUnicodeString(&DestinationString, Dest);
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = a1;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v9 = ZwCreateKey(&KeyHandle, 0xF003Fu, &ObjectAttributes, 0, 0LL, a2, &Disposition);
  if ( v9 >= 0 )
  {
    if ( Disposition == 2 )
      v9 = 0x40000000;
    if ( v9 >= 0 )
    {
      if ( a3 )
        *a3 = KeyHandle;
      else
        ZwClose(KeyHandle);
    }
  }
  return (unsigned int)v9;
}
