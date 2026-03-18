/*
 * XREFs of IoSetTopLevelIrp @ 0x14000A2C0
 * Callers:
 *     MiShareExistingControlArea @ 0x1405D5654 (MiShareExistingControlArea.c)
 *     MiCreateImageOrDataSection @ 0x1405D7290 (MiCreateImageOrDataSection.c)
 *     MiCreateNewSection @ 0x14064FBD4 (MiCreateNewSection.c)
 *     FsRtlCopyRead @ 0x14084CFA0 (FsRtlCopyRead.c)
 *     FsRtlCopyWrite @ 0x14084D230 (FsRtlCopyWrite.c)
 *     FsRtlMdlReadDev @ 0x14084DA00 (FsRtlMdlReadDev.c)
 *     FsRtlPrepareMdlWriteDev @ 0x14084DC60 (FsRtlPrepareMdlWriteDev.c)
 * Callees:
 *     <none>
 */

void __stdcall IoSetTopLevelIrp(PIRP Irp)
{
  KeGetCurrentThread()[1].TrapFrame = (_KTRAP_FRAME *)Irp;
}
