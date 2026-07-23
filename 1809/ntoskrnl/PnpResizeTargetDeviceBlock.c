/*
 * XREFs of PnpResizeTargetDeviceBlock @ 0x1406EFE54
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x1406F0A30 (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     PnpAllocateCriticalMemory @ 0x1406EFE04 (PnpAllocateCriticalMemory.c)
 */

__int64 __fastcall PnpResizeTargetDeviceBlock(const void **a1, int a2)
{
  unsigned int v2; // edi
  unsigned int v4; // r14d
  __int64 v5; // rax
  int v6; // eax
  int v7; // ecx
  unsigned int v8; // esi
  PVOID CriticalMemory; // rax
  PVOID v10; // rbp
  const void *v11; // rbx

  v2 = 0;
  v4 = *((_DWORD *)*a1 + 37) + 112;
  v5 = -1LL;
  do
    ++v5;
  while ( *((_WORD *)*a1 + v5 + 80) );
  v6 = 2 * v5 + 2;
  v7 = 0;
  if ( v6 != 2 )
    v7 = v6;
  v8 = v4 - v7 + 400;
  if ( v8 > v4 )
  {
    CriticalMemory = PnpAllocateCriticalMemory(a2, PagedPool, v8, 0x4B706E50u);
    v10 = CriticalMemory;
    if ( CriticalMemory )
    {
      memset(CriticalMemory, 0, v8);
      v11 = *a1;
      memmove(v10, *a1, v4);
      *((_DWORD *)v10 + 16) = 1;
      *((_DWORD *)v10 + 37) = v8 - 112;
      *((_QWORD *)v10 + 10) = v11;
      *a1 = v10;
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return v2;
}
