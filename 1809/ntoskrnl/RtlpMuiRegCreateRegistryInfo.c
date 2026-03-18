/*
 * XREFs of RtlpMuiRegCreateRegistryInfo @ 0x14073F0EC
 * Callers:
 *     RtlpMuiRegCreateKernelRegistryInfo @ 0x140182840 (RtlpMuiRegCreateKernelRegistryInfo.c)
 * Callees:
 *     memset @ 0x1401D1780 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034B010 (ExAllocatePoolWithTag.c)
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
  memset(PoolWithTag, 0, 0xA8uLL);
  result = v1;
  *v1 = 1024;
  return result;
}
