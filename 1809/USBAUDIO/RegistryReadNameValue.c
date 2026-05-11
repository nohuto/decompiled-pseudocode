/*
 * XREFs of RegistryReadNameValue @ 0x1C0026D28
 * Callers:
 *     RegistryReadName @ 0x1C0026F3C (RegistryReadName.c)
 * Callees:
 *     __security_check_cookie @ 0x1C000F7E0 (__security_check_cookie.c)
 *     memmove @ 0x1C0011080 (memmove.c)
 */

__int64 __fastcall RegistryReadNameValue(void *a1, const GUID *a2, unsigned int a3, void *a4, PULONG ResultLength)
{
  NTSTATUS v8; // ebx
  unsigned int v9; // eax
  _DWORD *PoolWithTag; // rax
  _DWORD *v11; // rdi
  unsigned int v12; // eax
  void *KeyHandle; // [rsp+30h] [rbp-41h] BYREF
  struct _UNICODE_STRING GuidString; // [rsp+38h] [rbp-39h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-29h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-19h] BYREF
  _BYTE KeyValueInformation[16]; // [rsp+88h] [rbp+17h] BYREF

  KeyHandle = 0LL;
  *(_QWORD *)&GuidString.Length = 0LL;
  GuidString.Buffer = 0LL;
  *ResultLength = 0;
  v8 = RtlStringFromGUID(a2, &GuidString);
  if ( v8 >= 0 )
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &GuidString;
    ObjectAttributes.RootDirectory = a1;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v8 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
    if ( v8 >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, L"Name");
      v8 = ZwQueryValueKey(
             KeyHandle,
             &DestinationString,
             KeyValuePartialInformation,
             KeyValueInformation,
             0x10u,
             ResultLength);
      if ( *ResultLength < 0xC )
        v8 = -1073741762;
      if ( ((v8 + 0x80000000) & 0x80000000) != 0 || v8 == -2147483643 )
      {
        v9 = *ResultLength - 12;
        if ( a3 )
        {
          if ( a3 >= v9 )
          {
            PoolWithTag = ExAllocatePoolWithTag(PagedPool, *ResultLength, 0x41627845u);
            v11 = PoolWithTag;
            if ( PoolWithTag )
            {
              v8 = ZwQueryValueKey(
                     KeyHandle,
                     &DestinationString,
                     KeyValuePartialInformation,
                     PoolWithTag,
                     *ResultLength,
                     ResultLength);
              if ( v8 >= 0 )
              {
                v12 = v11[2];
                if ( v12 && v11[1] == 1 )
                {
                  memmove(a4, v11 + 3, v12);
                  *ResultLength = v11[2];
                }
                else
                {
                  v8 = -1073741823;
                }
              }
              ExFreePool(v11);
            }
            else
            {
              v8 = -1073741670;
            }
          }
          else
          {
            v8 = -1073741789;
          }
        }
        else
        {
          *ResultLength = v9;
          v8 = -2147483643;
        }
      }
      ZwClose(KeyHandle);
      KeyHandle = 0LL;
    }
    RtlFreeUnicodeString(&GuidString);
  }
  return (unsigned int)v8;
}
