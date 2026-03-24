/*
 * XREFs of SeCompareSigningLevels @ 0x1407199B0
 * Callers:
 *     MiCreateSystemSection @ 0x1400F591C (MiCreateSystemSection.c)
 *     NtSetInformationProcess @ 0x140671C40 (NtSetInformationProcess.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C5ED0 (_guard_dispatch_icall.c)
 */

__int64 SeCompareSigningLevels()
{
  __int64 result; // rax

  result = 0LL;
  if ( qword_14040DDA0 )
    return ((__int64 (*)(void))qword_14040DDA0)();
  return result;
}
