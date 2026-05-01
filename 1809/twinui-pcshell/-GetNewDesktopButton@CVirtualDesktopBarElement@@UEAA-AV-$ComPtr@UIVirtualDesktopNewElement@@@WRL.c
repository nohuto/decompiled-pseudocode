/*
 * XREFs of ?GetNewDesktopButton@CVirtualDesktopBarElement@@UEAA?AV?$ComPtr@UIVirtualDesktopNewElement@@@WRL@Microsoft@@XZ @ 0x18030F740
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$As@UIVirtualDesktopNewElement@@@?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIVirtualDesktopNewElement@@@WRL@Microsoft@@@Details@12@@Z @ 0x18030F500 (--$As@UIVirtualDesktopNewElement@@@-$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV-$C.c)
 */

__int64 *__fastcall CVirtualDesktopBarElement::GetNewDesktopButton(__int64 a1, __int64 *a2)
{
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a2 = 0LL;
  v3 = Microsoft::WRL::ComPtr<IMultitaskingViewElement>::As<IVirtualDesktopNewElement>((_QWORD *)(a1 + 544), a2);
  if ( v3 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      192LL,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopbarelement.cpp",
      (const char *)(unsigned int)v3);
  return a2;
}
