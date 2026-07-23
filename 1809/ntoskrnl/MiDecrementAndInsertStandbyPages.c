/*
 * XREFs of MiDecrementAndInsertStandbyPages @ 0x14003D440
 * Callers:
 *     MmUnmapViewInSystemCache @ 0x140078700 (MmUnmapViewInSystemCache.c)
 * Callees:
 *     MiInsertAndUnlockStandbyPages @ 0x140036060 (MiInsertAndUnlockStandbyPages.c)
 *     MiGetUltraMapping @ 0x14003A740 (MiGetUltraMapping.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x14003AB00 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MiSwizzleInvalidPte @ 0x14003D7C0 (MiSwizzleInvalidPte.c)
 *     MiMakeValidPte @ 0x14003D7F0 (MiMakeValidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiSetNonResidentPteHeat @ 0x140081E40 (MiSetNonResidentPteHeat.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 */

__int64 __fastcall MiDecrementAndInsertStandbyPages(__int64 *a1, unsigned int a2, __int64 a3)
{
  unsigned int v3; // eax
  __int64 *v4; // rdx
  unsigned __int64 v5; // r15
  unsigned __int64 v6; // r13
  __int16 v7; // r9
  __int64 v8; // r8
  unsigned __int64 v9; // r12
  char v10; // al
  unsigned __int64 v11; // rdi
  __int64 v12; // r8
  __int64 v13; // r10
  __int64 v14; // r11
  unsigned __int64 v15; // rsi
  __int64 v16; // rdx
  unsigned __int64 v17; // rdi
  int v18; // r8d
  int v19; // eax
  __int64 ValidPte; // rax
  __int64 v21; // rdx
  unsigned __int64 v22; // rcx
  struct _KPRCB *CurrentPrcb; // r14
  __int64 v24; // rbx
  unsigned __int64 *MmInternal; // rbp
  unsigned __int64 UltraMapping; // r11
  __int64 *v27; // r8
  __int64 v28; // rax
  unsigned __int64 v29; // rdx
  __int64 v30; // rcx
  unsigned __int64 *v31; // r11
  unsigned __int64 v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rdx
  unsigned __int64 v37; // r9
  __int64 v38; // rcx
  unsigned __int64 v40; // rax
  _QWORD v41[3]; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int8 v44; // [rsp+90h] [rbp+18h]
  int v45; // [rsp+98h] [rbp+20h]

  v44 = a3;
  v3 = a2;
  v4 = a1;
  v5 = 0LL;
  v6 = v3;
  if ( v3 )
  {
    v45 = MiPteInShadowRange(v41, a1, a3);
    while ( 1 )
    {
      v8 = v4[v5];
      v9 = v8 + 16;
      v10 = *(_BYTE *)(v8 + 34);
      *(_QWORD *)(v8 + 24) &= 0xC000000000000000uLL;
      *(_WORD *)(v8 + 32) = v7;
      *(_BYTE *)(v8 + 34) = v10 & 0xF8 | 2;
      v11 = *(_QWORD *)(v8 + 16);
      if ( (unsigned int)MiPteInShadowRange(v8 + 16, v4, v8)
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v11 & 1) != 0
        && ((v11 & 0x20) == 0 || (v11 & 0x42) == 0) )
      {
        v33 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
        if ( v33 )
        {
          v34 = *(_QWORD *)(v33 + 8 * ((v9 >> 3) & 0x1FF));
          v35 = v11 | 0x20;
          if ( (v34 & 0x20) == 0 )
            v35 = v11;
          v11 = v35;
          if ( (v34 & 0x42) != 0 )
            v11 = v35 | 0x42;
        }
      }
      v15 = *(_QWORD *)(v12 + 8);
      v16 = v14 & *(_QWORD *)(v12 + 40);
      v17 = v11 >> 5;
      v18 = 4;
      v19 = *(unsigned __int8 *)(v13 + 48 * v16 + 34) >> 6;
      if ( !v19 || v19 == 3 )
      {
        v18 = 12;
      }
      else if ( v19 == 2 )
      {
        v18 = 28;
      }
      ValidPte = MiMakeValidPte(0LL, v16, v18 | 0xA0000000);
      CurrentPrcb = KeGetCurrentPrcb();
      v24 = ValidPte;
      MmInternal = (unsigned __int64 *)CurrentPrcb->MmInternal;
      if ( !MmInternal
        || (UltraMapping = MiGetUltraMapping(MmInternal + 1556, 3u, 1LL, 0),
            v22 = 0xFFFFF68000000000uLL,
            v27 = (__int64 *)(((UltraMapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL),
            MmInternal[1543] = (unsigned __int64)v27,
            !UltraMapping) )
      {
        UltraMapping = ((unsigned __int64)CurrentPrcb->HyperPte & 0xFFFFFFFFFFFFF000uLL)
                     + (((__int64)CurrentPrcb->HyperPte & 0xFFF) << 12);
        v27 = (__int64 *)(((UltraMapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      }
      if ( (unsigned __int64)v27 < 0xFFFFF6FB7DBED000uLL || (unsigned __int64)v27 > 0xFFFFF6FB7DBED7F8uLL )
        goto LABEL_11;
      if ( !(unsigned int)MiPteHasShadow(v22, v21) )
        break;
      if ( !HIBYTE(word_14043B26C) && (v24 & 1) != 0 )
        v24 |= 0x8000000000000000uLL;
      *v27 = v24;
      MiWritePteShadow(v27);
LABEL_12:
      v28 = MI_READ_PTE_LOCK_FREE(UltraMapping + 8 * ((v15 >> 3) & 0x1FF));
      v41[0] = v28;
      if ( v45
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v28 & 1) != 0
        && ((v28 & 0x20) == 0 || (v28 & 0x42) == 0) )
      {
        v37 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
        if ( v37 )
        {
          v38 = *(_QWORD *)(v37 + 8 * (((unsigned __int64)v41 >> 3) & 0x1FF));
          if ( (v38 & 0x20) != 0 )
            v28 |= 0x20uLL;
          if ( (v38 & 0x42) != 0 )
            v28 |= 0x42uLL;
        }
        else
        {
          v28 = v41[0];
        }
      }
      v29 = MiSwizzleInvalidPte(v28 & 0xFFFFFFFFF000LL | (32 * (v17 & 0x1F | 0x40)));
      v41[0] = v29;
      if ( (unsigned __int64)v31 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v31 <= 0xFFFFF6FB7DBED7F8uLL )
      {
        if ( (unsigned int)MiPteHasShadow(v30, v29) )
        {
          v40 = v29;
          if ( !HIBYTE(word_14043B26C) && (v29 & 1) != 0 )
            v40 = v29 | 0x8000000000000000uLL;
          *v31 = v40;
          MiWritePteShadow(v31);
          goto LABEL_15;
        }
        if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0
          && (v41[0] & 1) != 0 )
        {
          v29 = v41[0] | 0x8000000000000000uLL;
        }
      }
      *v31 = v29;
LABEL_15:
      MiUnmapPageInHyperSpaceWorker((unsigned __int64)v31, 0x11u, 0x80000000LL);
      MiSetNonResidentPteHeat(v9, 0LL);
      v4 = a1;
      ++v5;
      v7 = 0;
      if ( v5 >= v6 )
      {
        v3 = a2;
        return MiInsertAndUnlockStandbyPages(0LL, v4, v3, v44);
      }
    }
    if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0
      && (v24 & 1) != 0 )
    {
      v24 |= 0x8000000000000000uLL;
    }
LABEL_11:
    *v27 = v24;
    goto LABEL_12;
  }
  return MiInsertAndUnlockStandbyPages(0LL, v4, v3, v44);
}
