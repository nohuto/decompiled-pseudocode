/*
 * XREFs of IopCreateRegistryKeyEx @ 0x14070A964
 * Callers:
 *     PiDevCfgConfigureSoftwareDevices @ 0x1406FB1A0 (PiDevCfgConfigureSoftwareDevices.c)
 *     NtDisableLastKnownGood @ 0x140707D30 (NtDisableLastKnownGood.c)
 *     PipOpenServiceEnumKeys @ 0x14070A7D4 (PipOpenServiceEnumKeys.c)
 *     PnpBuildCmResourceList @ 0x14072F9B0 (PnpBuildCmResourceList.c)
 *     IopWriteResourceList @ 0x140730D98 (IopWriteResourceList.c)
 *     PnpOpenCCSPnpRegKey @ 0x14073D6FC (PnpOpenCCSPnpRegKey.c)
 *     IoSetSystemPartition @ 0x14081DB70 (IoSetSystemPartition.c)
 *     PipHardwareConfigTriggerRespecialize @ 0x140824144 (PipHardwareConfigTriggerRespecialize.c)
 *     PiDrvDbQuerySyncNodesUpdated @ 0x14083F388 (PiDrvDbQuerySyncNodesUpdated.c)
 *     IoReportHalResourceUsage @ 0x1409C1AA0 (IoReportHalResourceUsage.c)
 *     IopInitializeResourceMap @ 0x1409C1C58 (IopInitializeResourceMap.c)
 *     PipHardwareConfigInit @ 0x1409C73FC (PipHardwareConfigInit.c)
 *     IopInitializePlugPlayServices @ 0x1409C8608 (IopInitializePlugPlayServices.c)
 *     PipInitComputerIds @ 0x1409C9C60 (PipInitComputerIds.c)
 *     IopStoreSystemPartitionInformation @ 0x1409D72F4 (IopStoreSystemPartitionInformation.c)
 *     PiInitFirmwareResources @ 0x1409E01D0 (PiInitFirmwareResources.c)
 * Callees:
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwCreateKey @ 0x1401B8690 (ZwCreateKey.c)
 */

__int64 __fastcall IopCreateRegistryKeyEx(
        _QWORD *a1,
        void *a2,
        UNICODE_STRING *a3,
        ACCESS_MASK a4,
        ULONG CreateOptions,
        ULONG *a6)
{
  _QWORD *v6; // rdi
  __int64 v7; // r13
  __int64 v9; // r15
  NTSTATUS v11; // r14d
  wchar_t *Buffer; // rdi
  unsigned int v14; // r12d
  __int64 Length; // rsi
  wchar_t *v16; // rsi
  wchar_t *v17; // rbx
  char v18; // al
  ULONG Disposition; // [rsp+40h] [rbp-59h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-51h] BYREF
  HANDLE KeyHandle; // [rsp+50h] [rbp-49h] BYREF
  _WORD v22[4]; // [rsp+58h] [rbp-41h] BYREF
  wchar_t *v23; // [rsp+60h] [rbp-39h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-31h] BYREF
  char v26; // [rsp+F8h] [rbp+5Fh]

  v6 = a1;
  ObjectAttributes.RootDirectory = a2;
  v7 = 0LL;
  ObjectAttributes.ObjectName = a3;
  *a1 = 0LL;
  ObjectAttributes.Length = 48;
  LODWORD(v9) = 1;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v11 = ZwCreateKey(&KeyHandle, a4, &ObjectAttributes, 0, 0LL, CreateOptions, &Disposition);
  if ( v11 != -1073741772 )
    goto LABEL_2;
  if ( a2 )
  {
    Buffer = a3->Buffer;
    v14 = 0;
    Length = a3->Length;
    Handle = 0LL;
    v16 = (wchar_t *)((char *)Buffer + Length);
    KeyHandle = a2;
    v26 = 1;
    while ( 1 )
    {
      if ( v14 > 1 )
        ZwClose(*(&Handle + v7));
      v7 = (unsigned int)v9;
      v17 = Buffer;
      v9 = ((_BYTE)v9 - 1) & 1;
      for ( *(&Handle + v9) = 0LL; v17 < v16; ++v17 )
      {
        if ( *v17 == 92 )
          break;
      }
      if ( (_DWORD)v17 == (_DWORD)Buffer )
        break;
      v22[1] = (_WORD)v17 - (_WORD)Buffer;
      v22[0] = (_WORD)v17 - (_WORD)Buffer;
      ObjectAttributes.RootDirectory = *(&Handle + v7);
      ObjectAttributes.ObjectName = (PUNICODE_STRING)v22;
      v23 = Buffer;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v11 = ZwCreateKey(&Handle + v9, a4, &ObjectAttributes, 0, 0LL, CreateOptions, &Disposition);
      if ( v11 < 0 )
        goto LABEL_21;
      ++v14;
      if ( v17 == v16 )
        goto LABEL_19;
      Buffer = v17 + 1;
      if ( v17 + 1 == v16 )
        goto LABEL_19;
      v18 = v26;
LABEL_20:
      if ( !v18 )
      {
LABEL_21:
        if ( v14 > 1 )
          ZwClose(*(&Handle + v7));
        v6 = a1;
LABEL_2:
        if ( v11 >= 0 )
        {
          *v6 = *(&Handle + (unsigned int)v9);
          if ( a6 )
            *a6 = Disposition;
        }
        return (unsigned int)v11;
      }
    }
    v11 = -1073741811;
LABEL_19:
    v18 = 0;
    v26 = 0;
    goto LABEL_20;
  }
  return (unsigned int)v11;
}
