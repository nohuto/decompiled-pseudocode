/*
 * XREFs of ?_RepaintCloseButton@CSwitchItemElement@@IEAAXXZ @ 0x1803832A0
 * Callers:
 *     ?SetFocused@CSwitchItemElement@@UEAAX_N@Z @ 0x180382B30 (-SetFocused@CSwitchItemElement@@UEAAX_N@Z.c)
 *     ?v_SetHotTracking@CSwitchItemElement@@MEAAX_N@Z @ 0x1803835E0 (-v_SetHotTracking@CSwitchItemElement@@MEAAX_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIGlyphButton@@@?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIGlyphButton@@@WRL@Microsoft@@@Details@12@@Z @ 0x180381574 (--$As@UIGlyphButton@@@-$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$C.c)
 */

void __fastcall CSwitchItemElement::_RepaintCloseButton(CSwitchItemElement *this)
{
  _QWORD *v1; // rcx
  int v2; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0LL;
  v1 = (_QWORD *)((char *)this + 600);
  if ( *v1 )
  {
    v2 = Microsoft::WRL::ComPtr<IMultitaskingViewElement>::As<IGlyphButton>(v1, &v4);
    if ( v2 >= 0 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 24LL))(v4);
    else
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1AA,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\switchitemelement.cpp",
        (const char *)(unsigned int)v2);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v4);
}
