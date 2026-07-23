/*
 * XREFs of PpInitializeBootDDB @ 0x1409C942C
 * Callers:
 *     IopInitializePlugPlayServices @ 0x1409C8608 (IopInitializePlugPlayServices.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     ExInitializeResourceLite @ 0x1400CC570 (ExInitializeResourceLite.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     SdbInitDatabaseInMemory @ 0x1405A31DC (SdbInitDatabaseInMemory.c)
 *     PnpLogEvent @ 0x140828FEC (PnpLogEvent.c)
 *     PiInitializeDDBCache @ 0x1409C95C4 (PiInitializeDDBCache.c)
 */

__int64 __fastcall PpInitializeBootDDB(__int64 a1, int a2)
{
  __int64 v3; // rax
  unsigned int v4; // ecx
  PVOID PoolWithTag; // rax
  __int64 v6; // rbx
  int v8; // eax
  const WCHAR *v9; // rdx
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  if ( a2 )
    return 0LL;
  PpDDBHandle = 0LL;
  PpBootDDB = 0LL;
  ExInitializeResourceLite(&PiDDBLock);
  PiDDBPath = L"\\SystemRoot\\AppPatch\\drvmain.sdb";
  PiInitializeDDBCache();
  if ( InitIsWinPEMode )
    return 3221225473LL;
  v3 = *(_QWORD *)(a1 + 240);
  v4 = *(_DWORD *)(v3 + 72);
  if ( !v4 || !*(_QWORD *)(v3 + 64) )
  {
    if ( (PiLoggedErrorEventsMask & 1) != 0 )
      return 3221225473LL;
    v8 = PiLoggedErrorEventsMask | 1;
    v9 = L"DATABASE NOT LOADED";
LABEL_15:
    PiLoggedErrorEventsMask = v8;
    RtlInitUnicodeString(&DestinationString, v9);
    PnpLogEvent((const void **)&DestinationString, 0LL, -1073740947, 0LL, 0);
    return 3221225473LL;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v4, 0x20207050u);
  PpBootDDB = PoolWithTag;
  v6 = (__int64)PoolWithTag;
  if ( PoolWithTag )
  {
    memmove(
      PoolWithTag,
      *(const void **)(*(_QWORD *)(a1 + 240) + 64LL),
      *(unsigned int *)(*(_QWORD *)(a1 + 240) + 72LL));
    PpDDBHandle = (PVOID)SdbInitDatabaseInMemory(v6, *(_DWORD *)(*(_QWORD *)(a1 + 240) + 72LL));
    if ( PpDDBHandle )
      return 0LL;
    ExFreePoolWithTag(PpBootDDB, 0);
    PpBootDDB = 0LL;
    if ( (PiLoggedErrorEventsMask & 4) != 0 )
      return 3221225473LL;
    v8 = PiLoggedErrorEventsMask | 4;
    v9 = L"INIT DATABASE FAILED";
    goto LABEL_15;
  }
  if ( (PiLoggedErrorEventsMask & 2) == 0 )
  {
    PiLoggedErrorEventsMask |= 2u;
    RtlInitUnicodeString(&DestinationString, L"OUT OF MEMORY");
    PnpLogEvent((const void **)&DestinationString, 0LL, -1073740947, 0LL, 0);
  }
  return 3221225626LL;
}
