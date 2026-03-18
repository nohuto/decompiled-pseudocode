/*
 * XREFs of MiTrimPte @ 0x14005AAE0
 * Callers:
 *     <none>
 * Callees:
 *     MiLogPageAccess @ 0x14004DAE0 (MiLogPageAccess.c)
 *     MiInsertTbFlushEntry @ 0x140058D70 (MiInsertTbFlushEntry.c)
 *     MiTrimThisWsle @ 0x14005AEA0 (MiTrimThisWsle.c)
 *     MiGetVaAge @ 0x14005B0B0 (MiGetVaAge.c)
 *     MiTrimWorkingSetTail @ 0x140089D80 (MiTrimWorkingSetTail.c)
 *     MiTrimWorkingSetBuildup @ 0x140089DE8 (MiTrimWorkingSetBuildup.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     MiIsPageTableLocked @ 0x14012B620 (MiIsPageTableLocked.c)
 *     MiDemoteCombinedPte @ 0x1401417B0 (MiDemoteCombinedPte.c)
 *     MiComputeNextWalkPte @ 0x1402C7EC4 (MiComputeNextWalkPte.c)
 *     MiInsertVmAccessedEntry @ 0x1402C831C (MiInsertVmAccessedEntry.c)
 */

__int64 __fastcall MiTrimPte(__int64 a1, unsigned __int64 a2, int a3)
{
  __int64 v5; // r15
  __int64 v6; // rbx
  unsigned __int64 v7; // rsi
  BOOL v8; // r9d
  int *v9; // rdi
  unsigned __int64 v10; // rax
  __int64 v11; // r8
  int v12; // ecx
  __int64 v13; // r10
  unsigned __int64 v14; // r14
  __int64 v15; // r8
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // rcx
  __int64 v18; // r15
  __int64 v19; // r13
  unsigned int v20; // ebp
  __int64 v21; // rbx
  __int64 v23; // rcx
  unsigned __int64 v24; // rax
  __int64 v25; // r11
  unsigned __int64 DeepFreezeStartTime; // rdx
  __int64 v27; // rax
  char v28; // dl
  unsigned __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // r8
  int v33; // [rsp+80h] [rbp+18h] BYREF

  v5 = *(_QWORD *)(a1 + 16);
  v6 = *(_QWORD *)a2;
  v7 = (__int64)(a2 << 25) >> 16;
  v8 = a3 == 0;
  if ( a2 >= 0xFFFFF6FB7DBED000uLL
    && a2 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v6 & 1) != 0
    && ((v6 & 0x20) == 0 || (v6 & 0x42) == 0) )
  {
    DeepFreezeStartTime = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
    if ( DeepFreezeStartTime )
    {
      v27 = *(_QWORD *)(DeepFreezeStartTime + 8 * ((a2 >> 3) & 0x1FF));
      v28 = v6 | 0x20;
      if ( (v27 & 0x20) == 0 )
        v28 = v6;
      LOBYTE(v6) = v28;
      if ( (v27 & 0x42) != 0 )
        LOBYTE(v6) = v28 | 0x42;
    }
  }
  v9 = *(int **)(a1 + 160);
  v10 = *((_QWORD *)v9 + 2);
  v11 = *((_QWORD *)v9 + 1);
  if ( v10 == v11 )
    return 3LL;
  v12 = *v9;
  if ( (*v9 & 0x400) != 0
    && ((v12 & 0x800) != 0 && v10 >= 0x100 || *(_QWORD *)(v5 + 136) <= (unsigned __int64)(*((_QWORD *)v9 + 6) - v11)) )
  {
    return 3LL;
  }
  if ( (v12 & 0x1000) == 0 )
    **(_QWORD **)(v5 + 16) = MiComputeNextWalkPte(a2, v8);
  v14 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(a2) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
  if ( a3 && ((*(_QWORD *)(v14 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1 || (unsigned int)MiIsPageTableLocked(v5, a2)) )
    return 0LL;
  v15 = *(_QWORD *)(v14 + 8);
  if ( v15 >= 0 )
  {
    if ( (unsigned int)MiDemoteCombinedPte(v5, a2, v15 | 0x8000000000000000uLL) == 1 )
      LOBYTE(v6) = MI_READ_PTE_LOCK_FREE(a2);
    v13 = a1;
  }
  if ( v7 < 0xFFFFF68000000000uLL || v7 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    v16 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v17 = *(_QWORD *)v16;
    if ( v16 >= 0xFFFFF6FB7DBED000uLL
      && v16 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v17 & 1) != 0
      && ((v17 & 0x20) == 0 || (v17 & 0x42) == 0) )
    {
      v29 = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
      if ( v29 )
      {
        v30 = *(_QWORD *)(v29 + 8 * ((v16 >> 3) & 0x1FF));
        v31 = v17 | 0x20;
        if ( (v30 & 0x20) == 0 )
          v31 = v17;
        v17 = v31;
        if ( (v30 & 0x42) != 0 )
          v17 = v31 | 0x42;
      }
    }
    v18 = HIBYTE(v17) & 0xF;
  }
  else
  {
    v24 = MI_READ_PTE_LOCK_FREE(((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    LODWORD(v18) = (*(_DWORD *)(v25 + 48 * ((v24 >> 12) & 0xFFFFFFFFFLL)) >> 1) & 7;
  }
  v19 = *(_QWORD *)(v13 + 16);
  v20 = *v9 & 0xF;
  if ( !(unsigned int)MiTrimThisWsle(v19, v7, v14, (_DWORD)v9, (v6 & 0x20) != 0, (__int64)&v33) )
    goto LABEL_14;
  MiInsertTbFlushEntry((__int64)(v9 + 14), v7, 1LL, 0);
  if ( (*v9 & 0x10) != 0
    && (v7 >= 0xFFFFF68000000000uLL && v7 <= 0xFFFFF6FFFFFFFFFFuLL || (unsigned __int8)MiGetVaAge(v23, v7) != 7)
    && (*(_BYTE *)a2 & 0x20) != 0 )
  {
    MiLogPageAccess(v19, a2);
  }
  if ( ++*((_QWORD *)v9 + 2) != *((_QWORD *)v9 + 1) && v9[17] != v9[16] )
  {
LABEL_14:
    v21 = a1;
LABEL_15:
    if ( v33 && (unsigned int)MiInsertVmAccessedEntry(*((_QWORD *)v9 + 30), v7) )
    {
      MiTrimWorkingSetTail(v21);
    }
    else if ( (unsigned int)v18 >= v20 && ++*((_QWORD *)v9 + 4) >= *((_QWORD *)v9 + 5) )
    {
      return 3LL;
    }
    return 0LL;
  }
  v21 = a1;
  MiTrimWorkingSetBuildup(a1, v9);
  if ( *((_QWORD *)v9 + 2) != *((_QWORD *)v9 + 1) )
    goto LABEL_15;
  return 3LL;
}
