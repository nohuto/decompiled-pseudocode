/*
 * XREFs of RtlGetPersistedStateLocation @ 0x140612450
 * Callers:
 *     PipUpdateDeviceProducts @ 0x140181DA0 (PipUpdateDeviceProducts.c)
 *     PopOpenThermalLoggingKey @ 0x140192004 (PopOpenThermalLoggingKey.c)
 *     WmipGetGuidSecurityDescriptor @ 0x1406122D0 (WmipGetGuidSecurityDescriptor.c)
 *     KGetAppModelStateSeparatedRegKeyPath @ 0x1406C7B58 (KGetAppModelStateSeparatedRegKeyPath.c)
 *     PiGetStateRootPath @ 0x14070E140 (PiGetStateRootPath.c)
 *     EtwpInitializeAutoLoggers @ 0x14074185C (EtwpInitializeAutoLoggers.c)
 *     ExpUuidLoadSequenceNumber @ 0x14075F860 (ExpUuidLoadSequenceNumber.c)
 *     ExpUuidSaveSequenceNumber @ 0x14075F9AC (ExpUuidSaveSequenceNumber.c)
 *     WmipSaveGuidSecurityDescriptor @ 0x140762790 (WmipSaveGuidSecurityDescriptor.c)
 *     CmpRecordShutdownStopTime @ 0x1407ED098 (CmpRecordShutdownStopTime.c)
 *     PiDrvDbQuerySyncNodesUpdated @ 0x14083E128 (PiDrvDbQuerySyncNodesUpdated.c)
 *     EtwpInitializeSecurity @ 0x1409D008C (EtwpInitializeSecurity.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B9A90 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1401B8370 (ZwClose.c)
 *     ZwOpenKey @ 0x1401B83D0 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1401B8470 (ZwQueryValueKey.c)
 *     memmove @ 0x1401D1540 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14034B010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 */

__int64 __fastcall RtlGetPersistedStateLocation(
        PCWSTR SourceString,
        const WCHAR *a2,
        _WORD *a3,
        unsigned int a4,
        void *a5,
        unsigned int a6,
        unsigned int *a7)
{
  _DWORD *PoolWithTag; // rdi
  NTSTATUS v11; // eax
  NTSTATUS v12; // ebx
  __int64 v14; // rax
  unsigned int v15; // eax
  unsigned int v16; // ecx
  const void *v17; // rdx
  unsigned int v18; // esi
  ULONG Length; // ebx
  NTSTATUS v20; // eax
  unsigned __int64 v21; // rax
  HANDLE KeyHandle; // [rsp+30h] [rbp-50h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-48h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  ULONG ResultLength; // [rsp+C8h] [rbp+48h] BYREF

  KeyHandle = 0LL;
  Handle = 0LL;
  PoolWithTag = 0LL;
  if ( a4 > 1 )
    return 3221225713LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&qword_1409098B0[2 * (int)a4];
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v11 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  v12 = v11;
  if ( v11 == -1073741772 )
    goto LABEL_3;
  if ( v11 < 0 )
    goto LABEL_5;
  RtlInitUnicodeString(&DestinationString, SourceString);
  ObjectAttributes.RootDirectory = KeyHandle;
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v12 = ZwOpenKey(&Handle, 0x20019u, &ObjectAttributes);
  if ( v12 == -1073741772 )
  {
LABEL_3:
    if ( a3 )
    {
      v14 = -1LL;
      do
        ++v14;
      while ( a3[v14] );
      v15 = v14 + 1;
      v16 = 2 * v15;
      ResultLength = 2 * v15;
      if ( 2 * v15 >= v15 )
      {
        v12 = a6 < v16 ? 0x80000005 : 0;
        if ( a7 )
          *a7 = v16;
        if ( v16 > a6 )
          goto LABEL_5;
        v17 = a3;
LABEL_19:
        memmove(a5, v17, v16);
        goto LABEL_5;
      }
LABEL_24:
      v12 = -1073741675;
      goto LABEL_5;
    }
  }
  if ( v12 >= 0 )
  {
    if ( !a2 )
      a2 = L"TargetNtPath";
    RtlInitUnicodeString(&DestinationString, a2);
    v18 = a6;
    Length = a6 + 16;
    if ( a6 + 16 >= a6 )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, Length, 0x70657373u);
      if ( !PoolWithTag )
      {
        v12 = -1073741801;
        goto LABEL_5;
      }
      v20 = ZwQueryValueKey(Handle, &DestinationString, KeyValuePartialInformation, PoolWithTag, Length, &ResultLength);
      v12 = v20;
      if ( v20 < 0 )
      {
        if ( v20 != -2147483643 )
          goto LABEL_5;
      }
      else if ( PoolWithTag[1] != 1 )
      {
        v12 = -1073741788;
        goto LABEL_5;
      }
      v16 = PoolWithTag[2];
      ResultLength = v16;
      if ( v20 >= 0 && *((_WORD *)PoolWithTag + ((unsigned __int64)v16 >> 1) + 5) )
      {
        v21 = v16 + 2;
        ResultLength = v21;
        v16 += 2;
        if ( v18 < (unsigned int)v21 )
        {
          v12 = -2147483643;
        }
        else
        {
          *((_WORD *)PoolWithTag + (v21 >> 1) + 5) = 0;
          v16 = ResultLength;
        }
      }
      if ( a7 )
        *a7 = v16;
      if ( v12 < 0 )
        goto LABEL_5;
      v17 = PoolWithTag + 3;
      goto LABEL_19;
    }
    goto LABEL_24;
  }
LABEL_5:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( Handle )
    ZwClose(Handle);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return (unsigned int)v12;
}
