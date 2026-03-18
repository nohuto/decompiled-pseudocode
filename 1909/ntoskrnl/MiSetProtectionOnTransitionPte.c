/*
 * XREFs of MiSetProtectionOnTransitionPte @ 0x14012B720
 * Callers:
 *     MiProtectPrivateMemory @ 0x140021350 (MiProtectPrivateMemory.c)
 *     MiSetReadOnlyOnSectionView @ 0x14002EA90 (MiSetReadOnlyOnSectionView.c)
 *     MiSetProtectionOnSection @ 0x14004E680 (MiSetProtectionOnSection.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14002AC50 (MiPteInShadowRange.c)
 *     MiMakeValidPte @ 0x14002B050 (MiMakeValidPte.c)
 *     MiSanitizePfnProtection @ 0x140050010 (MiSanitizePfnProtection.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     MiLockTransitionLeafPage @ 0x1400BD5EC (MiLockTransitionLeafPage.c)
 *     MiWritePteShadow @ 0x1400F8750 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1400F87B0 (MiPteHasShadow.c)
 */

__int64 __fastcall MiSetProtectionOnTransitionPte(__int64 a1, _QWORD *a2, unsigned int a3, int a4)
{
  unsigned __int64 v6; // rdx
  unsigned int v8; // ebx
  __int64 v9; // r11
  char v10; // al
  __int64 v11; // r10
  __int64 v12; // r11
  int v13; // edx
  __int64 v14; // r9
  unsigned __int64 v16; // r12
  __int64 v17; // r14
  unsigned int v18; // edx
  __int64 v19; // r15
  unsigned int v20; // r9d
  unsigned __int64 v21; // r14
  int v22; // eax
  int v23; // ecx
  unsigned __int64 v24; // r10
  __int64 v25; // rdx
  int v26; // r8d
  unsigned int v27; // [rsp+70h] [rbp+8h]

  v6 = *(unsigned int *)(a1 + 48);
  if ( (v6 & 0x500000) == 0x500000 )
  {
    v16 = 16LL;
    if ( MiVadPageSizes[(v6 >> 18) & 3] != 16 )
      v16 = 1LL;
    if ( a3 == 24 )
      return 0LL;
    v17 = 0LL;
    v27 = 0;
    v18 = 0;
    v19 = 0LL;
    while ( 1 )
    {
      if ( v19 )
      {
        ++v17;
      }
      else
      {
        v21 = MI_READ_PTE_LOCK_FREE((unsigned __int64)a2);
        if ( qword_140465800 )
        {
          if ( (v21 & 0x10) != 0 )
            v21 &= ~0x10uLL;
          else
            v21 &= ~qword_140465800;
        }
        v17 = (v21 >> 12) & 0xFFFFFFFFFLL;
        v22 = MiSanitizePfnProtection(a1, (*(_DWORD *)(48 * v17 - 0x57FFFFFFFF0LL) >> 5) & 0x1F, v20);
        v23 = v22 | 0x4000000;
        if ( v24 < 0x200 )
          v23 = v22;
        v18 = v23 | 0x80000000;
        if ( (*(_DWORD *)(a1 + 48) & 0x300000) == 0x300000 )
          v18 = v23;
        v27 = v18;
      }
      MiMakeValidPte((unsigned __int64)a2, v17, v18);
      if ( !MiPteInShadowRange((unsigned __int64)a2) )
        goto LABEL_30;
      if ( (unsigned int)MiPteHasShadow() )
      {
        v26 = 1;
        if ( !HIBYTE(word_1404658EC) )
          goto LABEL_28;
      }
      else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0 )
      {
LABEL_28:
        if ( (v25 & 1) != 0 )
          v25 |= 0x8000000000000000uLL;
      }
LABEL_30:
      *a2 = v25;
      if ( v26 )
        MiWritePteShadow((__int64)a2);
      v18 = v27;
      ++a2;
      if ( ++v19 >= v16 )
        return 0LL;
    }
  }
  v8 = 0;
  if ( MiLockTransitionLeafPage((ULONG_PTR)a2, 0LL) )
  {
    MI_READ_PTE_LOCK_FREE((unsigned __int64)a2);
    if ( !a4 && *(_WORD *)(v9 + 32) )
    {
      v8 = 1;
LABEL_7:
      _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      return v8;
    }
    v10 = MiSanitizePfnProtection(a1, (*(_QWORD *)(v9 + 16) >> 5) & 0x1F, a3);
    *(_QWORD *)(v12 + 16) = (32LL * (v10 & 0x1F)) | v11 & 0xFFFFFFFFFFFFFC1FuLL;
    if ( !MiPteInShadowRange((unsigned __int64)a2) )
    {
LABEL_5:
      *a2 = v14;
      if ( v13 )
        MiWritePteShadow((__int64)a2);
      goto LABEL_7;
    }
    if ( (unsigned int)MiPteHasShadow() )
    {
      v13 = 1;
      if ( HIBYTE(word_1404658EC) )
        goto LABEL_5;
    }
    else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) == 0 )
    {
      goto LABEL_5;
    }
    if ( (v14 & 1) != 0 )
      v14 |= 0x8000000000000000uLL;
    goto LABEL_5;
  }
  return 2LL;
}
