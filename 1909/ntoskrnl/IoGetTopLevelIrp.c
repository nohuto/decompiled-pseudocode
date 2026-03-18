/*
 * XREFs of IoGetTopLevelIrp @ 0x14000A2A0
 * Callers:
 *     MiCreateImageOrDataSection @ 0x1405D7290 (MiCreateImageOrDataSection.c)
 *     FsRtlCopyRead @ 0x14084CFA0 (FsRtlCopyRead.c)
 *     FsRtlCopyWrite @ 0x14084D230 (FsRtlCopyWrite.c)
 *     FsRtlMdlReadDev @ 0x14084DA00 (FsRtlMdlReadDev.c)
 *     FsRtlPrepareMdlWriteDev @ 0x14084DC60 (FsRtlPrepareMdlWriteDev.c)
 * Callees:
 *     <none>
 */

PIRP IoGetTopLevelIrp(void)
{
  return (PIRP)KeGetCurrentThread()[1].TrapFrame;
}
