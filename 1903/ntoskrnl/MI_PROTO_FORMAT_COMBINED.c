/*
 * XREFs of MI_PROTO_FORMAT_COMBINED @ 0x140102110
 * Callers:
 *     MiComputePageCommitment @ 0x140020D00 (MiComputePageCommitment.c)
 *     MiDeleteSystemPagableVm @ 0x14002D400 (MiDeleteSystemPagableVm.c)
 *     MiDecommitPages @ 0x140057740 (MiDecommitPages.c)
 *     MiGetPageProtection @ 0x1400C5F50 (MiGetPageProtection.c)
 *     MiWalkVaRange @ 0x1400DE274 (MiWalkVaRange.c)
 *     MiSharedVaToPartition @ 0x1400F042C (MiSharedVaToPartition.c)
 *     MiResolvePageFileFault @ 0x140163A68 (MiResolvePageFileFault.c)
 *     MiCountSystemImageCommitment @ 0x14017A5F4 (MiCountSystemImageCommitment.c)
 *     MiCheckCommitReleaseFromVad @ 0x1402BAD8C (MiCheckCommitReleaseFromVad.c)
 *     MiBuildForkPte @ 0x1402E1E60 (MiBuildForkPte.c)
 * Callees:
 *     MiIsPrototypePteVadLookup @ 0x140102370 (MiIsPrototypePteVadLookup.c)
 */

bool __fastcall MI_PROTO_FORMAT_COMBINED(__int64 a1)
{
  __int16 v1; // dx

  return !(unsigned int)MiIsPrototypePteVadLookup(a1) && (v1 & 0x800) != 0LL;
}
