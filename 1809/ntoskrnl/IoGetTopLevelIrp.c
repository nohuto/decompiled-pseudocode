/*
 * XREFs of IoGetTopLevelIrp @ 0x14001C610
 * Callers:
 *     MiCreateImageOrDataSection @ 0x1405DE390 (MiCreateImageOrDataSection.c)
 *     FsRtlCopyRead @ 0x140813E70 (FsRtlCopyRead.c)
 *     FsRtlCopyWrite @ 0x1408140F0 (FsRtlCopyWrite.c)
 *     FsRtlMdlReadDev @ 0x1408148A0 (FsRtlMdlReadDev.c)
 *     FsRtlPrepareMdlWriteDev @ 0x140814B00 (FsRtlPrepareMdlWriteDev.c)
 * Callees:
 *     <none>
 */

PIRP IoGetTopLevelIrp(void)
{
  return (PIRP)KeGetCurrentThread()[1].TrapFrame;
}
