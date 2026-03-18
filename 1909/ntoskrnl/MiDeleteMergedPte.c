/*
 * XREFs of MiDeleteMergedPte @ 0x140142A28
 * Callers:
 *     MiDecrementCombinedPte @ 0x140140D8C (MiDecrementCombinedPte.c)
 *     MiDecrementCloneBlockReference @ 0x1402E36E4 (MiDecrementCloneBlockReference.c)
 * Callees:
 *     MiLockProtoPoolPage @ 0x140054DD0 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x140055030 (MiUnlockProtoPoolPage.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     MiTryDeleteTransitionPte @ 0x1400BFB14 (MiTryDeleteTransitionPte.c)
 *     MiReleasePageFileSpace @ 0x140125564 (MiReleasePageFileSpace.c)
 */

__int64 __fastcall MiDeleteMergedPte(__int64 a1, unsigned __int64 a2)
{
  __int64 result; // rax
  ULONG_PTR v5; // rsi
  unsigned int v6; // edi
  __int64 v7; // rax
  unsigned __int8 v8; // [rsp+40h] [rbp+18h] BYREF

  result = MI_READ_PTE_LOCK_FREE(a2);
  if ( result )
  {
    v5 = MiLockProtoPoolPage(a2, &v8);
    v6 = MiTryDeleteTransitionPte(a2);
    if ( v6 == 1 )
    {
      v7 = MI_READ_PTE_LOCK_FREE(a2);
      MiReleasePageFileSpace(a1, v7, 1);
    }
    MiUnlockProtoPoolPage(v5, v8);
    return v6;
  }
  return result;
}
