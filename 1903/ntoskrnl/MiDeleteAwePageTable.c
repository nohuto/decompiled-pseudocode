/*
 * XREFs of MiDeleteAwePageTable @ 0x1402D5948
 * Callers:
 *     MiWriteAwePtes @ 0x1402D7E08 (MiWriteAwePtes.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14002A860 (MiPteInShadowRange.c)
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     MiGetUsedPtesHandle @ 0x14002DAB0 (MiGetUsedPtesHandle.c)
 *     MiLockLowestValidPageTable @ 0x14004AD90 (MiLockLowestValidPageTable.c)
 *     MiFlushTbList @ 0x14004FFE0 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x140058CD0 (MiInsertTbFlushEntry.c)
 *     MiEvictPageTableLock @ 0x14005E164 (MiEvictPageTableLock.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiDecrementShareCount @ 0x1400DBB10 (MiDecrementShareCount.c)
 *     MiUnlockPageTableInternal @ 0x1400FDF40 (MiUnlockPageTableInternal.c)
 *     MiWritePteShadow @ 0x1401223FC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14012245C (MiPteHasShadow.c)
 *     MiDecreaseUsedPtesCount @ 0x14012F0C8 (MiDecreaseUsedPtesCount.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

void __fastcall MiDeleteAwePageTable(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 valid; // rax
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // r14
  __int64 v7; // rax
  __int64 v8; // r10
  unsigned __int64 v9; // rbx
  ULONG_PTR v10; // rbx
  __int64 v11; // rdx
  unsigned __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned __int64 v16; // rbx
  ULONG_PTR UsedPtesHandle; // rax
  unsigned __int64 v18; // [rsp+20h] [rbp-E0h] BYREF
  int v19; // [rsp+28h] [rbp-D8h] BYREF
  int v20; // [rsp+2Ch] [rbp-D4h] BYREF
  __int64 v21; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v22[24]; // [rsp+40h] [rbp-C0h] BYREF

  memset(v22, 0, 0xB8uLL);
  valid = MiLockLowestValidPageTable(a1, a2, &v18);
  v5 = v18;
  v6 = valid;
  if ( v18 == a2 )
  {
    v21 = MI_READ_PTE_LOCK_FREE(v18);
    if ( (v21 & 1) != 0 )
    {
      v7 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v21);
      v21 = v8 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
      v9 = v7;
      if ( (unsigned int)MiEvictPageTableLock(a1, v5, v21, 0LL) )
      {
        v10 = 48 * ((v9 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
        if ( MiPteInShadowRange(v5) )
        {
          if ( (unsigned int)MiPteHasShadow() )
          {
            if ( !HIBYTE(word_140465BEC) && (v11 & 1) != 0 )
              v11 |= 0x8000000000000000uLL;
            *(_QWORD *)v5 = v11;
            MiWritePteShadow(v5);
            goto LABEL_15;
          }
          if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0
            && (v11 & 1) != 0 )
          {
            v11 |= 0x8000000000000000uLL;
          }
          v5 = v18;
        }
        *(_QWORD *)v5 = v11;
LABEL_15:
        WORD2(v22[0]) = 0;
        v22[2] = 0LL;
        v22[3] = 0LL;
        LODWORD(v22[0]) = 1;
        LODWORD(v22[1]) = 20;
        v12 = (__int64)(v5 << 25) >> 16;
        MiInsertTbFlushEntry((__int64)v22, v12, 1LL, 0);
        MiFlushTbList((int *)v22, v13, v14, v15);
        v19 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v19);
          while ( *(__int64 *)(v10 + 24) < 0 );
        }
        *(_QWORD *)(v10 + 24) |= 0x4000000000000000uLL;
        MiDecrementShareCount(v10);
        _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v16 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(v6) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
        v20 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v20);
          while ( *(__int64 *)(v16 + 24) < 0 );
        }
        *(_QWORD *)(v16 + 24) ^= (*(_QWORD *)(v16 + 24) ^ (*(_QWORD *)(v16 + 24) - 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
        _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        UsedPtesHandle = MiGetUsedPtesHandle(v12);
        MiDecreaseUsedPtesCount(UsedPtesHandle, 1uLL);
      }
    }
  }
  MiUnlockPageTableInternal(a1, v6);
}
