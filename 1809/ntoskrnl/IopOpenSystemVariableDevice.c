/*
 * XREFs of IopOpenSystemVariableDevice @ 0x1408234B8
 * Callers:
 *     IoEnumerateEnvironmentVariablesEx @ 0x1408223AC (IoEnumerateEnvironmentVariablesEx.c)
 *     IoGetEnvironmentVariableEx @ 0x1408224FC (IoGetEnvironmentVariableEx.c)
 *     IoQueryEnvironmentVariableInfoEx @ 0x140822674 (IoQueryEnvironmentVariableInfoEx.c)
 *     IoSetEnvironmentVariableEx @ 0x1408227E8 (IoSetEnvironmentVariableEx.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     IopGetDeviceInterfaces @ 0x14059F6C4 (IopGetDeviceInterfaces.c)
 *     IoGetDeviceObjectPointer @ 0x140663050 (IoGetDeviceObjectPointer.c)
 */

__int64 __fastcall IopOpenSystemVariableDevice(
        PFILE_OBJECT *FileObject,
        PDEVICE_OBJECT *DeviceObject,
        __int64 (__fastcall ***a3)(int, int, int, int, __int64, __int64, __int64))
{
  NTSTATUS DeviceObjectPointer; // edi
  __int64 (__fastcall **v7)(int, int, int, int, __int64, __int64, __int64); // rax
  WCHAR *v8; // rbp
  NTSTATUS v9; // eax
  UNICODE_STRING ObjectName; // [rsp+30h] [rbp-28h] BYREF
  PCWSTR SourceString; // [rsp+78h] [rbp+20h] BYREF

  if ( (IopSysEnvOverrideFlags & 1) != 0 )
  {
    RtlInitUnicodeString(&ObjectName, L"\\Device\\WindowsTrustedRT\\{699AA2F1-A42E-40DF-BABE-3AAAD2BB6A47}");
    DeviceObjectPointer = IoGetDeviceObjectPointer(&ObjectName, 0x10000000u, FileObject, DeviceObject);
    if ( DeviceObjectPointer >= 0 )
    {
LABEL_3:
      v7 = (__int64 (__fastcall **)(int, int, int, int, __int64, __int64, __int64))&IopSysEnvFunctionTableTrEE;
LABEL_13:
      *a3 = v7;
      return (unsigned int)DeviceObjectPointer;
    }
    goto LABEL_8;
  }
  SourceString = 0LL;
  if ( (int)IopGetDeviceInterfaces((int *)&GUID_EFI_VARIABLE_SERVICE, 0LL, 0, 0, &SourceString, 0LL) < 0
    || (v8 = (WCHAR *)SourceString, !*SourceString) )
  {
LABEL_8:
    RtlInitUnicodeString(&ObjectName, L"\\Device\\SysEnv");
    v9 = IoGetDeviceObjectPointer(&ObjectName, 0x10000000u, FileObject, DeviceObject);
    DeviceObjectPointer = v9;
    if ( v9 >= 0 )
    {
      v7 = (__int64 (__fastcall **)(int, int, int, int, __int64, __int64, __int64))&IopSysEnvFunctionTableSysEnv;
      goto LABEL_13;
    }
    if ( (unsigned int)(v9 + 1073741773) <= 1 || v9 == -1073741766 )
    {
      *FileObject = 0LL;
      v7 = &IopSysEnvFunctionTableHal;
      *DeviceObject = 0LL;
      DeviceObjectPointer = 0;
      goto LABEL_13;
    }
    return (unsigned int)DeviceObjectPointer;
  }
  RtlInitUnicodeString(&ObjectName, SourceString);
  DeviceObjectPointer = IoGetDeviceObjectPointer(&ObjectName, 0x10000000u, FileObject, DeviceObject);
  ExFreePoolWithTag(v8, 0);
  if ( DeviceObjectPointer >= 0 )
    goto LABEL_3;
  return (unsigned int)DeviceObjectPointer;
}
