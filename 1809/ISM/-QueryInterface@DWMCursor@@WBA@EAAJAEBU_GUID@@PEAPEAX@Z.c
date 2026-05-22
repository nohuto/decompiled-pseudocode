/*
 * XREFs of ?QueryInterface@DWMCursor@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801089A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DWMCursor::QueryInterface(__int64 a1, const struct _GUID *a2, DWMCursor **a3)
{
  return DWMCursor::QueryInterface((DWMCursor *)(a1 - 16), a2, a3);
}
