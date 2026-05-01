/*
 * XREFs of ?ElementProviderFromPoint@AccessibleElementBase@@UEAAJNNPEAPEAUIRawElementProviderFragment@@@Z @ 0x180375330
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?GetAccessibleAncestor@ElementHelpers@@YA?AV?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@PEAUIMultitaskingViewElement@@@Z @ 0x18036EA7C (-GetAccessibleAncestor@ElementHelpers@@YA-AV-$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@.c)
 *     ?_GetElement@AccessibleElementBase@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1803764F8 (-_GetElement@AccessibleElementBase@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall AccessibleElementBase::ElementProviderFromPoint(
        AccessibleElementBase *this,
        double a2,
        double a3,
        struct IRawElementProviderFragment **a4)
{
  int Element; // ebx
  HWND v7; // rcx
  __int64 *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r9
  int v11; // eax
  __int64 v13; // [rsp+20h] [rbp-30h] BYREF
  __int64 v14; // [rsp+28h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+8h]
  void *v16; // [rsp+60h] [rbp+10h] BYREF
  struct tagPOINT Point; // [rsp+78h] [rbp+28h] BYREF

  *a4 = 0LL;
  v16 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
  Element = AccessibleElementBase::_GetElement(
              (AccessibleElementBase *)((char *)this - 16),
              &GUID_0bb549a1_eae6_47ed_b29e_ca24ee64ad8d,
              &v16);
  if ( Element >= 0 )
  {
    v7 = (HWND)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v16 + 328LL))(v16);
    if ( !v7 )
    {
      Element = -2147418113;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x12B,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\elementaccessibility.cpp",
        (const char *)0x8000FFFFLL);
      goto LABEL_10;
    }
    Point.x = (int)a2;
    Point.y = (int)a3;
    ScreenToClient(v7, &Point);
    v8 = (__int64 *)(*(__int64 (__fastcall **)(void *, __int64 *, struct tagPOINT *))(*(_QWORD *)v16 + 128LL))(
                      v16,
                      &v14,
                      &Point);
    ElementHelpers::GetAccessibleAncestor(&v13, *v8);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
    if ( v13 )
    {
      v11 = (*(__int64 (__fastcall **)(__int64, GUID *, struct IRawElementProviderFragment **))(*(_QWORD *)v13 + 376LL))(
              v13,
              &GUID_f7063da8_8359_439c_9297_bbc5299a7d87,
              a4);
      Element = v11;
      if ( v11 >= 0 )
      {
LABEL_9:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
        goto LABEL_10;
      }
      v10 = (unsigned int)v11;
      v9 = 307LL;
    }
    else
    {
      Element = -2147023728;
      v9 = 305LL;
      v10 = 2147943568LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\elementaccessibility.cpp",
      (const char *)v10);
    goto LABEL_9;
  }
LABEL_10:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
  return (unsigned int)Element;
}
