/*
 * XREFs of ?CancelDrag@ElementDragData@@AEAAXXZ @ 0x18031ECC0
 * Callers:
 *     ??_E?$ExternalDragCallback@V_lambda_d6de005f52295972498d6004bc7f9486_@@@DragCallbackHelpers@@EEAAPEAXI@Z @ 0x18031EBD0 (--_E-$ExternalDragCallback@V_lambda_d6de005f52295972498d6004bc7f9486_@@@DragCallbackHelpers@@EEA.c)
 *     ?KeyDown@ElementDragData@@UEAAXIW4ModifierKeys@@@Z @ 0x18031F420 (-KeyDown@ElementDragData@@UEAAXIW4ModifierKeys@@@Z.c)
 *     ?LostCapture@ElementDragData@@UEAAXXZ @ 0x18031F480 (-LostCapture@ElementDragData@@UEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??1ActivityThreadWatcher@wil@@QEAA@XZ @ 0x180126EA4 (--1ActivityThreadWatcher@wil@@QEAA@XZ.c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x18031ED10 (-ContinueOnCurrentThread@-$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04U_TlgRefl.c)
 *     ?FinishDrag@ElementDragData@@AEAAXW4DropEffect@@@Z @ 0x18031EF98 (-FinishDrag@ElementDragData@@AEAAXW4DropEffect@@@Z.c)
 */

void __fastcall ElementDragData::CancelDrag(ElementDragData *this)
{
  LPVOID v2[11]; // [rsp+20h] [rbp-58h] BYREF

  wil::ActivityBase<WindowManagementLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
    (ElementDragData *)((char *)this + 184),
    (wil::ActivityThreadWatcher *)v2);
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 5) + 464LL))(*((_QWORD *)this + 5));
  ElementDragData::FinishDrag(this, 0LL);
  wil::ActivityThreadWatcher::~ActivityThreadWatcher(v2);
}
