/*
 * XREFs of RtlpQueryRegistryValues @ 0x180003474
 * Callers:
 *     RtlCheckPortableOperatingSystem @ 0x180002AB0 (RtlCheckPortableOperatingSystem.c)
 *     RtlpQueryTimeZoneInformationWorker @ 0x180002B80 (RtlpQueryTimeZoneInformationWorker.c)
 *     RtlpFindRegTziForCurrentYear @ 0x18000329C (RtlpFindRegTziForCurrentYear.c)
 *     RtlQueryRegistryValuesEx @ 0x180003450 (RtlQueryRegistryValuesEx.c)
 *     RtlQueryRegistryValues @ 0x1800EB580 (RtlQueryRegistryValues.c)
 * Callees:
 *     RtlpCallQueryRegistryRoutine @ 0x180003870 (RtlpCallQueryRegistryRoutine.c)
 *     RtlpAllocDeallocQueryBuffer @ 0x180003BA4 (RtlpAllocDeallocQueryBuffer.c)
 *     RtlpGetRegistryHandle @ 0x180003D40 (RtlpGetRegistryHandle.c)
 *     RtlInitUnicodeString @ 0x180016AA0 (RtlInitUnicodeString.c)
 *     DbgPrint @ 0x180053E40 (DbgPrint.c)
 *     NtClose @ 0x18009D070 (NtClose.c)
 *     NtOpenKey @ 0x18009D0D0 (NtOpenKey.c)
 *     ZwEnumerateValueKey @ 0x18009D0F0 (ZwEnumerateValueKey.c)
 *     NtQueryValueKey @ 0x18009D170 (NtQueryValueKey.c)
 *     ZwDeleteValueKey @ 0x18009E8C0 (ZwDeleteValueKey.c)
 *     _guard_dispatch_icall_nop @ 0x1800A08B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RtlpQueryRegistryValues(
        __int64 a1,
        const WCHAR *a2,
        __int64 a3,
        __int64 a4,
        PVOID Environment,
        char a6)
{
  __int64 v6; // r15
  int v9; // r12d
  __int64 result; // rax
  int v11; // r12d
  __int64 v12; // rax
  __int64 v13; // rdi
  NTSTATUS v14; // ebx
  ULONG Length; // r13d
  int v16; // eax
  const WCHAR *v17; // rdx
  int v18; // r14d
  int v19; // eax
  int v20; // eax
  int v21; // r15d
  ULONG i; // r14d
  __int64 v23; // rax
  __int64 v24; // rax
  int v25; // eax
  unsigned __int32 v26; // [rsp+48h] [rbp-49h]
  NTSTATUS v27; // [rsp+48h] [rbp-49h]
  NTSTATUS v28; // [rsp+48h] [rbp-49h]
  ULONG ResultLength; // [rsp+4Ch] [rbp-45h] BYREF
  ULONG_PTR RegionSize; // [rsp+50h] [rbp-41h] BYREF
  HANDLE KeyHandle; // [rsp+58h] [rbp-39h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-31h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+68h] [rbp-29h] BYREF
  _UNICODE_STRING v34; // [rsp+78h] [rbp-19h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-9h] BYREF

  v6 = a4;
  v9 = a1;
  result = RtlpGetRegistryHandle(a1, a2, 0LL, &Handle);
  v26 = result;
  if ( (int)result >= 0 )
  {
    v11 = v9 & 0x40000000;
    if ( v11 )
    {
      *(_QWORD *)&v34.Length = 0LL;
      v34.Buffer = 0LL;
    }
    else
    {
      RtlInitUnicodeString(&v34, a2);
    }
    RegionSize = 4096LL;
    v12 = RtlpAllocDeallocQueryBuffer(&RegionSize);
    v13 = v12;
    if ( v12 )
    {
      v14 = v26;
      *(_DWORD *)(v12 + 8) = 0;
      Length = RegionSize - 2;
      KeyHandle = Handle;
LABEL_6:
      if ( *(_QWORD *)a3 || (*(_BYTE *)(a3 + 8) & 0x21) != 0 )
      {
        v16 = *(_DWORD *)(a3 + 8);
        if ( (v16 & 0x20) == 0 || *(_QWORD *)(a3 + 16) && (v16 & 1) == 0 && !*(_QWORD *)a3 )
        {
          if ( (v16 & 3) != 0 && KeyHandle != Handle )
          {
            NtClose(KeyHandle);
            KeyHandle = Handle;
            v16 = *(_DWORD *)(a3 + 8);
          }
          v17 = *(const WCHAR **)(a3 + 16);
          if ( (v16 & 1) == 0 )
          {
            if ( v17 )
            {
              RtlInitUnicodeString(&DestinationString, v17);
              v18 = 0;
              while ( 1 )
              {
                v19 = v18++;
                if ( v19 > 4 )
                {
                  DbgPrint("RtlpQueryRegistryValues: Miscomputed buffer size at line %d\n", 1276);
                  goto LABEL_25;
                }
                v14 = NtQueryValueKey(
                        KeyHandle,
                        &DestinationString,
                        KeyValueFullInformation,
                        (PVOID)v13,
                        Length,
                        &ResultLength);
                if ( v14 == -2147483643 )
                  v14 = -1073741789;
                v27 = v14;
                if ( v14 >= 0 )
                {
                  if ( *(_DWORD *)(v13 + 4) == 7 )
                  {
                    *(_WORD *)(ResultLength + v13) = 0;
                    *(_DWORD *)(v13 + 12) += 2;
                  }
                  ResultLength = Length;
                  v20 = RtlpCallQueryRegistryRoutine((int)KeyHandle, a3, v13, (int)&ResultLength, v6, Environment, a6);
                  v27 = v20;
                  v14 = v20;
                  if ( v20 != -1073741789 )
                  {
                    if ( v20 < 0 )
                      goto LABEL_25;
                    if ( (*(_BYTE *)(a3 + 8) & 0x40) != 0 )
                      ZwDeleteValueKey(KeyHandle, &DestinationString);
LABEL_23:
                    if ( v14 >= 0 )
                    {
                      a3 += 56LL;
                      goto LABEL_6;
                    }
                    goto LABEL_25;
                  }
                }
                else
                {
                  if ( v14 == -1073741772 )
                  {
                    *(_DWORD *)(v13 + 4) = 0;
                    *(_DWORD *)(v13 + 12) = 0;
                    ResultLength = Length;
                    v14 = RtlpCallQueryRegistryRoutine((int)KeyHandle, a3, v13, (int)&ResultLength, v6, Environment, a6);
                    v27 = v14;
                  }
                  if ( v14 != -1073741789 )
                    goto LABEL_23;
                }
                RegionSize = ResultLength + 10LL;
                v23 = RtlpAllocDeallocQueryBuffer(&RegionSize);
                v14 = v27;
                v13 = v23;
                if ( !v23 )
                  goto LABEL_25;
                *(_DWORD *)(v23 + 8) = 0;
                Length = RegionSize - 2;
              }
            }
            if ( (v16 & 8) != 0 )
            {
              v14 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, __int64, _QWORD))a3)(
                      0LL,
                      0LL,
                      0LL,
                      0LL,
                      v6,
                      *(_QWORD *)(a3 + 24));
              goto LABEL_23;
            }
            goto LABEL_41;
          }
          if ( v17 )
          {
            RtlInitUnicodeString(&v34, v17);
            ObjectAttributes.RootDirectory = Handle;
            ObjectAttributes.Length = 48;
            ObjectAttributes.ObjectName = &v34;
            ObjectAttributes.Attributes = 576;
            *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
            v14 = NtOpenKey(&KeyHandle, 0x2000000u, &ObjectAttributes);
            if ( v14 < 0 )
              goto LABEL_25;
            if ( !*(_QWORD *)a3 )
              goto LABEL_23;
LABEL_41:
            v21 = 0;
            for ( i = 0; ; ++i )
            {
              v14 = ZwEnumerateValueKey(KeyHandle, i, KeyValueFullInformation, (PVOID)v13, Length, &ResultLength);
              if ( v14 == -2147483643 )
                v14 = -1073741789;
              v28 = v14;
              if ( v14 == -2147483622 )
              {
                if ( i || (v14 = -1073741772, (*(_BYTE *)(a3 + 8) & 4) == 0) )
                  v14 = 0;
                goto LABEL_54;
              }
              if ( v14 >= 0 )
              {
                ResultLength = Length;
                v14 = RtlpCallQueryRegistryRoutine((int)KeyHandle, a3, v13, (int)&ResultLength, a4, Environment, a6);
                v28 = v14;
              }
              if ( v14 == -1073741789 )
              {
                RegionSize = ResultLength + 10LL;
                v24 = RtlpAllocDeallocQueryBuffer(&RegionSize);
                v13 = v24;
                if ( !v24 )
                {
                  v14 = v28;
                  goto LABEL_54;
                }
                *(_DWORD *)(v24 + 8) = 0;
                --i;
                v25 = v21;
                Length = RegionSize - 2;
                ++v21;
                if ( v25 > 4 )
                {
                  DbgPrint("RtlpQueryRegistryValues: Miscomputed buffer size at line %d\n", 1457);
                  v14 = v28;
LABEL_54:
                  v6 = a4;
                  goto LABEL_23;
                }
              }
              else
              {
                if ( v14 < 0 )
                  goto LABEL_25;
                v21 = 0;
                if ( (*(_BYTE *)(a3 + 8) & 0x40) != 0 )
                {
                  DestinationString.Buffer = (wchar_t *)(v13 + 20);
                  DestinationString.Length = *(_WORD *)(v13 + 16);
                  DestinationString.MaximumLength = *(_WORD *)(v13 + 16);
                  if ( ZwDeleteValueKey(KeyHandle, &DestinationString) >= 0 )
                    --i;
                }
              }
            }
          }
        }
        v14 = -1073741811;
      }
LABEL_25:
      if ( Handle && !v11 )
        NtClose(Handle);
      if ( KeyHandle )
      {
        if ( KeyHandle != Handle )
          NtClose(KeyHandle);
      }
      RtlpAllocDeallocQueryBuffer(0LL);
      return (unsigned int)v14;
    }
    else
    {
      if ( !v11 )
        NtClose(Handle);
      return v26;
    }
  }
  return result;
}
