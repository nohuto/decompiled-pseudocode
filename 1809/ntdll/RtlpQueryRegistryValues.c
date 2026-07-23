/*
 * XREFs of RtlpQueryRegistryValues @ 0x180053704
 * Callers:
 *     RtlCheckPortableOperatingSystem @ 0x180052D30 (RtlCheckPortableOperatingSystem.c)
 *     RtlpQueryTimeZoneInformationWorker @ 0x180052E00 (RtlpQueryTimeZoneInformationWorker.c)
 *     RtlpFindRegTziForCurrentYear @ 0x18005352C (RtlpFindRegTziForCurrentYear.c)
 *     RtlQueryRegistryValuesEx @ 0x1800536E0 (RtlQueryRegistryValuesEx.c)
 *     RtlQueryRegistryValues @ 0x1800EE410 (RtlQueryRegistryValues.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x180040650 (RtlInitUnicodeString.c)
 *     DbgPrint @ 0x18004F300 (DbgPrint.c)
 *     RtlpCallQueryRegistryRoutine @ 0x180053AF8 (RtlpCallQueryRegistryRoutine.c)
 *     RtlpAllocDeallocQueryBuffer @ 0x180053E30 (RtlpAllocDeallocQueryBuffer.c)
 *     RtlpGetRegistryHandle @ 0x180053FCC (RtlpGetRegistryHandle.c)
 *     NtClose @ 0x1800A04E0 (NtClose.c)
 *     NtOpenKey @ 0x1800A0540 (NtOpenKey.c)
 *     ZwEnumerateValueKey @ 0x1800A0560 (ZwEnumerateValueKey.c)
 *     NtQueryValueKey @ 0x1800A05E0 (NtQueryValueKey.c)
 *     ZwDeleteValueKey @ 0x1800A1D10 (ZwDeleteValueKey.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3D00 (_guard_dispatch_icall_nop.c)
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
  const WCHAR *v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rdi
  NTSTATUS v15; // ebx
  ULONG Length; // r13d
  int v17; // eax
  const WCHAR *v18; // rdx
  int v19; // r14d
  int v20; // eax
  int v21; // eax
  int v22; // r15d
  ULONG i; // r14d
  __int64 v24; // rax
  __int64 v25; // rax
  int v26; // eax
  unsigned __int32 v27; // [rsp+48h] [rbp-49h]
  NTSTATUS v28; // [rsp+48h] [rbp-49h]
  NTSTATUS v29; // [rsp+48h] [rbp-49h]
  ULONG ResultLength; // [rsp+4Ch] [rbp-45h] BYREF
  ULONG_PTR RegionSize; // [rsp+50h] [rbp-41h] BYREF
  HANDLE KeyHandle; // [rsp+58h] [rbp-39h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-31h] BYREF
  _UNICODE_STRING ValueName; // [rsp+68h] [rbp-29h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+78h] [rbp-19h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-9h] BYREF

  v6 = a4;
  v9 = a1;
  result = RtlpGetRegistryHandle(a1, a2, 0LL, &Handle);
  v27 = result;
  if ( (int)result >= 0 )
  {
    v11 = v9 & 0x40000000;
    if ( v11 )
      v12 = 0LL;
    else
      v12 = a2;
    RtlInitUnicodeString(&DestinationString, v12);
    RegionSize = 4096LL;
    v13 = RtlpAllocDeallocQueryBuffer(&RegionSize);
    v14 = v13;
    if ( v13 )
    {
      v15 = v27;
      *(_DWORD *)(v13 + 8) = 0;
      Length = RegionSize - 2;
      KeyHandle = Handle;
LABEL_6:
      if ( *(_QWORD *)a3 || (*(_BYTE *)(a3 + 8) & 0x21) != 0 )
      {
        v17 = *(_DWORD *)(a3 + 8);
        if ( (v17 & 0x20) == 0 || *(_QWORD *)(a3 + 16) && (v17 & 1) == 0 && !*(_QWORD *)a3 )
        {
          if ( (v17 & 3) != 0 && KeyHandle != Handle )
          {
            NtClose(KeyHandle);
            KeyHandle = Handle;
            v17 = *(_DWORD *)(a3 + 8);
          }
          v18 = *(const WCHAR **)(a3 + 16);
          if ( (v17 & 1) == 0 )
          {
            if ( v18 )
            {
              RtlInitUnicodeString(&ValueName, v18);
              v19 = 0;
              while ( 1 )
              {
                v20 = v19++;
                if ( v20 > 4 )
                {
                  DbgPrint("RtlpQueryRegistryValues: Miscomputed buffer size at line %d\n", 1276);
                  goto LABEL_25;
                }
                v15 = NtQueryValueKey(KeyHandle, &ValueName, KeyValueFullInformation, (PVOID)v14, Length, &ResultLength);
                if ( v15 == -2147483643 )
                  v15 = -1073741789;
                v28 = v15;
                if ( v15 >= 0 )
                {
                  if ( *(_DWORD *)(v14 + 4) == 7 )
                  {
                    *(_WORD *)(ResultLength + v14) = 0;
                    *(_DWORD *)(v14 + 12) += 2;
                  }
                  ResultLength = Length;
                  v21 = RtlpCallQueryRegistryRoutine((int)KeyHandle, a3, v14, (int)&ResultLength, v6, Environment, a6);
                  v28 = v21;
                  v15 = v21;
                  if ( v21 != -1073741789 )
                  {
                    if ( v21 < 0 )
                      goto LABEL_25;
                    if ( (*(_BYTE *)(a3 + 8) & 0x40) != 0 )
                      ZwDeleteValueKey(KeyHandle, &ValueName);
LABEL_23:
                    if ( v15 >= 0 )
                    {
                      a3 += 56LL;
                      goto LABEL_6;
                    }
                    goto LABEL_25;
                  }
                }
                else
                {
                  if ( v15 == -1073741772 )
                  {
                    *(_DWORD *)(v14 + 4) = 0;
                    *(_DWORD *)(v14 + 12) = 0;
                    ResultLength = Length;
                    v15 = RtlpCallQueryRegistryRoutine((int)KeyHandle, a3, v14, (int)&ResultLength, v6, Environment, a6);
                    v28 = v15;
                  }
                  if ( v15 != -1073741789 )
                    goto LABEL_23;
                }
                RegionSize = ResultLength + 10LL;
                v24 = RtlpAllocDeallocQueryBuffer(&RegionSize);
                v15 = v28;
                v14 = v24;
                if ( !v24 )
                  goto LABEL_25;
                *(_DWORD *)(v24 + 8) = 0;
                Length = RegionSize - 2;
              }
            }
            if ( (v17 & 8) != 0 )
            {
              v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, __int64, _QWORD))a3)(
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
          if ( v18 )
          {
            RtlInitUnicodeString(&DestinationString, v18);
            ObjectAttributes.RootDirectory = Handle;
            ObjectAttributes.Length = 48;
            ObjectAttributes.ObjectName = &DestinationString;
            ObjectAttributes.Attributes = 576;
            *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
            v15 = NtOpenKey(&KeyHandle, 0x2000000u, &ObjectAttributes);
            if ( v15 < 0 )
              goto LABEL_25;
            if ( !*(_QWORD *)a3 )
              goto LABEL_23;
LABEL_41:
            v22 = 0;
            for ( i = 0; ; ++i )
            {
              v15 = ZwEnumerateValueKey(KeyHandle, i, KeyValueFullInformation, (PVOID)v14, Length, &ResultLength);
              if ( v15 == -2147483643 )
                v15 = -1073741789;
              v29 = v15;
              if ( v15 == -2147483622 )
              {
                if ( i || (v15 = -1073741772, (*(_BYTE *)(a3 + 8) & 4) == 0) )
                  v15 = 0;
                goto LABEL_54;
              }
              if ( v15 >= 0 )
              {
                ResultLength = Length;
                v15 = RtlpCallQueryRegistryRoutine((int)KeyHandle, a3, v14, (int)&ResultLength, a4, Environment, a6);
                v29 = v15;
              }
              if ( v15 == -1073741789 )
              {
                RegionSize = ResultLength + 10LL;
                v25 = RtlpAllocDeallocQueryBuffer(&RegionSize);
                v14 = v25;
                if ( !v25 )
                {
                  v15 = v29;
                  goto LABEL_54;
                }
                *(_DWORD *)(v25 + 8) = 0;
                --i;
                v26 = v22;
                Length = RegionSize - 2;
                ++v22;
                if ( v26 > 4 )
                {
                  DbgPrint("RtlpQueryRegistryValues: Miscomputed buffer size at line %d\n", 1457);
                  v15 = v29;
LABEL_54:
                  v6 = a4;
                  goto LABEL_23;
                }
              }
              else
              {
                if ( v15 < 0 )
                  goto LABEL_25;
                v22 = 0;
                if ( (*(_BYTE *)(a3 + 8) & 0x40) != 0 )
                {
                  ValueName.Buffer = (wchar_t *)(v14 + 20);
                  ValueName.Length = *(_WORD *)(v14 + 16);
                  ValueName.MaximumLength = *(_WORD *)(v14 + 16);
                  if ( ZwDeleteValueKey(KeyHandle, &ValueName) >= 0 )
                    --i;
                }
              }
            }
          }
        }
        v15 = -1073741811;
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
      return (unsigned int)v15;
    }
    else
    {
      if ( !v11 )
        NtClose(Handle);
      return v27;
    }
  }
  return result;
}
