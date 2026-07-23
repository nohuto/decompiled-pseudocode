/*
 * XREFs of MiFlushFileOnlyMdl @ 0x1402B605C
 * Callers:
 *     MiFlushSectionInternal @ 0x14004C270 (MiFlushSectionInternal.c)
 *     MiGatherMappedPages @ 0x14007E6A0 (MiGatherMappedPages.c)
 * Callees:
 *     MmUnmapLockedPages @ 0x140033F00 (MmUnmapLockedPages.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14005C0C0 (MmMapLockedPagesSpecifyCache.c)
 *     MiPersistMemory @ 0x1402B6790 (MiPersistMemory.c)
 *     MiPersistPage @ 0x1402B67C0 (MiPersistPage.c)
 */

__int64 __fastcall MiFlushFileOnlyMdl(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rbx
  __int64 v7; // rcx
  unsigned __int64 v8; // rbx
  PVOID v9; // rsi
  _QWORD *v10; // rdi
  unsigned int i; // ebp

  v6 = *(unsigned int *)(a2 + 40);
  v7 = (*(_DWORD *)(a2 + 32) + *(_DWORD *)(a2 + 44)) & 0xFFF;
  *(_QWORD *)(a4 + 8) = 0LL;
  *(_DWORD *)a4 = 0;
  v8 = (unsigned __int64)(v7 + v6 + 4095) >> 12;
  if ( !byte_14043B13C )
  {
    if ( (*(_BYTE *)(a2 + 10) & 5) != 0 )
      v9 = *(PVOID *)(a2 + 24);
    else
      v9 = MmMapLockedPagesSpecifyCache((PMDL)a2, 0, MmCached, 0LL, 0, 0xC0000010);
    if ( v9 )
    {
      MiPersistMemory(v9, v8 << 12);
      MmUnmapLockedPages(*(PVOID *)(a2 + 24), (PMDL)a2);
    }
    v10 = (_QWORD *)(a2 + 48);
    for ( i = 0; i < v8; ++v10 )
    {
      if ( !v9 )
        MiPersistPage(*v10);
      ++i;
    }
  }
  *(_DWORD *)a4 = 0;
  *(_QWORD *)(a4 + 8) = v8 << 12;
  return 0LL;
}
