/*
 * XREFs of IoGetTopLevelIrp @ 0x14000A210
 * Callers:
 *     MiCreateImageOrDataSection @ 0x1405D6AD0 (MiCreateImageOrDataSection.c)
 *     FsRtlCopyRead @ 0x14084D8A0 (FsRtlCopyRead.c)
 *     FsRtlCopyWrite @ 0x14084DB30 (FsRtlCopyWrite.c)
 *     FsRtlMdlReadDev @ 0x14084E300 (FsRtlMdlReadDev.c)
 *     FsRtlPrepareMdlWriteDev @ 0x14084E560 (FsRtlPrepareMdlWriteDev.c)
 * Callees:
 *     <none>
 */

PIRP IoGetTopLevelIrp(void)
{
  return (PIRP)KeGetCurrentThread()[1].TrapFrame;
}
