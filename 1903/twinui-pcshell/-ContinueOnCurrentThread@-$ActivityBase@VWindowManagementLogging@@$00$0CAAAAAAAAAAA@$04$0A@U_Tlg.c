/*
 * XREFs of ?ContinueOnCurrentThread@?$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x18037F200
 * Callers:
 *     _lambda_b0b710aa7dd78fb14938fbcb95e31413_::operator() @ 0x18037EFB4 (_lambda_b0b710aa7dd78fb14938fbcb95e31413_--operator().c)
 *     ?CancelDrag@ElementDragData@@AEAAXXZ @ 0x18037F1B0 (-CancelDrag@ElementDragData@@AEAAXXZ.c)
 *     ?FinishDrag@ElementDragData@@AEAAXW4DropEffect@@@Z @ 0x18037F488 (-FinishDrag@ElementDragData@@AEAAXW4DropEffect@@@Z.c)
 *     ?KeyDown@ElementDragData@@UEAAXIW4ModifierKeys@@@Z @ 0x18037F900 (-KeyDown@ElementDragData@@UEAAXIW4ModifierKeys@@@Z.c)
 *     ?LostCapture@ElementDragData@@UEAAXXZ @ 0x18037F960 (-LostCapture@ElementDragData@@UEAAXXZ.c)
 *     ?PointerLeave@ElementDragData@@UEAAXXZ @ 0x18037FAB0 (-PointerLeave@ElementDragData@@UEAAXXZ.c)
 *     ?PointerMove@ElementDragData@@UEAAXAEBVMultitaskingViewPointerInputArgs@@@Z @ 0x18037FB10 (-PointerMove@ElementDragData@@UEAAXAEBVMultitaskingViewPointerInputArgs@@@Z.c)
 *     ?PointerUp@ElementDragData@@UEAAXW4PointerButton@@AEBVMultitaskingViewPointerInputArgs@@@Z @ 0x18037FB90 (-PointerUp@ElementDragData@@UEAAXW4PointerButton@@AEBVMultitaskingViewPointerInputArgs@@@Z.c)
 * Callees:
 *     ??0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@AEBVStoredCallContextInfo@31@@Z @ 0x18008D98C (--0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@AEBVStoredCallContextInfo@31@@.c)
 *     ??0ActivityThreadWatcher@wil@@QEAA@XZ @ 0x1801503E4 (--0ActivityThreadWatcher@wil@@QEAA@XZ.c)
 */

wil::ActivityThreadWatcher *__fastcall wil::ActivityBase<WindowManagementLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
        struct wil::details::IFailureCallback *a1,
        wil::ActivityThreadWatcher *this)
{
  _DWORD *v2; // r8

  v2 = (_DWORD *)*((_QWORD *)a1 + 6);
  if ( *v2 == 1 )
    wil::ActivityThreadWatcher::ActivityThreadWatcher(
      this,
      a1,
      (const struct wil::details::StoredCallContextInfo *)(v2 + 10));
  else
    wil::ActivityThreadWatcher::ActivityThreadWatcher(this);
  return this;
}
