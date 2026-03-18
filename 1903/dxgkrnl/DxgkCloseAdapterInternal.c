/*
 * XREFs of DxgkCloseAdapterInternal @ 0x1C0130474
 * Callers:
 *     ??_GCAdapter@@IEAAPEAXI@Z @ 0x1C0013300 (--_GCAdapter@@IEAAPEAXI@Z.c)
 * Callees:
 *     DxgkCloseAdapterImpl @ 0x1C01304B0 (DxgkCloseAdapterImpl.c)
 */

__int64 __fastcall DxgkCloseAdapterInternal(__int64 a1)
{
  return DxgkCloseAdapterImpl(a1, 0LL);
}
