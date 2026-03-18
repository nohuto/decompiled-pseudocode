/*
 * XREFs of MiWalkResetCommitPte @ 0x1402BC550
 * Callers:
 *     <none>
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlinkPageFromList @ 0x1400B3280 (MiUnlinkPageFromList.c)
 *     MiLockTransitionLeafPage @ 0x1400BD5EC (MiLockTransitionLeafPage.c)
 *     MiDiscardTransitionPteEx @ 0x14016817C (MiDiscardTransitionPteEx.c)
 */

__int64 __fastcall MiWalkResetCommitPte(__int64 a1, unsigned __int64 a2, int a3)
{
  ULONG_PTR v4; // r9
  ULONG_PTR v5; // rax
  ULONG_PTR v6; // rbx

  if ( !a3 && (MI_READ_PTE_LOCK_FREE(a2) & 0xC01) == 0x800 )
  {
    v5 = MiLockTransitionLeafPage(v4, 0LL);
    v6 = v5;
    if ( v5 )
    {
      if ( (*(_BYTE *)(v5 + 34) & 0x10) == 0 && (*(_DWORD *)(v5 + 16) & 4) == 0 && !*(_WORD *)(v5 + 32) )
      {
        MiUnlinkPageFromList(v5, 0);
        MiDiscardTransitionPteEx(v6, 0);
        ++**(_QWORD **)(a1 + 160);
      }
      _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
  }
  return 0LL;
}
