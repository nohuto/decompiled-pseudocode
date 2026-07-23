/*
 * XREFs of MiMarkLargePageRanges @ 0x1409B9EB4
 * Callers:
 *     MiInitNucleus @ 0x1409BA108 (MiInitNucleus.c)
 * Callees:
 *     MiUpdateLargePageBitMap @ 0x140027BE8 (MiUpdateLargePageBitMap.c)
 *     MiMarkLargePageMappings @ 0x1409BA05C (MiMarkLargePageMappings.c)
 */

char MiMarkLargePageRanges()
{
  unsigned __int64 v0; // rax
  unsigned int v1; // ebp
  __int64 v2; // r14
  __int64 v3; // rcx
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // rax
  __int64 v11; // rcx

  MiMarkLargePageMappings();
  LOBYTE(v0) = (_BYTE)MmPhysicalMemoryBlock;
  v1 = *(_DWORD *)MmPhysicalMemoryBlock;
  if ( *(_DWORD *)MmPhysicalMemoryBlock )
  {
    v2 = 16LL * v1;
    do
    {
      LOBYTE(v0) = (_BYTE)MmPhysicalMemoryBlock;
      v2 -= 16LL;
      --v1;
      v3 = *(_QWORD *)((char *)MmPhysicalMemoryBlock + v2 + 16);
      v4 = (v3 + *(_QWORD *)((char *)MmPhysicalMemoryBlock + v2 + 24)) & 0xFFFFFFFFFFFFFE00uLL;
      v5 = (v3 + 511) & 0xFFFFFFFFFFFFFE00uLL;
      if ( v5 )
      {
        if ( v5 < v4 )
        {
          v6 = -1LL;
          v7 = 0LL;
          LOBYTE(v0) = 0;
          v8 = 48 * v5 - 0x58000000000LL;
          v9 = v8 + 48 * (v4 - v5);
          if ( v8 < v9 )
          {
            do
            {
              if ( (*(_QWORD *)(v8 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 0
                && (*(_BYTE *)(v8 + 34) & 7) == 6
                && (v0 = *(_QWORD *)(v8 + 40) & 0xFFFFFFFFFLL, v0 == 0xFFFFFFFFDLL) )
              {
                if ( !v7 )
                {
                  v0 = (unsigned __int64)((unsigned __int128)((__int64)(v8 + 0x58000000000LL)
                                                            * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 63;
                  v6 = (__int64)(v8 + 0x58000000000LL) / 48;
                }
                ++v7;
              }
              else
              {
                if ( v7 >= 0x200 )
                {
                  v7 &= 0xFFFFFFFFFFFFFE00uLL;
                  MiUpdateLargePageBitMap((__int64)&MiSystemPartition, v6, v7, 1, 1);
                }
                if ( !v7 )
                  v6 = (__int64)(v8 + 0x58000000000LL) / 48;
                v10 = v7 + 512;
                v7 = 0LL;
                v0 = (v6 + v10) & 0xFFFFFFFFFFFFFE00uLL;
                if ( !v0 )
                  goto LABEL_16;
                v11 = 48 * v0;
                LOBYTE(v0) = 0;
                v8 = v11 - 0x58000000030LL;
              }
              v8 += 48LL;
            }
            while ( v8 < v9 );
            if ( v7 >= 0x200 )
              LOBYTE(v0) = MiUpdateLargePageBitMap((__int64)&MiSystemPartition, v6, v7 & 0xFFFFFFFFFFFFFE00uLL, 1, 1);
          }
        }
      }
LABEL_16:
      ;
    }
    while ( v1 );
  }
  return v0;
}
