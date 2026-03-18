/*
 * XREFs of IopReadDumpRegistry @ 0x140193A50
 * Callers:
 *     IoConfigureCrashDump @ 0x1401938E0 (IoConfigureCrashDump.c)
 *     IopInitializeCrashDump @ 0x140774CF4 (IopInitializeCrashDump.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     ObCloseHandle @ 0x140610D90 (ObCloseHandle.c)
 *     IopGetRegistryValue @ 0x1406DA724 (IopGetRegistryValue.c)
 *     IopOpenRegistryKey @ 0x14070A534 (IopOpenRegistryKey.c)
 */

NTSTATUS __fastcall IopReadDumpRegistry(unsigned int *a1, _DWORD *a2)
{
  NTSTATUS result; // eax
  char v4; // [rsp+20h] [rbp-20h]
  _QWORD v5[2]; // [rsp+30h] [rbp-10h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp+20h] BYREF

  v5[0] = 8388734LL;
  v4 = 0;
  v5[1] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\CrashControl";
  result = IopOpenRegistryKey(&Handle, 0LL, v5, 131097LL, v4);
  if ( result >= 0 )
  {
    if ( (int)IopGetRegistryValue(Handle) >= 0 )
    {
      if ( a1[3] )
        IopAutoReboot = *(unsigned int *)((char *)a1 + a1[2]);
      ExFreePoolWithTag(a1, 0);
    }
    if ( a2 && (int)IopGetRegistryValue(Handle) >= 0 )
    {
      if ( a1[3] )
        *a2 = *(unsigned int *)((char *)a1 + a1[2]);
      ExFreePoolWithTag(a1, 0);
    }
    return ObCloseHandle(Handle, 0);
  }
  return result;
}
