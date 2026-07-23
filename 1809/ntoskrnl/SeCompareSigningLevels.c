/*
 * XREFs of SeCompareSigningLevels @ 0x14071AC50
 * Callers:
 *     MiCreateSystemSection @ 0x1400F599C (MiCreateSystemSection.c)
 *     NtSetInformationProcess @ 0x140672E00 (NtSetInformationProcess.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

__int64 SeCompareSigningLevels()
{
  __int64 result; // rax

  result = 0LL;
  if ( qword_14040EE00 )
    return ((__int64 (*)(void))qword_14040EE00)();
  return result;
}
