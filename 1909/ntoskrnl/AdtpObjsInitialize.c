/*
 * XREFs of AdtpObjsInitialize @ 0x140778CF4
 * Callers:
 *     AdtpInitializeAuditingCommon @ 0x140778CB4 (AdtpInitializeAuditingCommon.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     RtlCopyUnicodeString @ 0x140043EC0 (RtlCopyUnicodeString.c)
 *     ExInitializeResourceLite @ 0x140047770 (ExInitializeResourceLite.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     NtClose @ 0x1405FBB70 (NtClose.c)
 *     RtlIntegerToUnicodeString @ 0x1406238A0 (RtlIntegerToUnicodeString.c)
 *     NtEnumerateValueKey @ 0x140660AE0 (NtEnumerateValueKey.c)
 *     NtEnumerateKey @ 0x140662B00 (NtEnumerateKey.c)
 *     NtOpenKey @ 0x1406C4320 (NtOpenKey.c)
 */

NTSTATUS AdtpObjsInitialize()
{
  int v0; // edi
  HANDLE v1; // r15
  bool v2; // r12
  __int64 v3; // rbx
  unsigned int v4; // esi
  char *v5; // r14
  NTSTATUS result; // eax
  unsigned int v7; // esi
  char *v8; // r14
  NTSTATUS v9; // eax
  NTSTATUS v10; // esi
  ULONG v11; // r14d
  bool i; // sf
  HANDLE v13; // r13
  unsigned __int16 *PoolWithTag; // rax
  unsigned __int16 *v15; // rbx
  _QWORD *v16; // rax
  _QWORD *v17; // r14
  unsigned __int16 v18; // ax
  PVOID v19; // rax
  HANDLE v20; // rbx
  ULONG v21; // r13d
  NTSTATUS v22; // r14d
  _WORD *v23; // rax
  _WORD *v24; // rbx
  _QWORD *v25; // rax
  _QWORD *v26; // rsi
  _QWORD *v27; // rcx
  unsigned __int16 v28; // ax
  PVOID v29; // rax
  HANDLE KeyHandle; // [rsp+30h] [rbp-49h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-41h] BYREF
  UNICODE_STRING SourceString; // [rsp+40h] [rbp-39h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-29h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-19h] BYREF
  ULONG ResultLength; // [rsp+E0h] [rbp+67h] BYREF
  ULONG v36; // [rsp+E8h] [rbp+6Fh]
  HANDLE v37; // [rsp+F0h] [rbp+77h] BYREF
  _QWORD *v38; // [rsp+F8h] [rbp+7Fh]

  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  v0 = 0;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v1 = 0LL;
  *(_QWORD *)&SourceString.Length = 0LL;
  v2 = 1;
  SourceString.Buffer = 0LL;
  v37 = 0LL;
  v38 = 0LL;
  AdtpSourceModules = 0LL;
  ExInitializeResourceLite(&AdtpSourceModuleLock);
  LODWORD(v3) = 0;
  v4 = 0;
  v5 = (char *)&unk_14042C242;
  while ( 1 )
  {
    *(_DWORD *)(v5 - 2) = 1572864;
    *(_QWORD *)(v5 + 6) = (char *)&AdtpAccessIdsStringBuffer + 2 * (unsigned int)v3;
    result = RtlIntegerToUnicodeString(v4 + 1537, 0xAu, (PUNICODE_STRING)&AdtpEventIdStringStandard + v4);
    if ( result < 0 )
      break;
    v3 = (unsigned int)(v3 + 12);
    ++v4;
    v5 += 16;
    if ( v4 > 6 )
    {
      v7 = 0;
      v8 = (char *)&unk_14042C502;
      while ( 1 )
      {
        *(_QWORD *)(v8 + 6) = (char *)&AdtpAccessIdsStringBuffer + 2 * v3;
        *(_DWORD *)(v8 - 2) = 1572864;
        result = RtlIntegerToUnicodeString(v7 + 1552, 0xAu, (PUNICODE_STRING)&AdtpEventIdStringSpecific + v7);
        if ( result < 0 )
          break;
        v3 = (unsigned int)(v3 + 12);
        ++v7;
        v8 += 16;
        if ( v7 > 0xF )
        {
          RtlInitUnicodeString(
            &DestinationString,
            L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\EventLog\\Security");
          ObjectAttributes.Length = 48;
          ObjectAttributes.ObjectName = &DestinationString;
          ObjectAttributes.RootDirectory = 0LL;
          ObjectAttributes.Attributes = 576;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          v9 = NtOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
          v10 = v9;
          if ( v9 == -1073741772 )
            return 0;
          v11 = 0;
          for ( i = v9 < 0; ; i = v10 < 0 )
          {
            v36 = v11;
            if ( i )
              break;
            v13 = KeyHandle;
            v10 = NtEnumerateKey(KeyHandle, v11, KeyBasicInformation, 0LL, 0, &ResultLength);
            if ( v10 == -1073741789 )
            {
              PoolWithTag = (unsigned __int16 *)ExAllocatePoolWithTag(PagedPool, ResultLength, 0x6B416553u);
              v15 = PoolWithTag;
              if ( !PoolWithTag )
                return -1073741801;
              v10 = NtEnumerateKey(v13, v11, KeyBasicInformation, PoolWithTag, ResultLength, &ResultLength);
              if ( v10 >= 0 )
              {
                v16 = ExAllocatePoolWithTag(PagedPool, 0x20uLL, 0x6B416553u);
                v38 = v16;
                v17 = v16;
                if ( !v16 )
                  return -1073741801;
                *v16 = AdtpSourceModules;
                AdtpSourceModules = (__int64)v16;
                v16[3] = 0LL;
                v18 = v15[6];
                *((_WORD *)v17 + 4) = v18;
                v18 += 2;
                *((_WORD *)v17 + 5) = v18;
                v19 = ExAllocatePoolWithTag(PagedPool, v18, 0x6B416553u);
                v17[2] = v19;
                if ( !v19 )
                  return -1073741801;
                SourceString.Length = v15[6];
                SourceString.MaximumLength = SourceString.Length;
                SourceString.Buffer = v15 + 8;
                RtlCopyUnicodeString((PUNICODE_STRING)(v17 + 1), &SourceString);
                ExFreePoolWithTag(v15, 0);
                ObjectAttributes.ObjectName = (PUNICODE_STRING)(v17 + 1);
                ObjectAttributes.Length = 48;
                ObjectAttributes.RootDirectory = v13;
                ObjectAttributes.Attributes = 576;
                *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
                result = NtOpenKey(&Handle, 0x20019u, &ObjectAttributes);
                if ( result < 0 )
                  return result;
                RtlInitUnicodeString(&SourceString, L"ObjectNames");
                v20 = Handle;
                ObjectAttributes.ObjectName = &SourceString;
                ObjectAttributes.Length = 48;
                ObjectAttributes.RootDirectory = Handle;
                ObjectAttributes.Attributes = 576;
                *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
                v10 = NtOpenKey(&v37, 0x20019u, &ObjectAttributes);
                NtClose(v20);
                v2 = 1;
                v1 = v37;
                if ( v10 == -1073741772 )
                {
                  v2 = 0;
                  v10 = 0;
                }
              }
            }
            v21 = 0;
            while ( v10 >= 0 && v2 )
            {
              v22 = NtEnumerateValueKey(v1, v21, KeyValueFullInformation, 0LL, 0, &ResultLength);
              if ( v22 == -1073741789 )
              {
                v23 = ExAllocatePoolWithTag(PagedPool, ResultLength, 0x6B416553u);
                v24 = v23;
                if ( !v23 )
                  return -1073741801;
                v22 = NtEnumerateValueKey(v1, v21, KeyValueFullInformation, v23, ResultLength, &ResultLength);
                if ( v22 >= 0 )
                {
                  v25 = ExAllocatePoolWithTag(PagedPool, 0x20uLL, 0x6B416553u);
                  v26 = v25;
                  if ( !v25 )
                    return -1073741801;
                  v27 = v38;
                  *v25 = v38[3];
                  v27[3] = v25;
                  v28 = v24[8];
                  *((_WORD *)v26 + 4) = v28;
                  v28 += 2;
                  *((_WORD *)v26 + 5) = v28;
                  v29 = ExAllocatePoolWithTag(PagedPool, v28, 0x6B416553u);
                  v26[2] = v29;
                  if ( !v29 )
                    return -1073741801;
                  SourceString.Length = v24[8];
                  SourceString.MaximumLength = SourceString.Length;
                  SourceString.Buffer = v24 + 10;
                  RtlCopyUnicodeString((PUNICODE_STRING)(v26 + 1), &SourceString);
                  if ( *((_DWORD *)v24 + 3) < 4u )
                    *((_DWORD *)v26 + 6) = 1552;
                  else
                    *((_DWORD *)v26 + 6) = *(_DWORD *)((char *)v24 + *((unsigned int *)v24 + 2));
                }
                ExFreePoolWithTag(v24, 0);
              }
              v10 = 0;
              if ( v22 != -2147483622 )
                v10 = v22;
              ++v21;
              v2 = v22 != -2147483622;
            }
            if ( !v10 && !v2 && v1 )
            {
              NtClose(v1);
              v1 = 0LL;
              v37 = 0LL;
            }
            v11 = v36 + 1;
          }
          NtClose(KeyHandle);
          if ( v10 != -2147483622 )
            return v10;
          return v0;
        }
      }
      return result;
    }
  }
  return result;
}
