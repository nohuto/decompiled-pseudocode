/*
 * XREFs of DxgkCloseAdapterInternal @ 0x1C0133CE4
 * Callers:
 *     ??_GCAdapter@@IEAAPEAXI@Z @ 0x1C0013AA0 (--_GCAdapter@@IEAAPEAXI@Z.c)
 * Callees:
 *     DxgkCloseAdapterImpl @ 0x1C0133D20 (DxgkCloseAdapterImpl.c)
 */

__int64 __fastcall DxgkCloseAdapterInternal(__int64 a1)
{
  return DxgkCloseAdapterImpl(a1, 0LL);
}
