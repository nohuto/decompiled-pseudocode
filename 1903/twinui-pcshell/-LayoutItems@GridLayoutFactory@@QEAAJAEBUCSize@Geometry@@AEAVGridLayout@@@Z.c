/*
 * XREFs of ?LayoutItems@GridLayoutFactory@@QEAAJAEBUCSize@Geometry@@AEAVGridLayout@@@Z @ 0x18037951C
 * Callers:
 *     ?v_LayoutChildren@CSwitchItemGrid@@MEAAXXZ @ 0x18036A4B0 (-v_LayoutChildren@CSwitchItemGrid@@MEAAXXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Reset@GridLayout@@QEAAXXZ @ 0x1803699A8 (-Reset@GridLayout@@QEAAXXZ.c)
 *     ?_AssignItemsToRows@GridLayoutFactory@@AEAAJAEAVGridLayout@@AEBUCSize@Geometry@@@Z @ 0x180379B7C (-_AssignItemsToRows@GridLayoutFactory@@AEAAJAEAVGridLayout@@AEBUCSize@Geometry@@@Z.c)
 */

__int64 __fastcall GridLayoutFactory::LayoutItems(
        GridLayoutFactory *this,
        const struct Geometry::CSize *a2,
        struct GridLayout *a3)
{
  int v3; // edi
  int v5; // ebx
  int v7; // esi
  int v9; // eax
  unsigned int v10; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v3 = *((_DWORD *)this + 13);
  v5 = *((_DWORD *)this + 12);
  v7 = *((_DWORD *)a2 + 1);
  GridLayout::Reset(a3);
  *(_DWORD *)a3 = v5;
  *((_DWORD *)a3 + 1) = v3;
  *((_DWORD *)a3 + 2) = v7;
  v9 = GridLayoutFactory::_AssignItemsToRows(this, a3, a2);
  v10 = v9;
  if ( v9 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xBB,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\gridlayout.cpp",
      (const char *)(unsigned int)v9);
  return v10;
}
