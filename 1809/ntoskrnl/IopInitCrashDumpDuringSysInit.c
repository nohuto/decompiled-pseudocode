/*
 * XREFs of IopInitCrashDumpDuringSysInit @ 0x1409C1174
 * Callers:
 *     IoInitSystemPreDrivers @ 0x1409B1F54 (IoInitSystemPreDrivers.c)
 * Callees:
 *     IopInitializeOfflineCrashDump @ 0x140180C80 (IopInitializeOfflineCrashDump.c)
 *     SecureDump_Init @ 0x140180D40 (SecureDump_Init.c)
 *     __security_check_cookie @ 0x140194010 (__security_check_cookie.c)
 *     memset @ 0x1401D1880 (memset.c)
 *     __report_rangecheckfailure @ 0x140268DCC (__report_rangecheckfailure.c)
 *     RtlQueryRegistryValuesEx @ 0x1406C7640 (RtlQueryRegistryValuesEx.c)
 *     IoInitializeCrashDump @ 0x14074CFA0 (IoInitializeCrashDump.c)
 *     MmInitializeMemoryLimits @ 0x1409C101C (MmInitializeMemoryLimits.c)
 */

__int64 __fastcall IopInitCrashDumpDuringSysInit(__int64 a1, ULONG a2)
{
  unsigned int v2; // ebx
  unsigned int v4; // ecx
  unsigned __int64 v5; // rax
  char v7; // [rsp+30h] [rbp-69h] BYREF
  __int128 v8; // [rsp+40h] [rbp-59h]
  _QWORD v9[14]; // [rsp+50h] [rbp-49h] BYREF
  _BYTE v10[30]; // [rsp+C0h] [rbp+27h] BYREF
  __int16 v11; // [rsp+DEh] [rbp+45h]
  char v12; // [rsp+E0h] [rbp+47h]

  v2 = 0;
  v8 = 0uLL;
  IopReportBugCheckProgress = (__int64)HalSetEnvironmentVariableEx;
  v7 = 0;
  if ( !ForceDumpDisabled )
    ForceDumpDisabled = (int)SecureDump_Init(a1, a2) < 0;
  if ( (*(_DWORD *)(a1 + 264) & 2) != 0 )
    IopReportBugCheckProgress = (__int64)VslReportBugCheckProgress;
  v4 = 0;
  v5 = 0LL;
  do
  {
    if ( v5 >= 0x25 )
      _report_rangecheckfailure();
    v10[v5] = 0;
    ++v4;
    ++v5;
  }
  while ( v4 < 0x25 );
  v11 = 257;
  v10[6] = 1;
  v12 = 1;
  SpecialMemoryRanges = (__int64)MmInitializeMemoryLimits(a1, (__int64)v10);
  memset(v9, 0, sizeof(v9));
  LODWORD(v9[1]) = 4;
  v9[0] = &IopInitCrashDumpRegCallback;
  LODWORD(v9[4]) = 0;
  v9[2] = L"ExistingPageFiles";
  v9[3] = &v7;
  RtlQueryRegistryValuesEx(2LL, L"Session Manager\\Memory Management", (__int64)v9, a1);
  if ( !v7 )
    v2 = IoInitializeCrashDump(0LL) == 0 ? 0xC0000001 : 0;
  IopInitializeOfflineCrashDump(*(_QWORD *)(a1 + 240));
  return v2;
}
