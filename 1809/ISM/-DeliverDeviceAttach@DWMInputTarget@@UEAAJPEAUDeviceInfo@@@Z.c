/*
 * XREFs of ?DeliverDeviceAttach@DWMInputTarget@@UEAAJPEAUDeviceInfo@@@Z @ 0x18008FBD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?DeliverDeviceAttach@InputTarget@InputETW@@SAXPEAUDeviceInfo@@@Z @ 0x18008F188 (-DeliverDeviceAttach@InputTarget@InputETW@@SAXPEAUDeviceInfo@@@Z.c)
 *     ??0InputEventPayloadBuffer@@QEAA@UInputEventPayloadHeader@@PEAUDeviceInfo@@@Z @ 0x1801054AC (--0InputEventPayloadBuffer@@QEAA@UInputEventPayloadHeader@@PEAUDeviceInfo@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DWMInputTarget::DeliverDeviceAttach(DWMInputTarget *this, struct DeviceInfo *a2)
{
  int v4; // ebx
  const struct std::nothrow_t *v5; // rdx
  int v7; // [rsp+38h] [rbp-20h] BYREF
  void *v8; // [rsp+40h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  InputEventPayloadBuffer::InputEventPayloadBuffer(&v7, 1LL, a2);
  v4 = (*(__int64 (__fastcall **)(struct IInputDeliveryServer *, char *, void *, _QWORD))(*(_QWORD *)NonBamoInputDeliveryServer::s_pNonBamoInputDeliveryServer
                                                                                        + 24LL))(
         NonBamoInputDeliveryServer::s_pNonBamoInputDeliveryServer,
         (char *)this + 64,
         v8,
         v7);
  InputETW::InputTarget::DeliverDeviceAttach(a2);
  if ( v4 >= 0 )
    v4 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC2,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputtarget.cpp",
      (const char *)(unsigned int)v4);
  if ( v8 )
    operator delete(v8, v5);
  return (unsigned int)v4;
}
