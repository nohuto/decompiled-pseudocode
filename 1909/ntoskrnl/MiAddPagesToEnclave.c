/*
 * XREFs of MiAddPagesToEnclave @ 0x1402D2F88
 * Callers:
 *     MiCommitEnclavePages @ 0x1402D35E0 (MiCommitEnclavePages.c)
 * Callees:
 *     MiMakeSystemAddressValid @ 0x140021A20 (MiMakeSystemAddressValid.c)
 *     MiWorkingSetIsContended @ 0x140023440 (MiWorkingSetIsContended.c)
 *     MiPteInShadowRange @ 0x14002AC50 (MiPteInShadowRange.c)
 *     MiMakeValidPte @ 0x14002B050 (MiMakeValidPte.c)
 *     MiReservePtes @ 0x140030600 (MiReservePtes.c)
 *     MiLockWorkingSetShared @ 0x14005D6D0 (MiLockWorkingSetShared.c)
 *     MiReleasePtes @ 0x14006B160 (MiReleasePtes.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockWorkingSetShared @ 0x1400AC920 (MiUnlockWorkingSetShared.c)
 *     MiPageTableLockIsContended @ 0x1400CB088 (MiPageTableLockIsContended.c)
 *     MiWritePteShadow @ 0x1400F8750 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1400F87B0 (MiPteHasShadow.c)
 *     MiUnlockPageTableInternal @ 0x1401000D0 (MiUnlockPageTableInternal.c)
 *     KeShouldYieldProcessor @ 0x140108920 (KeShouldYieldProcessor.c)
 *     MiCreatePteCopyList @ 0x14012FB84 (MiCreatePteCopyList.c)
 *     MiReleasePteCopyList @ 0x1401322E8 (MiReleasePteCopyList.c)
 *     MiGetPteFromCopyList @ 0x140138004 (MiGetPteFromCopyList.c)
 *     KeAddEnclavePage @ 0x1402A5F14 (KeAddEnclavePage.c)
 *     MiGetPageForEnclave @ 0x1402D46C4 (MiGetPageForEnclave.c)
 *     MiInitializeEnclavePfn @ 0x1402D4728 (MiInitializeEnclavePfn.c)
 *     MiReserveEnclavePages @ 0x1402D4F28 (MiReserveEnclavePages.c)
 *     MiReturnEnclavePage @ 0x1402D5040 (MiReturnEnclavePage.c)
 *     MiWriteEnclavePte @ 0x1402D5188 (MiWriteEnclavePte.c)
 *     MiReturnReservedEnclavePages @ 0x140894548 (MiReturnReservedEnclavePages.c)
 */

__int64 __fastcall MiAddPagesToEnclave(__int64 a1, unsigned __int64 a2, ULONG_PTR a3, ULONG_PTR a4, unsigned int a5)
{
  int v5; // eax
  ULONG_PTR v6; // rbp
  __int64 result; // rax
  unsigned __int64 v10; // r14
  unsigned __int16 *v11; // rsi
  __int64 v12; // rcx
  unsigned __int64 v13; // rax
  ULONG_PTR v14; // rax
  unsigned __int64 v15; // r15
  int v16; // edi
  __int64 v17; // rdx
  int v18; // r8d
  bool v19; // zf
  __int64 v20; // r12
  __int64 v21; // rcx
  int v22; // r10d
  char v23; // cl
  char v24; // al
  unsigned __int64 v25; // rbx
  ULONG_PTR v26; // rax
  unsigned __int64 v27; // rax
  __int64 v28; // rdx
  _QWORD *v29; // r8
  int v30; // r9d
  bool v31; // zf
  unsigned int v32; // [rsp+30h] [rbp-A8h]
  char v33; // [rsp+34h] [rbp-A4h]
  __int64 v34; // [rsp+38h] [rbp-A0h]
  __int64 BugCheckParameter2; // [rsp+48h] [rbp-90h]
  __int64 v36; // [rsp+50h] [rbp-88h] BYREF
  __int128 v37; // [rsp+58h] [rbp-80h]
  int v38; // [rsp+68h] [rbp-70h] BYREF
  __int64 v39; // [rsp+70h] [rbp-68h]
  __int64 v40; // [rsp+78h] [rbp-60h]
  unsigned __int64 PteFromCopyList; // [rsp+80h] [rbp-58h]
  unsigned __int8 v42; // [rsp+E0h] [rbp+8h]
  unsigned __int64 v43; // [rsp+E8h] [rbp+10h]

  v43 = a2;
  v37 = 0LL;
  v5 = *(_DWORD *)(a1 + 64);
  v6 = a3;
  v36 = 0LL;
  if ( (v5 & 2) != 0 && (*(_DWORD *)(a1 + 72) & 1) == 0 )
    return 3221225496LL;
  v10 = 0LL;
  v11 = &KeGetCurrentThread()->ApcState.Process[1].IdealNode[6];
  v12 = *(_QWORD *)(qword_140465E88 + 8LL * v11[87]);
  v13 = *(_QWORD *)(a1 + 104);
  v39 = v12;
  if ( v13 >= a2 || (v10 = a2 - v13, result = MiReserveEnclavePages(a1, v12, a2 - v13), (int)result >= 0) )
  {
    if ( (*(_DWORD *)(a1 + 64) & 2) != 0 )
    {
      v15 = 0LL;
      v20 = 0LL;
LABEL_21:
      v21 = 20LL;
      if ( a2 <= 0x14 )
        v21 = a2;
      MiCreatePteCopyList(v21 + 1, v21 + 1, (__int64)&v36);
      if ( !HIDWORD(v36) )
        goto LABEL_8;
      v22 = 4;
      v23 = (a5 >> 1) & 2 | 0x35;
      if ( (a5 & 2) == 0 )
        v23 = (a5 >> 1) & 2 | 0x31;
      if ( (*(_DWORD *)(a1 + 64) & 2) == 0 )
        v22 = a5;
      v24 = v23 | 0x40;
      v32 = v22;
      if ( (*(_DWORD *)(a1 + 64) & 2) == 0 )
        v24 = v23;
      v25 = 0LL;
      v33 = v24;
      v40 = (__int64)(*(_QWORD *)(a1 + 80) << 25) >> 16;
      v34 = (__int64)(v6 << 25) >> 16;
      v42 = MiLockWorkingSetShared((__int64)v11);
      v26 = a3;
      if ( a3 > a4 )
      {
LABEL_68:
        MiUnlockWorkingSetShared((__int64)v11, v42);
        v16 = 0;
        goto LABEL_69;
      }
      while ( 1 )
      {
        if ( (v6 & 0x78) == 0 && v6 != v26 )
        {
          if ( MiWorkingSetIsContended((__int64)v11) || KeShouldYieldProcessor() )
            goto LABEL_37;
          if ( !v25 )
            goto LABEL_43;
          if ( (unsigned int)MiPageTableLockIsContended((__int64)v11, v25) )
          {
LABEL_37:
            if ( v25 )
            {
              MiUnlockPageTableInternal((__int64)v11, v25);
              v25 = 0LL;
            }
            MiUnlockWorkingSetShared((__int64)v11, v42);
            MiLockWorkingSetShared((__int64)v11);
          }
        }
        if ( v25 )
        {
          if ( (v6 & 0xFFF) != 0 )
            goto LABEL_44;
          MiUnlockPageTableInternal((__int64)v11, v25);
        }
LABEL_43:
        v25 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        MiMakeSystemAddressValid(v6, 0LL, (*(_DWORD *)(a1 + 48) >> 12) & 0x3F, v42, 0);
LABEL_44:
        if ( (MI_READ_PTE_LOCK_FREE(v6) & 1) != 0 )
          goto LABEL_59;
        v27 = v10 - 1;
        if ( v10 != v43 )
          v27 = v10;
        --v43;
        v10 = v27;
        BugCheckParameter2 = MiGetPageForEnclave(a1, v39);
        PteFromCopyList = (unsigned __int64)MiGetPteFromCopyList((unsigned int *)&v36, BugCheckParameter2, -1LL);
        v16 = KeAddEnclavePage(v40, v20, (__int64)(PteFromCopyList << 25) >> 16, v34, v33, &v38);
        if ( MiPteInShadowRange(PteFromCopyList) )
        {
          if ( (unsigned int)MiPteHasShadow() )
          {
            v30 = 1;
            if ( !HIBYTE(word_1404658EC) )
            {
              v31 = (v28 & 1) == 0;
              goto LABEL_53;
            }
          }
          else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0 )
          {
            v31 = (v28 & 1) == 0;
LABEL_53:
            if ( !v31 )
              v28 |= 0x8000000000000000uLL;
          }
        }
        *v29 = v28;
        if ( v30 )
          MiWritePteShadow((__int64)v29);
        if ( v16 < 0 )
        {
          MiReturnEnclavePage(BugCheckParameter2);
          if ( v16 == -1073740657 )
            v16 = -1073741823;
          if ( v25 )
            MiUnlockPageTableInternal((__int64)v11, v25);
          MiUnlockWorkingSetShared((__int64)v11, v42);
LABEL_69:
          MiReleasePteCopyList((__int64)&v36);
          if ( v15 )
            MiReleasePtes((__int64)&qword_1404666C0, v15, 1u);
          if ( v10 )
            MiReturnReservedEnclavePages(a1, v10);
          return (unsigned int)v16;
        }
        MiInitializeEnclavePfn(BugCheckParameter2, v6, v32);
        MiMakeValidPte(v6, BugCheckParameter2, v32 | 0x80000000);
        MiWriteEnclavePte(v6, 0);
LABEL_59:
        v34 += 4096LL;
        v6 += 8LL;
        if ( v6 > a4 )
        {
          if ( v25 )
            MiUnlockPageTableInternal((__int64)v11, v25);
          goto LABEL_68;
        }
        v26 = a3;
      }
    }
    v14 = MiReservePtes((__int64)&qword_1404666C0, (unsigned __int64 *)1);
    v15 = v14;
    if ( !v14 )
    {
LABEL_8:
      v16 = -1073741670;
      goto LABEL_69;
    }
    MiMakeValidPte(v14, qword_140466560, 536870913);
    if ( MiPteInShadowRange(v15) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v18 = 1;
        if ( !HIBYTE(word_1404658EC) )
        {
          v19 = (v17 & 1) == 0;
          goto LABEL_15;
        }
      }
      else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0 )
      {
        v19 = (v17 & 1) == 0;
LABEL_15:
        if ( !v19 )
          v17 |= 0x8000000000000000uLL;
      }
    }
    *(_QWORD *)v15 = v17;
    if ( v18 )
      MiWritePteShadow(v15);
    v6 = a3;
    v20 = (__int64)(v15 << 25) >> 16;
    goto LABEL_21;
  }
  return result;
}
