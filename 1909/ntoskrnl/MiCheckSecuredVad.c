/*
 * XREFs of MiCheckSecuredVad @ 0x14065FD5C
 * Callers:
 *     MiResetVirtualMemory @ 0x140133F4C (MiResetVirtualMemory.c)
 *     MiUnmapLockedPagesInUserSpace @ 0x14015B85C (MiUnmapLockedPagesInUserSpace.c)
 *     MiFindPlaceholderVadToReplace @ 0x1402DE9DC (MiFindPlaceholderVadToReplace.c)
 *     MiAllocateVirtualMemory @ 0x140604C50 (MiAllocateVirtualMemory.c)
 *     MmProtectVirtualMemory @ 0x140605BE0 (MmProtectVirtualMemory.c)
 *     MmFreeVirtualMemory @ 0x1406086D0 (MmFreeVirtualMemory.c)
 *     MmSecureVirtualMemoryAgainstWrites @ 0x14065FA38 (MmSecureVirtualMemoryAgainstWrites.c)
 *     MiUnmapViewOfSection @ 0x1406602D0 (MiUnmapViewOfSection.c)
 *     MiCoalescePlaceholderAllocations @ 0x14088AC90 (MiCoalescePlaceholderAllocations.c)
 * Callees:
 *     MiComparePteProtections @ 0x140117258 (MiComparePteProtections.c)
 *     MiGetVadPageSize @ 0x1402E5380 (MiGetVadPageSize.c)
 */

__int64 __fastcall MiCheckSecuredVad(ULONG_PTR a1, unsigned __int64 a2, __int64 a3, unsigned int a4, char a5)
{
  __int64 *v8; // rdi
  unsigned __int64 v9; // r15
  unsigned int v10; // r9d
  unsigned int v11; // r12d
  int v12; // ecx
  char v13; // dl
  bool v14; // cc
  __int64 result; // rax
  unsigned __int64 v16; // rcx

  if ( (*(_DWORD *)(a1 + 48) & 0x500000) == 0x500000 && (unsigned __int64)MiGetVadPageSize(a1) >= 0x200 )
    return 0LL;
  v8 = *(__int64 **)(a1 + 56);
  v9 = a2 + a3 - 1;
  v10 = 0;
  v11 = a4 < 0x55 ? a4 : 0;
  while ( 1 )
  {
    if ( !v8 )
      return v10;
    if ( *((_DWORD *)v8 + 16) != 2 )
      goto LABEL_14;
    v12 = *((_DWORD *)v8 + 2);
    if ( (v12 & 0x40) != 0 && a5 != 1 )
      goto LABEL_14;
    if ( a2 > v8[2] || v9 < (v8[1] & 0xFFFFFFFFFFFFF000uLL) )
      goto LABEL_14;
    if ( a4 >= 0x55 && (v12 & 8) != 0 )
      return 3221225541LL;
    if ( (v12 & 0x100) != 0 && (*(_DWORD *)(a1 + 48) & 0x5100000) == 0x4100000 )
    {
      if ( (a4 | 0x10) != 0x11
        || (*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32)) == a2 >> 12
        || (*(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32)) == v9 >> 12 )
      {
        return 3221225541LL;
      }
      goto LABEL_14;
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
        goto LABEL_14;
      v14 = v13 < 11;
    }
    if ( v14 )
      return 3221225541LL;
LABEL_14:
    v8 = (__int64 *)*v8;
  }
  if ( a4 >= 0x55 )
    goto LABEL_14;
  v16 = (*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32)) << 12;
  if ( v16 != 2147352576 && (v16 != qword_140465720 || !qword_140465720)
    || (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000LL) != 0 )
  {
    result = MiComparePteProtections(a1, a2, v9, a4, 1);
    v10 = result;
    if ( (int)result < 0 )
      return result;
    goto LABEL_14;
  }
  return 3221225541LL;
}
