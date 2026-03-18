/*
 * XREFs of MiMapNewPfns @ 0x140888C50
 * Callers:
 *     MiAddPhysicalMemory @ 0x140887F2C (MiAddPhysicalMemory.c)
 * Callees:
 *     MiUnlockDynamicMemoryShared @ 0x140005F00 (MiUnlockDynamicMemoryShared.c)
 *     MiLockDynamicMemoryShared @ 0x140005F64 (MiLockDynamicMemoryShared.c)
 *     MiGetPteAddress @ 0x140057698 (MiGetPteAddress.c)
 *     MiMakeZeroedPageTablesEx @ 0x14008D5B8 (MiMakeZeroedPageTablesEx.c)
 *     MiPageToNode @ 0x1400A02E4 (MiPageToNode.c)
 *     MmUnmapIoSpace @ 0x140117010 (MmUnmapIoSpace.c)
 *     MmMapIoSpaceEx @ 0x140118AB0 (MmMapIoSpaceEx.c)
 *     MiIncreaseCommitLimits @ 0x140192AB4 (MiIncreaseCommitLimits.c)
 *     KeConfigureDynamicMemory @ 0x1402A4634 (KeConfigureDynamicMemory.c)
 *     MiInitializeDynamicPfns @ 0x1402BDEDC (MiInitializeDynamicPfns.c)
 */

__int64 __fastcall MiMapNewPfns(
        ULONG_PTR BugCheckParameter2,
        __int64 a2,
        unsigned __int16 a3,
        unsigned int a4,
        __int64 a5)
{
  __int64 PteAddress; // rbp
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // r15
  __int64 v12; // rdx
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rax
  unsigned int v16; // ebx
  unsigned int v17; // r13d
  struct _KTHREAD *CurrentThread; // rdi
  void *v19; // rbx

  PteAddress = MiGetPteAddress(48 * BugCheckParameter2 - 0x58000000000LL);
  v10 = MiGetPteAddress(v9 - 1 + 48 * v8);
  v11 = v10;
  v13 = v12 - BugCheckParameter2;
  if ( v12 - BugCheckParameter2 >= 0x40000 && qword_14046A350 >= 0x200000 )
  {
    v14 = PteAddress & 0xFFFFFFFFFFFFF000uLL;
    if ( PteAddress == (PteAddress & 0xFFFFFFFFFFFFF000uLL) )
      v14 = PteAddress;
    v15 = (v10 & 0xFFFFFFFFFFFFF000uLL) + 4088;
    PteAddress = v14;
    if ( v11 != v15 )
      v11 = v15;
  }
  v16 = MiPageToNode(BugCheckParameter2, 0) + 1;
  v17 = ((a4 & 0x2000 | 0x1508) >> 3) | 0x100;
  if ( (a4 & 0x4000) == 0 )
    v17 = (a4 & 0x2000 | 0x1508) >> 3;
  if ( (a4 & 2) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    MiLockDynamicMemoryShared((__int64)&MiSystemPartition, (__int64)CurrentThread);
  }
  else
  {
    CurrentThread = 0LL;
  }
  if ( !(unsigned int)MiMakeZeroedPageTablesEx(PteAddress, v11, v17, 4, v16) )
  {
    if ( CurrentThread )
      MiUnlockDynamicMemoryShared((__int64)&MiSystemPartition, (__int64)CurrentThread);
    return 3221225626LL;
  }
  v19 = 0LL;
  if ( (a4 & 2) == 0 )
  {
    if ( (a4 & 0x400) != 0 )
    {
      v19 = (void *)MmMapIoSpaceEx(BugCheckParameter2 << 12, v13 << 12, 4u);
      if ( !v19 )
        return 3221225626LL;
    }
    if ( !(unsigned int)MiIncreaseCommitLimits((__int64)&MiSystemPartition, v13, v13, (a4 & 4) != 0, 0LL) )
    {
      if ( v19 )
        MmUnmapIoSpace(v19, v13 << 12);
      return 3221225773LL;
    }
    if ( (a4 & 0x804) == 0 )
      KeConfigureDynamicMemory(BugCheckParameter2, a2 - 1, 1u);
  }
  MiInitializeDynamicPfns(BugCheckParameter2, v13, a3, a4, a5, (__int64)v19);
  if ( CurrentThread )
    MiUnlockDynamicMemoryShared((__int64)&MiSystemPartition, (__int64)CurrentThread);
  if ( v19 )
    MmUnmapIoSpace(v19, v13 << 12);
  return 0LL;
}
