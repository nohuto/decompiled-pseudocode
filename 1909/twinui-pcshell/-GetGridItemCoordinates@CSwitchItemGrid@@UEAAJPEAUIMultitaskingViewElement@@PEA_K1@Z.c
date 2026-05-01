/*
 * XREFs of ?GetGridItemCoordinates@CSwitchItemGrid@@UEAAJPEAUIMultitaskingViewElement@@PEA_K1@Z @ 0x1803883B0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?FindItem@GridLayout@@QEAAJAEBV?$ComPtr@UIMultitaskingViewGridElement@@@WRL@Microsoft@@PEA_K1@Z @ 0x180398C0C (-FindItem@GridLayout@@QEAAJAEBV-$ComPtr@UIMultitaskingViewGridElement@@@WRL@Microsoft@@PEA_K1@Z.c)
 */

__int64 __fastcall CSwitchItemGrid::GetGridItemCoordinates(
        CSwitchItemGrid *this,
        struct IMultitaskingViewElement *a2,
        unsigned __int64 *a3,
        unsigned __int64 *a4)
{
  int v8; // eax
  unsigned int Item; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v12; // [rsp+38h] [rbp+10h] BYREF

  v12 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
  v8 = (**(__int64 (__fastcall ***)(struct IMultitaskingViewElement *, GUID *, __int64 *))a2)(
         a2,
         &GUID_dda13508_825c_43f9_bcd8_7d0dc0e5d932,
         &v12);
  Item = v8;
  if ( v8 >= 0 )
    Item = GridLayout::FindItem((char *)this + 560, &v12, a3, a4);
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7E,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\grid.cpp",
      (const char *)(unsigned int)v8);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
  return Item;
}
