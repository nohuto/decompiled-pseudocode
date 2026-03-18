/*
 * XREFs of MiCreateMdl @ 0x140101F2C
 * Callers:
 *     MiCreateImageFileMap @ 0x14061CEB8 (MiCreateImageFileMap.c)
 * Callees:
 *     IoAllocateMdl @ 0x1400DFCB0 (IoAllocateMdl.c)
 *     MmBuildMdlForNonPagedPool @ 0x140101FA0 (MmBuildMdlForNonPagedPool.c)
 *     ExAllocatePoolWithTag @ 0x14034B010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 */

struct _MDL *__fastcall MiCreateMdl(SIZE_T Length)
{
  ULONG v1; // ebx
  PVOID PoolWithTag; // rax
  void *v3; // rdi
  struct _MDL *Mdl; // rax
  struct _MDL *v5; // rbx

  v1 = Length;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, Length, 0x78786D4Du);
  v3 = PoolWithTag;
  if ( PoolWithTag )
  {
    Mdl = IoAllocateMdl(PoolWithTag, v1, 0, 0, 0LL);
    v5 = Mdl;
    if ( Mdl )
    {
      MmBuildMdlForNonPagedPool(Mdl);
      v5->MdlFlags |= 0x4000u;
      return v5;
    }
    ExFreePoolWithTag(v3, 0);
  }
  return 0LL;
}
