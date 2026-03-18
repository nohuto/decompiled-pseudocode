/*
 * XREFs of DpiMiracastAddRefMiracastDeviceContext @ 0x1C0045770
 * Callers:
 *     DxgkMiracastStopAllMiracastSessions @ 0x1C0138FF0 (DxgkMiracastStopAllMiracastSessions.c)
 *     DpiFdoStopMiracastSession @ 0x1C01427A0 (DpiFdoStopMiracastSession.c)
 *     DpiMiracastCbSendUserModeMessage @ 0x1C0268E50 (DpiMiracastCbSendUserModeMessage.c)
 *     DpiMiracastGetDeviceContextFromName @ 0x1C0269634 (DpiMiracastGetDeviceContextFromName.c)
 * Callees:
 *     <none>
 */

void __fastcall DpiMiracastAddRefMiracastDeviceContext(__int64 a1, unsigned int a2)
{
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 24));
  _InterlockedXor((volatile signed __int32 *)(a1 + 28), a2);
}
