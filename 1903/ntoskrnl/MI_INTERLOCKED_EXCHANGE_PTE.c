/*
 * XREFs of MI_INTERLOCKED_EXCHANGE_PTE @ 0x1401290E4
 * Callers:
 *     MiTerminateWsle @ 0x14004B140 (MiTerminateWsle.c)
 *     MiCopyOnWrite @ 0x140059090 (MiCopyOnWrite.c)
 *     MiUnlockNestedPageTableWritePte @ 0x14005E2E0 (MiUnlockNestedPageTableWritePte.c)
 *     MmUnmapViewInSystemCache @ 0x140070300 (MmUnmapViewInSystemCache.c)
 *     MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED @ 0x140142264 (MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14002A860 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401223FC (MiWritePteShadow.c)
 */

__int64 __fastcall MI_INTERLOCKED_EXCHANGE_PTE(volatile __int64 *a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 v3; // r11

  _InterlockedExchange64(a1, a2);
  if ( MiPteInShadowRange((unsigned __int64)a1) )
    MiWritePteShadow(v2);
  return v3;
}
