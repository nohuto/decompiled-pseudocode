/*
 * XREFs of PfpRpControlRequestReset @ 0x14069E2F4
 * Callers:
 *     PfpRpControlRequestPerform @ 0x14069DB58 (PfpRpControlRequestPerform.c)
 *     PfpRpShutdown @ 0x1408654D4 (PfpRpShutdown.c)
 * Callees:
 *     PsGetNextProcess @ 0x1405B21E0 (PsGetNextProcess.c)
 *     PfpRpCHashEmpty @ 0x14069E34C (PfpRpCHashEmpty.c)
 */

__int64 __fastcall PfpRpControlRequestReset(__int64 a1)
{
  _QWORD *i; // rcx
  unsigned __int64 NextProcess; // rax

  PfpRpCHashEmpty(a1, a1 + 96, a1 + 120);
  for ( i = 0LL; ; i = (_QWORD *)NextProcess )
  {
    NextProcess = PsGetNextProcess(i);
    if ( !NextProcess )
      break;
    _InterlockedAnd((volatile signed __int32 *)(NextProcess + 772), 0xFFFFBFFF);
  }
  PfpRpCHashEmpty(a1, a1 + 56, a1 + 88);
  *(_QWORD *)(a1 + 80) = 0LL;
  return 0LL;
}
