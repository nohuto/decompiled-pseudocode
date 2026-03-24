/*
 * XREFs of IoGetTopLevelIrp @ 0x14001C610
 * Callers:
 *     MiCreateImageOrDataSection @ 0x1405DE390 (MiCreateImageOrDataSection.c)
 *     FsRtlCopyRead @ 0x140813E50 (FsRtlCopyRead.c)
 *     FsRtlCopyWrite @ 0x1408140D0 (FsRtlCopyWrite.c)
 *     FsRtlMdlReadDev @ 0x140814880 (FsRtlMdlReadDev.c)
 *     FsRtlPrepareMdlWriteDev @ 0x140814AE0 (FsRtlPrepareMdlWriteDev.c)
 * Callees:
 *     <none>
 */

PIRP IoGetTopLevelIrp(void)
{
  return (PIRP)KeGetCurrentThread()[1].TrapFrame;
}
