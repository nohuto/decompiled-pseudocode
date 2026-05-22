/*
 * XREFs of ??1InputEventPayloadBuffer@@QEAA@XZ @ 0x1800C6860
 * Callers:
 *     _DWMInputTarget::DeliverDeviceAttach_::_1_::dtor$0 @ 0x18003B2DA (_DWMInputTarget--DeliverDeviceAttach_--_1_--dtor$0.c)
 *     _DWMInputTarget::DeliverDeviceRemoval_::_1_::dtor$0 @ 0x1800C6C16 (_DWMInputTarget--DeliverDeviceRemoval_--_1_--dtor$0.c)
 *     _DWMInputTarget::DeliverInput_::_1_::dtor$0 @ 0x1800C7016 (_DWMInputTarget--DeliverInput_--_1_--dtor$0.c)
 *     _InputDestTarget::DeliverInput_::_1_::dtor$0 @ 0x1800C7A15 (_InputDestTarget--DeliverInput_--_1_--dtor$0.c)
 *     _InputRedirectionTarget::DeliverInput_::_1_::dtor$0 @ 0x18010750C (_InputRedirectionTarget--DeliverInput_--_1_--dtor$0.c)
 *     _NonBamoInputDeliveryServer::OnKernelInputEvent_::_1_::dtor$0 @ 0x180109CE9 (_NonBamoInputDeliveryServer--OnKernelInputEvent_--_1_--dtor$0.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C3E0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall InputEventPayloadBuffer::~InputEventPayloadBuffer(
        InputEventPayloadBuffer *this,
        const struct std::nothrow_t *a2)
{
  void *v2; // rcx

  v2 = (void *)*((_QWORD *)this + 1);
  if ( v2 )
    operator delete(v2, a2);
}
