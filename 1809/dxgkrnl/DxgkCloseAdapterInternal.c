/*
 * XREFs of DxgkCloseAdapterInternal @ 0x1C012F7C8
 * Callers:
 *     ??_GCAdapter@@IEAAPEAXI@Z @ 0x1C0017A50 (--_GCAdapter@@IEAAPEAXI@Z.c)
 * Callees:
 *     ?DxgkCloseAdapter@@YAJPEBU_D3DKMT_CLOSEADAPTER@@E@Z @ 0x1C00EE850 (-DxgkCloseAdapter@@YAJPEBU_D3DKMT_CLOSEADAPTER@@E@Z.c)
 */

__int64 __fastcall DxgkCloseAdapterInternal(const struct _D3DKMT_CLOSEADAPTER *a1, __int64 a2, const GUID *a3)
{
  return DxgkCloseAdapter(a1, 0, a3);
}
