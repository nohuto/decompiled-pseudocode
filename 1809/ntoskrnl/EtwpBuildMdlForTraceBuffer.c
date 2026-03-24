/*
 * XREFs of EtwpBuildMdlForTraceBuffer @ 0x1408C9DB4
 * Callers:
 *     EtwpPreserveLogger @ 0x1408CA0CC (EtwpPreserveLogger.c)
 * Callees:
 *     IoAllocateMdl @ 0x1400DFCD0 (IoAllocateMdl.c)
 *     MmBuildMdlForNonPagedPool @ 0x140101FC0 (MmBuildMdlForNonPagedPool.c)
 */

__int64 __fastcall EtwpBuildMdlForTraceBuffer(_DWORD *a1, struct _MDL **a2)
{
  unsigned int v3; // ebx
  struct _MDL *Mdl; // rax
  struct _MDL *v5; // rdi

  v3 = 0;
  Mdl = IoAllocateMdl(a1, *a1, 0, 0, 0LL);
  v5 = Mdl;
  if ( Mdl )
  {
    MmBuildMdlForNonPagedPool(Mdl);
    *a2 = v5;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v3;
}
