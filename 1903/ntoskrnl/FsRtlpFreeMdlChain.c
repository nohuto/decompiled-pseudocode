/*
 * XREFs of FsRtlpFreeMdlChain @ 0x14084F3D0
 * Callers:
 *     FsRtlSetKernelEaFile @ 0x14069D0C0 (FsRtlSetKernelEaFile.c)
 *     FsRtlKernelFsControlFile @ 0x14069D260 (FsRtlKernelFsControlFile.c)
 *     FsRtlQueryKernelEaFile @ 0x14069D570 (FsRtlQueryKernelEaFile.c)
 *     FsRtlQueryInformationFile @ 0x14084F1F0 (FsRtlQueryInformationFile.c)
 * Callees:
 *     MmUnlockPages @ 0x14006A390 (MmUnlockPages.c)
 *     IoFreeMdl @ 0x1400FCDD0 (IoFreeMdl.c)
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
