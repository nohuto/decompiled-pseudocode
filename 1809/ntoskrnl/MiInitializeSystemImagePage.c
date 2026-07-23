/*
 * XREFs of MiInitializeSystemImagePage @ 0x1409B9190
 * Callers:
 *     MiReloadBootLoadedDrivers @ 0x1409B8C6C (MiReloadBootLoadedDrivers.c)
 * Callees:
 *     MiMarkPfnVerified @ 0x14000F960 (MiMarkPfnVerified.c)
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MiSwizzleInvalidPte @ 0x14003D7C0 (MiSwizzleInvalidPte.c)
 *     MiMakeValidPte @ 0x14003D7F0 (MiMakeValidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiCopyPage @ 0x1400B1B90 (MiCopyPage.c)
 *     MiInitializePfn @ 0x1401094B0 (MiInitializePfn.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     KeSetPagePrivilege @ 0x14028DE10 (KeSetPagePrivilege.c)
 */

char __fastcall MiInitializeSystemImagePage(ULONG_PTR a1, unsigned __int64 a2, unsigned __int64 a3)
{
  ULONG_PTR v5; // r14
  __int64 v6; // r15
  unsigned int v7; // edi
  __int64 v8; // rdx
  int v9; // r8d
  BOOL v10; // r12d
  struct _KTHREAD *ValidPte; // rax
  int v12; // r9d
  __int64 v13; // rdx
  __int64 v14; // r9
  bool v15; // zf
  char v16; // r8
  bool v17; // zf
  __int128 v19; // [rsp+20h] [rbp-38h] BYREF
  __int64 v20; // [rsp+60h] [rbp+8h] BYREF

  v20 = MI_READ_PTE_LOCK_FREE(a3);
  v5 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v20) >> 12) & 0xFFFFFFFFFLL;
  v6 = 48 * v5 - 0x58000000000LL;
  v7 = (*(_DWORD *)(v6 + 16) >> 5) & 0x1F;
  MiSwizzleInvalidPte(32LL * v7);
  v10 = MiPteInShadowRange(a2);
  if ( v10 )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v9 = 1;
      if ( HIBYTE(word_14043B26C) )
        goto LABEL_2;
      v15 = (v8 & 1) == 0;
    }
    else
    {
      if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) == 0 )
        goto LABEL_2;
      v15 = (v8 & 1) == 0;
    }
    if ( !v15 )
      v8 |= v14;
  }
LABEL_2:
  *(_QWORD *)a2 = v8;
  if ( v9 )
    MiWritePteShadow(a2, v8);
  MiInitializePfn(48 * a1 - 0x58000000000LL, a2, v7, 0);
  if ( (MiFlags & 0x8000) != 0 )
  {
    v19 = (unsigned __int64)((__int64)(a2 << 25) >> 16);
    KeSetPagePrivilege(a1, &v19, 256);
    if ( ((*(_QWORD *)(v6 + 40) >> 54) & 7) == 3 )
      MiMarkPfnVerified(48 * a1 - 0x58000000000LL, 0);
  }
  else
  {
    MiCopyPage(a1, v5, 0LL, 1);
  }
  ValidPte = (struct _KTHREAD *)MiMakeValidPte(a2, a1, v7 | 0xA0000000);
  v12 = 0;
  v20 = (__int64)ValidPte;
  v13 = (__int64)ValidPte;
  if ( v10 )
  {
    LODWORD(ValidPte) = MiPteHasShadow();
    if ( (_DWORD)ValidPte )
    {
      v12 = 1;
      if ( HIBYTE(word_14043B26C) )
        goto LABEL_7;
      v17 = (v16 & 1) == 0;
    }
    else
    {
      ValidPte = KeGetCurrentThread();
      if ( (ValidPte->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) == 0 )
        goto LABEL_7;
      v17 = (v16 & 1) == 0;
    }
    if ( !v17 )
    {
      LOBYTE(ValidPte) = 0;
      v13 |= 0x8000000000000000uLL;
    }
  }
LABEL_7:
  *(_QWORD *)a2 = v13;
  if ( v12 )
    LOBYTE(ValidPte) = MiWritePteShadow(a2, v13);
  return (char)ValidPte;
}
