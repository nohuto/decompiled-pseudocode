/*
 * XREFs of RtlpHpTaggableHeap @ 0x18004DCEC
 * Callers:
 *     RtlpHpTagAllocateHeap @ 0x18004DD2C (RtlpHpTagAllocateHeap.c)
 *     RtlpHpTagDestroyHeap @ 0x180050F74 (RtlpHpTagDestroyHeap.c)
 * Callees:
 *     RtlpHpMetadataHeapCtxGet @ 0x18004CD1C (RtlpHpMetadataHeapCtxGet.c)
 */

_BOOL8 __fastcall RtlpHpTaggableHeap(__int64 a1)
{
  bool v1; // zf
  _BOOL8 result; // rax
  char *v3; // rax
  __int64 v4; // rdx
  __int128 v5; // [rsp+20h] [rbp-18h] BYREF

  v1 = *(_DWORD *)(a1 + 16) == -571548178;
  v5 = RtlpHpEnvHandle;
  result = 0;
  if ( v1 )
  {
    v3 = RtlpHpMetadataHeapCtxGet(&v5);
    if ( v4 != *(_QWORD *)v3 )
      return 1;
  }
  return result;
}
