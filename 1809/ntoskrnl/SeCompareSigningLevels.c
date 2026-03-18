/*
 * XREFs of SeCompareSigningLevels @ 0x1407199D0
 * Callers:
 *     MiCreateSystemSection @ 0x1400F58FC (MiCreateSystemSection.c)
 *     NtSetInformationProcess @ 0x140671C60 (NtSetInformationProcess.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C5EB0 (_guard_dispatch_icall.c)
 */

__int64 SeCompareSigningLevels()
{
  __int64 result; // rax

  result = 0LL;
  if ( qword_14040DDC0 )
    return ((__int64 (*)(void))qword_14040DDC0)();
  return result;
}
