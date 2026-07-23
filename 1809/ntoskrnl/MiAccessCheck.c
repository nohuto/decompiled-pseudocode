/*
 * XREFs of MiAccessCheck @ 0x14009294C
 * Callers:
 *     MiDispatchFault @ 0x140045FD0 (MiDispatchFault.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiLockTransitionLeafPage @ 0x140095684 (MiLockTransitionLeafPage.c)
 *     MiAllowGuardFault @ 0x140117D28 (MiAllowGuardFault.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 */

__int64 __fastcall MiAccessCheck(
        unsigned __int64 *BugCheckParameter2,
        __int64 a2,
        char a3,
        __int64 a4,
        __int64 a5,
        char a6)
{
  __int16 v7; // ax
  int v8; // r10d
  __int64 v9; // r11
  char v10; // bl
  __int64 v12; // r9
  __int64 v13; // r11
  unsigned __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r11
  unsigned __int64 v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rcx

  if ( a3 == 1
    && ((unsigned __int64)BugCheckParameter2 > 0xFFFFF6BFFFFFFF78uLL
     || (unsigned __int64)BugCheckParameter2 < 0xFFFFF68000000000uLL) )
  {
    return 3221225477LL;
  }
  v7 = MI_READ_PTE_LOCK_FREE((unsigned __int64)BugCheckParameter2);
  if ( (v7 & 1) != 0 )
  {
    if ( v9 && (v7 & 0xA00) == 0 )
      return 3221225477LL;
    return 0LL;
  }
  v10 = v8;
  if ( MiReadWrite[v8 & 7] - (v9 != 0) < 10 )
    return 3221225477LL;
  if ( (v8 & 0xFFFFFFF8) != 0x10 || (a5 & 1) != 0 && *(_BYTE *)(a5 & 0xFFFFFFFFFFFFFFFEuLL) == 1 )
    return 0LL;
  if ( !(unsigned int)MiAllowGuardFault(a5) )
    return 3221225477LL;
  if ( (v12 & 0xC00) != 0x800 )
  {
    v18 = v12 & 0xFFFFFFFFFFFFFC1FuLL | (32LL * (v10 & 0xF));
    if ( !MiPteInShadowRange((unsigned __int64)BugCheckParameter2) )
      goto LABEL_39;
    if ( (unsigned int)MiPteHasShadow(v20, v19) )
    {
      LODWORD(v19) = 1;
      if ( HIBYTE(word_14043B26C) )
      {
LABEL_39:
        *BugCheckParameter2 = v18;
        if ( (_DWORD)v19 )
          MiWritePteShadow(BugCheckParameter2);
        return 2147483649LL;
      }
    }
    else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) == 0 )
    {
      goto LABEL_39;
    }
    if ( (v18 & 1) != 0 )
      v18 |= 0x8000000000000000uLL;
    goto LABEL_39;
  }
  if ( a6 != 1 )
  {
    MiLockTransitionLeafPage((ULONG_PTR)BugCheckParameter2);
    v12 = MI_READ_PTE_LOCK_FREE((unsigned __int64)BugCheckParameter2);
    if ( v13 )
      *(_QWORD *)(v13 + 16) = *(_QWORD *)(v13 + 16) & 0xFFFFFFFFFFFFFC1FuLL | (32LL * (v10 & 0xF));
  }
  v14 = v12 & 0xFFFFFFFFFFFFFC1FuLL | (32LL * (v10 & 0xF));
  if ( !MiPteInShadowRange((unsigned __int64)BugCheckParameter2) )
    goto LABEL_27;
  if ( (unsigned int)MiPteHasShadow(v16, v15) )
  {
    LODWORD(v15) = 1;
    if ( HIBYTE(word_14043B26C) )
      goto LABEL_27;
LABEL_25:
    if ( (v14 & 1) != 0 )
      v14 |= 0x8000000000000000uLL;
    goto LABEL_27;
  }
  if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0 )
    goto LABEL_25;
LABEL_27:
  *BugCheckParameter2 = v14;
  if ( (_DWORD)v15 )
    MiWritePteShadow(BugCheckParameter2);
  if ( !a6 )
  {
    if ( v17 )
      _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  return 2147483649LL;
}
