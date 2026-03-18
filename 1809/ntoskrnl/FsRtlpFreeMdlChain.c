/*
 * XREFs of FsRtlpFreeMdlChain @ 0x1408158E4
 * Callers:
 *     FsRtlQueryKernelEaFile @ 0x1406A5100 (FsRtlQueryKernelEaFile.c)
 *     FsRtlKernelFsControlFile @ 0x1406B2850 (FsRtlKernelFsControlFile.c)
 *     FsRtlSetKernelEaFile @ 0x1406C7EF0 (FsRtlSetKernelEaFile.c)
 *     FsRtlQueryInformationFile @ 0x140815710 (FsRtlQueryInformationFile.c)
 * Callees:
 *     MmUnlockPages @ 0x140033580 (MmUnlockPages.c)
 *     IoFreeMdl @ 0x1400E0B40 (IoFreeMdl.c)
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
