/*
 * XREFs of pIoQueryBusDescription @ 0x14071A834
 * Callers:
 *     IoQueryDeviceDescription @ 0x14071A720 (IoQueryDeviceDescription.c)
 *     pIoQueryBusDescription @ 0x14071A834 (pIoQueryBusDescription.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x140015E00 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x1400F5250 (RtlAppendUnicodeStringToString.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     wcsncmp @ 0x140197940 (wcsncmp.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwEnumerateKey @ 0x1401B8930 (ZwEnumerateKey.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     IopOpenRegistryKey @ 0x1406C7B50 (IopOpenRegistryKey.c)
 *     IopGetRegistryKeyInformation @ 0x1406F45FC (IopGetRegistryKeyInformation.c)
 *     pIoQueryDeviceDescription @ 0x14071A2B0 (pIoQueryDeviceDescription.c)
 *     pIoQueryBusDescription @ 0x14071A834 (pIoQueryBusDescription.c)
 *     IopGetRegistryValues @ 0x14071AB90 (IopGetRegistryValues.c)
 */

NTSTATUS __fastcall pIoQueryBusDescription(unsigned int **a1, UNICODE_STRING *a2, void *a3, unsigned int *a4, char a5)
{
  NTSTATUS result; // eax
  PVOID v8; // r14
  ULONG v9; // r12d
  unsigned int v10; // edx
  unsigned int v11; // ecx
  NTSTATUS RegistryValues; // ebx
  unsigned __int16 *PoolWithTag; // rdi
  ULONG v14; // r13d
  unsigned int *v15; // rcx
  PVOID v16; // r8
  unsigned int *v17; // rcx
  unsigned int v18; // r9d
  unsigned int *v19; // rax
  NTSTATUS DeviceDescription; // eax
  ULONG Length; // [rsp+20h] [rbp-A1h]
  HANDLE Handle; // [rsp+60h] [rbp-61h] BYREF
  HANDLE KeyHandle; // [rsp+68h] [rbp-59h]
  PVOID P[2]; // [rsp+70h] [rbp-51h] BYREF
  UNICODE_STRING Destination; // [rsp+80h] [rbp-41h] BYREF
  UNICODE_STRING Source; // [rsp+90h] [rbp-31h] BYREF
  ULONG ResultLength; // [rsp+A0h] [rbp-21h] BYREF
  UNICODE_STRING *v28; // [rsp+A8h] [rbp-19h]
  PVOID v29; // [rsp+B0h] [rbp-11h] BYREF
  PVOID v30; // [rsp+B8h] [rbp-9h]
  PVOID v31; // [rsp+C0h] [rbp-1h]

  v28 = a2;
  KeyHandle = a3;
  result = IopGetRegistryKeyInformation(a3, P);
  if ( result >= 0 )
  {
    v8 = P[0];
    v9 = -1;
    v10 = *((_DWORD *)P[0] + 6);
    v11 = v10 + 32;
    if ( v10 + 32 >= v10 )
      v9 = v10 + 32;
    RegistryValues = v11 < v10 ? 0xC0000095 : 0;
    if ( v11 >= v10 )
    {
      PoolWithTag = (unsigned __int16 *)ExAllocatePoolWithTag(PagedPool, v9, 0x424B6F49u);
      ExFreePoolWithTag(v8, 0);
      if ( !PoolWithTag )
        return -1073741670;
      v14 = 0;
      do
      {
        v15 = a1[1];
        if ( v15 && *v15 == *a4 )
          break;
        RegistryValues = ZwEnumerateKey(KeyHandle, v14, KeyBasicInformation, PoolWithTag, v9, &ResultLength);
        if ( RegistryValues < 0 )
          break;
        if ( !a5
          || !wcsncmp(
                PoolWithTag + 8,
                L"MultifunctionAdapter",
                (unsigned __int64)*((unsigned int *)PoolWithTag + 3) >> 1)
          || !wcsncmp(PoolWithTag + 8, L"EisaAdapter", (unsigned __int64)*((unsigned int *)PoolWithTag + 3) >> 1)
          || !wcsncmp(PoolWithTag + 8, L"TcAdapter", (unsigned __int64)*((unsigned int *)PoolWithTag + 3) >> 1) )
        {
          Source.Buffer = PoolWithTag + 8;
          Source.Length = PoolWithTag[6];
          Source.MaximumLength = PoolWithTag[6];
          LOBYTE(Length) = 0;
          if ( IopOpenRegistryKey(&Handle, KeyHandle, &Source, 0x20019u, Length) >= 0 )
          {
            Destination = *v28;
            RtlAppendUnicodeToString(&Destination, L"\\");
            RtlAppendUnicodeStringToString(&Destination, &Source);
            if ( a5 )
              goto LABEL_23;
            RegistryValues = IopGetRegistryValues(Handle);
            if ( RegistryValues >= 0 )
            {
              v16 = v30;
              if ( v30 )
              {
                if ( *((_DWORD *)v30 + 3) )
                {
                  if ( *(_DWORD *)((char *)v30 + *((unsigned int *)v30 + 2)) == **a1 )
                  {
                    v18 = *a4 + 1;
                    *a4 = v18;
                    v19 = a1[1];
                    if ( !v19 || *v19 == v18 )
                    {
                      if ( a1[2] )
                      {
                        *(UNICODE_STRING *)P = Destination;
                        DeviceDescription = pIoQueryDeviceDescription(
                                              a1,
                                              (__int128 *)P,
                                              (__int64)v16,
                                              v18,
                                              (__int64)&v29);
                      }
                      else
                      {
                        DeviceDescription = ((__int64 (__fastcall *)(unsigned int *, UNICODE_STRING *, _QWORD))a1[6])(
                                              a1[7],
                                              &Destination,
                                              **a1);
                      }
                      v16 = v30;
                      RegistryValues = DeviceDescription;
                    }
                  }
                }
              }
              if ( v29 )
              {
                ExFreePoolWithTag(v29, 0);
                v16 = v30;
                v29 = 0LL;
              }
              if ( v16 )
              {
                ExFreePoolWithTag(v16, 0);
                v30 = 0LL;
              }
              if ( v31 )
              {
                ExFreePoolWithTag(v31, 0);
                v31 = 0LL;
              }
            }
            v17 = a1[1];
            if ( !v17 || *v17 != *a4 )
            {
LABEL_23:
              *(UNICODE_STRING *)P = Destination;
              RegistryValues = pIoQueryBusDescription((_DWORD)a1, (unsigned int)P, (_DWORD)Handle, (_DWORD)a4, a5 == 0);
              if ( RegistryValues == -2147483622 )
                RegistryValues = 0;
            }
            ZwClose(Handle);
            Handle = 0LL;
          }
        }
        ++v14;
      }
      while ( RegistryValues >= 0 );
      ExFreePoolWithTag(PoolWithTag, 0);
    }
    return RegistryValues;
  }
  return result;
}
