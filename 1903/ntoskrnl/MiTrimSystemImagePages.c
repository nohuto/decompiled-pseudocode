/*
 * XREFs of MiTrimSystemImagePages @ 0x1400F6A48
 * Callers:
 *     MiSetPagingOfDriver @ 0x1400F661C (MiSetPagingOfDriver.c)
 * Callees:
 *     MiGetContainingPageTable @ 0x1400236B0 (MiGetContainingPageTable.c)
 *     MiPteInShadowRange @ 0x14002A860 (MiPteInShadowRange.c)
 *     MiMakeTransitionPte @ 0x14002C580 (MiMakeTransitionPte.c)
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     MiCaptureDirtyBitToPfn @ 0x14005C184 (MiCaptureDirtyBitToPfn.c)
 *     MiSwizzleInvalidPte @ 0x1400763F0 (MiSwizzleInvalidPte.c)
 *     MiReleasePageFileInfo @ 0x140088F50 (MiReleasePageFileInfo.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiDecrementShareCount @ 0x1400DBB10 (MiDecrementShareCount.c)
 *     MiWritePteShadow @ 0x1401223FC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14012245C (MiPteHasShadow.c)
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
  __int64 v15; // rcx
  int v16; // r8d
  unsigned __int64 v17; // rbx
  volatile signed __int32 *v18; // rdi
  char v19; // r9
  unsigned __int64 ContainingPageTable; // r14
  __int64 v22; // rax
  __int64 v23; // r9
  bool v24; // zf
  int v25; // [rsp+60h] [rbp+8h] BYREF
  unsigned __int64 v26; // [rsp+68h] [rbp+10h] BYREF
  int v27; // [rsp+70h] [rbp+18h] BYREF

  v27 = a3;
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
    v26 = v6 & 0xFFFFFFFFFFFFFBFEuLL | 1;
    v7 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v26);
    v10 = v9 + 48 * (v8 & (v7 >> 12));
    if ( (*(_QWORD *)(v10 + 40) & 0x200000000000000LL) != 0 )
    {
      MiSwizzleInvalidPte((*(_QWORD *)(v10 + 8) << 16) | 0x400LL);
    }
    else
    {
      v11 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v26);
      MiMakeTransitionPte(v12 & (v11 >> 12), v13);
    }
    if ( !MiPteInShadowRange((unsigned __int64)v5) )
    {
LABEL_7:
      *v5 = v14;
      if ( v16 )
        MiWritePteShadow(v5, v14);
      v17 = 0LL;
      v18 = (volatile signed __int32 *)(v10 + 24);
      v27 = 0;
      while ( _interlockedbittestandset64(v18, 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v27);
        while ( *(__int64 *)v18 < 0 );
      }
      *(_BYTE *)(v10 + 35) &= ~8u;
      v19 = *(_BYTE *)(v10 + 35);
      if ( (v26 & 0x42) != 0 )
      {
        v22 = MiCaptureDirtyBitToPfn(v10);
        v19 = *(_BYTE *)(v10 + 35);
        v17 = v22;
      }
      if ( (*(_QWORD *)(v10 + 40) & 0x200000000000000LL) != 0 )
        ContainingPageTable = MiGetContainingPageTable((unsigned __int64)v5);
      else
        ContainingPageTable = -1LL;
      *(_BYTE *)(v10 + 35) = v19 & 0xF8 | 2;
      MiDecrementShareCount(v10);
      if ( ContainingPageTable != -1LL )
      {
        _InterlockedAnd64((volatile signed __int64 *)v18, 0x7FFFFFFFFFFFFFFFuLL);
        v25 = 0;
        v18 = (volatile signed __int32 *)(48 * ContainingPageTable - 0x58000000000LL + 24);
        while ( _interlockedbittestandset64(v18, 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v25);
          while ( *(__int64 *)v18 < 0 );
        }
        MiDecrementShareCount(48 * ContainingPageTable - 0x58000000000LL);
      }
      _InterlockedAnd64((volatile signed __int64 *)v18, 0x7FFFFFFFFFFFFFFFuLL);
      if ( v17 )
        MiReleasePageFileInfo((__int64)&MiSystemPartition, v17, 1);
      ++v3;
      goto LABEL_19;
    }
    if ( (unsigned int)MiPteHasShadow(v15) )
    {
      v16 = 1;
      if ( HIBYTE(word_140465BEC) )
        goto LABEL_7;
      v24 = (v14 & 1) == 0;
    }
    else
    {
      if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) == 0 )
        goto LABEL_7;
      v24 = (v14 & 1) == 0;
    }
    if ( !v24 )
      v14 |= v23;
    goto LABEL_7;
  }
  return v3;
}
