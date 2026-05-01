/*
 * XREFs of ??0?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPositionAdjustmentHistory@@UIPositionAdjustmentHistoryTestHook@@@Details@WRL@Microsoft@@IEAA@XZ @ 0x180344768
 * Callers:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIMultitaskingViewGestureHandler@@UITouchpadGesture@@@WRL@Microsoft@@QEAA@XZ @ 0x18034471C (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIMultitaskingViewGestureHandler@@UITo.c)
 *     ?TabletModeViewManagerProxy_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x180346020 (-TabletModeViewManagerProxy_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??0CMultitaskingViewHotKeyHandler@@QEAA@XZ @ 0x180348094 (--0CMultitaskingViewHotKeyHandler@@QEAA@XZ.c)
 *     ?PositionAdjustmentHistory_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1803BB280 (-PositionAdjustmentHistory_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??0DummyUnknown@details@wil@@QEAA@XZ @ 0x180419AFC (--0DummyUnknown@details@wil@@QEAA@XZ.c)
 * Callees:
 *     ??0IApplicationViewChangeListener@@QEAA@XZ @ 0x180086430 (--0IApplicationViewChangeListener@@QEAA@XZ.c)
 */

_DWORD *__fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IPositionAdjustmentHistory,IPositionAdjustmentHistoryTestHook>::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IPositionAdjustmentHistory,IPositionAdjustmentHistoryTestHook>(
        _DWORD *a1)
{
  _DWORD *result; // rax

  IApplicationViewChangeListener::IApplicationViewChangeListener((IApplicationViewChangeListener *)a1);
  IApplicationViewChangeListener::IApplicationViewChangeListener((IApplicationViewChangeListener *)(a1 + 2));
  result = a1;
  a1[5] = 1;
  return result;
}
