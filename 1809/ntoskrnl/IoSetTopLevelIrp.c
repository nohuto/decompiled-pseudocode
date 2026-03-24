/*
 * XREFs of IoSetTopLevelIrp @ 0x14001C5F0
 * Callers:
 *     MiCreateImageOrDataSection @ 0x1405DE390 (MiCreateImageOrDataSection.c)
 *     MiShareExistingControlArea @ 0x1405DEC94 (MiShareExistingControlArea.c)
 *     MiCreateNewSection @ 0x14061B7E0 (MiCreateNewSection.c)
 *     FsRtlCopyRead @ 0x140813E50 (FsRtlCopyRead.c)
 *     FsRtlCopyWrite @ 0x1408140D0 (FsRtlCopyWrite.c)
 *     FsRtlMdlReadDev @ 0x140814880 (FsRtlMdlReadDev.c)
 *     FsRtlPrepareMdlWriteDev @ 0x140814AE0 (FsRtlPrepareMdlWriteDev.c)
 * Callees:
 *     <none>
 */

void __stdcall IoSetTopLevelIrp(PIRP Irp)
{
  KeGetCurrentThread()[1].TrapFrame = (_KTRAP_FRAME *)Irp;
}
