/*
 * XREFs of ?GetInstance@MPCHeadUpdateListener@@SAPEAV1@XZ @ 0x18005ABA0
 * Callers:
 *     ??0SpectrumListener@@QEAA@PEAVMPCRawInputProvider@@KK@Z @ 0x180058664 (--0SpectrumListener@@QEAA@PEAVMPCRawInputProvider@@KK@Z.c)
 *     ?Unregister@SpectrumListener@@QEAAXXZ @ 0x180058CB0 (-Unregister@SpectrumListener@@QEAAXXZ.c)
 *     ?OnHeadEventOccurred@MPCHeadUpdateListener@@SAXUMPCMatrix4x4@@PEAUIUnknown@@@Z @ 0x18005AE40 (-OnHeadEventOccurred@MPCHeadUpdateListener@@SAXUMPCMatrix4x4@@PEAUIUnknown@@@Z.c)
 *     ?SetOwner@SpatialRimDeviceCollectionHeadEventHandler@@QEAAJPEAVSpatialRimDeviceCollection@@PEAUIMessageSession@@@Z @ 0x180061310 (-SetOwner@SpatialRimDeviceCollectionHeadEventHandler@@QEAAJPEAVSpatialRimDeviceCollection@@PEAUI.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003640 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0exception_ptr@std@@QEAA@AEBV01@@Z @ 0x18003C6A4 (--0exception_ptr@std@@QEAA@AEBV01@@Z.c)
 *     ?rethrow_exception@std@@YAXVexception_ptr@1@@Z @ 0x18003C6E0 (-rethrow_exception@std@@YAXVexception_ptr@1@@Z.c)
 */

// Hidden C++ exception states: #wind=4
struct MPCHeadUpdateListener *MPCHeadUpdateListener::GetInstance(void)
{
  const char *v0; // r9
  struct MPCHeadUpdateListener *result; // rax
  std::exception_ptr *v2; // rax
  _BYTE v3[16]; // [rsp+28h] [rbp-38h] BYREF
  _QWORD v4[2]; // [rsp+38h] [rbp-28h] BYREF
  _BYTE v5[24]; // [rsp+48h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]
  char v7; // [rsp+70h] [rbp+10h] BYREF

  v7 = 0;
  __ExceptionPtrCreate(v3);
  v4[0] = v3;
  v4[1] = &v7;
  if ( !std::_Execute_once(
          (struct std::once_flag *)&MPCHeadUpdateListener::s_singletonCreated,
          (int (*)(void *, void *, void **))std::_Callback_once<std::tuple<_lambda_64a1b3f60083f412cbdb681d3efb1364_ &&,std::exception_ptr &>,std::integer_sequence<unsigned __int64,0>,1>,
          v4) )
  {
    if ( !__ExceptionPtrToBool(v3) )
    {
      std::_XGetLastError();
      __debugbreak();
    }
    v2 = std::exception_ptr::exception_ptr((std::exception_ptr *)v5, (const struct std::exception_ptr *)v3);
    std::rethrow_exception(v2);
  }
  __ExceptionPtrDestroy(v3);
  result = MPCHeadUpdateListener::s_instance;
  if ( !MPCHeadUpdateListener::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x26,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcheadupdatelistener.cpp",
      v0);
    JUMPOUT(0x18005AC4BLL);
  }
  return result;
}
