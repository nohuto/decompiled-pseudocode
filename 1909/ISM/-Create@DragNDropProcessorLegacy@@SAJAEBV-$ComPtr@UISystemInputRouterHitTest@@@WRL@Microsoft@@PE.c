/*
 * XREFs of ?Create@DragNDropProcessorLegacy@@SAJAEBV?$ComPtr@UISystemInputRouterHitTest@@@WRL@Microsoft@@PEAPEAV1@@Z @ 0x1800FE814
 * Callers:
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x1800199E8 (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x180014ED0 (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ??0DragNDropProcessorLegacy@@AEAA@AEBV?$ComPtr@UISystemInputRouterHitTest@@@WRL@Microsoft@@@Z @ 0x1800FE234 (--0DragNDropProcessorLegacy@@AEAA@AEBV-$ComPtr@UISystemInputRouterHitTest@@@WRL@Microsoft@@@Z.c)
 *     ?Initialize@DragNDropProcessorLegacy@@AEAAJXZ @ 0x1800FF310 (-Initialize@DragNDropProcessorLegacy@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall DragNDropProcessorLegacy::Create(__int64 *a1, DragNDropProcessorLegacy **a2)
{
  unsigned int v4; // ebx
  __int64 v5; // r9
  __int64 v6; // rdx
  void *v7; // rax
  DragNDropProcessorLegacy *v8; // rdi
  int v9; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  DragNDropProcessorLegacy *v12; // [rsp+48h] [rbp+10h] BYREF
  void *v13; // [rsp+50h] [rbp+18h]

  v12 = 0LL;
  if ( a2 )
  {
    v7 = RefCountedObject::operator new(0xD0uLL);
    v13 = v7;
    if ( v7 )
      v8 = (DragNDropProcessorLegacy *)DragNDropProcessorLegacy::DragNDropProcessorLegacy((__int64)v7, a1);
    else
      v8 = 0LL;
    v12 = v8;
    if ( v8 )
    {
      v9 = DragNDropProcessorLegacy::Initialize(v8);
      v4 = v9;
      if ( v9 >= 0 )
      {
        v12 = 0LL;
        *a2 = v8;
        v4 = 0;
        goto LABEL_12;
      }
      v5 = (unsigned int)v9;
      v6 = 125LL;
    }
    else
    {
      v4 = -2147024882;
      v5 = 2147942414LL;
      v6 = 122LL;
    }
  }
  else
  {
    v4 = -2147024809;
    v5 = 2147942487LL;
    v6 = 115LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\dragndroplegacy\\system\\lib\\d"
             "ragndropprocessorlegacy.cpp",
    (const char *)v5);
LABEL_12:
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)&v12);
  return v4;
}
