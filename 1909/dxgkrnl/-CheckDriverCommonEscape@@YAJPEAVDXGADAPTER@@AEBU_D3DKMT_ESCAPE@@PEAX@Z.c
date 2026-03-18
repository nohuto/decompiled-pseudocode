/*
 * XREFs of ?CheckDriverCommonEscape@@YAJPEAVDXGADAPTER@@AEBU_D3DKMT_ESCAPE@@PEAX@Z @ 0x1C0104964
 * Callers:
 *     DxgkEscape @ 0x1C0106440 (DxgkEscape.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CheckDriverCommonEscape(struct DXGADAPTER *a1, const struct _D3DKMT_ESCAPE *a2, void *a3)
{
  return *(_BYTE *)&a2->Flags.0 < 0 ? 0xC00000BB : 0;
}
