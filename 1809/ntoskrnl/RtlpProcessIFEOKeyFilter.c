/*
 * XREFs of RtlpProcessIFEOKeyFilter @ 0x1406B2D64
 * Callers:
 *     RtlpOpenImageFileOptionsKeyEx @ 0x1406B2BC4 (RtlpOpenImageFileOptionsKeyEx.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140015EB0 (RtlInitUnicodeStringEx.c)
 *     ExAllocatePoolWithQuotaTag @ 0x1400B75B0 (ExAllocatePoolWithQuotaTag.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401B8530 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1401B85D0 (ZwQueryValueKey.c)
 *     ZwEnumerateKey @ 0x1401B8930 (ZwEnumerateKey.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     RtlCompareUnicodeString @ 0x1405C0F20 (RtlCompareUnicodeString.c)
 *     RtlPrefixUnicodeString @ 0x1405C8460 (RtlPrefixUnicodeString.c)
 */

NTSTATUS __fastcall RtlpProcessIFEOKeyFilter(HANDLE *a1, __int64 a2, UNICODE_STRING *a3)
{
  HANDLE *v3; // r12
  int v4; // ebx
  void *v5; // rsi
  _BYTE *v6; // r13
  NTSTATUS result; // eax
  int v9; // ecx
  bool v10; // zf
  _BYTE *v11; // rcx
  ULONG v12; // eax
  NTSTATUS inited; // edi
  ULONG v14; // r12d
  NTSTATUS v15; // eax
  PVOID PoolWithQuotaTag; // rax
  NTSTATUS v17; // eax
  unsigned int v18; // eax
  ULONG ResultLength; // [rsp+30h] [rbp-D0h] BYREF
  ULONG Length; // [rsp+34h] [rbp-CCh]
  HANDLE KeyHandle; // [rsp+38h] [rbp-C8h] BYREF
  int v22; // [rsp+40h] [rbp-C0h]
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-B8h] BYREF
  UNICODE_STRING String2; // [rsp+58h] [rbp-A8h] BYREF
  ULONG v25; // [rsp+68h] [rbp-98h]
  _BYTE *v26; // [rsp+70h] [rbp-90h]
  HANDLE *v27; // [rsp+78h] [rbp-88h]
  UNICODE_STRING v28; // [rsp+80h] [rbp-80h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+90h] [rbp-70h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+C0h] [rbp-40h] BYREF
  int v31; // [rsp+C4h] [rbp-3Ch]
  int v32; // [rsp+C8h] [rbp-38h]
  int v33; // [rsp+CCh] [rbp-34h]

  v3 = a1;
  v27 = a1;
  v4 = 0;
  KeyHandle = 0LL;
  Length = 544;
  v5 = 0LL;
  v6 = KeyValueInformation;
  result = RtlInitUnicodeStringEx(&DestinationString, L"UseFilter");
  if ( result < 0 )
    return result;
  result = ZwQueryValueKey(
             *v3,
             &DestinationString,
             KeyValuePartialInformation,
             KeyValueInformation,
             0x220u,
             &ResultLength);
  if ( result < 0 )
  {
    if ( result == -1073741772 || result == -1073741789 || result == -2147483643 )
      return v4;
    return result;
  }
  if ( v31 != 4 || v32 != 4 || !v33 )
    return 0;
  v9 = 1600;
  v10 = KeGetCurrentThread()->PreviousMode == 1;
  String2 = *a3;
  if ( !v10 )
    v9 = 576;
  v25 = v9;
  result = RtlInitUnicodeStringEx(&DestinationString, L"\\??\\");
  if ( result >= 0 )
  {
    if ( RtlPrefixUnicodeString(&DestinationString, &String2, 1u) )
    {
      String2.Length -= 8;
      String2.MaximumLength -= 8;
      String2.Buffer += 4;
    }
    v11 = KeyValueInformation;
    v22 = 0;
    v26 = KeyValueInformation;
    v12 = 0;
    while ( 1 )
    {
      inited = ZwEnumerateKey(*v3, v12, KeyBasicInformation, v11, Length, &ResultLength);
      if ( inited >= 0 )
      {
        DestinationString.Length = *((_WORD *)v26 + 6);
        DestinationString.MaximumLength = *((_WORD *)v26 + 6);
        DestinationString.Buffer = (wchar_t *)(v26 + 16);
        ObjectAttributes.RootDirectory = *v3;
        ObjectAttributes.Attributes = v25;
        ObjectAttributes.ObjectName = &DestinationString;
        ObjectAttributes.Length = 48;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        inited = ZwOpenKey(&KeyHandle, 9u, &ObjectAttributes);
        if ( inited >= 0 )
        {
          inited = RtlInitUnicodeStringEx(&DestinationString, L"FilterFullPath");
          if ( inited >= 0 )
          {
            v14 = Length;
            do
            {
              v15 = ZwQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, v6, v14, &ResultLength);
              inited = v15;
              if ( v15 == -2147483643 || v15 == -1073741789 )
              {
                if ( v5 )
                  ExFreePoolWithTag(v5, 0);
                PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, ResultLength, 0x6B497452u);
                v5 = PoolWithQuotaTag;
                if ( PoolWithQuotaTag )
                {
                  v14 = ResultLength;
                  v6 = PoolWithQuotaTag;
                  v26 = PoolWithQuotaTag;
                }
                else
                {
                  inited = -1073741801;
                }
              }
            }
            while ( inited == -2147483643 || inited == -1073741789 );
            Length = v14;
            v3 = v27;
            if ( inited < 0 )
            {
              ZwClose(KeyHandle);
              v17 = 0;
              if ( inited != -1073741772 )
                v17 = inited;
              inited = v17;
              goto LABEL_39;
            }
            if ( *((_DWORD *)v6 + 1) == 1 )
            {
              v18 = *((_DWORD *)v6 + 2);
              if ( v18 <= 0xFFFE )
              {
                v28.Length = v18 - 2;
                v28.MaximumLength = v18 - 2;
                v28.Buffer = (wchar_t *)(v6 + 12);
                if ( !RtlCompareUnicodeString(&String2, &v28, 1u) )
                {
LABEL_40:
                  if ( v5 )
                    ExFreePoolWithTag(v5, 0);
                  if ( inited >= 0 )
                  {
                    ZwClose(*v3);
                    *v3 = KeyHandle;
                  }
                  if ( inited != -2147483622 )
                    return inited;
                  return v4;
                }
              }
            }
          }
          ZwClose(KeyHandle);
        }
      }
LABEL_39:
      v11 = v26;
      v12 = ++v22;
      if ( inited < 0 )
        goto LABEL_40;
    }
  }
  return result;
}
