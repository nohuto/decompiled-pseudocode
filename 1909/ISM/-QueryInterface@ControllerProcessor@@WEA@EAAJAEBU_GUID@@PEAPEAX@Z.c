/*
 * XREFs of ?QueryInterface@ControllerProcessor@@WEA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180038070
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall ControllerProcessor::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return ControllerProcessor::QueryInterface((ControllerProcessor *)(a1 - 64), a2, a3);
}
