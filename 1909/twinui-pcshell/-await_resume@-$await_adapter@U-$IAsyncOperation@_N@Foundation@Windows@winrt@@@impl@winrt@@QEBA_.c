/*
 * XREFs of ?await_resume@?$await_adapter@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@@impl@winrt@@QEBA_NXZ @ 0x1800A4050
 * Callers:
 *     PenWorkspaceAppInstallBroker::QueueWhiteboardInstallInternal$_ResumeCoro$2 @ 0x1800A2960 (PenWorkspaceAppInstallBroker--QueueWhiteboardInstallInternal$_ResumeCoro$2.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x1801ED540 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

char __fastcall winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<bool>>::await_resume(
        _QWORD **a1)
{
  _QWORD *v1; // rax
  int v2; // eax
  char v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = *a1;
  v4 = 0;
  v2 = (*(__int64 (__fastcall **)(_QWORD, char *))(*(_QWORD *)*v1 + 64LL))(*v1, &v4);
  if ( v2 < 0 )
    winrt::throw_hresult((unsigned int)v2);
  return v4;
}
