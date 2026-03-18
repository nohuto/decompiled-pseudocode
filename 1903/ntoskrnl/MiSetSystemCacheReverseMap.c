/*
 * XREFs of MiSetSystemCacheReverseMap @ 0x14012B674
 * Callers:
 *     MiReleaseSystemCacheView @ 0x14006FE50 (MiReleaseSystemCacheView.c)
 *     MiExpandSystemCache @ 0x14012B47C (MiExpandSystemCache.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 */

unsigned __int64 __fastcall MiSetSystemCacheReverseMap(unsigned __int64 a1)
{
  unsigned __int64 result; // rax
  __int64 v2; // r9
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = MI_READ_PTE_LOCK_FREE(((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
  result = 6 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v3) >> 12) & 0xFFFFFFFFFLL);
  *(_QWORD *)(8 * result - 0x57FFFFFFFF0LL) = v2;
  return result;
}
