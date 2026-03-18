/*
 * XREFs of MiTryDeleteTransitionPte @ 0x1400DFC94
 * Callers:
 *     MiDeletePteRun @ 0x140027C60 (MiDeletePteRun.c)
 *     MiSetProtectionOnSection @ 0x14004E5E0 (MiSetProtectionOnSection.c)
 *     MiRemoveMappedPtes @ 0x14005E850 (MiRemoveMappedPtes.c)
 *     MiDeleteMergedPte @ 0x1401424E8 (MiDeleteMergedPte.c)
 * Callees:
 *     MiDeleteTransitionPte @ 0x14002EB00 (MiDeleteTransitionPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiLockTransitionLeafPage @ 0x1400DD76C (MiLockTransitionLeafPage.c)
 */

__int64 __fastcall MiTryDeleteTransitionPte(ULONG_PTR BugCheckParameter2)
{
  ULONG_PTR v2; // rax
  __int64 v3; // r8

  if ( (MI_READ_PTE_LOCK_FREE(BugCheckParameter2) & 0x400) != 0 )
    return 1LL;
  v2 = MiLockTransitionLeafPage(BugCheckParameter2, 0LL);
  if ( !v2 )
    return 1LL;
  LOBYTE(v3) = 17;
  return MiDeleteTransitionPte(BugCheckParameter2, v2, v3, 1);
}
