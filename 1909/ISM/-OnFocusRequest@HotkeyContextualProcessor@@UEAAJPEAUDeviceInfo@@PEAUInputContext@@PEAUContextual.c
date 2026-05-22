/*
 * XREFs of ?OnFocusRequest@HotkeyContextualProcessor@@UEAAJPEAUDeviceInfo@@PEAUInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x18000F410
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HotkeyContextualProcessor::OnFocusRequest(
        HotkeyContextualProcessor *this,
        struct DeviceInfo *a2,
        struct InputContext *a3,
        struct ContextualProcessorInitialState *a4)
{
  *(_DWORD *)a4 = 3;
  return 0LL;
}
