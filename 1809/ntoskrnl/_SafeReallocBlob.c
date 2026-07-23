/*
 * XREFs of _SafeReallocBlob @ 0x14032D1EC
 * Callers:
 *     RtlpMuiRegResizeLanguageConfigList @ 0x140908670 (RtlpMuiRegResizeLanguageConfigList.c)
 *     RtlpMuiRegResizeLanguages @ 0x1409086D4 (RtlpMuiRegResizeLanguages.c)
 * Callees:
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

void *__fastcall SafeReallocBlob(
        unsigned int *P,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        int a6,
        unsigned int *a7)
{
  unsigned __int64 v8; // r8
  unsigned int v9; // eax
  unsigned int v10; // esi
  PVOID PoolWithTag; // rax
  void *v12; // rbx

  if ( !P )
    return 0LL;
  v8 = a4 * (unsigned __int64)a3;
  if ( v8 > 0xFFFFFFFF || a2 + (unsigned int)v8 < a2 )
    return 0LL;
  v9 = a2 + v8;
  if ( a7 )
    *a7 = v9;
  if ( v9 )
  {
    v10 = a2 + v8;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v9, 0x72746C6Du);
    v12 = PoolWithTag;
    if ( PoolWithTag )
      memset(PoolWithTag, 0, v10);
  }
  else
  {
    v12 = 0LL;
  }
  if ( !v12 )
    return 0LL;
  memmove(v12, P, *P);
  ExFreePoolWithTag(P, 0);
  return v12;
}
