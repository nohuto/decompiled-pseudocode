/*
 * XREFs of ?await_suspend@?$await_adapter@U?$IAsyncOperation@UAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@QEBAXU?$coroutine_handle@X@experimental@std@@@Z @ 0x1800A408C
 * Callers:
 *     PenWorkspaceAppInstallBroker::QueueWhiteboardInstallInternal$_ResumeCoro$2 @ 0x1800A2960 (PenWorkspaceAppInstallBroker--QueueWhiteboardInstallInternal$_ResumeCoro$2.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18008A3D8 (--2@YAPEAX_K@Z.c)
 *     ?unconditional_release_ref@?$com_ptr@UIAgileObject@impl@winrt@@@winrt@@AEAAXXZ @ 0x18009FE64 (-unconditional_release_ref@-$com_ptr@UIAgileObject@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     ??$capture@UIContextCallback@impl@winrt@@P6AHAEBUguid@3@PEAPEAX@Z$$V@winrt@@YA?AU?$com_ptr@UIContextCallback@impl@winrt@@@0@P6AHAEBUguid@0@PEAPEAX@Z@Z @ 0x1800A162C (--$capture@UIContextCallback@impl@winrt@@P6AHAEBUguid@3@PEAPEAX@Z$$V@winrt@@YA-AU-$com_ptr@UICon.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x1801ED540 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ?unconditional_release_ref@?$com_ptr@UIInspectable@@@winrt@@AEAAXXZ @ 0x1801ED780 (-unconditional_release_ref@-$com_ptr@UIInspectable@@@winrt@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem>>::await_suspend(
        _QWORD **a1,
        __int64 a2)
{
  _QWORD *v4; // rdi
  LPVOID v5; // rax
  _QWORD *v6; // rbx
  __int64 v7; // rcx
  int v8; // eax
  __int64 result; // rax
  __int64 v10; // [rsp+28h] [rbp-18h] BYREF
  LPVOID v11[2]; // [rsp+30h] [rbp-10h] BYREF
  LPVOID ppv; // [rsp+68h] [rbp+28h] BYREF
  _QWORD *v13; // [rsp+70h] [rbp+30h] BYREF
  __int64 *v14; // [rsp+78h] [rbp+38h]

  winrt::capture<winrt::impl::IContextCallback,int (*)(winrt::guid const &,void * *),>(&ppv);
  v4 = *a1;
  v10 = a2;
  v5 = ppv;
  ppv = 0LL;
  v11[0] = v5;
  v14 = &v10;
  v13 = 0LL;
  v6 = operator new(0x20uLL);
  *v6 = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,Windows::Foundation::Rect>::`vftable';
  v6[1] = v10;
  v7 = (__int64)v11[0];
  v11[0] = 0LL;
  v6[2] = v7;
  *((_DWORD *)v6 + 6) = 1;
  *v6 = off_18044D9A0;
  v13 = v6;
  if ( v11[0] )
    winrt::com_ptr<winrt::impl::IAgileObject>::unconditional_release_ref((__int64 *)v11);
  v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)*v4 + 48LL))(*v4, v6);
  if ( v8 < 0 )
    winrt::throw_hresult((unsigned int)v8);
  result = winrt::com_ptr<IInspectable>::unconditional_release_ref(&v13);
  if ( ppv )
    return winrt::com_ptr<winrt::impl::IAgileObject>::unconditional_release_ref((__int64 *)&ppv);
  return result;
}
