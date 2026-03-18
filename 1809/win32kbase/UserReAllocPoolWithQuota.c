/*
 * XREFs of UserReAllocPoolWithQuota @ 0x1C0089E00
 * Callers:
 *     UserReAllocPoolWithQuotaZInit @ 0x1C0089DA0 (UserReAllocPoolWithQuotaZInit.c)
 *     FastGetProfileKeysW @ 0x1C00E4E10 (FastGetProfileKeysW.c)
 * Callees:
 *     Win32AllocPoolWithQuota @ 0x1C0019AB0 (Win32AllocPoolWithQuota.c)
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     memmove @ 0x1C00AF880 (memmove.c)
 */

void *__fastcall UserReAllocPoolWithQuota(void *Src, size_t Size, __int64 a3, unsigned int a4)
{
  size_t v6; // rbx
  void *v7; // rax
  void *v8; // rdi

  v6 = a3;
  v7 = (void *)Win32AllocPoolWithQuota(a3, a4);
  v8 = v7;
  if ( v7 )
  {
    if ( Size <= v6 )
      v6 = Size;
    memmove(v7, Src, v6);
    Win32FreePool((__int64)Src);
  }
  return v8;
}
