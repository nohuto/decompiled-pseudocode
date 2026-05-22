/*
 * XREFs of ?DestroyNarratorProxy@NarratorProxy@@QEAAJPEAUIMessageProxyListener@@@Z @ 0x1800C05F0
 * Callers:
 *     ?DestroyOverriderProxy@KeyboardOverriderDispatcher@@AEAAJXZ @ 0x1800C0700 (-DestroyOverriderProxy@KeyboardOverriderDispatcher@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall NarratorProxy::DestroyNarratorProxy(NarratorProxy *this, struct IMessageProxyListener *a2)
{
  __int64 (__fastcall ***v4)(_QWORD, GUID *, __int64 *); // rcx
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF

  v4 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this;
  if ( !v4 )
    return 0LL;
  v13 = 0LL;
  v5 = (**v4)(v4, &GUID_6fcecfed_9cb3_47cc_8b3a_e08908965d08, &v13);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v5 = (*(__int64 (__fastcall **)(__int64, struct IMessageProxyListener *))(*(_QWORD *)v13 + 64LL))(v13, a2);
    v6 = v5;
    if ( v5 < 0 )
    {
      v7 = 48LL;
      goto LABEL_6;
    }
    v10 = v13;
    if ( v13 )
    {
      v13 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
    Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)this);
    v11 = v13;
    if ( v13 )
    {
      v13 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
    return 0LL;
  }
  v7 = 46LL;
LABEL_6:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\keyboardoverrid"
             "erdispatcher.cpp",
    (const char *)(unsigned int)v5);
  v8 = v13;
  if ( v13 )
  {
    v13 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  return v6;
}
