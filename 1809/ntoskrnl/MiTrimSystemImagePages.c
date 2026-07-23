/*
 * XREFs of MiTrimSystemImagePages @ 0x1400DB254
 * Callers:
 *     MiSetPagingOfDriver @ 0x1400DAE7C (MiSetPagingOfDriver.c)
 * Callees:
 *     MiReleasePageFileInfo @ 0x14002A628 (MiReleasePageFileInfo.c)
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MiSwizzleInvalidPte @ 0x14003D7C0 (MiSwizzleInvalidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     MiGetContainingPageTable @ 0x140079840 (MiGetContainingPageTable.c)
 *     MiDecrementShareCount @ 0x140081E90 (MiDecrementShareCount.c)
 *     MiCaptureDirtyBitToPfn @ 0x140087900 (MiCaptureDirtyBitToPfn.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 */

__int64 __fastcall MiTrimSystemImagePages(__int64 *a1, unsigned __int64 a2, int a3)
{
  __int64 v3; // r15
  __int64 *v5; // rsi
  __int64 v6; // rax
  unsigned __int64 v7; // rax
  __int64 v8; // r10
  ULONG_PTR v9; // rbp
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  unsigned __int64 v14; // rbx
  volatile signed __int32 *v15; // rdi
  char v16; // r11
  __int64 ContainingPageTable; // r14
  __int64 v18; // rdx
  __int64 v19; // r8
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
    v9 = v8 + 48 * ((v7 >> 12) & 0xFFFFFFFFFLL);
    if ( (*(_QWORD *)(v9 + 40) & 0x200000000000000LL) != 0 )
    {
      MiSwizzleInvalidPte((*(_QWORD *)(v9 + 8) << 16) | 0x400LL);
    }
    else
    {
      v10 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v25);
      MiSwizzleInvalidPte(v10 & 0xFFFFFFFFF000LL | (32 * ((*(_DWORD *)(v9 + 16) >> 5) & 0x1F | 0x40LL)));
    }
    if ( !MiPteInShadowRange((unsigned __int64)v5) )
    {
LABEL_7:
      *v5 = v11;
      if ( (_DWORD)v13 )
        MiWritePteShadow(v5);
      v14 = 0LL;
      v15 = (volatile signed __int32 *)(v9 + 24);
      v26 = 0;
      while ( _interlockedbittestandset64(v15, 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v26, v11, v13);
        while ( *(__int64 *)v15 < 0 );
      }
      *(_BYTE *)(v9 + 35) &= ~8u;
      v16 = *(_BYTE *)(v9 + 35);
      if ( (v25 & 0x42) != 0 )
      {
        v21 = MiCaptureDirtyBitToPfn(v9);
        v16 = *(_BYTE *)(v9 + 35);
        v14 = v21;
      }
      if ( (*(_QWORD *)(v9 + 40) & 0x200000000000000LL) != 0 )
        ContainingPageTable = MiGetContainingPageTable((unsigned __int64)v5);
      else
        ContainingPageTable = -1LL;
      *(_BYTE *)(v9 + 35) = v16 & 0xF8 | 2;
      MiDecrementShareCount(v9);
      if ( ContainingPageTable != -1 )
      {
        _InterlockedAnd64((volatile signed __int64 *)v15, 0x7FFFFFFFFFFFFFFFuLL);
        v24 = 0;
        v15 = (volatile signed __int32 *)(48 * ContainingPageTable - 0x58000000000LL + 24);
        while ( _interlockedbittestandset64(v15, 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v24, v18, v19);
          while ( *(__int64 *)v15 < 0 );
        }
        MiDecrementShareCount(48 * ContainingPageTable - 0x58000000000LL);
      }
      _InterlockedAnd64((volatile signed __int64 *)v15, 0x7FFFFFFFFFFFFFFFuLL);
      if ( v14 )
        MiReleasePageFileInfo((struct _KEVENT *)&MiSystemPartition, v14, 1);
      ++v3;
      goto LABEL_19;
    }
    if ( (unsigned int)MiPteHasShadow(v12, v11) )
    {
      v13 = 1LL;
      if ( HIBYTE(word_14043B26C) )
        goto LABEL_7;
      v23 = (v11 & 1) == 0;
    }
    else
    {
      if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) == 0 )
        goto LABEL_7;
      v23 = (v11 & 1) == 0;
    }
    if ( !v23 )
      v11 |= v22;
    goto LABEL_7;
  }
  return v3;
}
