/*
 * XREFs of MI_INTERLOCKED_EXCHANGE_PTE @ 0x140121EF0
 * Callers:
 *     MiDecommitPages @ 0x140068950 (MiDecommitPages.c)
 *     MmUnmapViewInSystemCache @ 0x140078710 (MmUnmapViewInSystemCache.c)
 *     MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED @ 0x14007F930 (MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED.c)
 *     MiUnlockNestedPageTableWritePte @ 0x1400984D4 (MiUnlockNestedPageTableWritePte.c)
 *     MiCopyOnWrite @ 0x1400B45E0 (MiCopyOnWrite.c)
 *     MiInsertNonPagedPoolOnSlist @ 0x140161260 (MiInsertNonPagedPoolOnSlist.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x140120E70 (MiWritePteShadow.c)
 */

__int64 __fastcall MI_INTERLOCKED_EXCHANGE_PTE(volatile __int64 *a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r11

  _InterlockedExchange64(a1, a2);
  if ( MiPteInShadowRange((unsigned __int64)a1) )
    MiWritePteShadow(v3, v2);
  return v4;
}
