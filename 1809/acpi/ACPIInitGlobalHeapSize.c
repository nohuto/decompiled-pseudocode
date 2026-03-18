/*
 * XREFs of ACPIInitGlobalHeapSize @ 0x1C0094958
 * Callers:
 *     ACPIInitializeAMLI @ 0x1C00B8A7C (ACPIInitializeAMLI.c)
 * Callees:
 *     OSOpenHandle @ 0x1C008D2B4 (OSOpenHandle.c)
 *     OSReadRegValue @ 0x1C00945C8 (OSReadRegValue.c)
 */

__int64 ACPIInitGlobalHeapSize()
{
  __int64 v0; // rdx
  int v1; // ecx
  unsigned int v2; // ebx
  unsigned int v4; // [rsp+30h] [rbp+8h] BYREF
  unsigned int v5; // [rsp+38h] [rbp+10h] BYREF
  HANDLE Handle; // [rsp+40h] [rbp+18h] BYREF

  Handle = 0LL;
  v4 = 0;
  v0 = *(_QWORD *)AcpiInformation;
  v1 = *(_DWORD *)(*(_QWORD *)AcpiInformation + 10LL) - *(_DWORD *)"VRTUAL";
  if ( !v1 )
    v1 = *(unsigned __int16 *)(v0 + 14) - *(unsigned __int16 *)"AL";
  if ( !v1 && *(_QWORD *)(v0 + 16) == *(_QWORD *)"MICROSFT" && *(_DWORD *)(v0 + 28) == *(_DWORD *)"MSFT" )
  {
    return 0x40000;
  }
  else
  {
    v2 = 0x100000;
    if ( (int)OSOpenHandle("\\Registry\\Machine\\System\\CurrentControlSet\\Control\\ACPI", 0LL, (__int64)&Handle) >= 0 )
    {
      v5 = 4;
      if ( (int)OSReadRegValue("AMLIGlobalHeapSize", Handle, &v4, &v5) >= 0 )
      {
        v2 = v4;
        if ( v4 <= 0x8000 )
          v2 = 0x8000;
        if ( v2 >= 0x800000 )
          v2 = 0x800000;
      }
      if ( Handle )
        ZwClose(Handle);
    }
  }
  return v2;
}
