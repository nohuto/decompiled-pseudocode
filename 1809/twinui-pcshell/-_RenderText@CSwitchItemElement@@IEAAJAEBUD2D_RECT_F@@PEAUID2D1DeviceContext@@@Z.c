/*
 * XREFs of ?_RenderText@CSwitchItemElement@@IEAAJAEBUD2D_RECT_F@@PEAUID2D1DeviceContext@@@Z @ 0x180302FD8
 * Callers:
 *     _lambda_a818a4d1196700db3f726f95e02b7ab7_::operator() @ 0x180301A34 (_lambda_a818a4d1196700db3f726f95e02b7ab7_--operator().c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?ConvertColor@D2DUtil@@YA?AU_D3DCOLORVALUE@@KM@Z @ 0x180301DEC (-ConvertColor@D2DUtil@@YA-AU_D3DCOLORVALUE@@KM@Z.c)
 *     ?GetColor@CImmersiveColor@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z @ 0x180302050 (-GetColor@CImmersiveColor@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z.c)
 */

__int64 __fastcall CSwitchItemElement::_RenderText(
        CSwitchItemElement *this,
        const struct D2D_RECT_F *a2,
        struct ID2D1DeviceContext *a3,
        float a4)
{
  unsigned int Color; // eax
  int v8; // eax
  unsigned int v9; // ebx
  __int64 *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v14; // [rsp+50h] [rbp-58h] BYREF
  struct _D3DCOLORVALUE v15; // [rsp+58h] [rbp-50h] BYREF
  __int128 v16; // [rsp+68h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]

  v14 = 0LL;
  Color = CImmersiveColor::GetColor(0xB0u);
  v16 = *(_OWORD *)&D2DUtil::ConvertColor(&v15, (struct _D3DCOLORVALUE *)Color, 1.0, a4)->r;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
  v8 = (*(__int64 (__fastcall **)(struct ID2D1DeviceContext *, __int128 *, _QWORD, __int64 *))(*(_QWORD *)a3 + 64LL))(
         a3,
         &v16,
         0LL,
         &v14);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v10 = (__int64 *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 73) + 24LL))(*((_QWORD *)this + 73));
    v11 = v10[1];
    v12 = *v10;
    if ( v11 == -1 )
    {
      if ( v12 )
      {
        do
          ++v11;
        while ( *(_WORD *)(v12 + 2 * v11) );
      }
      else
      {
        LODWORD(v11) = 0;
      }
    }
    (*(void (__fastcall **)(struct ID2D1DeviceContext *, __int64, _QWORD, _QWORD, const struct D2D_RECT_F *, __int64, _DWORD, _DWORD))(*(_QWORD *)a3 + 216LL))(
      a3,
      v12,
      (unsigned int)v11,
      *((_QWORD *)this + 72),
      a2,
      v14,
      0,
      0);
    v9 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1FA,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\switchitemelement.cpp",
      (const char *)(unsigned int)v8);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
  return v9;
}
