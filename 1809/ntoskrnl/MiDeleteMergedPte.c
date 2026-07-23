/*
 * XREFs of MiDeleteMergedPte @ 0x14011FC90
 * Callers:
 *     MiDecrementCombinedPte @ 0x14011FA64 (MiDecrementCombinedPte.c)
 *     MiDecrementCloneBlockReference @ 0x1402C9820 (MiDecrementCloneBlockReference.c)
 * Callees:
 *     MiLockProtoPoolPage @ 0x14002F030 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x14002F1F0 (MiUnlockProtoPoolPage.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiReleasePageFileSpace @ 0x140082394 (MiReleasePageFileSpace.c)
 *     MiTryDeleteTransitionPte @ 0x140094E6C (MiTryDeleteTransitionPte.c)
 */

__int64 __fastcall MiDeleteMergedPte(struct _KEVENT *a1, unsigned __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // rsi
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
      MiReleasePageFileSpace(a1, v7);
    }
    MiUnlockProtoPoolPage(v5, v8);
    return v6;
  }
  return result;
}
