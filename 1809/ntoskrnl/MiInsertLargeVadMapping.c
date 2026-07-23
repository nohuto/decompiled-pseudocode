/*
 * XREFs of MiInsertLargeVadMapping @ 0x1402BC424
 * Callers:
 *     MiInPagePageTable @ 0x140098720 (MiInPagePageTable.c)
 * Callees:
 *     MiLockProtoPoolPage @ 0x14002F030 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x14002F1F0 (MiUnlockProtoPoolPage.c)
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MiMakeValidPte @ 0x14003D7F0 (MiMakeValidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetSharedVm @ 0x140064D20 (MiGetSharedVm.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 */

__int64 __fastcall MiInsertLargeVadMapping(unsigned __int64 a1, unsigned __int64 a2, int a3, __int64 *a4)
{
  _KPROCESS *Process; // rbx
  __int64 v9; // r9
  unsigned __int64 v10; // rdx
  int v11; // r9d
  __int64 v12; // rax
  LONG *SharedVm; // rax
  signed __int32 v14; // r11d
  signed __int32 v15; // ecx
  __int64 v16; // rdx
  unsigned int v17; // r9d
  unsigned int v18; // r11d
  unsigned __int8 v19; // r8
  LONG *v20; // rax
  unsigned __int64 v22[3]; // [rsp+20h] [rbp-18h] BYREF

  Process = KeGetCurrentThread()->ApcState.Process;
  if ( !MiLockProtoPoolPage(a2, 0LL) )
    return 0LL;
  v22[0] = MI_READ_PTE_LOCK_FREE(a2);
  MiUnlockProtoPoolPage(v9, 0x11u);
  v10 = (unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)v22) >> 12;
  v12 = 0xFFFFC0000LL;
  if ( a3 != 2 )
    v12 = 0xFFFFFFE00LL;
  v22[0] = MiMakeValidPte(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, v12 & v10, v11);
  if ( a3 != 1 )
  {
    SharedVm = MiGetSharedVm((__int64)&Process[1].IdealNode[12]);
    v15 = v14 - 1;
    LOBYTE(v15) = v14 == _InterlockedCompareExchange(SharedVm, 0x80000000, v14);
    if ( !v15 )
      return 0LL;
  }
  if ( MiPteInShadowRange((unsigned __int64)a4) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v17 = v18;
      if ( !HIBYTE(word_14043B26C) )
      {
LABEL_11:
        if ( (v19 & (unsigned __int8)v18) != 0 )
          v16 |= 0x8000000000000000uLL;
      }
    }
    else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0 )
    {
      goto LABEL_11;
    }
  }
  *a4 = v16;
  if ( v17 )
    MiWritePteShadow((__int64)a4, v16);
  if ( a3 != v18 )
  {
    v20 = MiGetSharedVm((__int64)&Process[1].IdealNode[12]);
    *v20 = v18;
  }
  return v18;
}
