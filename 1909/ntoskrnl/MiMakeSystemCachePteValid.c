/*
 * XREFs of MiMakeSystemCachePteValid @ 0x1400D3E1C
 * Callers:
 *     MmCopyToCachedPage @ 0x14006EAA0 (MmCopyToCachedPage.c)
 * Callees:
 *     MiReferenceControlAreaFile @ 0x140009BF0 (MiReferenceControlAreaFile.c)
 *     MiDereferenceControlAreaFile @ 0x140009CFC (MiDereferenceControlAreaFile.c)
 *     MiMakeValidPte @ 0x14002B050 (MiMakeValidPte.c)
 *     MiLockWorkingSetOptimal @ 0x14005D668 (MiLockWorkingSetOptimal.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockWorkingSetShared @ 0x1400AC920 (MiUnlockWorkingSetShared.c)
 *     MiAllocateWsle @ 0x1400AE730 (MiAllocateWsle.c)
 *     MiStartingOffset @ 0x1400B8AD0 (MiStartingOffset.c)
 *     MiIsPfnFileOnly @ 0x1400B9E30 (MiIsPfnFileOnly.c)
 *     PfSnLogPageFault @ 0x1400D3314 (PfSnLogPageFault.c)
 *     MiLockPageInline @ 0x1400DDE20 (MiLockPageInline.c)
 *     MiUnlockPageTableInternal @ 0x1401000D0 (MiUnlockPageTableInternal.c)
 *     MiLockAndDecrementShareCount @ 0x14010D38C (MiLockAndDecrementShareCount.c)
 */

void __fastcall MiMakeSystemCachePteValid(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, char a4)
{
  _QWORD *v7; // rbx
  int v8; // edi
  unsigned __int64 v9; // rax
  __int64 v10; // r10
  __int64 v11; // r9
  __int64 v12; // r13
  unsigned __int8 v13; // r12
  char v14; // al
  unsigned __int64 ValidPte; // rax
  unsigned __int64 v16; // rdx
  __int64 v17; // rsi
  unsigned __int64 v18; // rbp
  int Wsle; // eax
  __int64 v20; // rsi
  __int64 v21; // rdi
  ULONG_PTR v22; // rbx
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rax
  __int64 v25[9]; // [rsp+40h] [rbp-48h] BYREF
  __int64 v26; // [rsp+98h] [rbp+10h] BYREF
  unsigned __int64 v27; // [rsp+A0h] [rbp+18h] BYREF

  v27 = a3;
  v7 = (_QWORD *)(48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v27) >> 12) & 0xFFFFFFFFFLL)
                - 0x58000000000LL);
  v8 = 0;
  v25[0] = MI_READ_PTE_LOCK_FREE(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v9 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v25);
  v12 = v11 + 48 * (v10 & (v9 >> 12));
  v13 = MiLockPageInline(v12);
  *(_QWORD *)(v12 + 24) ^= (*(_QWORD *)(v12 + 24) ^ (*(_QWORD *)(v12 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v26 = MiLockWorkingSetOptimal(a1, a2, &v26);
  v14 = MI_READ_PTE_LOCK_FREE(a2);
  if ( (v14 & 1) != 0 )
  {
    Wsle = 0;
    v18 = 0LL;
    v17 = 0LL;
    goto LABEL_7;
  }
  if ( (v14 & 8) != 0 )
  {
    v24 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v27);
    ValidPte = MiMakeValidPte(a2, (v24 >> 12) & 0xFFFFFFFFFLL, 536870913);
  }
  else
  {
    ValidPte = v27;
  }
  v16 = ValidPte & 0xFFFFFFFFFFFFFEFBuLL | ((unsigned __int64)(word_1404658EC & 1) << 8);
  if ( (a4 & 8) != 0 && MiIsPfnFileOnly((__int64)v7) )
    v16 &= 0xFFFFFFFFFFFFFFBDuLL;
  v17 = v7[2];
  v18 = v7[1] | 0x8000000000000000uLL;
  Wsle = MiAllocateWsle(a1, a2, v7, 0, v16, 0, 0LL);
  if ( Wsle )
  {
    if ( PfSnNumActiveTraces && (v17 & 0x400) != 0 )
      v8 = 1;
LABEL_7:
    if ( Wsle )
      goto LABEL_8;
  }
  MiLockAndDecrementShareCount(v7, 0LL);
  MiLockAndDecrementShareCount(v12, 0LL);
LABEL_8:
  MiUnlockPageTableInternal(a1);
  MiUnlockWorkingSetShared(a1, v13);
  if ( v8 )
  {
    if ( qword_140465800 )
    {
      if ( (v17 & 0x10) == 0 )
        v17 &= ~qword_140465800;
    }
    v20 = v17 >> 16;
    v21 = *(_QWORD *)v20;
    v22 = MiReferenceControlAreaFile(*(_QWORD *)v20);
    v23 = MiStartingOffset((__int64 *)v20, v18, 0xFFFFFFFF);
    PfSnLogPageFault(v22, v23, 4);
    MiDereferenceControlAreaFile(v21, v22);
  }
}
