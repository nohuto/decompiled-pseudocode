/*
 * XREFs of IopInitCrashDumpDuringSysInit @ 0x1409C2174
 * Callers:
 *     IoInitSystemPreDrivers @ 0x1409B2F54 (IoInitSystemPreDrivers.c)
 * Callees:
 *     IopInitializeOfflineCrashDump @ 0x140180DC0 (IopInitializeOfflineCrashDump.c)
 *     SecureDump_Init @ 0x140180E80 (SecureDump_Init.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     __report_rangecheckfailure @ 0x140268FBC (__report_rangecheckfailure.c)
 *     RtlQueryRegistryValuesEx @ 0x1406C88E0 (RtlQueryRegistryValuesEx.c)
 *     IoInitializeCrashDump @ 0x14074E190 (IoInitializeCrashDump.c)
 *     MmInitializeMemoryLimits @ 0x1409C201C (MmInitializeMemoryLimits.c)
 */

__int64 __fastcall IopInitCrashDumpDuringSysInit(__int64 Context, ULONG a2)
{
  unsigned int v2; // ebx
  unsigned int v4; // ecx
  unsigned __int64 v5; // rax
  char v7; // [rsp+30h] [rbp-69h] BYREF
  __int128 v8; // [rsp+40h] [rbp-59h]
  _RTL_QUERY_REGISTRY_TABLE QueryTable[2]; // [rsp+50h] [rbp-49h] BYREF
  _BYTE v10[30]; // [rsp+C0h] [rbp+27h] BYREF
  __int16 v11; // [rsp+DEh] [rbp+45h]
  char v12; // [rsp+E0h] [rbp+47h]

  v2 = 0;
  v8 = 0uLL;
  IopReportBugCheckProgress = (__int64)HalSetEnvironmentVariableEx;
  v7 = 0;
  if ( !ForceDumpDisabled )
    ForceDumpDisabled = (int)SecureDump_Init(Context, a2) < 0;
  if ( (*(_DWORD *)(Context + 264) & 2) != 0 )
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
  SpecialMemoryRanges = (__int64)MmInitializeMemoryLimits(Context, (__int64)v10);
  memset(QueryTable, 0, sizeof(QueryTable));
  QueryTable[0].Flags = 4;
  QueryTable[0].QueryRoutine = (PRTL_QUERY_REGISTRY_ROUTINE)&IopInitCrashDumpRegCallback;
  QueryTable[0].DefaultType = 0;
  QueryTable[0].Name = L"ExistingPageFiles";
  QueryTable[0].EntryContext = &v7;
  RtlQueryRegistryValuesEx(2u, L"Session Manager\\Memory Management", QueryTable, (PVOID)Context, 0LL);
  if ( !v7 )
    v2 = IoInitializeCrashDump(0LL) == 0 ? 0xC0000001 : 0;
  IopInitializeOfflineCrashDump(*(_QWORD *)(Context + 240));
  return v2;
}
