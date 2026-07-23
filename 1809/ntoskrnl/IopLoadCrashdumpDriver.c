/*
 * XREFs of IopLoadCrashdumpDriver @ 0x14017827C
 * Callers:
 *     IoGetDumpStack @ 0x1406E0324 (IoGetDumpStack.c)
 *     IopInitializeCrashDump @ 0x14074E224 (IopInitializeCrashDump.c)
 * Callees:
 *     RtlImageNtHeader @ 0x14009DA20 (RtlImageNtHeader.c)
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     IopGetPhysicalMemoryBlock @ 0x1401901E8 (IopGetPhysicalMemoryBlock.c)
 *     HvlGetEncryptedDataDomains @ 0x140193FBC (HvlGetEncryptedDataDomains.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     MmLoadSystemImageEx @ 0x1406821B8 (MmLoadSystemImageEx.c)
 */

__int64 IopLoadCrashdumpDriver()
{
  __int64 result; // rax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-50h] BYREF
  UNICODE_STRING *v2; // [rsp+40h] [rbp-40h]
  PVOID BaseAddress; // [rsp+90h] [rbp+10h] BYREF
  __int64 v4; // [rsp+98h] [rbp+18h] BYREF

  if ( CrashdmpImageEntry )
    return 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\SystemRoot\\System32\\Drivers\\crashdmp.sys");
  result = MmLoadSystemImageEx((unsigned int)&DestinationString, 0, 0, 34, (__int64)&v4, (__int64)&BaseAddress);
  if ( (int)result >= 0 )
  {
    if ( RtlImageNtHeader(BaseAddress) )
    {
      v2 = &IoArcBootDeviceName;
      IopGetPhysicalMemoryBlock();
    }
    return 3221225473LL;
  }
  return result;
}
