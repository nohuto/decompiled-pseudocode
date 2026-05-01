/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_6937d4ae17bb244dbfbdfe30bf95aa3c___::Run @ 0x1800A6810
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_SendViewToDesktop@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@CAJPEAUIWin32ApplicationView@@_N@Z @ 0x18023526C (-_SendViewToDesktop@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@CAJPEAUIWin32App.c)
 */

void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_6937d4ae17bb244dbfbdfe30bf95aa3c___::Run(
        __int64 a1)
{
  int v1; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::_SendViewToDesktop(
         *(struct IWin32ApplicationView **)(a1 + 16),
         *(_BYTE *)(a1 + 24));
  if ( v1 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x41A,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\win32backedviewhostitem.cpp",
      (const char *)(unsigned int)v1);
}
