/*
 * XREFs of ?NotifyRemovedAndStop@WGIController@@QEAAJXZ @ 0x1800AAE38
 * Callers:
 *     ?OnRawGameControllerRemoved@WGIRawInputProvider@@AEAAJPEAUIInspectable@@PEAUIRawGameController@Input@Gaming@Windows@@@Z @ 0x1800A7700 (-OnRawGameControllerRemoved@WGIRawInputProvider@@AEAAJPEAUIInspectable@@PEAUIRawGameController@I.c)
 *     ??1WGIController@@UEAA@XZ @ 0x1800A894C (--1WGIController@@UEAA@XZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@RefCountedObject@@UEAAKXZ @ 0x180029430 (-Release@RefCountedObject@@UEAAKXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002DDA4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIGameController@Input@Gaming@Windows@@@?$ComPtr@UIRawGameController@Input@Gaming@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIGameController@Input@Gaming@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800A81D8 (--$As@UIGameController@Input@Gaming@Windows@@@-$ComPtr@UIRawGameController@Input@Gaming@Windows@.c)
 *     ?NotifyDeviceRemoval@WGIController@@AEAAJXZ @ 0x1800AA870 (-NotifyDeviceRemoval@WGIController@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WGIController::NotifyRemovedAndStop(WGIController *this)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  unsigned int v5; // edi
  __int64 v6; // rdx
  __int64 v8; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  if ( *((_QWORD *)this + 23) )
  {
    v2 = (*(__int64 (__fastcall **)(_QWORD, WGIController *))(**((_QWORD **)this + 8) + 176LL))(
           *((_QWORD *)this + 8),
           this);
    if ( v2 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        490LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgicontroller.cpp",
        (const char *)(unsigned int)v2);
      __debugbreak();
    }
    v3 = WGIController::NotifyDeviceRemoval(this);
    if ( v3 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        491LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgicontroller.cpp",
        (const char *)(unsigned int)v3);
      __debugbreak();
    }
    *((_QWORD *)this + 23) = 0LL;
  }
  if ( *((_QWORD *)this + 9) )
  {
    v10 = 0LL;
    v4 = Microsoft::WRL::ComPtr<Windows::Gaming::Input::IRawGameController>::As<Windows::Gaming::Input::IGameController>(
           (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 9,
           &v10);
    v5 = v4;
    if ( v4 < 0 )
    {
      v6 = 504LL;
LABEL_13:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v6,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgicontroller.cpp",
        (const char *)(unsigned int)v4);
      Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(&v10);
      return v5;
    }
    if ( *((_QWORD *)this + 35) )
    {
      v4 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v10 + 88LL))(v10, *((_QWORD *)this + 35));
      v5 = v4;
      if ( v4 < 0 )
      {
        v6 = 507LL;
        goto LABEL_13;
      }
      *((_QWORD *)this + 35) = 0LL;
    }
    Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(&v10);
  }
  v8 = *((_QWORD *)this + 15);
  if ( v8 )
  {
    *((_QWORD *)this + 15) = 0LL;
    RefCountedObject::Release((RefCountedObject *)(v8 + 16));
  }
  return 0LL;
}
