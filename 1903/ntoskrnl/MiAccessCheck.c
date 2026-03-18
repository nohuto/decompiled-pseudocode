/*
 * XREFs of MiAccessCheck @ 0x14012DD24
 * Callers:
 *     MiDispatchFault @ 0x1400CBFD0 (MiDispatchFault.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14002A860 (MiPteInShadowRange.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiLockTransitionLeafPage @ 0x1400DD76C (MiLockTransitionLeafPage.c)
 *     MiAllowGuardFault @ 0x140115490 (MiAllowGuardFault.c)
 *     MiWritePteShadow @ 0x1401223FC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14012245C (MiPteHasShadow.c)
 */

__int64 __fastcall MiAccessCheck(
        unsigned __int64 *BugCheckParameter2,
        __int64 a2,
        char a3,
        __int64 a4,
        __int64 a5,
        char a6)
{
  __int64 v7; // rax
  int v8; // r9d
  __int64 v9; // r10
  __int64 v10; // rdi
  char v11; // bl
  __int64 v13; // r11
  unsigned __int64 v14; // rbx
  int v15; // edx
  __int64 v16; // r11
  unsigned __int64 v17; // rbx
  int v18; // edx

  if ( a3 == 1
    && ((unsigned __int64)BugCheckParameter2 > 0xFFFFF6BFFFFFFF78uLL
     || (unsigned __int64)BugCheckParameter2 < 0xFFFFF68000000000uLL) )
  {
    return 3221225477LL;
  }
  v7 = MI_READ_PTE_LOCK_FREE((unsigned __int64)BugCheckParameter2);
  v10 = v7;
  if ( (v7 & 1) != 0 )
  {
    if ( v9 && (v7 & 0xA00) == 0 )
      return 3221225477LL;
    return 0LL;
  }
  v11 = v8;
  if ( MiReadWrite[v8 & 7] - (v9 != 0) < 10 )
    return 3221225477LL;
  if ( (v8 & 0xFFFFFFF8) != 0x10 || (a5 & 1) != 0 && *(_BYTE *)(a5 & 0xFFFFFFFFFFFFFFFEuLL) == 1 )
    return 0LL;
  if ( !MiAllowGuardFault(a5) )
    return 3221225477LL;
  if ( (v10 & 0xC00) != 0x800 )
  {
    v17 = v10 & 0xFFFFFFFFFFFFFC1FuLL | (32LL * (v11 & 0xF));
    if ( !MiPteInShadowRange((unsigned __int64)BugCheckParameter2) )
      goto LABEL_39;
    if ( (unsigned int)MiPteHasShadow() )
    {
      v18 = 1;
      if ( HIBYTE(word_140465BEC) )
      {
LABEL_39:
        *BugCheckParameter2 = v17;
        if ( v18 )
          MiWritePteShadow((__int64)BugCheckParameter2);
        return 2147483649LL;
      }
    }
    else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) == 0 )
    {
      goto LABEL_39;
    }
    if ( (v17 & 1) != 0 )
      v17 |= 0x8000000000000000uLL;
    goto LABEL_39;
  }
  if ( a6 != 1 )
  {
    MiLockTransitionLeafPage((ULONG_PTR)BugCheckParameter2, 0LL);
    v10 = MI_READ_PTE_LOCK_FREE((unsigned __int64)BugCheckParameter2);
    if ( v13 )
      *(_QWORD *)(v13 + 16) = *(_QWORD *)(v13 + 16) & 0xFFFFFFFFFFFFFC1FuLL | (32LL * (v11 & 0xF));
  }
  v14 = v10 & 0xFFFFFFFFFFFFFC1FuLL | (32LL * (v11 & 0xF));
  if ( !MiPteInShadowRange((unsigned __int64)BugCheckParameter2) )
    goto LABEL_27;
  if ( (unsigned int)MiPteHasShadow() )
  {
    v15 = 1;
    if ( HIBYTE(word_140465BEC) )
      goto LABEL_27;
LABEL_25:
    if ( (v14 & 1) != 0 )
      v14 |= 0x8000000000000000uLL;
    goto LABEL_27;
  }
  if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0 )
    goto LABEL_25;
LABEL_27:
  *BugCheckParameter2 = v14;
  if ( v15 )
    MiWritePteShadow((__int64)BugCheckParameter2);
  if ( !a6 )
  {
    if ( v16 )
      _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  return 2147483649LL;
}
