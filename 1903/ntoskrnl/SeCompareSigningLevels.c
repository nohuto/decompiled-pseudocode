/*
 * XREFs of SeCompareSigningLevels @ 0x140737430
 * Callers:
 *     MiCreateSystemSection @ 0x140154C34 (MiCreateSystemSection.c)
 *     MiValidateSectionSigningPolicy @ 0x14066F2D8 (MiValidateSectionSigningPolicy.c)
 *     NtSetInformationProcess @ 0x140674ED0 (NtSetInformationProcess.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 */

__int64 SeCompareSigningLevels()
{
  __int64 result; // rax

  result = 0LL;
  if ( qword_1404364C0 )
    return ((__int64 (*)(void))qword_1404364C0)();
  return result;
}
