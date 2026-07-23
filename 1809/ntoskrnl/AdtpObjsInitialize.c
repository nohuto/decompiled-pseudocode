/*
 * XREFs of AdtpObjsInitialize @ 0x140738418
 * Callers:
 *     AdtpInitializeAuditingCommon @ 0x1407383D8 (AdtpInitializeAuditingCommon.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x1400B97D0 (RtlCopyUnicodeString.c)
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     ExInitializeResourceLite @ 0x1400CC570 (ExInitializeResourceLite.c)
 *     CmCleanupThreadInfo @ 0x1401B307C (CmCleanupThreadInfo.c)
 *     CmpInitializeThreadInfo @ 0x1401B30BC (CmpInitializeThreadInfo.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     RtlIntegerToUnicodeString @ 0x1405A9E00 (RtlIntegerToUnicodeString.c)
 *     NtEnumerateKey @ 0x1405D32F0 (NtEnumerateKey.c)
 *     NtEnumerateValueKey @ 0x1405D4890 (NtEnumerateValueKey.c)
 *     CmOpenKey @ 0x1405E1EA0 (CmOpenKey.c)
 *     NtClose @ 0x1405E99E0 (NtClose.c)
 */

NTSTATUS AdtpObjsInitialize()
{
  int v0; // ebx
  HANDLE v1; // r14
  char *v2; // r12
  bool v3; // r13
  __int64 v4; // rdi
  unsigned int v5; // esi
  char *v6; // r15
  NTSTATUS result; // eax
  unsigned int v8; // esi
  char *v9; // r15
  int v10; // esi
  ULONG i; // r15d
  unsigned __int16 *PoolWithTag; // rax
  unsigned __int16 *v13; // rdi
  char *v14; // rax
  UNICODE_STRING *v15; // rsi
  unsigned __int16 v16; // cx
  SIZE_T v17; // rdx
  PVOID v18; // rax
  int v19; // r8d
  HANDLE v20; // rdi
  ULONG v21; // eax
  bool v22; // zf
  NTSTATUS v23; // r15d
  unsigned __int16 *v24; // rdi
  char *v25; // rax
  char *v26; // rsi
  UNICODE_STRING *v27; // r13
  unsigned __int16 v28; // cx
  SIZE_T v29; // rdx
  PVOID v30; // rax
  HANDLE KeyHandle; // [rsp+30h] [rbp-79h] BYREF
  UNICODE_STRING SourceString; // [rsp+38h] [rbp-71h] BYREF
  int v33; // [rsp+48h] [rbp-61h] BYREF
  HANDLE v34; // [rsp+50h] [rbp-59h]
  UNICODE_STRING *p_DestinationString; // [rsp+58h] [rbp-51h]
  int v36; // [rsp+60h] [rbp-49h]
  __int128 v37; // [rsp+68h] [rbp-41h]
  HANDLE Handle[2]; // [rsp+78h] [rbp-31h] BYREF
  UNICODE_STRING DestinationString; // [rsp+88h] [rbp-21h] BYREF
  PVOID v40[2]; // [rsp+98h] [rbp-11h] BYREF
  PVOID v41[11]; // [rsp+A8h] [rbp-1h] BYREF
  ULONG ResultLength; // [rsp+110h] [rbp+67h] BYREF
  ULONG Index; // [rsp+118h] [rbp+6Fh]
  ULONG v44; // [rsp+120h] [rbp+77h]
  HANDLE v45; // [rsp+128h] [rbp+7Fh] BYREF

  v0 = 0;
  v1 = 0LL;
  v45 = 0LL;
  v2 = 0LL;
  AdtpSourceModules = 0LL;
  v3 = 1;
  ExInitializeResourceLite(&AdtpSourceModuleLock);
  LODWORD(v4) = 0;
  v5 = 0;
  v6 = (char *)&unk_140407042;
  while ( 1 )
  {
    *(_DWORD *)(v6 - 2) = 1572864;
    *(_QWORD *)(v6 + 6) = (char *)&AdtpAccessIdsStringBuffer + 2 * (unsigned int)v4;
    result = RtlIntegerToUnicodeString(v5 + 1537, 0xAu, (PUNICODE_STRING)&AdtpEventIdStringStandard + v5);
    if ( result < 0 )
      break;
    v4 = (unsigned int)(v4 + 12);
    ++v5;
    v6 += 16;
    if ( v5 > 6 )
    {
      v8 = 0;
      v9 = (char *)&unk_140406F42;
      while ( 1 )
      {
        *(_QWORD *)(v9 + 6) = (char *)&AdtpAccessIdsStringBuffer + 2 * v4;
        *(_DWORD *)(v9 - 2) = 1572864;
        result = RtlIntegerToUnicodeString(v8 + 1552, 0xAu, (PUNICODE_STRING)&AdtpEventIdStringSpecific + v8);
        if ( result < 0 )
          break;
        v4 = (unsigned int)(v4 + 12);
        ++v8;
        v9 += 16;
        if ( v8 > 0xF )
        {
          RtlInitUnicodeString(
            &DestinationString,
            L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\EventLog\\Security");
          v33 = 48;
          p_DestinationString = &DestinationString;
          v34 = 0LL;
          v37 = 0LL;
          v36 = 576;
          CmpInitializeThreadInfo(Handle);
          v10 = CmOpenKey(&KeyHandle, 131097, (__int64)&v33, 0, 0LL);
          CmCleanupThreadInfo(Handle);
          if ( v10 == -1073741772 )
            return 0;
          for ( i = 0; ; ++i )
          {
            v44 = i;
            if ( v10 < 0 )
              break;
            v10 = NtEnumerateKey(KeyHandle, i, KeyBasicInformation, 0LL, 0, &ResultLength);
            if ( v10 == -1073741789 )
            {
              PoolWithTag = (unsigned __int16 *)ExAllocatePoolWithTag(PagedPool, ResultLength, 0x6B416553u);
              v13 = PoolWithTag;
              if ( !PoolWithTag )
                return -1073741801;
              v10 = NtEnumerateKey(KeyHandle, i, KeyBasicInformation, PoolWithTag, ResultLength, &ResultLength);
              if ( v10 >= 0 )
              {
                v14 = (char *)ExAllocatePoolWithTag(PagedPool, 0x20uLL, 0x6B416553u);
                v2 = v14;
                if ( !v14 )
                  return -1073741801;
                v15 = (UNICODE_STRING *)(v14 + 8);
                *(_QWORD *)v14 = AdtpSourceModules;
                AdtpSourceModules = (__int64)v14;
                *((_QWORD *)v14 + 3) = 0LL;
                v16 = v13[6];
                *((_WORD *)v14 + 4) = v16;
                v17 = (unsigned __int16)(v16 + 2);
                *((_WORD *)v14 + 5) = v17;
                v18 = ExAllocatePoolWithTag(PagedPool, v17, 0x6B416553u);
                *((_QWORD *)v2 + 2) = v18;
                if ( !v18 )
                  return -1073741801;
                SourceString.Length = v13[6];
                SourceString.MaximumLength = SourceString.Length;
                SourceString.Buffer = v13 + 8;
                RtlCopyUnicodeString(v15, &SourceString);
                ExFreePoolWithTag(v13, 0);
                v34 = KeyHandle;
                v33 = 48;
                v36 = 576;
                v37 = 0LL;
                p_DestinationString = v15;
                CmpInitializeThreadInfo(v40);
                CmOpenKey(Handle, 131097, (__int64)&v33, 0, 0LL);
                CmCleanupThreadInfo(v40);
                if ( v19 < 0 )
                  return v19;
                RtlInitUnicodeString(&SourceString, L"ObjectNames");
                v33 = 48;
                v20 = Handle[0];
                v34 = Handle[0];
                p_DestinationString = &SourceString;
                v37 = 0LL;
                v36 = 576;
                CmpInitializeThreadInfo(v41);
                v10 = CmOpenKey(&v45, 131097, (__int64)&v33, 0, 0LL);
                CmCleanupThreadInfo(v41);
                NtClose(v20);
                v1 = v45;
                v3 = 1;
                if ( v10 == -1073741772 )
                {
                  v3 = 0;
                  v10 = 0;
                }
              }
            }
            Index = 0;
            v21 = 0;
            v22 = v10 == 0;
            if ( v10 >= 0 )
            {
              do
              {
                if ( !v3 )
                  break;
                v23 = NtEnumerateValueKey(v1, v21, KeyValueFullInformation, 0LL, 0, &ResultLength);
                if ( v23 == -1073741789 )
                {
                  v24 = (unsigned __int16 *)ExAllocatePoolWithTag(PagedPool, ResultLength, 0x6B416553u);
                  if ( !v24 )
                    return -1073741801;
                  v23 = NtEnumerateValueKey(v1, Index, KeyValueFullInformation, v24, ResultLength, &ResultLength);
                  if ( v23 >= 0 )
                  {
                    v25 = (char *)ExAllocatePoolWithTag(PagedPool, 0x20uLL, 0x6B416553u);
                    v26 = v25;
                    if ( !v25 )
                      return -1073741801;
                    v27 = (UNICODE_STRING *)(v25 + 8);
                    *(_QWORD *)v25 = *((_QWORD *)v2 + 3);
                    *((_QWORD *)v2 + 3) = v25;
                    v28 = v24[8];
                    *((_WORD *)v25 + 4) = v28;
                    v29 = (unsigned __int16)(v28 + 2);
                    *((_WORD *)v25 + 5) = v29;
                    v30 = ExAllocatePoolWithTag(PagedPool, v29, 0x6B416553u);
                    *((_QWORD *)v26 + 2) = v30;
                    if ( !v30 )
                      return -1073741801;
                    SourceString.Length = v24[8];
                    SourceString.MaximumLength = SourceString.Length;
                    SourceString.Buffer = v24 + 10;
                    RtlCopyUnicodeString(v27, &SourceString);
                    if ( *((_DWORD *)v24 + 3) >= 4u )
                      *((_DWORD *)v26 + 6) = *(_DWORD *)((char *)v24 + *((unsigned int *)v24 + 2));
                    else
                      *((_DWORD *)v26 + 6) = 1552;
                  }
                  ExFreePoolWithTag(v24, 0);
                }
                v10 = 0;
                if ( v23 != -2147483622 )
                  v10 = v23;
                v21 = ++Index;
                v3 = v23 != -2147483622;
              }
              while ( v10 >= 0 );
              i = v44;
              v22 = v10 == 0;
            }
            if ( v22 && !v3 )
            {
              if ( v1 )
              {
                NtClose(v1);
                v1 = 0LL;
                v45 = 0LL;
              }
            }
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
