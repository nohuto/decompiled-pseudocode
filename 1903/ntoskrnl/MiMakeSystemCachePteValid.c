/*
 * XREFs of MiMakeSystemCachePteValid @ 0x140096AFC
 * Callers:
 *     MmCopyToCachedPage @ 0x14006E830 (MmCopyToCachedPage.c)
 * Callees:
 *     MiReferenceControlAreaFile @ 0x140009B60 (MiReferenceControlAreaFile.c)
 *     MiDereferenceControlAreaFile @ 0x140009C6C (MiDereferenceControlAreaFile.c)
 *     MiMakeValidPte @ 0x14002AC60 (MiMakeValidPte.c)
 *     MiLockWorkingSetOptimal @ 0x14005D5C8 (MiLockWorkingSetOptimal.c)
 *     PfSnLogPageFault @ 0x140095FF4 (PfSnLogPageFault.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockWorkingSetShared @ 0x1400CCAA0 (MiUnlockWorkingSetShared.c)
 *     MiAllocateWsle @ 0x1400CE8B0 (MiAllocateWsle.c)
 *     MiStartingOffset @ 0x1400D8C50 (MiStartingOffset.c)
 *     MiIsPfnFileOnly @ 0x1400D9FB0 (MiIsPfnFileOnly.c)
 *     MiLockPageInline @ 0x1400F0710 (MiLockPageInline.c)
 *     MiUnlockPageTableInternal @ 0x1400FDF40 (MiUnlockPageTableInternal.c)
 *     MiLockAndDecrementShareCount @ 0x14010DC9C (MiLockAndDecrementShareCount.c)
 */

void __fastcall MiMakeSystemCachePteValid(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, char a4)
{
  unsigned __int64 v7; // rbx
  int v8; // edi
  unsigned __int64 v9; // rax
  __int64 v10; // r10
  __int64 v11; // r9
  __int64 v12; // r13
  char v13; // r12
  char v14; // al
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned __int64 ValidPte; // rax
  unsigned __int64 v18; // rdx
  __int64 v19; // rsi
  unsigned __int64 v20; // rbp
  int Wsle; // eax
  __int64 v22; // rdx
  __int64 v23; // rsi
  __int64 v24; // rdi
  ULONG_PTR v25; // rbx
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rax
  __int64 v28[9]; // [rsp+40h] [rbp-48h] BYREF
  __int64 v29; // [rsp+98h] [rbp+10h] BYREF
  unsigned __int64 v30; // [rsp+A0h] [rbp+18h] BYREF

  v30 = a3;
  v7 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v30) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
  v8 = 0;
  v28[0] = MI_READ_PTE_LOCK_FREE(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v9 = MI_READ_PTE_LOCK_FREE(v28);
  v12 = v11 + 48 * (v10 & (v9 >> 12));
  v13 = MiLockPageInline(v12);
  *(_QWORD *)(v12 + 24) ^= (*(_QWORD *)(v12 + 24) ^ (*(_QWORD *)(v12 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v29 = MiLockWorkingSetOptimal(a1, a2, &v29);
  v14 = MI_READ_PTE_LOCK_FREE(a2);
  if ( (v14 & 1) != 0 )
  {
    Wsle = 0;
    v20 = 0LL;
    v19 = 0LL;
    goto LABEL_7;
  }
  if ( (v14 & 8) != 0 )
  {
    v27 = MI_READ_PTE_LOCK_FREE(&v30);
    ValidPte = MiMakeValidPte(a2, (v27 >> 12) & 0xFFFFFFFFFLL, 536870913);
  }
  else
  {
    ValidPte = v30;
  }
  v18 = ValidPte & 0xFFFFFFFFFFFFFEFBuLL | ((unsigned __int64)(word_140465BEC & 1) << 8);
  if ( (a4 & 8) != 0 && (unsigned int)MiIsPfnFileOnly(v7, v18, v15, v16) )
    v18 &= 0xFFFFFFFFFFFFFFBDuLL;
  v19 = *(_QWORD *)(v7 + 16);
  v20 = *(_QWORD *)(v7 + 8) | 0x8000000000000000uLL;
  Wsle = MiAllocateWsle(a1, a2, v7, 0, v18, 0, 0LL);
  if ( Wsle )
  {
    if ( PfSnNumActiveTraces && (v19 & 0x400) != 0 )
      v8 = 1;
LABEL_7:
    if ( Wsle )
      goto LABEL_8;
  }
  MiLockAndDecrementShareCount(v7, 0LL);
  MiLockAndDecrementShareCount(v12, 0LL);
LABEL_8:
  MiUnlockPageTableInternal(a1);
  LOBYTE(v22) = v13;
  MiUnlockWorkingSetShared(a1, v22);
  if ( v8 )
  {
    if ( qword_140465B00 )
    {
      if ( (v19 & 0x10) == 0 )
        v19 &= ~qword_140465B00;
    }
    v23 = v19 >> 16;
    v24 = *(_QWORD *)v23;
    v25 = MiReferenceControlAreaFile(*(_QWORD *)v23);
    v26 = MiStartingOffset(v23, v20, 0xFFFFFFFFLL);
    PfSnLogPageFault(v25, v26, 4);
    MiDereferenceControlAreaFile(v24, v25);
  }
}
