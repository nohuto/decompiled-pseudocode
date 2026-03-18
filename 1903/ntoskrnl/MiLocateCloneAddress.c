/*
 * XREFs of MiLocateCloneAddress @ 0x1400DFC38
 * Callers:
 *     MiCopyToUserVa @ 0x140020860 (MiCopyToUserVa.c)
 *     MiComputePageCommitment @ 0x140020D00 (MiComputePageCommitment.c)
 *     MiWsleFlush @ 0x140024E30 (MiWsleFlush.c)
 *     MiDeletePteList @ 0x140026F90 (MiDeletePteList.c)
 *     MiDeletePteRun @ 0x140027C60 (MiDeletePteRun.c)
 *     MiDeleteVa @ 0x14004B480 (MiDeleteVa.c)
 *     MiSetProtectionOnSection @ 0x14004E5E0 (MiSetProtectionOnSection.c)
 *     MiDecommitPages @ 0x140057740 (MiDecommitPages.c)
 *     MiTrimThisWsle @ 0x14005AE00 (MiTrimThisWsle.c)
 *     MiGetPfnProtection @ 0x14008DC70 (MiGetPfnProtection.c)
 *     MiProbeLeafPteAccess @ 0x14008F7B0 (MiProbeLeafPteAccess.c)
 *     MiGetPageProtection @ 0x1400C5F50 (MiGetPageProtection.c)
 *     MiCompleteProtoPteFault @ 0x1400D04D0 (MiCompleteProtoPteFault.c)
 *     MiActOnPte @ 0x1400DE740 (MiActOnPte.c)
 *     MiSharedVaToPartition @ 0x1400F042C (MiSharedVaToPartition.c)
 *     MiCheckCommitReleaseFromVad @ 0x1402BAD8C (MiCheckCommitReleaseFromVad.c)
 *     MiSplitReducedCommitClonePage @ 0x1402BFD20 (MiSplitReducedCommitClonePage.c)
 *     MiMakeProtoPrivate @ 0x1402D1AF4 (MiMakeProtoPrivate.c)
 *     MiReferenceCloneProto @ 0x1402E4ECC (MiReferenceCloneProto.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall MiLocateCloneAddress(__int64 a1, unsigned __int64 a2)
{
  _QWORD *result; // rax

  result = *(_QWORD **)(a1 + 920);
  while ( result )
  {
    if ( a2 > result[4] )
    {
      result = (_QWORD *)result[1];
    }
    else
    {
      if ( a2 >= result[3] )
        return result;
      result = (_QWORD *)*result;
    }
  }
  return 0LL;
}
