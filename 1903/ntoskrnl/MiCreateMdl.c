/*
 * XREFs of MiCreateMdl @ 0x14068BA40
 * Callers:
 *     MiCreateImageFileMap @ 0x14068AE6C (MiCreateImageFileMap.c)
 * Callees:
 *     MmMapLockedPagesSpecifyCache @ 0x14002FA50 (MmMapLockedPagesSpecifyCache.c)
 *     IoAllocateMdl @ 0x1400369F0 (IoAllocateMdl.c)
 *     MiGetPageForHeader @ 0x1400A2988 (MiGetPageForHeader.c)
 *     MmBuildMdlForNonPagedPool @ 0x1400FA170 (MmBuildMdlForNonPagedPool.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     MiDeleteImageCreationMdls @ 0x1406AF554 (MiDeleteImageCreationMdls.c)
 */

struct _MDL *__fastcall MiCreateMdl(ULONG_PTR *a1, unsigned int a2, SIZE_T a3, int a4)
{
  ULONG v4; // edi
  SIZE_T v5; // rbp
  PMDL Mdl; // rax
  struct _MDL *v9; // rdi
  SIZE_T v10; // rsi
  _QWORD *p_Next; // r14
  __int64 PageForHeader; // rax
  PVOID MappedSystemVa; // rax
  PVOID PoolWithTag; // rax
  void *v16; // rbx
  struct _MDL *v17; // rax

  v4 = a3;
  v5 = a3 >> 12;
  if ( a4 )
  {
    Mdl = IoAllocateMdl(0LL, a3, 0, 0, 0LL);
    v9 = Mdl;
    if ( Mdl )
    {
      v10 = 0LL;
      p_Next = &Mdl[1].Next;
      if ( v5 )
      {
        while ( 1 )
        {
          PageForHeader = MiGetPageForHeader(a1, a2);
          if ( PageForHeader == -1 )
            break;
          if ( !v10 )
            v9->MdlFlags |= 0x4002u;
          *p_Next = PageForHeader;
          ++v10;
          ++p_Next;
          if ( v10 >= v5 )
            goto LABEL_8;
        }
        v9->ByteCount = (_DWORD)v10 << 12;
        goto LABEL_16;
      }
LABEL_8:
      if ( (v9->MdlFlags & 5) != 0 )
        MappedSystemVa = v9->MappedSystemVa;
      else
        MappedSystemVa = MmMapLockedPagesSpecifyCache(v9, 0, MmCached, 0LL, 0, 0x40000020u);
      if ( !MappedSystemVa )
      {
LABEL_16:
        MiDeleteImageCreationMdls(v9);
        return 0LL;
      }
      return v9;
    }
  }
  else
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, a3, 0x78786D4Du);
    v16 = PoolWithTag;
    if ( PoolWithTag )
    {
      v17 = IoAllocateMdl(PoolWithTag, v4, 0, 0, 0LL);
      v9 = v17;
      if ( !v17 )
      {
        ExFreePoolWithTag(v16, 0);
        return 0LL;
      }
      MmBuildMdlForNonPagedPool(v17);
      v9->MdlFlags |= 0x4000u;
      return v9;
    }
  }
  return 0LL;
}
