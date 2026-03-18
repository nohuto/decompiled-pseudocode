/*
 * XREFs of MiLockPoolCommitPageTable @ 0x140022C50
 * Callers:
 *     MiCommitPoolMemory @ 0x140022A30 (MiCommitPoolMemory.c)
 *     MiFillPoolCommitPageTable @ 0x140023250 (MiFillPoolCommitPageTable.c)
 * Callees:
 *     MiLockLowestValidPageTable @ 0x14004AD90 (MiLockLowestValidPageTable.c)
 *     MiFillPteHierarchy @ 0x14005F010 (MiFillPteHierarchy.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiFastLockLeafPageTable @ 0x1400CB770 (MiFastLockLeafPageTable.c)
 *     MiUnlockPageTableInternal @ 0x1400FDF40 (MiUnlockPageTableInternal.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

__int64 __fastcall MiLockPoolCommitPageTable(__int64 a1, unsigned __int64 a2)
{
  __int64 v4; // r14
  ULONG_PTR v5; // rsi
  int v6; // eax
  __int64 v7; // rbx
  __int64 v8; // r9
  __int64 v9; // rcx
  __int64 valid; // rax
  char v12; // al
  int v13; // r10d
  _QWORD v14[4]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v15; // [rsp+70h] [rbp+8h] BYREF

  v15 = 0LL;
  v4 = *(_QWORD *)(a1 + 40);
  v5 = (__int64)(a2 << 25) >> 16;
  v6 = MiFastLockLeafPageTable(v4, v5, 0LL);
  v7 = v6;
  if ( !v6
    || (memset(v14, 0, sizeof(v14)), MiFillPteHierarchy(v5, v14), v8 = v14[v7], v9 = v14[(int)v7 - 1], v15 = v9, !v8) )
  {
    valid = MiLockLowestValidPageTable(v4, a2, &v15);
    v9 = v15;
    v8 = valid;
    if ( v15 == a2 )
    {
      LODWORD(v7) = 1;
LABEL_5:
      if ( (*(_DWORD *)(a1 + 72) & 0x20000000) != 0 )
        KeBugCheckEx(0x1Au, 0x5301uLL, v5, 0LL, 0LL);
      goto LABEL_6;
    }
    if ( v15 == ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
      goto LABEL_9;
    LODWORD(v7) = 0;
  }
  if ( (_DWORD)v7 )
  {
    if ( (_DWORD)v7 == 1 )
      goto LABEL_5;
    if ( (_DWORD)v7 != 2 )
    {
      LODWORD(v7) = 0;
      goto LABEL_11;
    }
LABEL_9:
    v12 = MI_READ_PTE_LOCK_FREE(v9);
    if ( (v12 & 1) != 0 )
    {
      if ( v12 < 0 )
        KeBugCheckEx(0x1Au, 0x5302uLL, v5, 0LL, 0LL);
      if ( (*(_DWORD *)(a1 + 72) & 0x20000000) != 0 )
        KeBugCheckEx(0x1Au, 0x5303uLL, v5, 0LL, 0LL);
    }
    LODWORD(v7) = (*(_DWORD *)(a1 + 72) & 0x20000000) != 0 ? v13 : 0;
LABEL_11:
    if ( (_DWORD)v7 )
      goto LABEL_6;
  }
  if ( v8 )
  {
    MiUnlockPageTableInternal(v4);
    v8 = 0LL;
  }
LABEL_6:
  *(_QWORD *)(a1 + 96) = v8;
  return (unsigned int)v7;
}
