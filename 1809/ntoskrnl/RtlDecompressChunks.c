/*
 * XREFs of RtlDecompressChunks @ 0x1408919F0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     RtlDecompressBuffer @ 0x1402EC9B0 (RtlDecompressBuffer.c)
 */

NTSTATUS __stdcall RtlDecompressChunks(
        PUCHAR UncompressedBuffer,
        ULONG UncompressedBufferSize,
        PUCHAR CompressedBuffer,
        ULONG CompressedBufferSize,
        PUCHAR CompressedTail,
        ULONG CompressedTailSize,
        PCOMPRESSED_DATA_INFO CompressedDataInfo)
{
  PUCHAR v7; // rbp
  __int64 v8; // r12
  int NumberOfChunks; // ebx
  UCHAR *v12; // r13
  unsigned int v13; // edx
  ULONG *CompressedChunkSizes; // r14
  __int64 v15; // rdi
  ULONG v16; // eax
  __int64 v17; // rbx
  __int64 v18; // rax
  PUCHAR v19; // rbx
  char *v20; // rcx
  NTSTATUS result; // eax
  unsigned int v22; // [rsp+30h] [rbp-48h]
  char *v23; // [rsp+38h] [rbp-40h]
  ULONG FinalUncompressedSize; // [rsp+80h] [rbp+8h] BYREF
  int v25; // [rsp+88h] [rbp+10h]

  v7 = UncompressedBuffer;
  v8 = UncompressedBufferSize;
  NumberOfChunks = CompressedDataInfo->NumberOfChunks;
  v12 = &UncompressedBuffer[UncompressedBufferSize];
  v13 = 1 << CompressedDataInfo->ChunkShift;
  v25 = NumberOfChunks;
  v22 = v13;
  if ( &v7[v8] >= v7 )
  {
    CompressedChunkSizes = CompressedDataInfo->CompressedChunkSizes;
    while ( 1 )
    {
      v15 = (unsigned int)v8;
      if ( (unsigned int)v8 >= v13 )
        v15 = v13;
      if ( NumberOfChunks )
      {
        v16 = *CompressedChunkSizes;
        if ( *CompressedChunkSizes )
          break;
      }
      if ( &v7[v15] > v12 )
        return -1073741246;
      memset(v7, 0, (unsigned int)v15);
      if ( !NumberOfChunks )
      {
        NumberOfChunks = 1;
        --CompressedChunkSizes;
      }
LABEL_14:
      v7 += (unsigned int)v15;
      if ( v7 > v12 || (unsigned int)v15 > (unsigned int)v8 )
        return -1073741246;
      v18 = *CompressedChunkSizes;
      --NumberOfChunks;
      CompressedBuffer += v18;
      v25 = NumberOfChunks;
      CompressedBufferSize -= v18;
      ++CompressedChunkSizes;
      LODWORD(v8) = v8 - v15;
      if ( !(_DWORD)v8 )
        return 0;
      v13 = v22;
    }
    if ( v16 == v13 )
    {
      if ( (unsigned int)v15 < CompressedBufferSize )
      {
        memmove(v7, CompressedBuffer, (unsigned int)v15);
        goto LABEL_14;
      }
      if ( !CompressedTailSize && (unsigned int)v15 > CompressedBufferSize )
        return -1073741246;
      v17 = CompressedBufferSize;
      memmove(v7, CompressedBuffer, CompressedBufferSize);
      memmove(&v7[CompressedBufferSize], CompressedTail, (unsigned int)v15 - CompressedBufferSize);
    }
    else
    {
      if ( v16 > CompressedBufferSize )
      {
        if ( !CompressedTailSize )
          return -1073741246;
        v19 = &v7[(unsigned int)v8 - (unsigned __int64)v13];
        v20 = (char *)&v19[CompressedBufferSize];
        v23 = v20;
        if ( v20 < (char *)v19 )
          return -1073741811;
        if ( v19 < v7 || v20 > (char *)v12 )
          return -1073741246;
        memmove(v19, CompressedBuffer, CompressedBufferSize);
        memmove(v23, CompressedTail, *CompressedChunkSizes - CompressedBufferSize);
        v16 = *CompressedChunkSizes;
        CompressedBuffer = v19;
      }
      v17 = CompressedBufferSize;
      result = RtlDecompressBuffer(
                 CompressedDataInfo->CompressionFormatAndEngine,
                 v7,
                 v15,
                 CompressedBuffer,
                 v16,
                 &FinalUncompressedSize);
      if ( result < 0 )
        return result;
      if ( (unsigned int)v15 > FinalUncompressedSize )
        memset(&v7[FinalUncompressedSize], 0, (unsigned int)v15 - FinalUncompressedSize);
      if ( *CompressedChunkSizes < CompressedBufferSize )
        goto LABEL_13;
    }
    CompressedBufferSize += CompressedTailSize;
    CompressedBuffer = &CompressedTail[-v17];
    CompressedTailSize = 0;
LABEL_13:
    NumberOfChunks = v25;
    goto LABEL_14;
  }
  return -1073741811;
}
