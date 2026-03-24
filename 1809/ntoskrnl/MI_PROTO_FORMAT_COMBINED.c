/*
 * XREFs of MI_PROTO_FORMAT_COMBINED @ 0x140128C90
 * Callers:
 *     MiGetPageProtection @ 0x14003FFE0 (MiGetPageProtection.c)
 *     MiDecommitPages @ 0x140068950 (MiDecommitPages.c)
 *     MiDeleteSystemPagableVm @ 0x140079F10 (MiDeleteSystemPagableVm.c)
 *     MiComputePageCommitment @ 0x140083950 (MiComputePageCommitment.c)
 *     MiWalkVaRange @ 0x140093C90 (MiWalkVaRange.c)
 *     MiSharedVaToPartition @ 0x1401097AC (MiSharedVaToPartition.c)
 *     MiResolvePageFileFault @ 0x140154B44 (MiResolvePageFileFault.c)
 *     MiCountSystemImageCommitment @ 0x14017343C (MiCountSystemImageCommitment.c)
 *     MiCheckCommitReleaseFromVad @ 0x1402A39CC (MiCheckCommitReleaseFromVad.c)
 *     MiBuildForkPte @ 0x1402C7BF0 (MiBuildForkPte.c)
 * Callees:
 *     MiIsPrototypePteVadLookup @ 0x14002D250 (MiIsPrototypePteVadLookup.c)
 */

bool __fastcall MI_PROTO_FORMAT_COMBINED(unsigned __int64 a1)
{
  __int16 v1; // dx

  return !MiIsPrototypePteVadLookup(a1) && (v1 & 0x800) != 0LL;
}
