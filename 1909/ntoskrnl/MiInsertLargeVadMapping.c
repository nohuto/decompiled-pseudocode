/*
 * XREFs of MiInsertLargeVadMapping @ 0x1402D27D0
 * Callers:
 *     MiInPagePageTable @ 0x14005D7D0 (MiInPagePageTable.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14002AC50 (MiPteInShadowRange.c)
 *     MiMakeValidPte @ 0x14002B050 (MiMakeValidPte.c)
 *     MiLockProtoPoolPage @ 0x140054DD0 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x140055030 (MiUnlockProtoPoolPage.c)
 *     MiGetSharedVm @ 0x140072E80 (MiGetSharedVm.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     MiWritePteShadow @ 0x1400F8750 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1400F87B0 (MiPteHasShadow.c)
 */

__int64 __fastcall MiInsertLargeVadMapping(unsigned __int64 a1, unsigned __int64 a2, int a3, _QWORD *a4)
{
  _KPROCESS *Process; // rbx
  ULONG_PTR v9; // r9
  unsigned __int64 v10; // rdx
  int v11; // r9d
  __int64 v12; // rax
  LONG *SharedVm; // rax
  signed __int32 v14; // r11d
  __int64 v15; // rdx
  unsigned int v16; // r9d
  unsigned int v17; // r11d
  unsigned __int8 v18; // r8
  LONG *v19; // rax
  unsigned __int64 v21[3]; // [rsp+20h] [rbp-18h] BYREF

  Process = KeGetCurrentThread()->ApcState.Process;
  if ( !MiLockProtoPoolPage(a2, 0LL) )
    return 0LL;
  v21[0] = MI_READ_PTE_LOCK_FREE(a2);
  MiUnlockProtoPoolPage(v9, 0x11u);
  v10 = (unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)v21) >> 12;
  v12 = 0xFFFFC0000LL;
  if ( a3 != 2 )
    v12 = 0xFFFFFFE00LL;
  v21[0] = MiMakeValidPte(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, v12 & v10, v11);
  if ( a3 != 1 )
  {
    SharedVm = MiGetSharedVm((__int64)&Process[1].IdealNode[6]);
    if ( v14 != _InterlockedCompareExchange(SharedVm, 0x80000000, v14) )
      return 0LL;
  }
  if ( MiPteInShadowRange((unsigned __int64)a4) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v16 = v17;
      if ( !HIBYTE(word_1404658EC) )
      {
LABEL_11:
        if ( (v18 & (unsigned __int8)v17) != 0 )
          v15 |= 0x8000000000000000uLL;
      }
    }
    else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0 )
    {
      goto LABEL_11;
    }
  }
  *a4 = v15;
  if ( v16 )
    MiWritePteShadow((__int64)a4);
  if ( a3 != v17 )
  {
    v19 = MiGetSharedVm((__int64)&Process[1].IdealNode[6]);
    *v19 = v17;
  }
  return v17;
}
