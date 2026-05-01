/*
 * XREFs of ?_UpdateBorder@CSwitchItemElement@@IEAAXXZ @ 0x180383308
 * Callers:
 *     ?SetFocused@CSwitchItemElement@@UEAAX_N@Z @ 0x180382B30 (-SetFocused@CSwitchItemElement@@UEAAX_N@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?GetColor@CImmersiveColor@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z @ 0x1803821E0 (-GetColor@CImmersiveColor@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z.c)
 *     ?_ShouldRenderAsFocused@CMultitaskingViewElementBase@@IEAA_NXZ @ 0x180385F58 (-_ShouldRenderAsFocused@CMultitaskingViewElementBase@@IEAA_NXZ.c)
 */

void __fastcall CSwitchItemElement::_UpdateBorder(CSwitchItemElement *this)
{
  int v2; // eax
  int Color; // eax
  __int64 v4; // rcx
  int v5; // eax
  int v6; // [rsp+20h] [rbp-28h] BYREF
  int v7; // [rsp+24h] [rbp-24h]
  float v8; // [rsp+28h] [rbp-20h]
  _DWORD v9[6]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( *((_QWORD *)this + 78) )
  {
    if ( CMultitaskingViewElementBase::_ShouldRenderAsFocused(this) )
    {
      v2 = *((_DWORD *)this + 101);
      v7 = 0;
      v8 = 0.0;
      v6 = v2;
      Color = CImmersiveColor::GetColor(0xB2u);
      v4 = *((_QWORD *)this + 78);
      v9[0] = 0;
      v9[1] = 0;
      v9[2] = 0;
      v7 = Color;
      v8 = FLOAT_1_0;
      v5 = (*(__int64 (__fastcall **)(__int64, int *, _DWORD *))(*(_QWORD *)v4 + 216LL))(v4, &v6, v9);
      if ( v5 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xED,
          (__int64)"pcshell\\twinui\\multitaskingview\\lib\\switchitemelement.cpp",
          (const char *)(unsigned int)v5);
    }
    else
    {
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 78) + 224LL))(*((_QWORD *)this + 78));
    }
  }
}
