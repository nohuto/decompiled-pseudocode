/*
 * XREFs of MiAddLoaderHalIoPte @ 0x1409D02E0
 * Callers:
 *     <none>
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiReferenceIoPages @ 0x1400E602C (MiReferenceIoPages.c)
 */

__int64 __fastcall MiAddLoaderHalIoPte(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rdx
  unsigned __int64 v3; // r9
  int v4; // r10d
  __int64 v5; // r11
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 v9; // rax
  int v10; // r9d
  __int64 v11; // [rsp+68h] [rbp+20h] BYREF

  v11 = MI_READ_PTE_LOCK_FREE(a2);
  if ( (v11 & 1) != 0 )
  {
    v2 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v11) >> 12) & 0xFFFFFFFFFLL;
    if ( ((unsigned __int16)v5 & (*(_QWORD *)(48 * v2 - 0x57FFFFFFFD8LL) >> 53)) == 0 )
    {
      if ( (v3 & 0x80u) == 0LL )
      {
        v7 = v5;
      }
      else
      {
        v7 = 512LL;
        if ( v4 > (int)v5 )
        {
          v8 = (unsigned int)(v4 - 1);
          do
          {
            v7 <<= 9;
            v8 -= v5;
          }
          while ( v8 );
        }
      }
      v9 = v5 & (v3 >> 4);
      if ( v9 || (v3 & 8) == 0 )
      {
        v10 = v5;
        if ( v9 )
          v10 = 0;
      }
      else
      {
        v10 = 2;
      }
      MiReferenceIoPages(v5, v2, v7, v10, 0LL, 0LL);
    }
  }
  return 0LL;
}
