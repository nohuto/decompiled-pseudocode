/*
 * XREFs of ?_UpdateBorder@CSwitchItemElement@@IEAAXXZ @ 0x180303180
 * Callers:
 *     ?SetFocused@CSwitchItemElement@@UEAAX_N@Z @ 0x1803029A0 (-SetFocused@CSwitchItemElement@@UEAAX_N@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?GetColor@CImmersiveColor@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z @ 0x180302050 (-GetColor@CImmersiveColor@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z.c)
 *     ?_ShouldRenderAsFocused@CMultitaskingViewElementBase@@IEAA_NXZ @ 0x180305DFC (-_ShouldRenderAsFocused@CMultitaskingViewElementBase@@IEAA_NXZ.c)
 */

void __fastcall CSwitchItemElement::_UpdateBorder(CSwitchItemElement *this)
{
  int v2; // eax
  int Color; // eax
  __int64 v4; // rcx
  int v5; // eax
  __int64 v6; // [rsp+20h] [rbp-20h] BYREF
  int v7; // [rsp+28h] [rbp-18h]
  int v8; // [rsp+30h] [rbp-10h] BYREF
  int v9; // [rsp+34h] [rbp-Ch]
  float v10; // [rsp+38h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+8h]

  if ( *((_QWORD *)this + 78) )
  {
    if ( CMultitaskingViewElementBase::_ShouldRenderAsFocused(this) )
    {
      v2 = *((_DWORD *)this + 101);
      v9 = 0;
      v10 = 0.0;
      v8 = v2;
      Color = CImmersiveColor::GetColor(0xB2u);
      v4 = *((_QWORD *)this + 78);
      v9 = Color;
      v6 = 0LL;
      v7 = 0;
      v10 = FLOAT_1_0;
      v5 = (*(__int64 (__fastcall **)(__int64, int *, __int64 *))(*(_QWORD *)v4 + 216LL))(v4, &v8, &v6);
      if ( v5 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          237LL,
          (__int64)"pcshell\\twinui\\multitaskingview\\lib\\switchitemelement.cpp",
          (const char *)(unsigned int)v5);
    }
    else
    {
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 78) + 224LL))(*((_QWORD *)this + 78));
    }
  }
}
