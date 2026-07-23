/*
 * XREFs of MiLocateCloneAddress @ 0x1400946C8
 * Callers:
 *     MiDeletePteList @ 0x140035B80 (MiDeletePteList.c)
 *     MiDeletePteRun @ 0x140037620 (MiDeletePteRun.c)
 *     MiGetPageProtection @ 0x14003FFE0 (MiGetPageProtection.c)
 *     MiProbeLeafPteAccess @ 0x1400420D0 (MiProbeLeafPteAccess.c)
 *     MiCompleteProtoPteFault @ 0x14004A4B0 (MiCompleteProtoPteFault.c)
 *     MiDecommitPages @ 0x140068940 (MiDecommitPages.c)
 *     MiDeleteVa @ 0x1400696F0 (MiDeleteVa.c)
 *     MiProtectPrivateMemory @ 0x140070DB0 (MiProtectPrivateMemory.c)
 *     MiSetProtectionOnSection @ 0x140071E70 (MiSetProtectionOnSection.c)
 *     MiComputePageCommitment @ 0x140083940 (MiComputePageCommitment.c)
 *     MiCopyToUserVa @ 0x140084400 (MiCopyToUserVa.c)
 *     MiTrimThisWsle @ 0x140087EB0 (MiTrimThisWsle.c)
 *     MiActOnPte @ 0x14009404C (MiActOnPte.c)
 *     MiGetWorkingSetInfoList @ 0x140096530 (MiGetWorkingSetInfoList.c)
 *     MiWsleFlush @ 0x1400B3250 (MiWsleFlush.c)
 *     MiSharedVaToPartition @ 0x14010982C (MiSharedVaToPartition.c)
 *     MiGetPfnProtection @ 0x14011FE00 (MiGetPfnProtection.c)
 *     MiCheckCommitReleaseFromVad @ 0x1402A3BBC (MiCheckCommitReleaseFromVad.c)
 *     MiSplitReducedCommitClonePage @ 0x1402A8680 (MiSplitReducedCommitClonePage.c)
 *     MiReferenceCloneProto @ 0x1402CAC60 (MiReferenceCloneProto.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall MiLocateCloneAddress(__int64 a1, unsigned __int64 a2)
{
  _QWORD *result; // rax

  result = *(_QWORD **)(a1 + 912);
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
