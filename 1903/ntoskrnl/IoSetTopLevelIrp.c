/*
 * XREFs of IoSetTopLevelIrp @ 0x14000A230
 * Callers:
 *     MiShareExistingControlArea @ 0x1405D4E94 (MiShareExistingControlArea.c)
 *     MiCreateImageOrDataSection @ 0x1405D6AD0 (MiCreateImageOrDataSection.c)
 *     MiCreateNewSection @ 0x140689A04 (MiCreateNewSection.c)
 *     FsRtlCopyRead @ 0x14084D8A0 (FsRtlCopyRead.c)
 *     FsRtlCopyWrite @ 0x14084DB30 (FsRtlCopyWrite.c)
 *     FsRtlMdlReadDev @ 0x14084E300 (FsRtlMdlReadDev.c)
 *     FsRtlPrepareMdlWriteDev @ 0x14084E560 (FsRtlPrepareMdlWriteDev.c)
 * Callees:
 *     <none>
 */

void __stdcall IoSetTopLevelIrp(PIRP Irp)
{
  KeGetCurrentThread()[1].TrapFrame = (_KTRAP_FRAME *)Irp;
}
