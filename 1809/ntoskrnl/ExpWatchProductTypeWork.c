/*
 * XREFs of ExpWatchProductTypeWork @ 0x1406C0BB0
 * Callers:
 *     <none>
 * Callees:
 *     KeDelayExecutionThread @ 0x14004DA20 (KeDelayExecutionThread.c)
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x14004F160 (ExReleasePushLockEx.c)
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     CmCleanupThreadInfo @ 0x1401B307C (CmCleanupThreadInfo.c)
 *     CmInitializeThreadInfo @ 0x1401B3098 (CmInitializeThreadInfo.c)
 *     CmSizeOfThreadInfo @ 0x1401B30B0 (CmSizeOfThreadInfo.c)
 *     CmpInitializeThreadInfo @ 0x1401B30BC (CmpInitializeThreadInfo.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     _alloca_probe @ 0x1401C5F20 (_alloca_probe.c)
 *     CmpLockRegistryFreezeAware @ 0x1405B2640 (CmpLockRegistryFreezeAware.c)
 *     NtDeleteValueKey @ 0x1405B7030 (NtDeleteValueKey.c)
 *     NtSetValueKey @ 0x1405CD8E0 (NtSetValueKey.c)
 *     NtNotifyChangeKey @ 0x1405D0350 (NtNotifyChangeKey.c)
 *     CmOpenKey @ 0x1405E1EA0 (CmOpenKey.c)
 *     ObCloseHandle @ 0x1405F6700 (ObCloseHandle.c)
 *     NtQueryValueKey @ 0x140641360 (NtQueryValueKey.c)
 *     CmpUnlockRegistry @ 0x140646170 (CmpUnlockRegistry.c)
 *     PsCreateSystemThreadEx @ 0x14066BC80 (PsCreateSystemThreadEx.c)
 *     NtFlushKey @ 0x1406C1210 (NtFlushKey.c)
 *     ExUpdateLicenseRegistry @ 0x1406C1558 (ExUpdateLicenseRegistry.c)
 */

NTSTATUS ExpWatchProductTypeWork()
{
  char v0; // r12
  char v1; // si
  char v2; // di
  HANDLE v3; // r15
  PVOID *v4; // r14
  ULONG_PTR v5; // r8
  NTSTATUS v6; // eax
  const wchar_t *v7; // rax
  int v8; // r8d
  int v9; // ecx
  const wchar_t *v10; // rax
  int v11; // r8d
  int v12; // ecx
  char v13; // r10
  const wchar_t *v14; // rax
  char *v15; // rdx
  int v16; // r8d
  int v17; // ecx
  __int64 v18; // rcx
  char *v19; // rcx
  unsigned __int16 v20; // ax
  int v21; // eax
  int updated; // eax
  unsigned __int64 v23; // rcx
  __int64 v24; // rax
  void *v25; // rsp
  NTSTATUS v26; // eax
  ULONG *v27; // rdi
  NTSTATUS v28; // eax
  NTSTATUS v29; // edi
  NTSTATUS result; // eax
  char v31[8]; // [rsp+50h] [rbp+0h] BYREF
  LARGE_INTEGER Interval; // [rsp+58h] [rbp+8h] BYREF
  UNICODE_STRING ValueName; // [rsp+60h] [rbp+10h] BYREF
  ULONG ResultLength; // [rsp+70h] [rbp+20h] BYREF
  HANDLE Handle[2]; // [rsp+78h] [rbp+28h] BYREF
  int v36; // [rsp+88h] [rbp+38h] BYREF
  __int64 v37; // [rsp+90h] [rbp+40h]
  UNICODE_STRING *p_DestinationString; // [rsp+98h] [rbp+48h]
  int v39; // [rsp+A0h] [rbp+50h]
  __int128 v40; // [rsp+A8h] [rbp+58h]
  UNICODE_STRING DestinationString; // [rsp+B8h] [rbp+68h] BYREF
  _OWORD KeyValueInformation[2]; // [rsp+C8h] [rbp+78h] BYREF
  __int16 v43; // [rsp+E8h] [rbp+98h]

  v0 = 1;
  v31[0] = 1;
  v1 = 0;
  v2 = 0;
  v3 = 0LL;
  v4 = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\ProductOptions");
  v36 = 48;
  p_DestinationString = &DestinationString;
  v37 = 0LL;
  v39 = 576;
  v40 = 0LL;
  ExAcquirePushLockSharedEx((ULONG_PTR)&ExpKeyManipLock, 0LL);
  if ( ExpProductTypeKey )
  {
    CmpInitializeThreadInfo(Handle);
    CmOpenKey((HANDLE *)&ValueName, 131103, (__int64)&v36, 0, 0LL);
    CmCleanupThreadInfo(Handle);
    if ( (_DWORD)v5 == -1073741670 )
    {
      Interval.QuadPart = -10000000LL;
      do
      {
        KeDelayExecutionThread(0, 0, &Interval);
        CmpInitializeThreadInfo(Handle);
        CmOpenKey((HANDLE *)&ValueName, 131103, (__int64)&v36, 0, 0LL);
        CmCleanupThreadInfo(Handle);
      }
      while ( (_DWORD)v5 == -1073741670 );
    }
    if ( (v5 & 0x80000000) != 0LL )
      KeBugCheckEx(0x9Au, 0xDuLL, v5, 0LL, 0LL);
    v3 = ExpProductTypeKey;
    Handle[0] = ExpProductTypeKey;
    ExpProductTypeKey = *(HANDLE *)&ValueName.Length;
    if ( !ExpSetupModeDetected )
    {
      RtlInitUnicodeString(&ValueName, L"ProductType");
      v6 = NtQueryValueKey(
             ExpProductTypeKey,
             &ValueName,
             KeyValuePartialInformation,
             KeyValueInformation,
             0x22u,
             &ResultLength);
      if ( v6 == -1073741670 )
      {
        Interval.QuadPart = -10000000LL;
        do
        {
          KeDelayExecutionThread(0, 0, &Interval);
          v6 = NtQueryValueKey(
                 ExpProductTypeKey,
                 &ValueName,
                 KeyValuePartialInformation,
                 KeyValueInformation,
                 0x22u,
                 &ResultLength);
        }
        while ( v6 == -1073741670 );
      }
      if ( v6 >= 0 )
      {
        v7 = L"LanmanNT";
        do
        {
          v8 = *(const wchar_t *)((char *)v7 + (char *)KeyValueInformation + 12 - (char *)L"LanmanNT");
          v9 = *v7 - v8;
          if ( v9 )
            break;
          ++v7;
        }
        while ( v8 );
        if ( !v9 )
          goto LABEL_19;
        v10 = L"ServerNT";
        do
        {
          v11 = *(const wchar_t *)((char *)v10 + (char *)KeyValueInformation + 12 - (char *)L"ServerNT");
          v12 = *v10 - v11;
          if ( v12 )
            break;
          ++v10;
        }
        while ( v11 );
        v13 = 0;
        if ( !v12 )
LABEL_19:
          v13 = 1;
        v14 = L"WinNT";
        v15 = (char *)(ExpProductTypeValueInfo + 12);
        do
        {
          v16 = *(const wchar_t *)((char *)v14 + ExpProductTypeValueInfo + 12 - (_QWORD)L"WinNT");
          v17 = *v14 - v16;
          if ( v17 )
            break;
          ++v14;
        }
        while ( v16 );
        if ( v17 && v13 )
        {
          v18 = ExpProductTypeValueInfo;
          v0 = 0;
          *(_OWORD *)ExpProductTypeValueInfo = KeyValueInformation[0];
          *(_OWORD *)(v18 + 16) = KeyValueInformation[1];
          *(_WORD *)(v18 + 32) = v43;
        }
        v19 = (char *)((char *)KeyValueInformation + 12 - v15);
        while ( 1 )
        {
          v20 = *(_WORD *)v15;
          if ( *(_WORD *)v15 != *(_WORD *)&v19[(_QWORD)v15] )
            break;
          v15 += 2;
          if ( !v20 )
          {
            v21 = 0;
            goto LABEL_31;
          }
        }
        v21 = v20 < *(_WORD *)&v19[(_QWORD)v15] ? -1 : 1;
LABEL_31:
        v0 &= -(v21 != 0);
        v31[0] = v0;
      }
      updated = ExUpdateLicenseRegistry();
      if ( updated < 0 )
        KeBugCheckEx(0x9Au, 0x11uLL, (unsigned int)updated, 1uLL, 0LL);
      v23 = (unsigned int)CmSizeOfThreadInfo();
      v24 = v23 + 15;
      if ( v23 + 15 <= v23 )
        v24 = 0xFFFFFFFFFFFFFF0LL;
      v25 = alloca(v24 & 0xFFFFFFFFFFFFFFF0uLL);
      v4 = (PVOID *)v31;
      CmInitializeThreadInfo((__int64)v31);
      CmpLockRegistryFreezeAware(1);
      v1 = 1;
      v26 = NtSetValueKey(
              ExpProductTypeKey,
              &ValueName,
              0,
              *(_DWORD *)(ExpProductTypeValueInfo + 4),
              (PVOID)(ExpProductTypeValueInfo + 12),
              *(_DWORD *)(ExpProductTypeValueInfo + 8));
      if ( v26 == -1073741670 )
      {
        Interval.QuadPart = -10000000LL;
        do
        {
          KeDelayExecutionThread(0, 0, &Interval);
          v26 = NtSetValueKey(
                  ExpProductTypeKey,
                  &ValueName,
                  0,
                  *(_DWORD *)(ExpProductTypeValueInfo + 4),
                  (PVOID)(ExpProductTypeValueInfo + 12),
                  *(_DWORD *)(ExpProductTypeValueInfo + 8));
        }
        while ( v26 == -1073741670 );
      }
      if ( v26 < 0 )
        KeBugCheckEx(0x9Au, 0x11uLL, (unsigned int)v26, 1uLL, 0LL);
      v27 = (ULONG *)qword_140440ED8;
      RtlInitUnicodeString(&ValueName, L"ProductSuite");
      if ( v27 )
      {
        v28 = NtSetValueKey(ExpProductTypeKey, &ValueName, 0, v27[1], v27 + 3, v27[2]);
        if ( v28 == -1073741670 )
        {
          Interval.QuadPart = -10000000LL;
          do
          {
            KeDelayExecutionThread(0, 0, &Interval);
            v28 = NtSetValueKey(
                    ExpProductTypeKey,
                    &ValueName,
                    0,
                    *((_DWORD *)qword_140440ED8 + 1),
                    (char *)qword_140440ED8 + 12,
                    *((_DWORD *)qword_140440ED8 + 2));
          }
          while ( v28 == -1073741670 );
        }
        if ( v28 < 0 )
          KeBugCheckEx(0x9Au, 0x11uLL, (unsigned int)v28, 2uLL, 0LL);
      }
      else
      {
        NtDeleteValueKey(ExpProductTypeKey, &ValueName);
      }
    }
    v29 = NtNotifyChangeKey(
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
    if ( v29 == -1073741670 )
    {
      Interval.QuadPart = -10000000LL;
      do
      {
        KeDelayExecutionThread(0, 0, &Interval);
        v29 = NtNotifyChangeKey(
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
      }
      while ( v29 == -1073741670 );
      v3 = Handle[0];
      v0 = v31[0];
    }
    if ( v1 )
      CmpUnlockRegistry();
    if ( v4 )
      CmCleanupThreadInfo(v4);
    if ( v29 < 0 )
      KeBugCheckEx(0x9Au, 0x11uLL, (unsigned int)v29, 4uLL, 0LL);
    v2 = v1;
    if ( !ExpSetupModeDetected
      && v0
      && (int)PsCreateSystemThreadEx(
                (__int64)Handle,
                0x1FFFFF,
                0LL,
                0LL,
                0LL,
                (__int64)ExpExpirationThread,
                3221226090LL,
                0LL,
                0LL) >= 0 )
    {
      ZwClose(Handle[0]);
    }
  }
  result = ExReleasePushLockEx((ULONG_PTR)&ExpKeyManipLock, 0LL);
  if ( v3 )
  {
    if ( v2 )
      NtFlushKey(v3);
    return ObCloseHandle(v3, 0);
  }
  return result;
}
