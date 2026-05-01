/*
 * XREFs of ?SetDisabledButton@CScrollButtonContainer@@UEAAXW4ScrollButton@@@Z @ 0x18039BC00
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIGlyphButton@@@?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIGlyphButton@@@WRL@Microsoft@@@Details@12@@Z @ 0x180381574 (--$As@UIGlyphButton@@@-$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$C.c)
 */

__int64 __fastcall CScrollButtonContainer::SetDisabledButton(__int64 a1, int a2)
{
  char v2; // si
  bool v4; // di
  int v5; // eax
  __int64 v6; // rdx
  int v7; // eax
  __int64 v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  v2 = 1;
  v4 = 1;
  if ( a2 == 1 )
    v2 = 0;
  else
    v4 = a2 != 2;
  v11 = 0LL;
  v5 = Microsoft::WRL::ComPtr<IMultitaskingViewElement>::As<IGlyphButton>((_QWORD *)(a1 + 200), &v11);
  if ( v5 >= 0 )
  {
    LOBYTE(v6) = v2;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 32LL))(v11, v6);
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x90,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\scrollbuttoncontainerelement.cpp",
      (const char *)(unsigned int)v5);
  }
  v7 = Microsoft::WRL::ComPtr<IMultitaskingViewElement>::As<IGlyphButton>((_QWORD *)(a1 + 192), &v11);
  if ( v7 >= 0 )
  {
    LOBYTE(v8) = v4;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 32LL))(v11, v8);
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x95,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\scrollbuttoncontainerelement.cpp",
      (const char *)(unsigned int)v7);
  }
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
}
