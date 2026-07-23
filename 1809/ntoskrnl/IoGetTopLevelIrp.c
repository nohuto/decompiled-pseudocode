/*
 * XREFs of IoGetTopLevelIrp @ 0x14001C610
 * Callers:
 *     MiCreateImageOrDataSection @ 0x1405DF390 (MiCreateImageOrDataSection.c)
 *     FsRtlCopyRead @ 0x140815050 (FsRtlCopyRead.c)
 *     FsRtlCopyWrite @ 0x1408152D0 (FsRtlCopyWrite.c)
 *     FsRtlMdlReadDev @ 0x140815A80 (FsRtlMdlReadDev.c)
 *     FsRtlPrepareMdlWriteDev @ 0x140815CE0 (FsRtlPrepareMdlWriteDev.c)
 * Callees:
 *     <none>
 */

PIRP IoGetTopLevelIrp(void)
{
  return (PIRP)KeGetCurrentThread()[1].TrapFrame;
}
