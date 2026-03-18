/*
 * XREFs of pIoQueryBusDescription @ 0x140744A00
 * Callers:
 *     IoQueryDeviceDescription @ 0x1407448F0 (IoQueryDeviceDescription.c)
 *     pIoQueryBusDescription @ 0x140744A00 (pIoQueryBusDescription.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x140002BC0 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x1400EC910 (RtlAppendUnicodeStringToString.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     wcsncmp @ 0x1401A2770 (wcsncmp.c)
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     ZwEnumerateKey @ 0x1401C1290 (ZwEnumerateKey.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     IopGetRegistryKeyInformation @ 0x1406FFB98 (IopGetRegistryKeyInformation.c)
 *     IopOpenRegistryKey @ 0x14070A534 (IopOpenRegistryKey.c)
 *     pIoQueryDeviceDescription @ 0x14074447C (pIoQueryDeviceDescription.c)
 *     pIoQueryBusDescription @ 0x140744A00 (pIoQueryBusDescription.c)
 *     IopGetRegistryValues @ 0x140744D60 (IopGetRegistryValues.c)
 */

NTSTATUS __fastcall pIoQueryBusDescription(unsigned int **a1, UNICODE_STRING *a2, void *a3, unsigned int *a4, char a5)
{
  NTSTATUS result; // eax
  PVOID v8; // r14
  unsigned int v9; // eax
  ULONG v10; // r12d
  NTSTATUS RegistryValues; // ebx
  unsigned __int16 *PoolWithTag; // rdi
  ULONG v13; // r13d
  unsigned int *v14; // rcx
  PVOID v15; // r8
  unsigned int *v16; // rcx
  unsigned int v17; // r9d
  unsigned int *v18; // rax
  NTSTATUS DeviceDescription; // eax
  ULONG Length; // [rsp+20h] [rbp-B1h]
  HANDLE Handle; // [rsp+60h] [rbp-71h] BYREF
  UNICODE_STRING Destination; // [rsp+70h] [rbp-61h] BYREF
  UNICODE_STRING Source; // [rsp+80h] [rbp-51h] BYREF
  HANDLE KeyHandle; // [rsp+90h] [rbp-41h]
  PVOID P[2]; // [rsp+A0h] [rbp-31h] BYREF
  ULONG ResultLength; // [rsp+B0h] [rbp-21h] BYREF
  UNICODE_STRING *v27; // [rsp+B8h] [rbp-19h]
  PVOID v28; // [rsp+C0h] [rbp-11h] BYREF
  PVOID v29; // [rsp+C8h] [rbp-9h]
  PVOID v30; // [rsp+D0h] [rbp-1h]

  v27 = a2;
  KeyHandle = a3;
  *(_QWORD *)&Source.Length = 0LL;
  Source.Buffer = 0LL;
  *(_QWORD *)&Destination.Length = 0LL;
  Destination.Buffer = 0LL;
  result = IopGetRegistryKeyInformation(a3, P);
  if ( result >= 0 )
  {
    v8 = P[0];
    v9 = *((_DWORD *)P[0] + 6);
    v10 = v9 + 32;
    if ( v9 + 32 < v9 )
    {
      return -1073741675;
    }
    else
    {
      RegistryValues = 0;
      PoolWithTag = (unsigned __int16 *)ExAllocatePoolWithTag(PagedPool, v10, 0x424B6F49u);
      ExFreePoolWithTag(v8, 0);
      if ( PoolWithTag )
      {
        v13 = 0;
        do
        {
          v14 = a1[1];
          if ( v14 && *v14 == *a4 )
            break;
          RegistryValues = ZwEnumerateKey(KeyHandle, v13, KeyBasicInformation, PoolWithTag, v10, &ResultLength);
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
              Destination = *v27;
              RtlAppendUnicodeToString(&Destination, L"\\");
              RtlAppendUnicodeStringToString(&Destination, &Source);
              if ( a5 )
                goto LABEL_21;
              RegistryValues = IopGetRegistryValues(Handle);
              if ( RegistryValues >= 0 )
              {
                v15 = v29;
                if ( v29 )
                {
                  if ( *((_DWORD *)v29 + 3) )
                  {
                    if ( *(_DWORD *)((char *)v29 + *((unsigned int *)v29 + 2)) == **a1 )
                    {
                      v17 = *a4 + 1;
                      *a4 = v17;
                      v18 = a1[1];
                      if ( !v18 || *v18 == v17 )
                      {
                        if ( a1[2] )
                        {
                          *(UNICODE_STRING *)P = Destination;
                          DeviceDescription = pIoQueryDeviceDescription(
                                                a1,
                                                (__int128 *)P,
                                                (__int64)v15,
                                                v17,
                                                (__int64)&v28);
                        }
                        else
                        {
                          DeviceDescription = ((__int64 (__fastcall *)(unsigned int *, UNICODE_STRING *, _QWORD))a1[6])(
                                                a1[7],
                                                &Destination,
                                                **a1);
                        }
                        v15 = v29;
                        RegistryValues = DeviceDescription;
                      }
                    }
                  }
                }
                if ( v28 )
                {
                  ExFreePoolWithTag(v28, 0);
                  v15 = v29;
                  v28 = 0LL;
                }
                if ( v15 )
                {
                  ExFreePoolWithTag(v15, 0);
                  v29 = 0LL;
                }
                if ( v30 )
                {
                  ExFreePoolWithTag(v30, 0);
                  v30 = 0LL;
                }
              }
              v16 = a1[1];
              if ( !v16 || *v16 != *a4 )
              {
LABEL_21:
                *(UNICODE_STRING *)P = Destination;
                RegistryValues = pIoQueryBusDescription(
                                   (_DWORD)a1,
                                   (unsigned int)P,
                                   (_DWORD)Handle,
                                   (_DWORD)a4,
                                   a5 == 0);
                if ( RegistryValues == -2147483622 )
                  RegistryValues = 0;
              }
              ZwClose(Handle);
              Handle = 0LL;
            }
          }
          ++v13;
        }
        while ( RegistryValues >= 0 );
        ExFreePoolWithTag(PoolWithTag, 0);
        return RegistryValues;
      }
      else
      {
        return -1073741670;
      }
    }
  }
  return result;
}
