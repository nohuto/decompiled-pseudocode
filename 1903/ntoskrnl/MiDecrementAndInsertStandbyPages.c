/*
 * XREFs of MiDecrementAndInsertStandbyPages @ 0x14002C330
 * Callers:
 *     MmUnmapViewInSystemCache @ 0x140070300 (MmUnmapViewInSystemCache.c)
 * Callees:
 *     MiInsertAndUnlockStandbyPages @ 0x140025F10 (MiInsertAndUnlockStandbyPages.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x140026A60 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x14002A860 (MiPteInShadowRange.c)
 *     MiGetUltraMapping @ 0x14002A890 (MiGetUltraMapping.c)
 *     MiMakeValidPte @ 0x14002AC60 (MiMakeValidPte.c)
 *     MiMakeTransitionPte @ 0x14002C580 (MiMakeTransitionPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiSetNonResidentPteHeat @ 0x1400DBAC0 (MiSetNonResidentPteHeat.c)
 *     MiWritePteShadow @ 0x1401223FC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14012245C (MiPteHasShadow.c)
 */

void __fastcall MiDecrementAndInsertStandbyPages(__int64 *a1, unsigned int a2, unsigned __int8 a3)
{
  __int16 v3; // r8
  unsigned __int64 v4; // r13
  __int64 *v5; // rax
  unsigned __int64 v6; // rbp
  __int64 v7; // r9
  char v8; // al
  __int64 v9; // r12
  unsigned __int64 v10; // rax
  __int64 v11; // r9
  unsigned __int64 v12; // r14
  __int64 v13; // r10
  __int64 v14; // rdx
  int v15; // r8d
  __int64 v16; // rdi
  __int64 v17; // r11
  int v18; // eax
  unsigned __int64 ValidPte; // rax
  struct _KPRCB *CurrentPrcb; // r15
  unsigned __int64 v21; // rbx
  unsigned __int64 *MmInternal; // rsi
  unsigned __int64 UltraMapping; // rax
  unsigned __int64 v24; // r8
  __int64 v25; // rcx
  unsigned __int64 *v26; // r8
  __int64 v27; // r11
  unsigned __int64 v28; // rax
  __int64 v29; // r8
  unsigned __int64 v30; // r11
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 *v33; // r11
  __int16 v34; // dx
  char v35; // r8
  unsigned int v37; // [rsp+78h] [rbp+10h]
  __int64 TransitionPte; // [rsp+88h] [rbp+20h] BYREF

  v37 = a2;
  v3 = 0;
  v4 = a2;
  v5 = a1;
  v6 = 0LL;
  if ( a2 )
  {
    while ( 1 )
    {
      v7 = v5[v6];
      v8 = *(_BYTE *)(v7 + 34);
      v9 = v7 + 16;
      *(_QWORD *)(v7 + 24) &= 0xC000000000000000uLL;
      *(_WORD *)(v7 + 32) = v3;
      *(_BYTE *)(v7 + 34) = v8 & 0xF8 | 2;
      v10 = MI_READ_PTE_LOCK_FREE(v7 + 16);
      v12 = *(_QWORD *)(v11 + 8);
      v14 = v13 & *(_QWORD *)(v11 + 40);
      v15 = 4;
      v16 = (v10 >> 5) & 0x1F;
      v18 = *(unsigned __int8 *)(v17 + 48 * v14 + 34) >> 6;
      if ( !v18 || v18 == 3 )
      {
        v15 = 12;
      }
      else if ( v18 == 2 )
      {
        v15 = 28;
      }
      ValidPte = MiMakeValidPte(0LL, v14, v15 | 0xA0000000);
      CurrentPrcb = KeGetCurrentPrcb();
      v21 = ValidPte;
      MmInternal = (unsigned __int64 *)CurrentPrcb->MmInternal;
      if ( !MmInternal
        || (UltraMapping = MiGetUltraMapping(MmInternal + 1556, 3u, 1LL, 0),
            v24 = ((UltraMapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
            MmInternal[1543] = v24,
            !UltraMapping) )
      {
        v24 = (((((unsigned __int64)CurrentPrcb->HyperPte & 0xFFFFFFFFFFFFF000uLL)
               + (((__int64)CurrentPrcb->HyperPte & 0xFFF) << 12)) >> 9) & 0x7FFFFFFFF8LL)
            - 0x98000000000LL;
      }
      if ( !MiPteInShadowRange(v24) )
        goto LABEL_9;
      if ( !(unsigned int)MiPteHasShadow(v25) )
        break;
      if ( !HIBYTE(word_140465BEC) && (v21 & 1) != 0 )
        v21 |= 0x8000000000000000uLL;
      *v26 = v21;
      MiWritePteShadow(v26, v21);
LABEL_10:
      TransitionPte = MI_READ_PTE_LOCK_FREE(v27 + 8 * ((v12 >> 3) & 0x1FF));
      v28 = MI_READ_PTE_LOCK_FREE(&TransitionPte);
      TransitionPte = MiMakeTransitionPte((v28 >> 12) & 0xFFFFFFFFFLL, (unsigned int)v16, v29);
      if ( MiPteInShadowRange(v30) )
      {
        if ( (unsigned int)MiPteHasShadow(v32) )
        {
          if ( !HIBYTE(word_140465BEC) && (v35 & 1) != 0 )
            v31 |= 0x8000000000000000uLL;
          *v33 = v31;
          MiWritePteShadow(v33, v31);
          goto LABEL_12;
        }
        if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0
          && (v35 & 1) != 0 )
        {
          v31 |= 0x8000000000000000uLL;
        }
      }
      *v33 = v31;
LABEL_12:
      LOBYTE(v31) = 17;
      MiUnmapPageInHyperSpaceWorker((unsigned __int64)v33, v31, 0x80000000LL);
      MiSetNonResidentPteHeat(v9, 0LL);
      v5 = a1;
      ++v6;
      v3 = v34;
      if ( v6 >= v4 )
      {
        a2 = v37;
        goto LABEL_14;
      }
    }
    if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0
      && (v21 & 1) != 0 )
    {
      v21 |= 0x8000000000000000uLL;
    }
LABEL_9:
    *v26 = v21;
    goto LABEL_10;
  }
LABEL_14:
  MiInsertAndUnlockStandbyPages(0LL, v5, a2, a3);
}
