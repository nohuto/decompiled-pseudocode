/*
 * XREFs of ??1?$CLockDomainExclusiveInUserCrit@VDLT_CLIENTLIB@@@@QEAA@XZ @ 0x1C023FB54
 * Callers:
 *     xxxLoadHmodIndex @ 0x1C005383C (xxxLoadHmodIndex.c)
 * Callees:
 *     <none>
 */

void __fastcall CLockDomainExclusiveInUserCrit<DLT_CLIENTLIB>::~CLockDomainExclusiveInUserCrit<DLT_CLIENTLIB>(
        tagDomLock **a1)
{
  tagDomLock::UnLockExclusive(*a1);
}
