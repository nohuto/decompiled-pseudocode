/*
 * XREFs of ExpWatchProductTypeWork @ 0x1406E4930
 * Callers:
 *     <none>
 * Callees:
 *     KeDelayExecutionThread @ 0x14003B180 (KeDelayExecutionThread.c)
 *     ExAcquirePushLockSharedEx @ 0x14003EF30 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x14003F240 (ExReleasePushLockEx.c)
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     CmpUnlockRegistry @ 0x1405F5E50 (CmpUnlockRegistry.c)
 *     NtQueryValueKey @ 0x1405FD5A0 (NtQueryValueKey.c)
 *     CmOpenKey @ 0x1405FDBD0 (CmOpenKey.c)
 *     ObCloseHandle @ 0x14060F280 (ObCloseHandle.c)
 *     NtNotifyChangeKey @ 0x140627FC0 (NtNotifyChangeKey.c)
 *     NtSetValueKey @ 0x14062C340 (NtSetValueKey.c)
 *     NtDeleteValueKey @ 0x1406397C0 (NtDeleteValueKey.c)
 *     CmpLockRegistryFreezeAware @ 0x140662030 (CmpLockRegistryFreezeAware.c)
 *     PsCreateSystemThreadEx @ 0x1406B4000 (PsCreateSystemThreadEx.c)
 *     NtFlushKey @ 0x1406E4CD0 (NtFlushKey.c)
 *     ExUpdateLicenseRegistry @ 0x1406E4F90 (ExUpdateLicenseRegistry.c)
 */

char ExpWatchProductTypeWork()
{
  char v0; // si
  char v1; // di
  char v2; // r15
  HANDLE v3; // r14
  int v4; // eax
  NTSTATUS v5; // eax
  const wchar_t *v6; // rax
  int v7; // r8d
  int v8; // ecx
  const wchar_t *v9; // rax
  int v10; // r8d
  int v11; // ecx
  char v12; // r10
  const wchar_t *v13; // rax
  char *v14; // rdx
  int v15; // r8d
  int v16; // ecx
  char *v17; // rcx
  unsigned __int16 v18; // ax
  int v19; // eax
  int updated; // eax
  NTSTATUS v21; // eax
  ULONG *v22; // rdi
  NTSTATUS v23; // eax
  unsigned int v24; // eax
  ULONG_PTR v25; // rdi
  char result; // al
  __int64 v27; // rcx
  LARGE_INTEGER Interval; // [rsp+58h] [rbp-59h] BYREF
  UNICODE_STRING ValueName; // [rsp+60h] [rbp-51h] BYREF
  ULONG ResultLength; // [rsp+70h] [rbp-41h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp-39h] BYREF
  UNICODE_STRING DestinationString; // [rsp+80h] [rbp-31h] BYREF
  _QWORD v33[4]; // [rsp+90h] [rbp-21h] BYREF
  __int128 v34; // [rsp+B0h] [rbp-1h]
  _OWORD KeyValueInformation[2]; // [rsp+C0h] [rbp+Fh] BYREF
  __int16 v36; // [rsp+E0h] [rbp+2Fh]

  v33[0] = 48LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v0 = 0;
  *(_QWORD *)&ValueName.Length = 0LL;
  v1 = 0;
  ValueName.Buffer = 0LL;
  v2 = 1;
  v33[3] = 576LL;
  v3 = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\ProductOptions");
  v33[1] = 0LL;
  v33[2] = &DestinationString;
  v34 = 0LL;
  ExAcquirePushLockSharedEx((ULONG_PTR)&ExpKeyManipLock, 0LL);
  if ( ExpProductTypeKey )
  {
    while ( 1 )
    {
      v4 = CmOpenKey(&Handle, 131103, (__int64)v33, 0, 0LL);
      if ( v4 != -1073741670 )
        break;
      Interval.QuadPart = -10000000LL;
      KeDelayExecutionThread(0, 0, &Interval);
    }
    if ( v4 < 0 )
      KeBugCheckEx(0x9Au, 0xDuLL, (unsigned int)v4, 0LL, 0LL);
    v3 = ExpProductTypeKey;
    ExpProductTypeKey = Handle;
    if ( !ExpSetupModeDetected )
    {
      RtlInitUnicodeString(&ValueName, L"ProductType");
      v5 = NtQueryValueKey(
             ExpProductTypeKey,
             &ValueName,
             KeyValuePartialInformation,
             KeyValueInformation,
             0x22u,
             &ResultLength);
      if ( v5 == -1073741670 )
      {
        Interval.QuadPart = -10000000LL;
        do
        {
          KeDelayExecutionThread(0, 0, &Interval);
          v5 = NtQueryValueKey(
                 ExpProductTypeKey,
                 &ValueName,
                 KeyValuePartialInformation,
                 KeyValueInformation,
                 0x22u,
                 &ResultLength);
        }
        while ( v5 == -1073741670 );
      }
      if ( v5 >= 0 )
      {
        v6 = L"LanmanNT";
        do
        {
          v7 = *(const wchar_t *)((char *)v6 + (char *)KeyValueInformation + 12 - (char *)L"LanmanNT");
          v8 = *v6 - v7;
          if ( v8 )
            break;
          ++v6;
        }
        while ( v7 );
        if ( !v8 )
          goto LABEL_47;
        v9 = L"ServerNT";
        do
        {
          v10 = *(const wchar_t *)((char *)v9 + (char *)KeyValueInformation + 12 - (char *)L"ServerNT");
          v11 = *v9 - v10;
          if ( v11 )
            break;
          ++v9;
        }
        while ( v10 );
        v12 = 0;
        if ( !v11 )
LABEL_47:
          v12 = 1;
        v13 = L"WinNT";
        v14 = (char *)(ExpProductTypeValueInfo + 12);
        do
        {
          v15 = *(const wchar_t *)((char *)v13 + ExpProductTypeValueInfo + 12 - (_QWORD)L"WinNT");
          v16 = *v13 - v15;
          if ( v16 )
            break;
          ++v13;
        }
        while ( v15 );
        if ( v16 && v12 )
        {
          v27 = ExpProductTypeValueInfo;
          v2 = 0;
          *(_OWORD *)ExpProductTypeValueInfo = KeyValueInformation[0];
          *(_OWORD *)(v27 + 16) = KeyValueInformation[1];
          *(_WORD *)(v27 + 32) = v36;
        }
        v17 = (char *)((char *)KeyValueInformation + 12 - v14);
        while ( 1 )
        {
          v18 = *(_WORD *)v14;
          if ( *(_WORD *)v14 != *(_WORD *)&v17[(_QWORD)v14] )
            break;
          v14 += 2;
          if ( !v18 )
          {
            v19 = 0;
            goto LABEL_23;
          }
        }
        v19 = v18 < *(_WORD *)&v17[(_QWORD)v14] ? -1 : 1;
LABEL_23:
        v2 = v19 != 0 ? v2 : 0;
      }
      updated = ExUpdateLicenseRegistry();
      if ( updated < 0 )
        KeBugCheckEx(0x9Au, 0x11uLL, (unsigned int)updated, 1uLL, 0LL);
      CmpLockRegistryFreezeAware(1);
      v0 = 1;
      v21 = NtSetValueKey(
              ExpProductTypeKey,
              &ValueName,
              0,
              *(_DWORD *)(ExpProductTypeValueInfo + 4),
              (PVOID)(ExpProductTypeValueInfo + 12),
              *(_DWORD *)(ExpProductTypeValueInfo + 8));
      if ( v21 == -1073741670 )
      {
        Interval.QuadPart = -10000000LL;
        do
        {
          KeDelayExecutionThread(0, 0, &Interval);
          v21 = NtSetValueKey(
                  ExpProductTypeKey,
                  &ValueName,
                  0,
                  *(_DWORD *)(ExpProductTypeValueInfo + 4),
                  (PVOID)(ExpProductTypeValueInfo + 12),
                  *(_DWORD *)(ExpProductTypeValueInfo + 8));
        }
        while ( v21 == -1073741670 );
      }
      if ( v21 < 0 )
        KeBugCheckEx(0x9Au, 0x11uLL, (unsigned int)v21, 1uLL, 0LL);
      v22 = (ULONG *)qword_14046BC58;
      RtlInitUnicodeString(&ValueName, L"ProductSuite");
      if ( v22 )
      {
        v23 = NtSetValueKey(ExpProductTypeKey, &ValueName, 0, v22[1], v22 + 3, v22[2]);
        if ( v23 == -1073741670 )
        {
          Interval.QuadPart = -10000000LL;
          do
          {
            KeDelayExecutionThread(0, 0, &Interval);
            v23 = NtSetValueKey(
                    ExpProductTypeKey,
                    &ValueName,
                    0,
                    *((_DWORD *)qword_14046BC58 + 1),
                    (char *)qword_14046BC58 + 12,
                    *((_DWORD *)qword_14046BC58 + 2));
          }
          while ( v23 == -1073741670 );
        }
        if ( v23 < 0 )
          KeBugCheckEx(0x9Au, 0x11uLL, (unsigned int)v23, 2uLL, 0LL);
      }
      else
      {
        NtDeleteValueKey(ExpProductTypeKey, &ValueName);
      }
    }
    while ( 1 )
    {
      v24 = NtNotifyChangeKey(
              ExpProductTypeKey,
              0LL,
              ExpWatchProductTypeWorkItem,
              (PVOID)1,
              &ExpProductTypeIoSb,
              0x10000005u,
              0,
              &ExpProductTypeChangeBuffer,
              4u,
              1u);
      v25 = v24;
      if ( v24 != -1073741670 )
        break;
      Interval.QuadPart = -10000000LL;
      KeDelayExecutionThread(0, 0, &Interval);
    }
    if ( v0 )
      CmpUnlockRegistry();
    if ( (v25 & 0x80000000) != 0LL )
      KeBugCheckEx(0x9Au, 0x11uLL, v25, 4uLL, 0LL);
    v1 = v0;
    if ( !ExpSetupModeDetected )
    {
      if ( v2 )
      {
        v1 = v0;
        if ( (int)PsCreateSystemThreadEx(
                    (__int64)&Handle,
                    0x1FFFFF,
                    0LL,
                    0LL,
                    0LL,
                    (__int64)ExpExpirationThread,
                    3221226090LL,
                    0LL,
                    0LL) >= 0 )
          ZwClose(Handle);
      }
    }
  }
  result = ExReleasePushLockEx((ULONG_PTR)&ExpKeyManipLock, 0LL);
  if ( v3 )
  {
    if ( v1 )
      NtFlushKey(v3);
    return ObCloseHandle(v3, 0);
  }
  return result;
}
