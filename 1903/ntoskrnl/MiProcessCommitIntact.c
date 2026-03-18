/*
 * XREFs of MiProcessCommitIntact @ 0x140001AA8
 * Callers:
 *     MiProbeLeafPteAccess @ 0x14008F7B0 (MiProbeLeafPteAccess.c)
 *     MiSplitReducedCommitClonePage @ 0x1402BFD20 (MiSplitReducedCommitClonePage.c)
 * Callees:
 *     MiGetSharedVm @ 0x140072C10 (MiGetSharedVm.c)
 *     MiLocateAddress @ 0x140073CF0 (MiLocateAddress.c)
 *     MiIsVadEligibleForCommitRelease @ 0x1402BB320 (MiIsVadEligibleForCommitRelease.c)
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
  v3 = *((_BYTE *)&Process[1].SecureState.Flags + 3);
  v4 = &Process[1].IdealNode[6];
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
