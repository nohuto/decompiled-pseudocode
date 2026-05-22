/*
 * XREFs of ?DeliverDeviceAttach@DWMInputTarget@@UEAAJPEAUDeviceInfo@@@Z @ 0x180014640
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?get@?$static_lazy@VInputETW@@@details@wil@@QEAAPEAVInputETW@@P6AXXZ@Z @ 0x180014738 (-get@-$static_lazy@VInputETW@@@details@wil@@QEAAPEAVInputETW@@P6AXXZ@Z.c)
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C3E0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x18002CB4C (--_U@YAPEAX_K@Z.c)
 *     memcpy_0 @ 0x18003787F (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F3F4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _TlgKeywordOn @ 0x18005300C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180053034 (_TlgWrite.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall DWMInputTarget::DeliverDeviceAttach(
        DWMInputTarget *this,
        struct DeviceInfo *a2,
        __int64 a3,
        const char *a4)
{
  int v4; // ebx
  _DWORD *v5; // rsi
  size_t v8; // r14
  __int64 v9; // rcx
  const struct std::nothrow_t *v10; // rdx
  const struct _TlgProvider_t *v11; // rcx
  __int64 v13; // rcx
  const struct _TlgProvider_t *v14; // rcx
  const struct _TlgProvider_t *v15; // rcx
  __int64 v16; // [rsp+38h] [rbp-39h] BYREF
  _DWORD *v17; // [rsp+40h] [rbp-31h]
  _QWORD v18[2]; // [rsp+48h] [rbp-29h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-19h] BYREF
  _QWORD *v20; // [rsp+78h] [rbp+7h]
  int v21; // [rsp+80h] [rbp+Fh]
  int v22; // [rsp+84h] [rbp+13h]
  __int64 *v23; // [rsp+88h] [rbp+17h]
  int v24; // [rsp+90h] [rbp+1Fh]
  int v25; // [rsp+94h] [rbp+23h]
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  v18[1] = -2LL;
  v17 = 0LL;
  v8 = *((int *)a2 + 2);
  if ( (_DWORD)v8 )
  {
    LODWORD(v16) = v8 + 28;
    v5 = operator new[]((int)v8 + 28);
    v17 = v5;
    *v5 = 1;
    memcpy_0(v5 + 2, a2, v8);
    v4 = (*(__int64 (__fastcall **)(struct IInputDeliveryServer *, char *, _DWORD *, _QWORD))(*(_QWORD *)NonBamoInputDeliveryServer::s_pNonBamoInputDeliveryServer
                                                                                            + 24LL))(
           NonBamoInputDeliveryServer::s_pNonBamoInputDeliveryServer,
           (char *)this + 64,
           v5,
           (int)v8 + 28);
    v11 = *(const struct _TlgProvider_t **)(wil::details::static_lazy<InputETW>::get(
                                              v9,
                                              lambda_ffe5d831185bf77c783480ebf240a46d_::_lambda_invoker_cdecl_)
                                          + 8);
    if ( *(_DWORD *)v11 <= 5u )
      goto LABEL_3;
  }
  else
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x1B,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinput\\lib\\helpers.cpp",
      a4);
  }
  if ( TlgKeywordOn(v11, 1uLL) )
  {
    v14 = *(const struct _TlgProvider_t **)(wil::details::static_lazy<InputETW>::get(
                                              v13,
                                              lambda_ffe5d831185bf77c783480ebf240a46d_::_lambda_invoker_cdecl_)
                                          + 8);
    if ( *(_DWORD *)v14 > 5u )
    {
      if ( TlgKeywordOn(v14, 1uLL) )
      {
        v18[0] = *(unsigned int *)a2;
        v20 = v18;
        v21 = 8;
        v22 = 0;
        v16 = *((int *)a2 + 1);
        v23 = &v16;
        v24 = 8;
        v25 = 0;
        TlgWrite(v15, &unk_18019DCF3, 0LL, 0LL, 4u, &pData);
      }
    }
  }
LABEL_3:
  if ( v4 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC1,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputtarget.cpp",
      (const char *)(unsigned int)v4);
  else
    v4 = 0;
  if ( v5 )
    operator delete(v5, v10);
  return (unsigned int)v4;
}
