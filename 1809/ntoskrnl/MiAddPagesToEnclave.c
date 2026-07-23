/*
 * XREFs of MiAddPagesToEnclave @ 0x1402BCAD4
 * Callers:
 *     MiCommitEnclavePages @ 0x1402BD124 (MiCommitEnclavePages.c)
 * Callees:
 *     MiReleasePtes @ 0x1400340E0 (MiReleasePtes.c)
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MiMakeValidPte @ 0x14003D7F0 (MiMakeValidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockWorkingSetShared @ 0x140046970 (MiUnlockWorkingSetShared.c)
 *     MiReservePtes @ 0x14005C890 (MiReservePtes.c)
 *     MiLockWorkingSetShared @ 0x140076040 (MiLockWorkingSetShared.c)
 *     MiMakeSystemAddressValid @ 0x140088170 (MiMakeSystemAddressValid.c)
 *     MiPageTableLockIsContended @ 0x140096344 (MiPageTableLockIsContended.c)
 *     MiWorkingSetIsContended @ 0x1400991E0 (MiWorkingSetIsContended.c)
 *     KeShouldYieldProcessor @ 0x1400F9D60 (KeShouldYieldProcessor.c)
 *     MiUnlockPageTableInternal @ 0x140104B10 (MiUnlockPageTableInternal.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     MiGetPteFromCopyList @ 0x14012D8D8 (MiGetPteFromCopyList.c)
 *     MiCreatePteCopyList @ 0x14012ECB0 (MiCreatePteCopyList.c)
 *     MiReleasePteCopyList @ 0x140131930 (MiReleasePteCopyList.c)
 *     KeAddEnclavePage @ 0x14028F9A4 (KeAddEnclavePage.c)
 *     MiGetPageForEnclave @ 0x1402BE1BC (MiGetPageForEnclave.c)
 *     MiInitializeEnclavePfn @ 0x1402BE220 (MiInitializeEnclavePfn.c)
 *     MiReserveEnclavePages @ 0x1402BE9C8 (MiReserveEnclavePages.c)
 *     MiReturnEnclavePage @ 0x1402BEAD0 (MiReturnEnclavePage.c)
 *     MiWriteEnclavePte @ 0x1402BEC18 (MiWriteEnclavePte.c)
 *     MiReturnReservedEnclavePages @ 0x14085B920 (MiReturnReservedEnclavePages.c)
 */

__int64 __fastcall MiAddPagesToEnclave(__int64 a1, unsigned __int64 a2, ULONG_PTR a3, ULONG_PTR a4, unsigned int a5)
{
  ULONG_PTR v5; // rbp
  __int64 result; // rax
  unsigned __int64 v9; // r14
  unsigned __int16 *v10; // rsi
  __int64 v11; // rcx
  unsigned __int64 v12; // rax
  ULONG_PTR v13; // rax
  unsigned __int64 v14; // r15
  int v15; // edi
  __int64 v16; // rdx
  int v17; // r8d
  bool v18; // zf
  __int64 v19; // r12
  __int64 v20; // rcx
  int v21; // r10d
  char v22; // cl
  char v23; // al
  unsigned __int64 v24; // rbx
  __int64 v25; // r9
  ULONG_PTR v26; // rax
  unsigned __int64 v27; // rax
  __int64 v28; // rdx
  __int64 *v29; // r8
  int v30; // r9d
  bool v31; // zf
  unsigned int v32; // [rsp+30h] [rbp-A8h]
  char v33; // [rsp+34h] [rbp-A4h]
  __int64 v34; // [rsp+38h] [rbp-A0h]
  __int64 BugCheckParameter2; // [rsp+48h] [rbp-90h]
  int v36; // [rsp+50h] [rbp-88h] BYREF
  __int64 v37; // [rsp+58h] [rbp-80h]
  __int64 v38; // [rsp+60h] [rbp-78h]
  unsigned __int64 PteFromCopyList; // [rsp+68h] [rbp-70h]
  _QWORD v40[13]; // [rsp+70h] [rbp-68h] BYREF
  unsigned __int8 v41; // [rsp+E0h] [rbp+8h]
  unsigned __int64 v42; // [rsp+E8h] [rbp+10h]

  v42 = a2;
  v5 = a3;
  v40[0] = 0LL;
  if ( (*(_DWORD *)(a1 + 64) & 2) != 0 && (*(_DWORD *)(a1 + 72) & 1) == 0 )
    return 3221225496LL;
  v9 = 0LL;
  v10 = &KeGetCurrentThread()->ApcState.Process[1].IdealNode[12];
  v11 = *(_QWORD *)(qword_14043B808 + 8LL * v10[87]);
  v12 = *(_QWORD *)(a1 + 104);
  v37 = v11;
  if ( v12 >= a2 || (v9 = a2 - v12, result = MiReserveEnclavePages(a1, v11, a2 - v12), (int)result >= 0) )
  {
    if ( (*(_DWORD *)(a1 + 64) & 2) != 0 )
    {
      v14 = 0LL;
      v19 = 0LL;
LABEL_21:
      v20 = 20LL;
      if ( a2 <= 0x14 )
        v20 = a2;
      MiCreatePteCopyList(v20 + 1, v20 + 1, (__int64)v40);
      if ( !HIDWORD(v40[0]) )
        goto LABEL_8;
      v21 = 4;
      v22 = (a5 >> 1) & 2 | 0x35;
      if ( (a5 & 2) == 0 )
        v22 = (a5 >> 1) & 2 | 0x31;
      if ( (*(_DWORD *)(a1 + 64) & 2) == 0 )
        v21 = a5;
      v23 = v22 | 0x40;
      v32 = v21;
      if ( (*(_DWORD *)(a1 + 64) & 2) == 0 )
        v23 = v22;
      v24 = 0LL;
      v33 = v23;
      v38 = (__int64)(*(_QWORD *)(a1 + 80) << 25) >> 16;
      v34 = (__int64)(v5 << 25) >> 16;
      v41 = MiLockWorkingSetShared((__int64)v10);
      v26 = a3;
      if ( a3 > a4 )
      {
LABEL_68:
        MiUnlockWorkingSetShared((__int64)v10, v41);
        v15 = 0;
        goto LABEL_69;
      }
      while ( 1 )
      {
        if ( (v5 & 0x78) == 0 && v5 != v26 )
        {
          if ( MiWorkingSetIsContended((__int64)v10) || KeShouldYieldProcessor() )
            goto LABEL_37;
          if ( !v24 )
            goto LABEL_43;
          if ( (unsigned int)MiPageTableLockIsContended((__int64)v10, v24) )
          {
LABEL_37:
            if ( v24 )
            {
              MiUnlockPageTableInternal((__int64)v10, v24);
              v24 = 0LL;
            }
            MiUnlockWorkingSetShared((__int64)v10, v41);
            MiLockWorkingSetShared((__int64)v10);
          }
        }
        if ( v24 )
        {
          if ( (v5 & 0xFFF) != 0 )
            goto LABEL_44;
          MiUnlockPageTableInternal((__int64)v10, v24);
        }
LABEL_43:
        v24 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        LOBYTE(v25) = v41;
        MiMakeSystemAddressValid(v5, 0LL, (*(_DWORD *)(a1 + 48) >> 8) & 0x3F, v25, 0);
LABEL_44:
        if ( (MI_READ_PTE_LOCK_FREE(v5) & 1) != 0 )
          goto LABEL_59;
        v27 = v9 - 1;
        if ( v9 != v42 )
          v27 = v9;
        --v42;
        v9 = v27;
        BugCheckParameter2 = MiGetPageForEnclave(a1, v37);
        PteFromCopyList = (unsigned __int64)MiGetPteFromCopyList((unsigned int *)v40, BugCheckParameter2, -1LL);
        v15 = KeAddEnclavePage(v38, v19, (__int64)(PteFromCopyList << 25) >> 16, v34, v33, &v36);
        if ( MiPteInShadowRange(PteFromCopyList) )
        {
          if ( (unsigned int)MiPteHasShadow() )
          {
            v30 = 1;
            if ( !HIBYTE(word_14043B26C) )
            {
              v31 = (v28 & 1) == 0;
              goto LABEL_53;
            }
          }
          else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0 )
          {
            v31 = (v28 & 1) == 0;
LABEL_53:
            if ( !v31 )
              v28 |= 0x8000000000000000uLL;
          }
        }
        *v29 = v28;
        if ( v30 )
          MiWritePteShadow((__int64)v29, v28);
        if ( v15 < 0 )
        {
          MiReturnEnclavePage(BugCheckParameter2);
          if ( v15 == -1073740657 )
            v15 = -1073741823;
          if ( v24 )
            MiUnlockPageTableInternal((__int64)v10, v24);
          MiUnlockWorkingSetShared((__int64)v10, v41);
LABEL_69:
          MiReleasePteCopyList((__int64)v40);
          if ( v14 )
            MiReleasePtes((__int64)&qword_14043C060, v14, 1u);
          if ( v9 )
            MiReturnReservedEnclavePages(a1, v9);
          return (unsigned int)v15;
        }
        MiInitializeEnclavePfn(BugCheckParameter2, v5, v32);
        MiMakeValidPte(v5, BugCheckParameter2, v32 | 0x80000000);
        MiWriteEnclavePte(v5, 0);
LABEL_59:
        v34 += 4096LL;
        v5 += 8LL;
        if ( v5 > a4 )
        {
          if ( v24 )
            MiUnlockPageTableInternal((__int64)v10, v24);
          goto LABEL_68;
        }
        v26 = a3;
      }
    }
    v13 = MiReservePtes((__int64)&qword_14043C060, (unsigned __int64 *)1);
    v14 = v13;
    if ( !v13 )
    {
LABEL_8:
      v15 = -1073741670;
      goto LABEL_69;
    }
    MiMakeValidPte(v13, qword_14043BEA0, 536870913);
    if ( MiPteInShadowRange(v14) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v17 = 1;
        if ( !HIBYTE(word_14043B26C) )
        {
          v18 = (v16 & 1) == 0;
          goto LABEL_15;
        }
      }
      else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0 )
      {
        v18 = (v16 & 1) == 0;
LABEL_15:
        if ( !v18 )
          v16 |= 0x8000000000000000uLL;
      }
    }
    *(_QWORD *)v14 = v16;
    if ( v17 )
      MiWritePteShadow(v14, v16);
    v5 = a3;
    v19 = (__int64)(v14 << 25) >> 16;
    goto LABEL_21;
  }
  return result;
}
