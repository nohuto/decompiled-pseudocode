/*
 * XREFs of ??1InputEventPayloadBuffer@@QEAA@XZ @ 0x1800C6A50
 * Callers:
 *     _DWMInputTarget::DeliverDeviceAttach_::_1_::dtor$0 @ 0x18003B80A (_DWMInputTarget--DeliverDeviceAttach_--_1_--dtor$0.c)
 *     _DWMInputTarget::DeliverDeviceRemoval_::_1_::dtor$0 @ 0x1800C6E06 (_DWMInputTarget--DeliverDeviceRemoval_--_1_--dtor$0.c)
 *     _DWMInputTarget::DeliverInput_::_1_::dtor$0 @ 0x1800C7206 (_DWMInputTarget--DeliverInput_--_1_--dtor$0.c)
 *     _InputDestTarget::DeliverInput_::_1_::dtor$0 @ 0x1800C7C05 (_InputDestTarget--DeliverInput_--_1_--dtor$0.c)
 *     _InputRedirectionTarget::DeliverInput_::_1_::dtor$0 @ 0x18010773C (_InputRedirectionTarget--DeliverInput_--_1_--dtor$0.c)
 *     _NonBamoInputDeliveryServer::OnKernelInputEvent_::_1_::dtor$0 @ 0x180109F19 (_NonBamoInputDeliveryServer--OnKernelInputEvent_--_1_--dtor$0.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C760 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
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
