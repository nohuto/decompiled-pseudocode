/*
 * XREFs of ?ndisAllocateMdl@@YAPEAU_MDL@@PEAK@Z @ 0x1C0012AD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PMDL __fastcall ndisAllocateMdl(PULONG BufferSize)
{
  unsigned int v2; // edi
  ULONG v3; // r8d
  struct _MDL *PoolWithTag; // rbx
  __int64 v5; // r10

  v2 = (MmSizeOfMdl((PVOID)0xFFF, *BufferSize) + 7) & 0xFFFFFFF8;
  v3 = v2 + *BufferSize;
  if ( v3 < v2 )
    return 0LL;
  PoolWithTag = (struct _MDL *)ExAllocatePoolWithTag(NonPagedPoolNx, v3, 0x646E444Eu);
  if ( !PoolWithTag )
    return 0LL;
  v5 = *BufferSize;
  PoolWithTag->Next = 0LL;
  PoolWithTag->MdlFlags = 0;
  PoolWithTag->ByteCount = v5;
  PoolWithTag->StartVa = (PVOID)(((unsigned __int64)PoolWithTag + v2) & 0xFFFFFFFFFFFFF000uLL);
  PoolWithTag->Size = 8 * ((((((unsigned int)PoolWithTag + v2) & 0xFFFuLL) + v5 + 4095) >> 12) + 6);
  PoolWithTag->ByteOffset = ((_DWORD)PoolWithTag + v2) & 0xFFF;
  MmBuildMdlForNonPagedPool(PoolWithTag);
  return PoolWithTag;
}
