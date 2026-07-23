/*
 * XREFs of RtlpIsEmptyImageFileOptionsKey @ 0x1800E4968
 * Callers:
 *     RtlpDeleteEmptyImageFileOptionsKey @ 0x1800E48E8 (RtlpDeleteEmptyImageFileOptionsKey.c)
 *     RtlpIsEmptyImageFileOptionsKey @ 0x1800E4968 (RtlpIsEmptyImageFileOptionsKey.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x18000C120 (RtlInitUnicodeStringEx.c)
 *     RtlCompareUnicodeStrings @ 0x1800571D0 (RtlCompareUnicodeStrings.c)
 *     __security_check_cookie @ 0x18008FED0 (__security_check_cookie.c)
 *     NtClose @ 0x1800A04E0 (NtClose.c)
 *     NtOpenKey @ 0x1800A0540 (NtOpenKey.c)
 *     ZwEnumerateValueKey @ 0x1800A0560 (ZwEnumerateValueKey.c)
 *     NtEnumerateKey @ 0x1800A0940 (NtEnumerateKey.c)
 *     RtlpIsEmptyImageFileOptionsKey @ 0x1800E4968 (RtlpIsEmptyImageFileOptionsKey.c)
 */

bool __fastcall RtlpIsEmptyImageFileOptionsKey(void *a1)
{
  ULONG v2; // edi
  NTSTATUS inited; // ebx
  WCHAR v4; // si
  SIZE_T v5; // rsi
  ULONG i; // esi
  NTSTATUS v7; // edi
  char IsEmptyImageFileOptionsKey; // bl
  ULONG ResultLength; // [rsp+30h] [rbp-D0h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-C8h] BYREF
  WCHAR v12; // [rsp+40h] [rbp-C0h] BYREF
  WCHAR v13; // [rsp+42h] [rbp-BEh]
  WCHAR *v14; // [rsp+48h] [rbp-B8h]
  _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  _UNICODE_STRING v16; // [rsp+60h] [rbp-A0h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-90h] BYREF
  char KeyValueInformation[8]; // [rsp+A0h] [rbp-60h] BYREF
  WCHAR v19; // [rsp+A8h] [rbp-58h]
  WCHAR String1[2]; // [rsp+ACh] [rbp-54h] BYREF
  char v21; // [rsp+B0h] [rbp-50h] BYREF

  KeyHandle = 0LL;
  v2 = 0;
  while ( 1 )
  {
    inited = ZwEnumerateValueKey(a1, v2, KeyValueBasicInformation, KeyValueInformation, 0x230u, &ResultLength);
    if ( inited >= 0 )
    {
      if ( v2 )
        break;
      v4 = v19;
      v12 = v19;
      v13 = v19;
      v14 = String1;
      if ( RtlInitUnicodeStringEx(&DestinationString, L"UseFilter") < 0 )
        break;
      inited = RtlInitUnicodeStringEx(&v16, L"FilterFullPath");
      if ( inited < 0 )
        break;
      v5 = (unsigned __int64)v4 >> 1;
      if ( RtlCompareUnicodeStrings(
             String1,
             v5,
             DestinationString.Buffer,
             (unsigned __int64)DestinationString.Length >> 1,
             1u) )
      {
        if ( RtlCompareUnicodeStrings(String1, v5, v16.Buffer, (unsigned __int64)v16.Length >> 1, 1u) )
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
          v7 = NtEnumerateKey(a1, i, KeyBasicInformation, KeyValueInformation, 0x230u, &ResultLength);
          if ( v7 >= 0 )
          {
            v12 = String1[0];
            v13 = String1[0];
            ObjectAttributes.Length = 48;
            v14 = (WCHAR *)&v21;
            ObjectAttributes.RootDirectory = a1;
            ObjectAttributes.ObjectName = (PUNICODE_STRING)&v12;
            ObjectAttributes.Attributes = 576;
            *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
            v7 = NtOpenKey(&KeyHandle, 9u, &ObjectAttributes);
            if ( v7 >= 0 )
            {
              IsEmptyImageFileOptionsKey = RtlpIsEmptyImageFileOptionsKey(KeyHandle);
              NtClose(KeyHandle);
              if ( !IsEmptyImageFileOptionsKey )
                break;
            }
          }
          if ( v7 < 0 )
            return v7 == -2147483622;
        }
      }
      return 0;
    }
  }
  return 0;
}
