/*
 * XREFs of IopCreateRegistryKeyEx @ 0x1406E96F0
 * Callers:
 *     NtDisableLastKnownGood @ 0x1406E95F0 (NtDisableLastKnownGood.c)
 *     PiDevCfgConfigureSoftwareDevices @ 0x140717978 (PiDevCfgConfigureSoftwareDevices.c)
 *     PipOpenServiceEnumKeys @ 0x1407360F0 (PipOpenServiceEnumKeys.c)
 *     PnpBuildCmResourceList @ 0x140753050 (PnpBuildCmResourceList.c)
 *     IopWriteResourceList @ 0x140754424 (IopWriteResourceList.c)
 *     PnpOpenCCSPnpRegKey @ 0x140755570 (PnpOpenCCSPnpRegKey.c)
 *     IoSetSystemPartition @ 0x1408560C0 (IoSetSystemPartition.c)
 *     PipHardwareConfigTriggerRespecialize @ 0x14085C980 (PipHardwareConfigTriggerRespecialize.c)
 *     IoReportHalResourceUsage @ 0x1409F4A00 (IoReportHalResourceUsage.c)
 *     IopInitializeResourceMap @ 0x1409F4BC8 (IopInitializeResourceMap.c)
 *     IopStoreSystemPartitionInformation @ 0x1409F5680 (IopStoreSystemPartitionInformation.c)
 *     PipInitComputerIds @ 0x1409F5A4C (PipInitComputerIds.c)
 *     IopInitializePlugPlayServices @ 0x1409F8468 (IopInitializePlugPlayServices.c)
 *     PipHardwareConfigInit @ 0x140A1C474 (PipHardwareConfigInit.c)
 *     PiInitFirmwareResources @ 0x140A22834 (PiInitFirmwareResources.c)
 * Callees:
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     ZwCreateKey @ 0x1401C0FF0 (ZwCreateKey.c)
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
  __int64 v10; // r15
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
  __int64 v22; // [rsp+58h] [rbp-41h] BYREF
  wchar_t *v23; // [rsp+60h] [rbp-39h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-31h] BYREF
  char v26; // [rsp+F8h] [rbp+5Fh]

  *(&ObjectAttributes.Length + 1) = 0;
  v6 = a1;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v22 = 0LL;
  v23 = 0LL;
  v7 = 0LL;
  *a1 = 0LL;
  ObjectAttributes.RootDirectory = a2;
  LODWORD(v10) = 1;
  ObjectAttributes.ObjectName = a3;
  ObjectAttributes.Length = 48;
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
      v7 = (unsigned int)v10;
      v17 = Buffer;
      v10 = ((_BYTE)v10 - 1) & 1;
      for ( *(&Handle + v10) = 0LL; v17 < v16; ++v17 )
      {
        if ( *v17 == 92 )
          break;
      }
      if ( (_DWORD)v17 == (_DWORD)Buffer )
        break;
      WORD1(v22) = (_WORD)v17 - (_WORD)Buffer;
      LOWORD(v22) = (_WORD)v17 - (_WORD)Buffer;
      ObjectAttributes.RootDirectory = *(&Handle + v7);
      ObjectAttributes.ObjectName = (PUNICODE_STRING)&v22;
      v23 = Buffer;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v11 = ZwCreateKey(&Handle + v10, a4, &ObjectAttributes, 0, 0LL, CreateOptions, &Disposition);
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
          *v6 = *(&Handle + (unsigned int)v10);
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
