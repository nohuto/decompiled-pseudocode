/*
 * XREFs of ?RegisterDeviceEventHandler@Details@PnpApiWrapper@@YAJAEAU_CM_NOTIFY_FILTER@@P6AXW4DeviceEventId@2@PEAUHSTRING__@@PEAX@Z3AEAPEAX@Z @ 0x180076F70
 * Callers:
 *     ?Initialize@PnpDeviceWatcher@@QEAAJPEAVLampArrayRawInputProvider@@@Z @ 0x180071480 (-Initialize@PnpDeviceWatcher@@QEAAJPEAVLampArrayRawInputProvider@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ConfigretToHresult@Details@PnpApiWrapper@@YAJK@Z @ 0x1800766E8 (-ConfigretToHresult@Details@PnpApiWrapper@@YAJK@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18012C2B8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall PnpApiWrapper::Details::RegisterDeviceEventHandler(
        PnpApiWrapper::Details *this,
        struct _CM_NOTIFY_FILTER *a2,
        void (__high *a3)(enum PnpApiWrapper::DeviceEventId, HSTRING, void *),
        _QWORD *a4)
{
  _QWORD *v7; // rbx
  unsigned int v9; // eax
  int v10; // eax
  unsigned int v11; // esi
  unsigned int v12; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a4 = 0LL;
  v7 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v7 )
  {
    *v7 = 0LL;
    v7[1] = 0LL;
    v7[2] = 0LL;
  }
  else
  {
    v7 = 0LL;
  }
  if ( !v7 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x267,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpapiwrapper.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
  v7[1] = PnpDeviceWatcher::OnPnpNotification;
  v7[2] = a3;
  v9 = CM_Register_Notification(this, v7, PnpApiWrapper::Details::OnDeviceNotification, v7);
  v10 = PnpApiWrapper::Details::ConfigretToHresult((PnpApiWrapper::Details *)v9);
  v11 = -2147023728;
  v12 = v10;
  if ( v10 == -2147023728 )
    goto LABEL_9;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x271,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpapiwrapper.cpp",
      (const char *)(unsigned int)v10);
    v11 = v12;
LABEL_9:
    operator delete(v7, (const struct std::nothrow_t *)0x18);
    return v11;
  }
  *a4 = v7;
  return 0LL;
}
