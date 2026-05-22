/*
 * XREFs of ??1?$unique_ptr@UAPP_MOUSE_INPUT_OBSERVER_PACKET@InputObservation@@U?$default_delete@UAPP_MOUSE_INPUT_OBSERVER_PACKET@InputObservation@@@std@@@std@@QEAA@XZ @ 0x180068090
 * Callers:
 *     _CPointerInputObserverServer_12_::OnInputGenerated_::_1_::dtor$1 @ 0x1800685AA (_CPointerInputObserverServer_12_--OnInputGenerated_--_1_--dtor$1.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C3E0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::unique_ptr<InputObservation::APP_MOUSE_INPUT_OBSERVER_PACKET>::~unique_ptr<InputObservation::APP_MOUSE_INPUT_OBSERVER_PACKET>(
        void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    operator delete(v1, (const struct std::nothrow_t *)0x38);
}
