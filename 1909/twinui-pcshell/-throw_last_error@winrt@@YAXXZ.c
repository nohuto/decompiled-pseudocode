/*
 * XREFs of ?throw_last_error@winrt@@YAXXZ @ 0x1800C5130
 * Callers:
 *     ?await_suspend@resume_after@winrt@@QEAAXU?$coroutine_handle@X@experimental@std@@@Z @ 0x1800C4964 (-await_suspend@resume_after@winrt@@QEAAXU-$coroutine_handle@X@experimental@std@@@Z.c)
 * Callees:
 *     WINRT_GetLastError @ 0x18008AB0E (WINRT_GetLastError.c)
 *     ?hresult_from_win32@impl@winrt@@YAHI@Z @ 0x1800C4BCC (-hresult_from_win32@impl@winrt@@YAHI@Z.c)
 *     ??0hresult@winrt@@QEAA@H@Z @ 0x1801ED1F8 (--0hresult@winrt@@QEAA@H@Z.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x1801ED540 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

void __fastcall __noreturn winrt::throw_last_error(winrt *this)
{
  DWORD LastError; // eax
  int v2; // eax
  unsigned int *v3; // rax
  char v4; // [rsp+30h] [rbp+8h] BYREF

  LastError = WINRT_GetLastError();
  v2 = winrt::impl::hresult_from_win32((winrt::impl *)LastError);
  v3 = (unsigned int *)winrt::hresult::hresult((winrt::hresult *)&v4, v2);
  winrt::throw_hresult(*v3);
}
