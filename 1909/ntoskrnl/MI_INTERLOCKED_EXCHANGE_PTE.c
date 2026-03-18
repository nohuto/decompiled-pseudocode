/*
 * XREFs of MI_INTERLOCKED_EXCHANGE_PTE @ 0x140129B04
 * Callers:
 *     MiTerminateWsle @ 0x14004B1E0 (MiTerminateWsle.c)
 *     MiCopyOnWrite @ 0x140059130 (MiCopyOnWrite.c)
 *     MiUnlockNestedPageTableWritePte @ 0x14005E380 (MiUnlockNestedPageTableWritePte.c)
 *     MmUnmapViewInSystemCache @ 0x140070570 (MmUnmapViewInSystemCache.c)
 *     MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED @ 0x1401427A4 (MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14002AC50 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1400F8750 (MiWritePteShadow.c)
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
