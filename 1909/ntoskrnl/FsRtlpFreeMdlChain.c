/*
 * XREFs of FsRtlpFreeMdlChain @ 0x14084EAD0
 * Callers:
 *     FsRtlSetKernelEaFile @ 0x1406255B0 (FsRtlSetKernelEaFile.c)
 *     FsRtlKernelFsControlFile @ 0x140625750 (FsRtlKernelFsControlFile.c)
 *     FsRtlQueryKernelEaFile @ 0x140625A60 (FsRtlQueryKernelEaFile.c)
 *     FsRtlQueryInformationFile @ 0x14084E8F0 (FsRtlQueryInformationFile.c)
 * Callees:
 *     MmUnlockPages @ 0x14006A600 (MmUnlockPages.c)
 *     IoFreeMdl @ 0x1400FEF60 (IoFreeMdl.c)
 */

void __fastcall FsRtlpFreeMdlChain(PMDL Mdl)
{
  PMDL v1; // rbx
  struct _MDL *Next; // rdi

  if ( Mdl )
  {
    v1 = Mdl;
    do
    {
      Next = v1->Next;
      if ( (v1->MdlFlags & 2) != 0 )
        MmUnlockPages(v1);
      IoFreeMdl(v1);
      v1 = Next;
    }
    while ( Next );
  }
}
