/*
 * XREFs of MiOkToSetPteDirtyForNotValidFault @ 0x14011BE28
 * Callers:
 *     MiIssueHardFault @ 0x140007100 (MiIssueHardFault.c)
 *     MiProbeLeafPteAccess @ 0x14008F7B0 (MiProbeLeafPteAccess.c)
 *     MiResolveTransitionFault @ 0x1400D23E0 (MiResolveTransitionFault.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiOkToSetPteDirtyForNotValidFault(__int64 a1, unsigned __int64 a2)
{
  _KPROCESS *Process; // rdx
  __int64 v3; // rax
  _BOOL8 result; // rax

  result = 1;
  if ( a2 <= 0x7FFFFFFEFFFFLL )
  {
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( a1 >= 0 && (Process[1].DirectoryTableBase & 0x1000000000LL) != 0 )
      return 0;
    v3 = *(_QWORD *)&Process[2].Spare2[47];
    if ( v3 )
    {
      if ( *(_QWORD *)(v3 + 24) != v3 + 24 )
        return 0;
    }
  }
  return result;
}
