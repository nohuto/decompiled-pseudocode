/*
 * XREFs of MiCheckCommitReleaseFromVad @ 0x1402A3BBC
 * Callers:
 *     MiReleaseOutSwappedProcessCommit @ 0x1402A5164 (MiReleaseOutSwappedProcessCommit.c)
 * Callees:
 *     MiIsPrototypePteVadLookup @ 0x14002D250 (MiIsPrototypePteVadLookup.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockWorkingSetShared @ 0x140046970 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140076040 (MiLockWorkingSetShared.c)
 *     MiGetNextPageTable @ 0x140084230 (MiGetNextPageTable.c)
 *     MiLocateCloneAddress @ 0x1400946C8 (MiLocateCloneAddress.c)
 *     MiRotatedToFrameBuffer @ 0x140094724 (MiRotatedToFrameBuffer.c)
 *     MiLockTransitionLeafPage @ 0x140095684 (MiLockTransitionLeafPage.c)
 *     MiUnlockPageTableInternal @ 0x140104B10 (MiUnlockPageTableInternal.c)
 *     MI_PROTO_FORMAT_COMBINED @ 0x140128D60 (MI_PROTO_FORMAT_COMBINED.c)
 *     MiIsPteInStore @ 0x140141908 (MiIsPteInStore.c)
 *     MiComputeCommitChargeForZeroPteRange @ 0x1402A3FB4 (MiComputeCommitChargeForZeroPteRange.c)
 *     MiComputeImageVadCommitCharge @ 0x1402A4060 (MiComputeImageVadCommitCharge.c)
 */

__int64 __fastcall MiCheckCommitReleaseFromVad(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, _QWORD *a6)
{
  __int64 v6; // rbp
  __int64 v9; // rdi
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // r12
  char v12; // r15
  __int64 NextPageTable; // rax
  unsigned __int64 v14; // rsi
  __int64 v15; // r8
  __int64 v16; // rbp
  unsigned __int64 v17; // r15
  unsigned __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rdx
  unsigned __int64 v21; // r9
  __int64 v22; // rax
  __int64 v23; // r9
  __int64 v24; // r10
  __int64 v25; // rax
  bool v26; // zf
  unsigned __int64 v27; // rdx
  int v29; // [rsp+30h] [rbp-68h] BYREF
  unsigned __int64 v30; // [rsp+38h] [rbp-60h] BYREF
  __int64 v31; // [rsp+40h] [rbp-58h]
  unsigned __int64 v32; // [rsp+48h] [rbp-50h]
  _BYTE v33[72]; // [rsp+50h] [rbp-48h] BYREF
  char i; // [rsp+B8h] [rbp+20h]

  v6 = a3;
  v9 = 0LL;
  v10 = 8 * ((*(unsigned int *)(a4 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a4 + 32) << 32)) & 0xFFFFFFFFFLL)
      - 0x98000000000LL;
  v11 = 8 * ((*(unsigned int *)(a4 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a4 + 33) << 32)) & 0xFFFFFFFFFLL)
      - 0x98000000000LL;
  v32 = v11;
  v12 = MiLockWorkingSetShared(a3);
  for ( i = v12; v10 <= v11; v12 = i )
  {
    NextPageTable = MiGetNextPageTable(v10, v11, 0LL, v12, 0, &v29);
    v14 = NextPageTable;
    if ( NextPageTable != v10 )
    {
      v15 = NextPageTable ? (__int64)(NextPageTable - v10) >> 3 : ((__int64)(v11 - v10) >> 3) + 1;
      v9 += MiComputeCommitChargeForZeroPteRange(a4, v10, v15);
      if ( !v14 )
        break;
    }
    v10 = v14;
    v16 = ((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v17 = v11;
    v31 = v16;
    if ( (v14 & 0xFFFFFFFFFFFFF000uLL) + 4088 <= v11 )
      v17 = (v14 & 0xFFFFFFFFFFFFF000uLL) + 4088;
    if ( v14 <= v17 )
    {
      while ( 1 )
      {
        v18 = MI_READ_PTE_LOCK_FREE(v10);
        v30 = v18;
        if ( !v18 )
          break;
        if ( (v18 & 1) != 0 )
        {
          if ( (v18 & 0x200) == 0 || (*(_BYTE *)(a4 + 48) & 7) == 6 && MiRotatedToFrameBuffer(v10) )
            goto LABEL_47;
          v20 = *(_QWORD *)(48
                          * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v30) >> 12) & 0xFFFFFFFFFLL)
                          - 0x57FFFFFFFF8LL);
          if ( v20 >= 0 || *(_QWORD *)(a2 + 912) && MiLocateCloneAddress(a2, v20 | 0x8000000000000000uLL) )
            goto LABEL_47;
LABEL_46:
          ++v9;
          goto LABEL_47;
        }
        if ( (v18 & 0x400) != 0 )
        {
          if ( MiIsPrototypePteVadLookup(v18) )
          {
            v22 = v9 + 1;
            if ( ((v21 >> 5) & 5) != 5 )
              v22 = v9;
            v9 = v22;
            goto LABEL_47;
          }
          if ( MI_PROTO_FORMAT_COMBINED(v21) )
            goto LABEL_47;
          if ( *(_QWORD *)(a2 + 912) )
          {
            if ( qword_14043B180 && (v23 & 0x10) == 0 )
              v23 &= ~qword_14043B180;
            if ( MiLocateCloneAddress(a2, v23 >> 16) )
              goto LABEL_47;
          }
          v19 = MiComputeImageVadCommitCharge(
                  a4,
                  (unsigned __int64)((__int64)((v10 << 25) - (v24 << 25)) >> 16) >> 12,
                  1LL,
                  v33);
          goto LABEL_32;
        }
        if ( (v18 & 0x800) != 0 )
        {
          v25 = MiLockTransitionLeafPage(v10, 0LL);
          if ( v25 )
          {
            if ( (*(_BYTE *)(v25 + 34) & 0x10) == 0 && (*(_DWORD *)(v25 + 16) & 4) == 0 && !*(_WORD *)(v25 + 32) )
              ++*a6;
            _InterlockedAnd64((volatile signed __int64 *)(v25 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          }
          else
          {
            v10 -= 8LL;
          }
          goto LABEL_47;
        }
        if ( (v18 & 4) != 0 )
        {
          if ( !a5 )
            goto LABEL_47;
          v26 = (unsigned int)MiIsPteInStore(a1, v18) == 0;
        }
        else
        {
          v26 = ((v18 >> 5) & 0x1F) == 16;
        }
        if ( !v26 )
          goto LABEL_46;
LABEL_47:
        v10 += 8LL;
        if ( v10 > v17 )
        {
          v16 = v31;
          v11 = v32;
          goto LABEL_49;
        }
      }
      v19 = MiComputeCommitChargeForZeroPteRange(a4, v10, 1LL);
LABEL_32:
      v9 += v19;
      goto LABEL_47;
    }
LABEL_49:
    v27 = v16;
    v6 = a3;
    MiUnlockPageTableInternal(a3, v27);
  }
  MiUnlockWorkingSetShared(v6, v12);
  return v9;
}
