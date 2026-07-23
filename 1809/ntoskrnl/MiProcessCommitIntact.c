/*
 * XREFs of MiProcessCommitIntact @ 0x140001C74
 * Callers:
 *     MiProbeLeafPteAccess @ 0x1400420D0 (MiProbeLeafPteAccess.c)
 *     MiSplitReducedCommitClonePage @ 0x1402A8680 (MiSplitReducedCommitClonePage.c)
 * Callees:
 *     MiGetSharedVm @ 0x140064D20 (MiGetSharedVm.c)
 *     MiLocateAddress @ 0x140087850 (MiLocateAddress.c)
 *     MiIsVadEligibleForCommitRelease @ 0x1402A4120 (MiIsVadEligibleForCommitRelease.c)
 */

_BOOL8 __fastcall MiProcessCommitIntact(__int64 a1)
{
  _KPROCESS *Process; // rcx
  char v3; // al
  unsigned __int16 *v4; // rcx
  _BOOL8 result; // rax
  unsigned __int64 v6; // rdx
  __int64 Address; // rax

  Process = KeGetCurrentThread()->ApcState.Process;
  v3 = BYTE3(Process[2].Header.WaitListHead.Flink);
  v4 = &Process[1].IdealNode[12];
  result = 1;
  if ( (v3 & 0x60) == 0x60 )
  {
    if ( *(_QWORD *)(MiGetSharedVm(v4, a1) + 32) )
    {
      if ( v6 < 0xFFFF800000000000uLL )
      {
        Address = MiLocateAddress(v6);
        if ( !Address || (unsigned int)MiIsVadEligibleForCommitRelease(Address) )
          return 0;
      }
    }
  }
  return result;
}
