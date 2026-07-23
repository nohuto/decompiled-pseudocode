/*
 * XREFs of MiInvalidateCollidedIos @ 0x140117DB8
 * Callers:
 *     MiFinishHardFault @ 0x14002E010 (MiFinishHardFault.c)
 *     MiDeleteTransitionPte @ 0x140095370 (MiDeleteTransitionPte.c)
 *     MmPurgeSection @ 0x1400E7D80 (MmPurgeSection.c)
 *     MiPurgeImageSection @ 0x140176720 (MiPurgeImageSection.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiReleaseInPageRefs @ 0x140118018 (MiReleaseInPageRefs.c)
 *     MiUpdateTransitionPteFrame @ 0x140118A14 (MiUpdateTransitionPteFrame.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 */

__int64 __fastcall MiInvalidateCollidedIos(__int64 a1)
{
  unsigned int v2; // r15d
  _QWORD *v3; // rdi
  __int64 v4; // r14
  _QWORD *v5; // r14
  _QWORD *v6; // rsi
  __int64 v7; // rax
  _QWORD *v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rdx
  _QWORD *v11; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  _QWORD *v15; // rdx
  __int64 v16; // r11
  __int64 v17; // rsi
  __int64 v18; // rdx
  _QWORD *v19; // r8
  unsigned __int64 v20; // r9
  __int64 v21; // rcx
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // r10
  unsigned __int64 v24; // rax
  __int64 v25; // rbx
  __int64 v26; // rax
  __int64 v27; // r11
  __int64 v28; // rdx
  __int64 v29; // rcx
  int v30; // r8d
  __int64 v31; // r11
  bool v32; // zf

  v2 = 1;
  if ( (*(_DWORD *)(a1 + 192) & 0x10) != 0 )
  {
    v13 = a1 + 16;
    v14 = *(_QWORD *)(a1 + 16);
    if ( *(_QWORD *)(v14 + 8) != v13 || (v15 = *(_QWORD **)(v13 + 8), *v15 != v13) )
LABEL_35:
      __fastfail(3u);
    *v15 = v14;
    *(_QWORD *)(v14 + 8) = v15;
    v16 = *(_QWORD *)(a1 + 320);
    v17 = 6 * v16;
    v4 = *(_QWORD *)(a1 + 328);
    v3 = (_QWORD *)(*(_QWORD *)(48 * v16 - 0x57FFFFFFFF8LL) | 0x8000000000000000uLL);
    v18 = v4 + 272;
    if ( *(_QWORD *)(v4 + 256) )
      v18 = *(_QWORD *)(v4 + 256);
    v19 = (_QWORD *)(v18 + 48);
    v20 = (((*(_DWORD *)(v18 + 32) + *(_DWORD *)(v18 + 44)) & 0xFFF)
         + (unsigned __int64)*(unsigned int *)(v18 + 40)
         + 4095) >> 12;
    v21 = 6LL * *(_QWORD *)(v18 + 48);
    v22 = v18 + 40 + 8 * v20;
    v2 = 0;
    v23 = *(_QWORD *)(8 * v21 - 0x58000000000LL + 8) | 0x8000000000000000uLL;
    if ( (unsigned __int64)v3 < v23
      || (v24 = (__int64)((__int64)v3 - v23) >> 3, v24 >= v20)
      || (v25 = 48LL * v19[v24] - 0x58000000000LL, v3 != (_QWORD *)(*(_QWORD *)(v25 + 8) | 0x8000000000000000uLL)) )
    {
      while ( (unsigned __int64)v19 <= v22 )
      {
        v25 = 48LL * *v19 - 0x58000000000LL;
        if ( (_QWORD *)(*(_QWORD *)(v25 + 8) | 0x8000000000000000uLL) == v3 )
          goto LABEL_17;
        ++v19;
      }
      v25 = 48 * v16 - 0x58000000000LL;
      *(_DWORD *)(v4 + 180) = 1;
      goto LABEL_21;
    }
LABEL_17:
    v26 = MI_READ_PTE_LOCK_FREE(*(_QWORD *)(48 * v16 - 0x57FFFFFFFF8LL) | 0x8000000000000000uLL);
    MiUpdateTransitionPteFrame(v26, v27);
    if ( !MiPteInShadowRange((unsigned __int64)v3) )
    {
LABEL_18:
      *v3 = v28;
      if ( v30 )
        MiWritePteShadow(v3);
      *(_QWORD *)(a1 + 168) = v31;
      v2 = 1;
      *(_QWORD *)(8 * v17 - 0x58000000000LL + 16) ^= (*(_DWORD *)(8 * v17 - 0x58000000000LL + 16) ^ *(_DWORD *)(v25 + 16)) & 0x3E0;
LABEL_21:
      MiReleaseInPageRefs(v25);
      goto LABEL_3;
    }
    if ( (unsigned int)MiPteHasShadow(v29, v28) )
    {
      v30 = 1;
      if ( HIBYTE(word_14043B26C) )
        goto LABEL_18;
      v32 = (v31 & 1) == 0;
    }
    else
    {
      if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) == 0 )
        goto LABEL_18;
      v32 = (v31 & 1) == 0;
    }
    if ( !v32 )
      v28 |= 0x8000000000000000uLL;
    goto LABEL_18;
  }
  v3 = 0LL;
  v4 = a1;
LABEL_3:
  v5 = (_QWORD *)(v4 + 16);
  v6 = (_QWORD *)*v5;
  while ( v6 != v5 )
  {
    v7 = v6[38];
    v8 = v6;
    v6 = (_QWORD *)*v6;
    v9 = 48 * v7 - 0x58000000000LL;
    if ( (*(_DWORD *)(a1 + 192) & 0x10) == 0 || (_QWORD *)(*(_QWORD *)(v9 + 8) | 0x8000000000000000uLL) == v3 )
    {
      MiReleaseInPageRefs(v9);
      v10 = *v8;
      if ( *(_QWORD **)(*v8 + 8LL) != v8 )
        goto LABEL_35;
      v11 = (_QWORD *)v8[1];
      if ( (_QWORD *)*v11 != v8 )
        goto LABEL_35;
      *v11 = v10;
      *(_QWORD *)(v10 + 8) = v11;
      v8[1] = v8;
      *v8 = v8;
    }
  }
  return v2;
}
