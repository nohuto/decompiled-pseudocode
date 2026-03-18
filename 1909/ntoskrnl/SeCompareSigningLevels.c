/*
 * XREFs of SeCompareSigningLevels @ 0x14073B1C0
 * Callers:
 *     MiCreateSystemSection @ 0x1401552D4 (MiCreateSystemSection.c)
 *     NtSetInformationProcess @ 0x14067A5E0 (NtSetInformationProcess.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 */

__int64 SeCompareSigningLevels()
{
  __int64 result; // rax

  result = 0LL;
  if ( qword_140436440 )
    return ((__int64 (*)(void))qword_140436440)();
  return result;
}
