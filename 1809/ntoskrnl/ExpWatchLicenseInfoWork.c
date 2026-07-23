/*
 * XREFs of ExpWatchLicenseInfoWork @ 0x1408CE820
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     wcscat_s @ 0x14019BD60 (wcscat_s.c)
 *     wcscpy_s @ 0x14019BE00 (wcscpy_s.c)
 *     CmCleanupThreadInfo @ 0x1401B307C (CmCleanupThreadInfo.c)
 *     CmpInitializeThreadInfo @ 0x1401B30BC (CmpInitializeThreadInfo.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     NtSetValueKey @ 0x1405CD8E0 (NtSetValueKey.c)
 *     NtNotifyChangeKey @ 0x1405D0350 (NtNotifyChangeKey.c)
 *     NtEnumerateKey @ 0x1405D32F0 (NtEnumerateKey.c)
 *     CmOpenKey @ 0x1405E1EA0 (CmOpenKey.c)
 *     NtClose @ 0x1405E99E0 (NtClose.c)
 *     NtQueryKey @ 0x140640BB0 (NtQueryKey.c)
 *     PsCreateSystemThreadEx @ 0x14066BC80 (PsCreateSystemThreadEx.c)
 */

NTSTATUS __fastcall ExpWatchLicenseInfoWork(__int64 a1)
{
  char v2; // r14
  HANDLE v3; // rcx
  ULONG_PTR v4; // r8
  NTSTATUS v5; // eax
  ULONG v6; // r12d
  wchar_t *PoolWithTag; // r15
  __int64 v8; // r10
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned __int16 v11; // cx
  SIZE_T v12; // r9
  unsigned __int64 v13; // rax
  NTSTATUS v14; // eax
  ULONG v15; // esi
  ULONG i; // edx
  NTSTATUS v17; // eax
  __int64 v18; // rax
  ULONG_PTR v19; // r8
  NTSTATUS v20; // eax
  NTSTATUS result; // eax
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-79h] BYREF
  ULONG ResultLength; // [rsp+60h] [rbp-69h] BYREF
  HANDLE KeyHandle; // [rsp+68h] [rbp-61h] BYREF
  UNICODE_STRING ValueName; // [rsp+70h] [rbp-59h] BYREF
  int v26; // [rsp+80h] [rbp-49h] BYREF
  __int64 v27; // [rsp+88h] [rbp-41h]
  UNICODE_STRING *p_DestinationString; // [rsp+90h] [rbp-39h]
  int v29; // [rsp+98h] [rbp-31h]
  __int128 v30; // [rsp+A0h] [rbp-29h]
  PVOID v31[2]; // [rsp+B0h] [rbp-19h] BYREF
  _BYTE KeyInformation[24]; // [rsp+C0h] [rbp-9h] BYREF
  unsigned int v33; // [rsp+D8h] [rbp+Fh]

  v2 = 0;
  if ( !ExpSetupModeDetected )
  {
    RtlInitUnicodeString(&DestinationString, *(PCWSTR *)(a1 + 16));
    v3 = *(HANDLE *)a1;
    p_DestinationString = &DestinationString;
    v27 = 0LL;
    v30 = 0LL;
    v26 = 48;
    v29 = 576;
    NtClose(v3);
    CmpInitializeThreadInfo(&ValueName);
    CmOpenKey((HANDLE *)a1, 131103, (__int64)&v26, 0, 0LL);
    CmCleanupThreadInfo((PVOID *)&ValueName);
    if ( (v4 & 0x80000000) != 0LL )
      KeBugCheckEx(0x9Au, 0x12uLL, v4, 0LL, 0LL);
    v5 = NtQueryKey(*(HANDLE *)a1, KeyFullInformation, KeyInformation, 0x30u, &ResultLength);
    if ( v5 < 0 )
      KeBugCheckEx(0x9Au, 0x13uLL, v5, 0LL, 0LL);
    v6 = 2 * v33 + 56;
    if ( v6 < v33 || v6 < 2 * (unsigned __int64)(v33 + 16) )
      v2 = 1;
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, v6, 0x2079654Bu);
    if ( !PoolWithTag || v2 )
      KeBugCheckEx(0x9Au, 0x14uLL, v6, 0LL, 0LL);
    v8 = *(_QWORD *)(a1 + 16);
    v9 = -1LL;
    v10 = -1LL;
    do
      ++v10;
    while ( *(_WORD *)(v8 + 2 * v10 + 32) );
    v11 = 2 * (v33 + v10);
    DestinationString.Length = v11;
    if ( v11 < v33 )
      goto LABEL_17;
    v12 = v11;
    v13 = -1LL;
    do
      ++v13;
    while ( *(_WORD *)(v8 + 2 * v13 + 32) );
    if ( v11 < v13 )
      goto LABEL_17;
    do
      ++v9;
    while ( *(_WORD *)(v8 + 2 * v9 + 32) );
    if ( v11 < (unsigned __int64)v33 + v9 )
    {
LABEL_17:
      v2 = 1;
      v12 = v11;
    }
    DestinationString.MaximumLength = v11;
    DestinationString.Buffer = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, v12, 0x2079654Bu);
    if ( !DestinationString.Buffer || v2 )
      KeBugCheckEx(0x9Au, 0x14uLL, DestinationString.Length, 1uLL, 0LL);
    RtlInitUnicodeString(&ValueName, L"ConcurrentLimit");
    v14 = NtSetValueKey(*(HANDLE *)a1, &ValueName, 0, 4u, (PVOID)(a1 + 8), 4u);
    if ( v14 < 0 )
      KeBugCheckEx(0x9Au, 0x15uLL, v14, 0LL, 0LL);
    v15 = 0;
    for ( i = 0; ; i = v15 )
    {
      v17 = NtEnumerateKey(*(HANDLE *)a1, i, KeyBasicInformation, PoolWithTag, v6, &ResultLength);
      if ( v17 == -2147483622 )
        break;
      if ( v17 >= 0 )
      {
        PoolWithTag[((unsigned __int64)*((unsigned int *)PoolWithTag + 3) >> 1) + 8] = 0;
        wcscpy_s(
          DestinationString.Buffer,
          (unsigned __int64)DestinationString.MaximumLength >> 1,
          *(const wchar_t **)(a1 + 16));
        wcscat_s(DestinationString.Buffer, (unsigned __int64)DestinationString.MaximumLength >> 1, L"\\");
        wcscat_s(DestinationString.Buffer, (unsigned __int64)DestinationString.MaximumLength >> 1, PoolWithTag + 8);
        v18 = -1LL;
        do
          ++v18;
        while ( DestinationString.Buffer[v18] );
        v26 = 48;
        DestinationString.Length = 2 * v18;
        v27 = 0LL;
        p_DestinationString = &DestinationString;
        v29 = 576;
        v30 = 0LL;
        CmpInitializeThreadInfo(v31);
        CmOpenKey(&KeyHandle, 131103, (__int64)&v26, 0, 0LL);
        CmCleanupThreadInfo(v31);
        if ( (v19 & 0x80000000) != 0LL )
          KeBugCheckEx(0x9Au, 0x16uLL, v19, 0LL, 0LL);
        v20 = NtSetValueKey(KeyHandle, &ValueName, 0, 4u, (PVOID)(a1 + 8), 4u);
        if ( v20 < 0 )
          KeBugCheckEx(0x9Au, 0x17uLL, v20, 0LL, 0LL);
        NtClose(KeyHandle);
      }
      ++v15;
    }
    ExFreePoolWithTag(PoolWithTag, 0);
    ExFreePoolWithTag(DestinationString.Buffer, 0);
  }
  result = NtNotifyChangeKey(
             *(HANDLE *)a1,
             0LL,
             (PIO_APC_ROUTINE)(a1 + 24),
             (PVOID)1,
             (PIO_STATUS_BLOCK)(a1 + 56),
             0x10000005u,
             1u,
             (PVOID)(a1 + 72),
             4u,
             1u);
  if ( result < 0 )
    KeBugCheckEx(0x9Au, 0x18uLL, result, 0LL, 0LL);
  if ( !ExpSetupModeDetected )
  {
    result = PsCreateSystemThreadEx(
               (__int64)&KeyHandle,
               0x1FFFFF,
               0LL,
               0LL,
               0LL,
               (__int64)ExpExpirationThread,
               3221226090LL,
               0LL,
               0LL);
    if ( result >= 0 )
      return ZwClose(KeyHandle);
  }
  return result;
}
