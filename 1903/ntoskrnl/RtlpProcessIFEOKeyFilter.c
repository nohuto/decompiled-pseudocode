/*
 * XREFs of RtlpProcessIFEOKeyFilter @ 0x1406D430C
 * Callers:
 *     RtlpOpenImageFileOptionsKeyEx @ 0x1406D417C (RtlpOpenImageFileOptionsKeyEx.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140002C70 (RtlInitUnicodeStringEx.c)
 *     ExAllocatePoolWithQuotaTag @ 0x1400BEF80 (ExAllocatePoolWithQuotaTag.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401C0310 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1401C03B0 (ZwQueryValueKey.c)
 *     ZwEnumerateKey @ 0x1401C0710 (ZwEnumerateKey.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     RtlPrefixUnicodeString @ 0x140653340 (RtlPrefixUnicodeString.c)
 *     RtlCompareUnicodeString @ 0x140653DF0 (RtlCompareUnicodeString.c)
 */

NTSTATUS __fastcall RtlpProcessIFEOKeyFilter(HANDLE *a1, __int64 a2, UNICODE_STRING *a3)
{
  HANDLE *v4; // r12
  int v5; // ebx
  void *v6; // rsi
  wchar_t *v7; // r13
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
  ULONG ResultLength; // [rsp+30h] [rbp-D0h] BYREF
  ULONG Length; // [rsp+34h] [rbp-CCh]
  HANDLE KeyHandle; // [rsp+38h] [rbp-C8h] BYREF
  int v21; // [rsp+40h] [rbp-C0h]
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-B8h] BYREF
  UNICODE_STRING String2; // [rsp+58h] [rbp-A8h] BYREF
  ULONG v24; // [rsp+68h] [rbp-98h]
  _BYTE *v25; // [rsp+70h] [rbp-90h]
  UNICODE_STRING v26; // [rsp+78h] [rbp-88h] BYREF
  HANDLE *v27; // [rsp+88h] [rbp-78h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+90h] [rbp-70h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+C0h] [rbp-40h] BYREF
  int v30; // [rsp+C4h] [rbp-3Ch]
  int v31; // [rsp+C8h] [rbp-38h]
  int v32; // [rsp+CCh] [rbp-34h]

  v27 = a1;
  *(_QWORD *)&DestinationString.Length = 0LL;
  v4 = a1;
  DestinationString.Buffer = 0LL;
  v5 = 0;
  KeyHandle = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  *(_QWORD *)&v26.Length = 0LL;
  v26.Buffer = 0LL;
  v6 = 0LL;
  Length = 544;
  v7 = (wchar_t *)KeyValueInformation;
  result = RtlInitUnicodeStringEx(&DestinationString, L"UseFilter");
  if ( result < 0 )
    return result;
  result = ZwQueryValueKey(
             *v4,
             &DestinationString,
             KeyValuePartialInformation,
             KeyValueInformation,
             0x220u,
             &ResultLength);
  if ( result < 0 )
  {
    if ( result == -1073741772 || result == -1073741789 || result == -2147483643 )
      return v5;
    return result;
  }
  if ( v30 != 4 || v31 != 4 || !v32 )
    return 0;
  v9 = 1600;
  v10 = KeGetCurrentThread()->PreviousMode == 1;
  String2 = *a3;
  if ( !v10 )
    v9 = 576;
  v24 = v9;
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
    v21 = 0;
    v25 = KeyValueInformation;
    v12 = 0;
    while ( 1 )
    {
      inited = ZwEnumerateKey(*v4, v12, KeyBasicInformation, v11, Length, &ResultLength);
      if ( inited >= 0 )
      {
        DestinationString.Length = *((_WORD *)v25 + 6);
        DestinationString.MaximumLength = *((_WORD *)v25 + 6);
        DestinationString.Buffer = (wchar_t *)(v25 + 16);
        ObjectAttributes.RootDirectory = *v4;
        ObjectAttributes.Attributes = v24;
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
              v15 = ZwQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, v7, v14, &ResultLength);
              inited = v15;
              if ( v15 == -2147483643 || v15 == -1073741789 )
              {
                if ( v6 )
                  ExFreePoolWithTag(v6, 0);
                PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, ResultLength, 0x6B497452u);
                v6 = PoolWithQuotaTag;
                if ( PoolWithQuotaTag )
                {
                  v14 = ResultLength;
                  v7 = (wchar_t *)PoolWithQuotaTag;
                  v25 = PoolWithQuotaTag;
                }
                else
                {
                  inited = -1073741801;
                }
              }
            }
            while ( inited == -2147483643 || inited == -1073741789 );
            Length = v14;
            v4 = v27;
            if ( inited < 0 )
            {
              ZwClose(KeyHandle);
              v17 = 0;
              if ( inited != -1073741772 )
                v17 = inited;
              inited = v17;
              goto LABEL_39;
            }
            if ( *((_DWORD *)v7 + 1) == 1 && *((_DWORD *)v7 + 2) <= 0xFFFEu )
            {
              v26.Length = v7[4] - 2;
              v26.MaximumLength = v26.Length;
              v26.Buffer = v7 + 6;
              if ( !RtlCompareUnicodeString(&String2, &v26, 1u) )
              {
LABEL_40:
                if ( v6 )
                  ExFreePoolWithTag(v6, 0);
                if ( inited >= 0 )
                {
                  ZwClose(*v4);
                  *v4 = KeyHandle;
                }
                if ( inited != -2147483622 )
                  return inited;
                return v5;
              }
            }
          }
          ZwClose(KeyHandle);
        }
      }
LABEL_39:
      v11 = v25;
      v12 = ++v21;
      if ( inited < 0 )
        goto LABEL_40;
    }
  }
  return result;
}
