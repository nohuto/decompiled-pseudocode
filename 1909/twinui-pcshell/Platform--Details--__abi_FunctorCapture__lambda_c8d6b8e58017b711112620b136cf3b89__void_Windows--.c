/*
 * XREFs of Platform::Details::__abi_FunctorCapture__lambda_c8d6b8e58017b711112620b136cf3b89__void_Windows::UI::Xaml::Window___HWND_____::_scalar_deleting_destructor_ @ 0x1802D3F40
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008A0A0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CreateXamlExplorerHostWindow@XamlExplorerHostTelemetry@@QEAA@XZ @ 0x1802D3A00 (--1CreateXamlExplorerHostWindow@XamlExplorerHostTelemetry@@QEAA@XZ.c)
 */

__int64 *__fastcall Platform::Details::__abi_FunctorCapture__lambda_c8d6b8e58017b711112620b136cf3b89__void_Windows::UI::Xaml::Window___HWND_____::_scalar_deleting_destructor_(
        __int64 *a1,
        char a2)
{
  XamlExplorerHostTelemetry::CreateXamlExplorerHostWindow::~CreateXamlExplorerHostWindow((XamlExplorerHostTelemetry::CreateXamlExplorerHostWindow *)(a1 + 2));
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1 + 1);
  *a1 = (__int64)&Platform::Details::__abi_CaptureBase::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x148);
  return a1;
}
