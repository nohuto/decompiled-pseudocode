/*
 * XREFs of RtlpIsEmptyImageFileOptionsKey @ 0x1800E1D08
 * Callers:
 *     RtlpDeleteEmptyImageFileOptionsKey @ 0x1800E1C88 (RtlpDeleteEmptyImageFileOptionsKey.c)
 *     RtlpIsEmptyImageFileOptionsKey @ 0x1800E1D08 (RtlpIsEmptyImageFileOptionsKey.c)
 * Callees:
 *     RtlCompareUnicodeString @ 0x180019EE0 (RtlCompareUnicodeString.c)
 *     RtlInitUnicodeStringEx @ 0x180028DF0 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 *     NtClose @ 0x18009D070 (NtClose.c)
 *     NtOpenKey @ 0x18009D0D0 (NtOpenKey.c)
 *     ZwEnumerateValueKey @ 0x18009D0F0 (ZwEnumerateValueKey.c)
 *     NtEnumerateKey @ 0x18009D4D0 (NtEnumerateKey.c)
 *     RtlpIsEmptyImageFileOptionsKey @ 0x1800E1D08 (RtlpIsEmptyImageFileOptionsKey.c)
 */

bool __fastcall RtlpIsEmptyImageFileOptionsKey(void *a1)
{
  ULONG v2; // edi
  NTSTATUS inited; // ebx
  ULONG i; // esi
  NTSTATUS v5; // edi
  char IsEmptyImageFileOptionsKey; // bl
  _UNICODE_STRING String1; // [rsp+30h] [rbp-D0h] BYREF
  ULONG ResultLength; // [rsp+40h] [rbp-C0h] BYREF
  HANDLE KeyHandle; // [rsp+48h] [rbp-B8h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  _UNICODE_STRING String2; // [rsp+60h] [rbp-A0h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-90h] BYREF
  _BYTE KeyValueInformation[8]; // [rsp+A0h] [rbp-60h] BYREF
  unsigned __int16 v15; // [rsp+A8h] [rbp-58h]
  unsigned __int16 v16; // [rsp+ACh] [rbp-54h] BYREF
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
          v5 = NtEnumerateKey(a1, i, KeyBasicInformation, KeyValueInformation, 0x230u, &ResultLength);
          if ( v5 >= 0 )
          {
            String1.Length = v16;
            String1.MaximumLength = v16;
            ObjectAttributes.Length = 48;
            String1.Buffer = (wchar_t *)&v17;
            ObjectAttributes.RootDirectory = a1;
            ObjectAttributes.ObjectName = &String1;
            ObjectAttributes.Attributes = 576;
            *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
            v5 = NtOpenKey(&KeyHandle, 9u, &ObjectAttributes);
            if ( v5 >= 0 )
            {
              IsEmptyImageFileOptionsKey = RtlpIsEmptyImageFileOptionsKey(KeyHandle);
              NtClose(KeyHandle);
              if ( !IsEmptyImageFileOptionsKey )
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
