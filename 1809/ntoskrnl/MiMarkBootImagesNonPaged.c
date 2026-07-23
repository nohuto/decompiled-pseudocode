/*
 * XREFs of MiMarkBootImagesNonPaged @ 0x1409B8ABC
 * Callers:
 *     MiInitializeDriverImages @ 0x1409B7BDC (MiInitializeDriverImages.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14009D850 (MI_IS_PHYSICAL_ADDRESS.c)
 */

void __fastcall MiMarkBootImagesNonPaged(__int64 a1)
{
  __int64 *v1; // rsi
  __int64 *i; // rdi
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // r9
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rbx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v1 = (__int64 *)(a1 + 16);
  for ( i = *(__int64 **)(a1 + 16); i != v1; i = (__int64 *)*i )
  {
    v6 = i[6];
    if ( !(unsigned int)MI_IS_PHYSICAL_ADDRESS(v6) )
    {
      v5 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v4 = v5 + 8 * (((unsigned __int64)*((unsigned int *)i + 16) + 4095) >> 12);
      while ( v5 < v4 )
      {
        v7 = MI_READ_PTE_LOCK_FREE(v5);
        v3 = 6 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v7) >> 12) & 0xFFFFFFFFFLL);
        *(_BYTE *)(8 * v3 - 0x58000000000LL + 35) |= 8u;
        v5 += 8LL;
      }
    }
  }
}
