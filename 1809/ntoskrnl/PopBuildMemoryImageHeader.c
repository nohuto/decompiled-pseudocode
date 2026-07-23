/*
 * XREFs of PopBuildMemoryImageHeader @ 0x14056C820
 * Callers:
 *     PopEndMirroring @ 0x14056C600 (PopEndMirroring.c)
 * Callees:
 *     MmGetHighestPhysicalPage @ 0x1400A8858 (MmGetHighestPhysicalPage.c)
 *     MmGetPhysicalAddress @ 0x1401211A0 (MmGetPhysicalAddress.c)
 *     PoSetHiberRange @ 0x1401448D0 (PoSetHiberRange.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     PopAllocatePages @ 0x14056CBD0 (PopAllocatePages.c)
 *     PopBootLoaderTraceCopyPfnList @ 0x14056CC3C (PopBootLoaderTraceCopyPfnList.c)
 */

__int64 __fastcall PopBuildMemoryImageHeader(_QWORD *MemoryMap, int a2)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // r14
  _QWORD *v7; // rsi
  _QWORD *v8; // r13
  unsigned __int64 v9; // rbp
  void *Pages; // rax
  void *v11; // r15
  __int64 *v13; // rcx
  __int64 v14; // r8
  _QWORD *v15; // rdx
  __int64 v16; // rax
  unsigned __int64 v17; // rsi
  PVOID *v18; // r14

  if ( !a2 )
  {
    v3 = MemoryMap[25];
    PoSetHiberRange(MemoryMap, 0x8000u, (PVOID)v3, 0x3E0uLL, 0x676D694Du);
    memset((void *)v3, 0, 0x1000uLL);
    *(_DWORD *)(v3 + 24) = 4096;
    *(_DWORD *)(v3 + 12) = 992;
    *(_QWORD *)(v3 + 16) = (unsigned __int64)MmGetPhysicalAddress((PVOID)v3).QuadPart >> 12;
    *(_QWORD *)(v3 + 32) = MEMORY[0xFFFFF78000000014];
    *(_QWORD *)(v3 + 40) = MEMORY[0xFFFFF78000000008];
    *(_QWORD *)(v3 + 64) = *((_QWORD *)&xmmword_1404188E8 + 1);
    *(_DWORD *)(v3 + 60) = 7;
    *(_QWORD *)(v3 + 48) = KeFeatureBits;
    *(_DWORD *)(v3 + 4) = (unsigned __int16)KeProcessorArchitecture;
    *(_BYTE *)(v3 + 56) = *((_BYTE *)MemoryMap + 1);
    *(_BYTE *)(v3 + 868) = byte_140418900;
    *(_QWORD *)(v3 + 920) = MmGetHighestPhysicalPage(0);
    *(_BYTE *)(v3 + 869) = PopSecureLaunched;
    *(_BYTE *)(v3 + 870) = *((_BYTE *)MemoryMap + 453);
    v4 = MemoryMap[15];
    if ( v4 )
      *(_DWORD *)(v3 + 72) = *(_DWORD *)(v4 + 40) >> 12;
    v5 = MemoryMap[39];
    if ( v5 )
    {
      v13 = (__int64 *)(v3 + 928);
      v14 = 3LL;
      *(_QWORD *)(v3 + 928) = v5;
      v15 = (_QWORD *)(v3 + 936);
      do
      {
        v16 = *v13++;
        *v15++ = v16 + 1;
        --v14;
      }
      while ( v14 );
    }
    *(_QWORD *)(v3 + 912) = 0LL;
    PopBootLoaderTraceCopyPfnList(MemoryMap);
    v6 = MemoryMap[28];
    if ( v6 )
    {
      v17 = (*(_DWORD *)(v6 + 40) >> 12) + (unsigned int)((*(_DWORD *)(v6 + 40) & 0xFFF) != 0);
      if ( v17 > 1 )
        v17 = 1LL;
      v18 = (PVOID *)(v6 + 48);
      memmove((void *)(v3 + 648), v18, 8 * v17);
      for ( *(_DWORD *)(v3 + 640) = v17; v17; --v17 )
        PoSetHiberRange(MemoryMap, 0xC000u, *v18++, 1uLL, 0x644D6946u);
    }
    else
    {
      *(_DWORD *)(v3 + 640) = 0;
    }
    v7 = (_QWORD *)MemoryMap[8];
    while ( v7 != MemoryMap + 8 )
    {
      v8 = v7;
      v7 = (_QWORD *)*v7;
      v9 = (unsigned __int64)(unsigned int)((*((_DWORD *)v8 + 8) - *((_DWORD *)v8 + 6)) << 12) >> 12;
      Pages = (void *)PopAllocatePages(v9);
      v11 = Pages;
      if ( Pages )
        PoSetHiberRange(MemoryMap, 0x8000u, Pages, v9 << 12, 0x436C6F6Eu);
      else
        *((_DWORD *)MemoryMap + 47) = -1073741670;
      v8[5] = v11;
      if ( !v11 )
        return 3221225626LL;
    }
    *(_DWORD *)(v3 + 960) = *((_DWORD *)MemoryMap + 112);
    *(_BYTE *)(v3 + 986) = PopHiberSkipMemoryMapValidation;
  }
  return *((unsigned int *)MemoryMap + 47);
}
