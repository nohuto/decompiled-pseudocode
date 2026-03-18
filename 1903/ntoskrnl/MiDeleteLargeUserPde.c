/*
 * XREFs of MiDeleteLargeUserPde @ 0x1402E164C
 * Callers:
 *     MiDeleteVa @ 0x14004B480 (MiDeleteVa.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14002A860 (MiPteInShadowRange.c)
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     MiGetUsedPtesHandle @ 0x14002DAB0 (MiGetUsedPtesHandle.c)
 *     MiInsertTbFlushEntry @ 0x140058CD0 (MiInsertTbFlushEntry.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiInsertLargeTbFlushEntry @ 0x140119668 (MiInsertLargeTbFlushEntry.c)
 *     MiWritePteShadow @ 0x1401223FC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14012245C (MiPteHasShadow.c)
 *     MiDecreaseUsedPtesCount @ 0x14012F0C8 (MiDecreaseUsedPtesCount.c)
 *     MiDeleteVadAwePtes @ 0x1402D5C3C (MiDeleteVadAwePtes.c)
 *     MiRewritePteWithLockBit @ 0x1402D8F30 (MiRewritePteWithLockBit.c)
 *     MiInsertDpcGang @ 0x1402E88C0 (MiInsertDpcGang.c)
 */

unsigned __int64 __fastcall MiDeleteLargeUserPde(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  __int64 v3; // r12
  char v7; // r9
  unsigned __int64 v8; // rbx
  __int64 v9; // r14
  __int64 v10; // rbx
  char v11; // r15
  unsigned __int64 v12; // r9
  unsigned __int64 v13; // rsi
  int v14; // r15d
  __int64 v15; // r8
  unsigned __int64 i; // rcx
  __int64 v17; // rdx
  bool v18; // zf
  ULONG_PTR UsedPtesHandle; // rax
  unsigned __int64 result; // rax
  __int64 v21; // rbx
  __int64 v22; // rcx
  char v23; // al
  char v24; // r11
  int v25; // [rsp+60h] [rbp+8h]
  int v26; // [rsp+70h] [rbp+18h] BYREF
  __int64 v27; // [rsp+78h] [rbp+20h] BYREF

  v3 = *(_QWORD *)(a1 + 160);
  v25 = *(_DWORD *)(v3 + 32);
  v27 = MI_READ_PTE_LOCK_FREE(a2);
  v8 = v27;
  v9 = v27 & 1;
  if ( (v27 & 1) != 0 )
  {
    v8 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v27);
  }
  else if ( qword_140465B00 )
  {
    if ( (v27 & 0x10) != 0 )
      v8 = v27 & 0xFFFFFFFFFFFFFFEFuLL;
    else
      v8 = ~qword_140465B00 & v27;
  }
  v10 = (v8 >> 12) & 0xFFFFFFFFFLL;
  v11 = v7;
  v12 = 0xFFFFF68000000000uLL;
  v13 = (-(__int64)(a3 != 0) & 0xFFFFFFFFFFFFFFF1uLL) + 16;
  v14 = v11 & 0x10;
  if ( v14 )
  {
    MiDeleteVadAwePtes(*(_QWORD *)(*(_QWORD *)(v3 + 16) + 32LL), a2, (__int64 *)(v3 + 40));
    goto LABEL_28;
  }
  if ( a3 )
  {
    if ( v9 )
    {
      MiRewritePteWithLockBit(*(_QWORD *)(a1 + 16), (volatile __int64 *)a2, ZeroPte);
      goto LABEL_25;
    }
    if ( MiPteInShadowRange(a2) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v15 = 1LL;
        if ( !HIBYTE(word_140465BEC) )
        {
          v18 = (v17 & 1) == 0;
          goto LABEL_21;
        }
      }
      else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0 )
      {
        v18 = (v17 & 1) == 0;
LABEL_21:
        if ( !v18 )
          v17 |= 0x8000000000000000uLL;
      }
    }
    *(_QWORD *)a2 = v17;
    if ( !(_DWORD)v15 )
      goto LABEL_26;
    MiWritePteShadow(a2);
LABEL_25:
    v12 = 0xFFFFF68000000000uLL;
LABEL_26:
    if ( a3 == 3 )
      goto LABEL_28;
    goto LABEL_27;
  }
  for ( i = 0LL; i < v13; ++i )
    *(_QWORD *)(a2 + 8 * i) = ZeroPte;
LABEL_27:
  UsedPtesHandle = MiGetUsedPtesHandle((__int64)((a2 << 25) - (v12 << 25)) >> 16);
  MiDecreaseUsedPtesCount(UsedPtesHandle, (unsigned int)v13);
LABEL_28:
  result = 0xFFFFFA8000000000uLL;
  v21 = 48 * v10 - 0x58000000000LL;
  if ( v9 )
  {
    v22 = *(_QWORD *)(a1 + 8);
    if ( a3 )
      result = MiInsertLargeTbFlushEntry(v22, a3, a2);
    else
      result = MiInsertTbFlushEntry(v22, (__int64)(a2 << 25) >> 16, v13, 0);
  }
  if ( !v14 && (*(_QWORD *)(v21 + 40) & 0x200000000000000LL) == 0 )
  {
    v26 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v21 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v26);
      while ( *(__int64 *)(v21 + 24) < 0 );
    }
    v23 = *(_BYTE *)(v21 + 34);
    *(_QWORD *)(v21 + 8) &= ~0x8000000000000000uLL;
    *(_BYTE *)(v21 + 34) = v23 & 0xF8 | 5;
    result = MiInsertDpcGang(v3 + 80, v21, v15);
    *(_BYTE *)(v21 + 34) ^= (*(_BYTE *)(v21 + 34) ^ v24) & 7;
    _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  if ( (v25 & 0x400) != 0 && !a3 )
    *(_BYTE *)(a1 + 3) = 15;
  return result;
}
