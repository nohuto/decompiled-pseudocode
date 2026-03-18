/*
 * XREFs of MiTrimSystemImagePages @ 0x1400FA4E8
 * Callers:
 *     MiSetPagingOfDriver @ 0x1400FA0BC (MiSetPagingOfDriver.c)
 * Callees:
 *     MiGetContainingPageTable @ 0x140023AA0 (MiGetContainingPageTable.c)
 *     MiPteInShadowRange @ 0x14002AC50 (MiPteInShadowRange.c)
 *     MiMakeTransitionPte @ 0x14002C970 (MiMakeTransitionPte.c)
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     MiCaptureDirtyBitToPfn @ 0x14005C224 (MiCaptureDirtyBitToPfn.c)
 *     MiSwizzleInvalidPte @ 0x140076660 (MiSwizzleInvalidPte.c)
 *     MiReleasePageFileInfo @ 0x14008A250 (MiReleasePageFileInfo.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     MiDecrementShareCount @ 0x1400BB990 (MiDecrementShareCount.c)
 *     MiWritePteShadow @ 0x1400F8750 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1400F87B0 (MiPteHasShadow.c)
 */

__int64 __fastcall MiTrimSystemImagePages(_QWORD *a1, unsigned __int64 a2, int a3)
{
  __int64 v3; // r15
  _QWORD *v5; // rsi
  __int64 v6; // rax
  unsigned __int64 v7; // rax
  __int64 v8; // r11
  __int64 v9; // r10
  ULONG_PTR v10; // rbp
  unsigned __int64 v11; // rax
  __int64 v12; // r11
  char v13; // r9
  __int64 v14; // rdx
  int v15; // r8d
  unsigned __int64 v16; // rbx
  volatile signed __int32 *v17; // rdi
  char v18; // r9
  unsigned __int64 ContainingPageTable; // r14
  __int64 v21; // rax
  __int64 v22; // r9
  bool v23; // zf
  int v24; // [rsp+60h] [rbp+8h] BYREF
  unsigned __int64 v25; // [rsp+68h] [rbp+10h] BYREF
  int v26; // [rsp+70h] [rbp+18h] BYREF

  v26 = a3;
  v3 = 0LL;
  v5 = a1;
  if ( (unsigned __int64)a1 <= a2 )
  {
    while ( 1 )
    {
      v6 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v5);
      if ( (v6 & 1) == 0 && (v6 & 0x400) != 0 )
        break;
LABEL_19:
      if ( (unsigned __int64)++v5 > a2 )
        return v3;
    }
    v25 = v6 & 0xFFFFFFFFFFFFFBFEuLL | 1;
    v7 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v25);
    v10 = v9 + 48 * (v8 & (v7 >> 12));
    if ( (*(_QWORD *)(v10 + 40) & 0x200000000000000LL) != 0 )
    {
      MiSwizzleInvalidPte((*(_QWORD *)(v10 + 8) << 16) | 0x400LL);
    }
    else
    {
      v11 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v25);
      MiMakeTransitionPte(v12 & (v11 >> 12), v13);
    }
    if ( !MiPteInShadowRange((unsigned __int64)v5) )
    {
LABEL_7:
      *v5 = v14;
      if ( v15 )
        MiWritePteShadow((__int64)v5);
      v16 = 0LL;
      v17 = (volatile signed __int32 *)(v10 + 24);
      v26 = 0;
      while ( _interlockedbittestandset64(v17, 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v26);
        while ( *(__int64 *)v17 < 0 );
      }
      *(_BYTE *)(v10 + 35) &= ~8u;
      v18 = *(_BYTE *)(v10 + 35);
      if ( (v25 & 0x42) != 0 )
      {
        v21 = MiCaptureDirtyBitToPfn(v10);
        v18 = *(_BYTE *)(v10 + 35);
        v16 = v21;
      }
      if ( (*(_QWORD *)(v10 + 40) & 0x200000000000000LL) != 0 )
        ContainingPageTable = MiGetContainingPageTable((unsigned __int64)v5);
      else
        ContainingPageTable = -1LL;
      *(_BYTE *)(v10 + 35) = v18 & 0xF8 | 2;
      MiDecrementShareCount(v10);
      if ( ContainingPageTable != -1LL )
      {
        _InterlockedAnd64((volatile signed __int64 *)v17, 0x7FFFFFFFFFFFFFFFuLL);
        v24 = 0;
        v17 = (volatile signed __int32 *)(48 * ContainingPageTable - 0x58000000000LL + 24);
        while ( _interlockedbittestandset64(v17, 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v24);
          while ( *(__int64 *)v17 < 0 );
        }
        MiDecrementShareCount(48 * ContainingPageTable - 0x58000000000LL);
      }
      _InterlockedAnd64((volatile signed __int64 *)v17, 0x7FFFFFFFFFFFFFFFuLL);
      if ( v16 )
        MiReleasePageFileInfo((__int64)&MiSystemPartition, v16, 1);
      ++v3;
      goto LABEL_19;
    }
    if ( (unsigned int)MiPteHasShadow() )
    {
      v15 = 1;
      if ( HIBYTE(word_1404658EC) )
        goto LABEL_7;
      v23 = (v14 & 1) == 0;
    }
    else
    {
      if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) == 0 )
        goto LABEL_7;
      v23 = (v14 & 1) == 0;
    }
    if ( !v23 )
      v14 |= v22;
    goto LABEL_7;
  }
  return v3;
}
