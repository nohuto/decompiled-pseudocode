/*
 * XREFs of Win32UAFMAllocPoolWithQuotaZInit @ 0x1C0120920
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C00C1440 (memset.c)
 *     Win32UAFMAllocPoolWithQuota @ 0x1C01208C0 (Win32UAFMAllocPoolWithQuota.c)
 */

void *__fastcall Win32UAFMAllocPoolWithQuotaZInit(size_t Size, unsigned int a2, __int64 a3)
{
  void *v4; // rax
  void *v5; // rbx

  v4 = (void *)Win32UAFMAllocPoolWithQuota(Size, a2, a3);
  v5 = v4;
  if ( v4 )
    memset(v4, 0, Size);
  return v5;
}
