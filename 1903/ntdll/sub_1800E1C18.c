/*
 * XREFs of sub_1800E1C18 @ 0x1800E1C18
 * Callers:
 *     sub_1800E1B98 @ 0x1800E1B98 (sub_1800E1B98.c)
 *     sub_1800E1C18 @ 0x1800E1C18 (sub_1800E1C18.c)
 * Callees:
 *     RtlCompareUnicodeString @ 0x180019EE0 (RtlCompareUnicodeString.c)
 *     RtlInitUnicodeStringEx @ 0x180028DF0 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 *     ZwOpenKey @ 0x18009C920 (ZwOpenKey.c)
 *     ZwEnumerateValueKey @ 0x18009C940 (ZwEnumerateValueKey.c)
 *     ZwEnumerateKey @ 0x18009CD20 (ZwEnumerateKey.c)
 *     sub_1800E1C18 @ 0x1800E1C18 (sub_1800E1C18.c)
 */

bool __fastcall sub_1800E1C18(void *a1)
{
  ULONG v2; // edi
  NTSTATUS inited; // ebx
  ULONG i; // esi
  NTSTATUS v5; // edi
  char v6; // bl
  _UNICODE_STRING String1; // [rsp+30h] [rbp-D0h] BYREF
  ULONG ResultLength; // [rsp+40h] [rbp-C0h] BYREF
  HANDLE KeyHandle; // [rsp+48h] [rbp-B8h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  _UNICODE_STRING String2; // [rsp+60h] [rbp-A0h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-90h] BYREF
  _BYTE KeyValueInformation[8]; // [rsp+A0h] [rbp-60h] BYREF
  USHORT v15; // [rsp+A8h] [rbp-58h]
  USHORT v16; // [rsp+ACh] [rbp-54h] BYREF
  char v17; // [rsp+B0h] [rbp-50h] BYREF

  KeyHandle = 0LL;
  v2 = 0;
  while ( 1 )
  {
    inited = ZwEnumerateValueKey(a1, v2, KeyValueBasicInformation, KeyValueInformation, 0x230u, &ResultLength);
    if ( inited >= 0 )
    {
      if ( v2 )
        break;
      String1.Length = v15;
      String1.MaximumLength = v15;
      String1.Buffer = &v16;
      if ( RtlInitUnicodeStringEx(&DestinationString, L"UseFilter") < 0 )
        break;
      inited = RtlInitUnicodeStringEx(&String2, L"FilterFullPath");
      if ( inited < 0
        || RtlCompareUnicodeString(&String1, &DestinationString, 1u) && RtlCompareUnicodeString(&String1, &String2, 1u) )
      {
        break;
      }
    }
    ++v2;
    if ( inited < 0 )
    {
      if ( inited == -2147483622 )
      {
        for ( i = 0; ; ++i )
        {
          v5 = ZwEnumerateKey(a1, i, KeyBasicInformation, KeyValueInformation, 0x230u, &ResultLength);
          if ( v5 >= 0 )
          {
            String1.Length = v16;
            String1.MaximumLength = v16;
            ObjectAttributes.Length = 48;
            String1.Buffer = (PWCH)&v17;
            ObjectAttributes.RootDirectory = a1;
            ObjectAttributes.ObjectName = &String1;
            ObjectAttributes.Attributes = 576;
            *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
            v5 = ZwOpenKey(&KeyHandle, 9u, &ObjectAttributes);
            if ( v5 >= 0 )
            {
              v6 = sub_1800E1C18(KeyHandle);
              ZwClose(KeyHandle);
              if ( !v6 )
                break;
            }
          }
          if ( v5 < 0 )
            return v5 == -2147483622;
        }
      }
      return 0;
    }
  }
  return 0;
}
