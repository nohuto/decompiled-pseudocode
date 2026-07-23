/*
 * XREFs of MiCountBootRegions @ 0x1409D46E4
 * Callers:
 *     MiInitializeDynamicVa @ 0x1409D4630 (MiInitializeDynamicVa.c)
 *     MiCountBootRegions @ 0x1409D46E4 (MiCountBootRegions.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiCountBootRegions @ 0x1409D46E4 (MiCountBootRegions.c)
 */

__int64 __fastcall MiCountBootRegions(unsigned __int64 a1, unsigned __int64 a2, int a3)
{
  __int64 v3; // rbx
  unsigned __int64 i; // rdi
  char v7; // al
  __int64 v9; // rcx
  __int64 v10; // rdx

  v3 = 0LL;
  for ( i = a1; i <= a2; i += 8LL )
  {
    v7 = MI_READ_PTE_LOCK_FREE(i);
    if ( (v7 & 1) != 0 )
    {
      if ( v7 < 0 )
      {
        v9 = 1LL;
        if ( a3 > 1 )
        {
          v10 = (unsigned int)(a3 - 1);
          do
          {
            v9 <<= 9;
            --v10;
          }
          while ( v10 );
        }
        v3 += v9;
      }
      else if ( a3 > 1 )
      {
        v3 += MiCountBootRegions((__int64)(i << 25) >> 16, ((__int64)(i << 25) >> 16) + 4088, (unsigned int)(a3 - 1));
      }
      else if ( a3 == 1 )
      {
        ++v3;
      }
    }
  }
  return v3;
}
