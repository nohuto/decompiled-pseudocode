/*
 * XREFs of IopLoadCrashdumpDriver @ 0x140182104
 * Callers:
 *     IoGetDumpStack @ 0x14072B1A8 (IoGetDumpStack.c)
 *     IopInitializeCrashDump @ 0x140774CF4 (IopInitializeCrashDump.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     RtlImageNtHeader @ 0x14005EE50 (RtlImageNtHeader.c)
 *     IopGetPhysicalMemoryBlock @ 0x14019A9B8 (IopGetPhysicalMemoryBlock.c)
 *     HvlGetEncryptedDataDomains @ 0x14019ECF8 (HvlGetEncryptedDataDomains.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     MmLoadSystemImageEx @ 0x14070F890 (MmLoadSystemImageEx.c)
 */

__int64 IopLoadCrashdumpDriver()
{
  __int64 result; // rax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-50h] BYREF
  UNICODE_STRING *v2; // [rsp+40h] [rbp-40h]
  __int64 v3; // [rsp+48h] [rbp-38h]
  int v4; // [rsp+74h] [rbp-Ch]
  PVOID BaseAddress; // [rsp+90h] [rbp+10h] BYREF
  __int64 v6; // [rsp+98h] [rbp+18h] BYREF

  v3 = 0LL;
  result = 0LL;
  v4 = 0;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  if ( !CrashdmpImageEntry )
  {
    RtlInitUnicodeString(&DestinationString, L"\\SystemRoot\\System32\\Drivers\\crashdmp.sys");
    result = MmLoadSystemImageEx((unsigned int)&DestinationString, 0, 0, 34, (__int64)&v6, (__int64)&BaseAddress);
    if ( (int)result >= 0 )
    {
      if ( RtlImageNtHeader(BaseAddress) )
      {
        v2 = &IoArcBootDeviceName;
        IopGetPhysicalMemoryBlock();
      }
      return 3221225473LL;
    }
  }
  return result;
}
