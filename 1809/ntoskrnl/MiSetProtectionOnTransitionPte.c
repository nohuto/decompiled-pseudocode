/*
 * XREFs of MiSetProtectionOnTransitionPte @ 0x140093AF8
 * Callers:
 *     MiProtectPrivateMemory @ 0x140070DB0 (MiProtectPrivateMemory.c)
 *     MiSetProtectionOnSection @ 0x140071E70 (MiSetProtectionOnSection.c)
 *     MiSetReadOnlyOnSectionView @ 0x140085AF0 (MiSetReadOnlyOnSectionView.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiSanitizePfnProtection @ 0x140074040 (MiSanitizePfnProtection.c)
 *     MiLockTransitionLeafPage @ 0x140095684 (MiLockTransitionLeafPage.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 */

__int64 __fastcall MiSetProtectionOnTransitionPte(__int64 a1, _QWORD *a2, unsigned int a3, int a4)
{
  unsigned int v8; // ebx
  __int64 v9; // r11
  char v10; // al
  __int64 v11; // r10
  __int64 v12; // r11
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r9
  bool v17; // zf

  v8 = 0;
  if ( MiLockTransitionLeafPage((ULONG_PTR)a2) )
  {
    MI_READ_PTE_LOCK_FREE((unsigned __int64)a2);
    if ( !a4 && *(_WORD *)(v9 + 32) )
    {
      v8 = 1;
LABEL_6:
      _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      return v8;
    }
    v10 = MiSanitizePfnProtection(a1, (*(_QWORD *)(v9 + 16) >> 5) & 0x1F, a3);
    *(_QWORD *)(v12 + 16) = (32LL * (v10 & 0x1F)) | v11 & 0xFFFFFFFFFFFFFC1FuLL;
    if ( !MiPteInShadowRange((unsigned __int64)a2) )
    {
LABEL_4:
      *a2 = v15;
      if ( (_DWORD)v13 )
        MiWritePteShadow(a2);
      goto LABEL_6;
    }
    if ( (unsigned int)MiPteHasShadow(v14, v13) )
    {
      LODWORD(v13) = 1;
      if ( HIBYTE(word_14043B26C) )
        goto LABEL_4;
      v17 = (v15 & 1) == 0;
    }
    else
    {
      if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) == 0 )
        goto LABEL_4;
      v17 = (v15 & 1) == 0;
    }
    if ( !v17 )
      v15 |= 0x8000000000000000uLL;
    goto LABEL_4;
  }
  return 2LL;
}
