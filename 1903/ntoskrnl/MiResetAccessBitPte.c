/*
 * XREFs of MiResetAccessBitPte @ 0x140177CF0
 * Callers:
 *     <none>
 * Callees:
 *     MiClearPteAccessed @ 0x14004D420 (MiClearPteAccessed.c)
 *     MiLogPageAccess @ 0x14004DA40 (MiLogPageAccess.c)
 *     MiFlushTbList @ 0x14004FFE0 (MiFlushTbList.c)
 *     MiSetVaAgeList @ 0x1400C5760 (MiSetVaAgeList.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetPfnPriority @ 0x1400DBC80 (MiGetPfnPriority.c)
 *     MiIsPageTableLocked @ 0x14012AC00 (MiIsPageTableLocked.c)
 *     MiDemoteCombinedPte @ 0x140141270 (MiDemoteCombinedPte.c)
 *     MiResetAccessBitsTail @ 0x1401791A0 (MiResetAccessBitsTail.c)
 *     MiInsertVmAccessedEntry @ 0x1402C85BC (MiInsertVmAccessedEntry.c)
 */

__int64 __fastcall MiResetAccessBitPte(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rsi
  __int64 v3; // r14
  __int64 v5; // r9
  __int64 v8; // rbp
  int v9; // r10d
  __int64 v10; // r8
  __int64 v11; // rcx
  unsigned __int64 v12; // r10
  unsigned __int64 v13; // r8
  __int64 v14; // rcx
  int v15; // edx
  int v16; // r15d
  __int64 v17; // rbx
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rax
  __int64 v22; // r9
  unsigned __int64 DeepFreezeStartTime; // rdx
  __int64 v24; // rax
  __int64 v25; // rdx
  unsigned __int64 v26; // rax
  __int64 v27; // rax
  char v28; // r8^7
  __int64 v29; // [rsp+60h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 160);
  v3 = *(_QWORD *)(a1 + 16);
  v5 = *(_QWORD *)a2;
  if ( a2 >= 0xFFFFF6FB7DBED000uLL
    && a2 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v5 & 1) != 0
    && ((v5 & 0x20) == 0 || (v5 & 0x42) == 0) )
  {
    DeepFreezeStartTime = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
    if ( DeepFreezeStartTime )
    {
      v24 = *(_QWORD *)(DeepFreezeStartTime + 8 * ((a2 >> 3) & 0x1FF));
      v25 = v5 | 0x20;
      if ( (v24 & 0x20) == 0 )
        v25 = v5;
      v5 = v25;
      if ( (v24 & 0x42) != 0 )
        v5 = v25 | 0x42;
    }
  }
  v29 = v5;
  if ( (v5 & 0x20) == 0 )
    return 0LL;
  v8 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v29) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
  if ( v9 )
  {
    if ( (*(_QWORD *)(v8 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1 || (unsigned int)MiIsPageTableLocked(v3, a2) )
      return 0LL;
  }
  v10 = *(_QWORD *)(v8 + 8);
  if ( v10 >= 0 )
    MiDemoteCombinedPte(v3, a2, v10 | 0x8000000000000000uLL);
  v11 = *(_QWORD *)(v2 + 16);
  v12 = (__int64)(a2 << 25) >> 16;
  if ( !v11 || v12 > 0x7FFFFFFEFFFFLL )
  {
    if ( v12 < 0xFFFFF68000000000uLL || v12 > 0xFFFFF6FFFFFFFFFFuLL )
    {
      v13 = ((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v14 = *(_QWORD *)v13;
      if ( v13 >= 0xFFFFF6FB7DBED000uLL
        && v13 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v14 & 1) != 0
        && ((v14 & 0x20) == 0 || (v14 & 0x42) == 0) )
      {
        v26 = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
        if ( v26 )
        {
          v27 = *(_QWORD *)(v26 + 8 * ((v13 >> 3) & 0x1FF));
          v28 = HIBYTE(*(_QWORD *)v13);
          if ( (v27 & 0x20) == 0 )
            v28 = HIBYTE(v14);
          HIBYTE(v14) = v28;
          if ( (v27 & 0x42) != 0 )
            HIBYTE(v14) = v28;
        }
      }
      v15 = HIBYTE(v14) & 0xF;
    }
    else
    {
      v21 = MI_READ_PTE_LOCK_FREE(((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      v15 = (*(_DWORD *)(48 * (v22 & (v21 >> 12)) - 0x58000000000LL) >> 1) & 7;
    }
    if ( v15 == 7 && (unsigned int)MiGetPfnPriority(v8) < dword_14046636C )
    {
      v16 = 0;
    }
    else
    {
      v16 = 1;
      if ( (unsigned int)(v15 - 1) <= 5 )
        MiSetVaAgeList(v3, v12, 1u, 0);
    }
    v17 = *(_QWORD *)(v2 + 8);
    if ( !(unsigned int)MiClearPteAccessed(v3, v8, a2, v17, *(_DWORD *)v2, 0) )
      return 0LL;
    if ( v16 == 1 && *(_DWORD *)v2 )
    {
      if ( v17 )
      {
LABEL_18:
        v20 = qword_140465B50;
        if ( (*(_BYTE *)(v17 + 4) & 2) == 0
          && *(_DWORD *)v17 == 1
          && KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[19] )
        {
          v20 = -1LL;
        }
        if ( (*(_DWORD *)(v17 + 12) >= *(_DWORD *)(v17 + 8) || *(_BYTE *)(v17 + 5) || *(_QWORD *)(v17 + 16) > v20)
          && v20 >= 0x400
          && !*(_BYTE *)(v17 + 5) )
        {
          MiFlushTbList((int *)v17, v20, v18, v19);
        }
        return 0LL;
      }
      MiLogPageAccess(v3, a2);
    }
    else if ( v17 )
    {
      goto LABEL_18;
    }
    return 0LL;
  }
  if ( !(unsigned int)MiInsertVmAccessedEntry(v11, (__int64)(a2 << 25) >> 16) )
    return 0LL;
  return MiResetAccessBitsTail(a1);
}
