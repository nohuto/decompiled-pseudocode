/*
 * XREFs of RtlGetPersistedStateLocation @ 0x1405C0E20
 * Callers:
 *     PopOpenThermalLoggingKey @ 0x14018BE34 (PopOpenThermalLoggingKey.c)
 *     PipUpdateDeviceProducts @ 0x140197780 (PipUpdateDeviceProducts.c)
 *     WmipGetGuidSecurityDescriptor @ 0x1405C0F60 (WmipGetGuidSecurityDescriptor.c)
 *     KGetAppModelStateSeparatedRegKeyPath @ 0x1406E7C04 (KGetAppModelStateSeparatedRegKeyPath.c)
 *     PiGetStateRootPath @ 0x14073AA78 (PiGetStateRootPath.c)
 *     EtwpInitializeAutoLoggers @ 0x14076D434 (EtwpInitializeAutoLoggers.c)
 *     ExpUuidLoadSequenceNumber @ 0x1407861B8 (ExpUuidLoadSequenceNumber.c)
 *     ExpUuidSaveSequenceNumber @ 0x140786320 (ExpUuidSaveSequenceNumber.c)
 *     WmipSaveGuidSecurityDescriptor @ 0x1407893C0 (WmipSaveGuidSecurityDescriptor.c)
 *     CmpRecordShutdownStopTime @ 0x140827B30 (CmpRecordShutdownStopTime.c)
 *     PiDrvDbQuerySyncNodesUpdated @ 0x1408795FC (PiDrvDbQuerySyncNodesUpdated.c)
 *     PopInitializePowerButtonHold @ 0x140A06E0C (PopInitializePowerButtonHold.c)
 *     EtwpInitializeSecurity @ 0x140A15410 (EtwpInitializeSecurity.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401C0310 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1401C03B0 (ZwQueryValueKey.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl RtlGetPersistedStateLocation(
        PCWSTR SourceID,
        PCWSTR CustomValue,
        PCWSTR DefaultPath,
        STATE_LOCATION_TYPE StateLocationType,
        PWCHAR TargetPath,
        ULONG BufferLengthIn,
        PULONG BufferLengthOut)
{
  WCHAR *PoolWithTag; // rdi
  NTSTATUS v11; // eax
  signed int v12; // ebx
  __int64 v14; // rax
  unsigned int v15; // eax
  unsigned int v16; // ecx
  PCWSTR v17; // rdx
  ULONG v18; // esi
  ULONG Length; // ebx
  NTSTATUS v20; // eax
  unsigned __int64 v21; // rax
  HANDLE KeyHandle; // [rsp+30h] [rbp-50h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-48h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  ULONG ResultLength; // [rsp+C8h] [rbp+48h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  KeyHandle = 0LL;
  Handle = 0LL;
  PoolWithTag = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  if ( (unsigned int)StateLocationType > LocationTypeFileSystem )
    return -1073741583;
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&qword_140947F90[2 * StateLocationType];
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v11 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  v12 = v11;
  if ( v11 == -1073741772 )
    goto LABEL_3;
  if ( v11 < 0 )
    goto LABEL_5;
  RtlInitUnicodeString(&DestinationString, SourceID);
  ObjectAttributes.RootDirectory = KeyHandle;
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v12 = ZwOpenKey(&Handle, 0x20019u, &ObjectAttributes);
  if ( v12 == -1073741772 )
  {
LABEL_3:
    if ( DefaultPath )
    {
      v14 = -1LL;
      do
        ++v14;
      while ( DefaultPath[v14] );
      v15 = v14 + 1;
      v16 = 2 * v15;
      ResultLength = 2 * v15;
      if ( 2 * v15 >= v15 )
      {
        v12 = BufferLengthIn < v16 ? 0x80000005 : 0;
        if ( BufferLengthOut )
          *BufferLengthOut = v16;
        if ( v16 > BufferLengthIn )
          goto LABEL_5;
        v17 = DefaultPath;
LABEL_19:
        memmove(TargetPath, v17, v16);
        goto LABEL_5;
      }
LABEL_24:
      v12 = -1073741675;
      goto LABEL_5;
    }
  }
  if ( v12 >= 0 )
  {
    if ( !CustomValue )
      CustomValue = L"TargetNtPath";
    RtlInitUnicodeString(&DestinationString, CustomValue);
    v18 = BufferLengthIn;
    Length = BufferLengthIn + 16;
    if ( BufferLengthIn + 16 >= BufferLengthIn )
    {
      PoolWithTag = (WCHAR *)ExAllocatePoolWithTag(PagedPool, Length, 0x70657373u);
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
      else if ( *((_DWORD *)PoolWithTag + 1) != 1 )
      {
        v12 = -1073741788;
        goto LABEL_5;
      }
      v16 = *((_DWORD *)PoolWithTag + 2);
      ResultLength = v16;
      if ( v20 >= 0 && PoolWithTag[((unsigned __int64)v16 >> 1) + 5] )
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
          PoolWithTag[(v21 >> 1) + 5] = 0;
          v16 = ResultLength;
        }
      }
      if ( BufferLengthOut )
        *BufferLengthOut = v16;
      if ( v12 < 0 )
        goto LABEL_5;
      v17 = PoolWithTag + 6;
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
  return v12;
}
