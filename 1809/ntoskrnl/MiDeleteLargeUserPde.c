/*
 * XREFs of MiDeleteLargeUserPde @ 0x1402C76B0
 * Callers:
 *     MiDeleteVa @ 0x1400696F0 (MiDeleteVa.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     MiGetUsedPtesHandle @ 0x140098640 (MiGetUsedPtesHandle.c)
 *     MiInsertLargeTbFlushEntry @ 0x140121554 (MiInsertLargeTbFlushEntry.c)
 *     MiDecreaseUsedPtesCount @ 0x14012F27C (MiDecreaseUsedPtesCount.c)
 *     MiDeleteVadAwePtes @ 0x1402B0708 (MiDeleteVadAwePtes.c)
 *     MiRewritePteWithLockBit @ 0x1402BF86C (MiRewritePteWithLockBit.c)
 */

unsigned __int64 __fastcall MiDeleteLargeUserPde(__int64 *a1, unsigned __int64 a2, unsigned int a3)
{
  __int64 v3; // rbp
  int v7; // edi
  unsigned __int64 v8; // rbx
  ULONG_PTR UsedPtesHandle; // rax
  __int64 v10; // r8
  int v11; // edi
  __int64 v12; // rbx
  unsigned __int64 result; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  char v16; // cl
  char v17; // cl
  __int64 v18; // rax
  unsigned __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // [rsp+50h] [rbp+8h] BYREF
  int v22; // [rsp+60h] [rbp+18h] BYREF

  v3 = a1[21];
  v7 = *(_DWORD *)(v3 + 32);
  v21 = MI_READ_PTE_LOCK_FREE(a2);
  v8 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v21) >> 12) & 0xFFFFFFFFFLL;
  if ( a3 != 3 && (v7 & 0x10) == 0 )
  {
    UsedPtesHandle = MiGetUsedPtesHandle((__int64)(a2 << 25) >> 16);
    MiDecreaseUsedPtesCount(UsedPtesHandle, 1LL, v10);
  }
  v11 = v7 & 0x10;
  if ( v11 )
    MiDeleteVadAwePtes(*(_QWORD *)(*(_QWORD *)(v3 + 24) + 32LL), a2, (__int64 *)(v3 + 56));
  else
    MiRewritePteWithLockBit(a1[3], (volatile __int64 *)a2, ZeroPte);
  v12 = 48 * v8 - 0x58000000000LL;
  result = MiInsertLargeTbFlushEntry(a1[2], a3, a2);
  if ( !v11 && (*(_QWORD *)(v12 + 40) & 0x200000000000000LL) == 0 )
  {
    v22 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v22, v14, v15);
      while ( *(__int64 *)(v12 + 24) < 0 );
    }
    v16 = *(_BYTE *)(v12 + 34);
    *(_BYTE *)(v12 + 34) = v16 & 0xF8 | 5;
    v17 = *(_BYTE *)(v12 + 34) ^ (*(_BYTE *)(v12 + 34) ^ v16) & 7;
    *(_QWORD *)v12 ^= (*(_QWORD *)v12 ^ (*(_QWORD *)(v3 + 48) >> 3)) & 0xFFFFFFFFFFELL;
    v18 = *(_QWORD *)(v12 + 40);
    *(_BYTE *)(v12 + 34) = v17;
    if ( a3 == 1 )
    {
      v19 = v18 & 0xFFFFFFFFFFFFFFFEuLL;
      v20 = 0xFFFFFFFFELL;
    }
    else
    {
      v19 = v18 & 0xFFFFFFFFFFFFFFFBuLL;
      v20 = 0xFFFFFFFFBLL;
    }
    *(_QWORD *)(v12 + 40) = v20 | v19;
    result = 0x7FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    *(_QWORD *)(v3 + 48) = v12;
  }
  return result;
}
