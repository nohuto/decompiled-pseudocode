/*
 * XREFs of EtwpInitializeCompressedWriter @ 0x140907444
 * Callers:
 *     EtwpSavePersistedLogger @ 0x140907A28 (EtwpSavePersistedLogger.c)
 * Callees:
 *     RtlGetCompressionWorkSpaceSize @ 0x140107B00 (RtlGetCompressionWorkSpaceSize.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall EtwpInitializeCompressedWriter(__int64 a1, int a2, __int64 a3)
{
  PVOID PoolWithTag; // rax
  unsigned int v7; // ebx
  unsigned int v8; // esi
  PVOID v9; // rax
  ULONG CompressBufferWorkSpaceSize; // [rsp+40h] [rbp+8h] BYREF
  ULONG CompressFragmentWorkSpaceSize; // [rsp+58h] [rbp+20h] BYREF

  RtlGetCompressionWorkSpaceSize(3u, &CompressBufferWorkSpaceSize, &CompressFragmentWorkSpaceSize);
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, CompressBufferWorkSpaceSize, 0x5A777445u);
  v7 = 0;
  *(_QWORD *)(a1 + 32) = PoolWithTag;
  if ( PoolWithTag
    && (*(_DWORD *)(a1 + 16) = a2,
        *(_DWORD *)(a1 + 48) = 2 * a2,
        v8 = 2 * a2,
        v9 = ExAllocatePoolWithTag(PagedPool, v8, 0x5A777445u),
        (*(_QWORD *)(a1 + 40) = v9) != 0LL) )
  {
    memset(v9, 0, v8);
    *(_QWORD *)a1 = a3;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v7;
}
