/*
 * XREFs of RtlpMuiRegCreateRegistryInfo @ 0x14076B854
 * Callers:
 *     RtlpMuiRegCreateKernelRegistryInfo @ 0x14018EA38 (RtlpMuiRegCreateKernelRegistryInfo.c)
 * Callees:
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 */

_DWORD *RtlpMuiRegCreateRegistryInfo()
{
  _DWORD *PoolWithTag; // rax
  _DWORD *v1; // rbx
  _DWORD *result; // rax

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0xA8uLL, 0x72746C6Du);
  v1 = PoolWithTag;
  if ( !PoolWithTag )
    return 0LL;
  memset(PoolWithTag + 1, 0, 0xA4uLL);
  result = v1;
  *v1 = 1024;
  return result;
}
