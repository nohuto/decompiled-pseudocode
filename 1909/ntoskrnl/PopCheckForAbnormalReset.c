/*
 * XREFs of PopCheckForAbnormalReset @ 0x14019E964
 * Callers:
 *     PoInitSystem @ 0x140A0685C (PoInitSystem.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     PopDiagTraceAbnormalReset @ 0x1402FC18C (PopDiagTraceAbnormalReset.c)
 */

__int64 PopCheckForAbnormalReset()
{
  __int64 result; // rax

  if ( (unsigned __int8)off_140424610[0]() )
    return PopDiagTraceAbnormalReset(DWORD1(PoOffCrashConfigTable));
  result = (unsigned int)(PoOffCrashConfigTable - 1);
  if ( (unsigned int)result <= 1 )
  {
    if ( DWORD1(PoOffCrashConfigTable) )
      return PopDiagTraceAbnormalReset(DWORD1(PoOffCrashConfigTable));
  }
  return result;
}
