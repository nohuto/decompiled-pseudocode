/*
 * XREFs of ?QueryInterface@DWMFocusedInputTarget@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18008EAA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DWMFocusedInputTarget::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        DWMFocusedInputTarget **a3)
{
  return DWMFocusedInputTarget::QueryInterface((DWMFocusedInputTarget *)(a1 - 16), a2, a3);
}
