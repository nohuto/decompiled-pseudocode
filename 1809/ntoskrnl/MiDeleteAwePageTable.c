/*
 * XREFs of MiDeleteAwePageTable @ 0x1402B0424
 * Callers:
 *     MiWriteAwePtes @ 0x1402B2468 (MiWriteAwePtes.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiLockLowestValidPageTable @ 0x14006C590 (MiLockLowestValidPageTable.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     MiFlushTbList @ 0x1400740B0 (MiFlushTbList.c)
 *     MiDecrementShareCount @ 0x140081E90 (MiDecrementShareCount.c)
 *     MiEvictPageTableLock @ 0x1400982E0 (MiEvictPageTableLock.c)
 *     MiGetUsedPtesHandle @ 0x140098640 (MiGetUsedPtesHandle.c)
 *     MiInsertTbFlushEntry @ 0x1400B3A30 (MiInsertTbFlushEntry.c)
 *     MiUnlockPageTableInternal @ 0x140104B10 (MiUnlockPageTableInternal.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     MiDecreaseUsedPtesCount @ 0x14012F27C (MiDecreaseUsedPtesCount.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

__int64 __fastcall MiDeleteAwePageTable(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 valid; // rax
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // r14
  __int64 v9; // rax
  __int64 v10; // r10
  unsigned __int64 v11; // rbx
  ULONG_PTR v12; // rbx
  __int64 v13; // rdx
  unsigned __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rdx
  unsigned __int64 v21; // rbx
  __int64 v22; // r8
  ULONG_PTR UsedPtesHandle; // rax
  __int64 v24; // r8
  int v26; // [rsp+20h] [rbp-E0h] BYREF
  int v27; // [rsp+24h] [rbp-DCh] BYREF
  unsigned __int64 v28; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v29; // [rsp+30h] [rbp-D0h] BYREF
  int v30; // [rsp+40h] [rbp-C0h] BYREF
  __int16 v31; // [rsp+44h] [rbp-BCh]
  int v32; // [rsp+48h] [rbp-B8h]
  int v33; // [rsp+4Ch] [rbp-B4h]
  __int64 v34; // [rsp+50h] [rbp-B0h]
  __int64 v35; // [rsp+58h] [rbp-A8h]

  valid = MiLockLowestValidPageTable(a1, a2, &v28, a4);
  v7 = v28;
  v8 = valid;
  if ( v28 == a2 )
  {
    v29 = MI_READ_PTE_LOCK_FREE(v28);
    if ( (v29 & 1) != 0 )
    {
      v9 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v29);
      v29 = v10 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
      v11 = v9;
      if ( (unsigned int)MiEvictPageTableLock(a1, v7, v29, 0) )
      {
        v12 = 48 * ((v11 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
        if ( MiPteInShadowRange(v7) )
        {
          if ( (unsigned int)MiPteHasShadow() )
          {
            if ( !HIBYTE(word_14043B26C) && (v13 & 1) != 0 )
              v13 |= 0x8000000000000000uLL;
            *(_QWORD *)v7 = v13;
            MiWritePteShadow(v7, v13);
            goto LABEL_15;
          }
          if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0
            && (v13 & 1) != 0 )
          {
            v13 |= 0x8000000000000000uLL;
          }
          v7 = v28;
        }
        *(_QWORD *)v7 = v13;
LABEL_15:
        v33 = 0;
        v31 = 0;
        v34 = 0LL;
        v35 = 0LL;
        v30 = 1;
        v32 = 20;
        v14 = (__int64)(v7 << 25) >> 16;
        MiInsertTbFlushEntry((__int64)&v30, v14, 1LL, 0);
        MiFlushTbList(&v30, v15, v16, v17);
        v26 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v26, v18, v19);
          while ( *(__int64 *)(v12 + 24) < 0 );
        }
        *(_QWORD *)(v12 + 24) |= 0x4000000000000000uLL;
        MiDecrementShareCount(v12);
        _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v21 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(v8) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
        v27 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v21 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v27, v20, v22);
          while ( *(__int64 *)(v21 + 24) < 0 );
        }
        *(_QWORD *)(v21 + 24) ^= (*(_QWORD *)(v21 + 24) ^ (*(_QWORD *)(v21 + 24) - 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
        _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        UsedPtesHandle = MiGetUsedPtesHandle(v14);
        MiDecreaseUsedPtesCount(UsedPtesHandle, 1LL, v24);
      }
    }
  }
  return MiUnlockPageTableInternal(a1, v8);
}
