/*
 * XREFs of ??4DragSwitchItem@MultitaskingViewTelemetry@@QEAAAEAV01@$$QEAV01@@Z @ 0x18031EA38
 * Callers:
 *     ?StartDrag@ElementDragData@@UEAAJW4PointerButton@@AEBVMultitaskingViewPointerInputArgs@@@Z @ 0x18031FBE0 (-StartDrag@ElementDragData@@UEAAJW4PointerButton@@AEBVMultitaskingViewPointerInputArgs@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@_N@Z @ 0x18031E650 (--0-$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag__ea_18031E650.c)
 *     ??1DragSwitchItem@MultitaskingViewTelemetry@@QEAA@XZ @ 0x18031E8EC (--1DragSwitchItem@MultitaskingViewTelemetry@@QEAA@XZ.c)
 *     ??4?$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x18031E944 (--4-$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProvi.c)
 */

__int64 __fastcall MultitaskingViewTelemetry::DragSwitchItem::operator=(__int64 a1, __int64 a2)
{
  _QWORD v5[40]; // [rsp+20h] [rbp-158h] BYREF

  wil::ActivityBase<WindowManagementLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v5,
    a1);
  v5[0] = &MultitaskingViewTelemetry::DragSwitchItem::`vftable';
  wil::ActivityBase<WindowManagementLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::operator=(a1, a2);
  MultitaskingViewTelemetry::DragSwitchItem::~DragSwitchItem((MultitaskingViewTelemetry::DragSwitchItem *)v5);
  return a1;
}
