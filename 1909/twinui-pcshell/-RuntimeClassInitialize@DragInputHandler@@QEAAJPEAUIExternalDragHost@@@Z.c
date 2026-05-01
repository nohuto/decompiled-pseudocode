/*
 * XREFs of ?RuntimeClassInitialize@DragInputHandler@@QEAAJPEAUIExternalDragHost@@@Z @ 0x180398218
 * Callers:
 *     ??$MakeAndInitialize@VDragInputHandler@@V1@AEAPEAUIExternalDragHost@@@Details@WRL@Microsoft@@YAJPEAPEAVDragInputHandler@@AEAPEAUIExternalDragHost@@@Z @ 0x180397F74 (--$MakeAndInitialize@VDragInputHandler@@V1@AEAPEAUIExternalDragHost@@@Details@WRL@Microsoft@@YAJ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     memset_0 @ 0x18008A73A (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180122920 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Shutdown@DragInputHandler@@UEAAJXZ @ 0x180398390 (-Shutdown@DragInputHandler@@UEAAJXZ.c)
 */

__int64 __fastcall DragInputHandler::RuntimeClassInitialize(HWND *this, struct IExternalDragHost *a2)
{
  const char *v4; // r9
  HWND v5; // rcx
  struct IExternalDragHost *v7; // rax
  WNDCLASSEXW v8; // [rsp+60h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]
  struct IExternalDragHost *v10; // [rsp+C0h] [rbp+8h] BYREF

  v8.cbSize = 80;
  memset_0(&v8.style, 0, 0x4CuLL);
  v8.cbWndExtra = 8;
  v8.lpfnWndProc = (WNDPROC)CWRLImpWndProc<DragInputHandler>::s_WndProcBase;
  v8.hInstance = &_ImageBase;
  v8.lpszClassName = L"MTVDragInputHandler";
  RegisterClassExW(&v8);
  CreateWindowExW(0x8200000u, L"MTVDragInputHandler", 0LL, 0x80000000, 0, 0, 0, 0, HWND_MESSAGE, 0LL, &_ImageBase, this);
  v5 = this[3];
  if ( !v5 )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x47,
             (__int64)"pcshell\\twinui\\multitaskingview\\lib\\draginputhandler.cpp",
             v4);
  if ( SetForegroundWindow(v5) )
  {
    SetCapture(this[3]);
    v7 = (struct IExternalDragHost *)this[5];
    if ( v7 != a2 )
    {
      if ( a2 )
      {
        (*(void (__fastcall **)(struct IExternalDragHost *))(*(_QWORD *)a2 + 8LL))(a2);
        v7 = (struct IExternalDragHost *)this[5];
      }
      v10 = v7;
      this[5] = (HWND)a2;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v10);
    }
    return 0LL;
  }
  else
  {
    DragInputHandler::Shutdown((DragInputHandler *)this);
    return 2147500037LL;
  }
}
