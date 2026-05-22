/*
 * XREFs of ?DeliverInput@InputDestTarget@@UEAAJPEAUInputInfo@@@Z @ 0x1800C7960
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C3E0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?DeliverInput@ISM@InputTraceLogging@@SAXPEBUInputInfo@@@Z @ 0x1800C7028 (-DeliverInput@ISM@InputTraceLogging@@SAXPEBUInputInfo@@@Z.c)
 *     ?DeliverInputReport@InputTarget@InputETW@@SAXPEAUInputInfo@@@Z @ 0x1800C7138 (-DeliverInputReport@InputTarget@InputETW@@SAXPEAUInputInfo@@@Z.c)
 *     ??0InputEventPayloadBuffer@@QEAA@UInputEventPayloadHeader@@PEAUInputInfo@@@Z @ 0x180142B88 (--0InputEventPayloadBuffer@@QEAA@UInputEventPayloadHeader@@PEAUInputInfo@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall InputDestTarget::DeliverInput(InputDestTarget *this, struct InputInfo *a2)
{
  int v4; // edi
  const struct std::nothrow_t *v5; // rdx
  const char *v6; // r9
  const struct std::nothrow_t *v7; // rdx
  __int64 result; // rax
  int v9; // [rsp+38h] [rbp-20h] BYREF
  void *v10; // [rsp+40h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  try
  {
    InputEventPayloadBuffer::InputEventPayloadBuffer(&v9, 4LL, a2);
    v4 = (*(__int64 (__fastcall **)(struct IInputDeliveryServer *, char *, void *, _QWORD))(*(_QWORD *)NonBamoInputDeliveryServer::s_pNonBamoInputDeliveryServer
                                                                                          + 24LL))(
           NonBamoInputDeliveryServer::s_pNonBamoInputDeliveryServer,
           (char *)this + 24,
           v10,
           v9);
    InputETW::InputTarget::DeliverInputReport(a2);
    InputTraceLogging::ISM::DeliverInput(a2);
    if ( v4 >= 0 )
    {
      if ( v10 )
        operator delete(v10, v5);
      result = 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x33,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\inputdesttarget.cpp",
        (const char *)(unsigned int)v4);
      if ( v10 )
        operator delete(v10, v7);
      result = (unsigned int)v4;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x3A,
                           (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\inputdesttarget.cpp",
                           v6);
  }
  return result;
}
