/*
 * XREFs of MiLocateCloneAddress @ 0x1400BFAB8
 * Callers:
 *     MiCopyToUserVa @ 0x140020C50 (MiCopyToUserVa.c)
 *     MiComputePageCommitment @ 0x1400210F0 (MiComputePageCommitment.c)
 *     MiWsleFlush @ 0x140025220 (MiWsleFlush.c)
 *     MiDeletePteList @ 0x140027380 (MiDeletePteList.c)
 *     MiDeletePteRun @ 0x140028050 (MiDeletePteRun.c)
 *     MiDeleteVa @ 0x14004B520 (MiDeleteVa.c)
 *     MiSetProtectionOnSection @ 0x14004E680 (MiSetProtectionOnSection.c)
 *     MiDecommitPages @ 0x1400577E0 (MiDecommitPages.c)
 *     MiTrimThisWsle @ 0x14005AEA0 (MiTrimThisWsle.c)
 *     MiGetPageProtection @ 0x1400A5DD0 (MiGetPageProtection.c)
 *     MiCompleteProtoPteFault @ 0x1400B0350 (MiCompleteProtoPteFault.c)
 *     MiActOnPte @ 0x1400BE5C0 (MiActOnPte.c)
 *     MiGetPfnProtection @ 0x1400CAE80 (MiGetPfnProtection.c)
 *     MiProbeLeafPteAccess @ 0x1400CCDA0 (MiProbeLeafPteAccess.c)
 *     MiSharedVaToPartition @ 0x1400DDB3C (MiSharedVaToPartition.c)
 *     MiCheckCommitReleaseFromVad @ 0x1402BAAEC (MiCheckCommitReleaseFromVad.c)
 *     MiSplitReducedCommitClonePage @ 0x1402BFA80 (MiSplitReducedCommitClonePage.c)
 *     MiMakeProtoPrivate @ 0x1402D1854 (MiMakeProtoPrivate.c)
 *     MiReferenceCloneProto @ 0x1402E4C2C (MiReferenceCloneProto.c)
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
