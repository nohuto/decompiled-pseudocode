/*
 * XREFs of _lambda_f762a111a87cc3672fab2d2d37f8e7d5_::operator() @ 0x180212C40
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_f762a111a87cc3672fab2d2d37f8e7d5__void_Windows::Internal::OneCore::ViewEventHandlers::tagHostIdentifier_const_&___ptr64_::_Do_call @ 0x18021DFC0 (std--_Func_impl_no_alloc__lambda_f762a111a87cc3672fab2d2d37f8e7d5__void_Windows--In_ea_18021DFC0.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?_ViewFromViewInstanceId@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@@Z @ 0x180220CE0 (-_ViewFromViewInstanceId@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall lambda_f762a111a87cc3672fab2d2d37f8e7d5_::operator()(ViewEventDispatcher **a1, _DWORD *a2)
{
  unsigned __int64 v4; // rsi
  unsigned int Ancestor; // eax
  HWND PropW; // rax
  struct IViewWrapperInternal *v7; // [rsp+48h] [rbp+10h] BYREF

  if ( *a2 )
  {
    if ( *a2 == 1 )
    {
      v4 = *((int *)*a1 + 1);
      if ( !*((_DWORD *)*a1 + 1) && *(_DWORD *)*a1 != (_DWORD)v4 )
      {
        v7 = (struct IViewWrapperInternal *)(v4 & (unsigned __int64)v7);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v7);
        if ( (int)ViewEventDispatcher::_ViewFromViewInstanceId(a1[1], *(_DWORD *)*a1, &v7) >= 0 )
          v4 = (*(__int64 (__fastcall **)(struct IViewWrapperInternal *))(*(_QWORD *)v7 + 728LL))(v7);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v7);
      }
      Ancestor = 0;
      if ( v4 )
      {
        PropW = (HWND)GetPropW((HWND)v4, L"CrossProcessParentHWND");
        Ancestor = (unsigned int)GetAncestor(PropW, 2u);
      }
      *(_DWORD *)*a1 = 0;
      *((_DWORD *)*a1 + 1) = Ancestor;
      *((_DWORD *)*a1 + 2) = a2[2];
    }
  }
  else
  {
    *(_DWORD *)*a1 = a2[1];
    *((_DWORD *)*a1 + 1) = 0;
    *((_DWORD *)*a1 + 2) = 0;
  }
}
