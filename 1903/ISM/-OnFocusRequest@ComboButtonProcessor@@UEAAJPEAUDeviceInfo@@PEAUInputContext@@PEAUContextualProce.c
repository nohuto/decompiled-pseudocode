/*
 * XREFs of ?OnFocusRequest@ComboButtonProcessor@@UEAAJPEAUDeviceInfo@@PEAUInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x1800FBE40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ComboButtonProcessor::OnFocusRequest(
        ComboButtonProcessor *this,
        struct DeviceInfo *a2,
        struct InputContext *a3,
        struct ContextualProcessorInitialState *a4)
{
  *(_DWORD *)a4 = (*((_DWORD *)a2 + 1) >> 7) & 1;
  return 0LL;
}
