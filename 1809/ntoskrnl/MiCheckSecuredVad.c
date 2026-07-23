/*
 * XREFs of MiCheckSecuredVad @ 0x140619974
 * Callers:
 *     MiResetVirtualMemory @ 0x140132BA4 (MiResetVirtualMemory.c)
 *     MiUnmapLockedPagesInUserSpace @ 0x140139914 (MiUnmapLockedPagesInUserSpace.c)
 *     MiFindPlaceholderVadToReplace @ 0x1402C4F38 (MiFindPlaceholderVadToReplace.c)
 *     MiAllocateVirtualMemory @ 0x1405EE650 (MiAllocateVirtualMemory.c)
 *     MmProtectVirtualMemory @ 0x1405EEFD0 (MmProtectVirtualMemory.c)
 *     MmFreeVirtualMemory @ 0x1405F04F0 (MmFreeVirtualMemory.c)
 *     MiUnmapViewOfSection @ 0x1406181B0 (MiUnmapViewOfSection.c)
 *     MmSecureVirtualMemoryAgainstWrites @ 0x140619664 (MmSecureVirtualMemoryAgainstWrites.c)
 *     MiCoalescePlaceholderAllocations @ 0x140852C58 (MiCoalescePlaceholderAllocations.c)
 * Callees:
 *     MiComparePteProtections @ 0x140088398 (MiComparePteProtections.c)
 */

__int64 __fastcall MiCheckSecuredVad(ULONG_PTR a1, unsigned __int64 a2, __int64 a3, unsigned int a4, char a5)
{
  __int64 *v5; // rbx
  unsigned __int64 v6; // r14
  unsigned int v7; // r10d
  unsigned int v11; // r15d
  int v12; // ecx
  char v13; // dl
  bool v14; // cc
  __int64 result; // rax
  unsigned __int64 v16; // rcx

  v5 = *(__int64 **)(a1 + 56);
  v6 = a2 + a3 - 1;
  v7 = 0;
  v11 = a4 < 0x55 ? a4 : 0;
  while ( 1 )
  {
    if ( !v5 )
      return v7;
    if ( *((_DWORD *)v5 + 16) != 2 )
      goto LABEL_13;
    v12 = *((_DWORD *)v5 + 2);
    if ( (v12 & 0x40) != 0 && a5 != 1 )
      goto LABEL_13;
    if ( a2 > v5[2] || v6 < (v5[1] & 0xFFFFFFFFFFFFF000uLL) )
      goto LABEL_13;
    if ( a4 >= 0x55 && (v12 & 8) != 0 )
      return 3221225541LL;
    if ( (v12 & 0x100) != 0 && (*(_DWORD *)(a1 + 48) & 0x80000) != 0 )
    {
      if ( (a4 | 0x10) != 0x11
        || (*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32)) == a2 >> 12
        || (*(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32)) == v6 >> 12 )
      {
        return 3221225541LL;
      }
      goto LABEL_13;
    }
    if ( (v12 & 4) != 0 )
      break;
    if ( (v11 & 0xFFFFFFF8) == 0x10 )
      return 3221225541LL;
    v13 = MiReadWrite[v11 & 7];
    if ( (v12 & 1) != 0 )
    {
      v14 = v13 < 10;
    }
    else
    {
      if ( (v12 & 2) == 0 )
        goto LABEL_13;
      v14 = v13 < 11;
    }
    if ( v14 )
      return 3221225541LL;
LABEL_13:
    v5 = (__int64 *)*v5;
  }
  if ( a4 >= 0x55 )
    goto LABEL_13;
  v16 = (*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32)) << 12;
  if ( v16 != 2147352576 && (v16 != qword_14043B0C8 || !qword_14043B0C8)
    || (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000LL) != 0 )
  {
    result = MiComparePteProtections(a1, a2, v6, a4, 1);
    v7 = result;
    if ( (int)result < 0 )
      return result;
    goto LABEL_13;
  }
  return 3221225541LL;
}
