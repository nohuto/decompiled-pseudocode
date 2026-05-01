/*
 * XREFs of ?_GetParentGrid@AccessibleElementBase@@IEAAJPEAPEAUISwitchItemGrid@@@Z @ 0x180376614
 * Callers:
 *     ?_GetGridItemCoordinates@AccessibleElementBase@@IEAAJPEAH0@Z @ 0x18037652C (-_GetGridItemCoordinates@AccessibleElementBase@@IEAAJPEAH0@Z.c)
 *     ?get_ContainingGrid@AccessibleElementBase@@UEAAJPEAPEAUIRawElementProviderSimple@@@Z @ 0x180376A80 (-get_ContainingGrid@AccessibleElementBase@@UEAAJPEAPEAUIRawElementProviderSimple@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?_GetElement@AccessibleElementBase@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1803764F8 (-_GetElement@AccessibleElementBase@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall AccessibleElementBase::_GetParentGrid(AccessibleElementBase *this, struct ISwitchItemGrid **a2)
{
  int Element; // ebx
  __int64 v5; // rbx
  _QWORD *v6; // rbx
  struct ISwitchItemGrid *v7; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+18h]
  struct ISwitchItemGrid *v10; // [rsp+48h] [rbp+28h] BYREF
  void *v11; // [rsp+50h] [rbp+30h] BYREF
  __int64 v12; // [rsp+58h] [rbp+38h] BYREF

  *a2 = 0LL;
  v11 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v11);
  Element = AccessibleElementBase::_GetElement(this, &GUID_0bb549a1_eae6_47ed_b29e_ca24ee64ad8d, &v11);
  if ( Element >= 0 )
  {
    v5 = *(_QWORD *)(*(__int64 (__fastcall **)(void *, __int64 *))(*(_QWORD *)v11 + 24LL))(v11, &v12);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
    if ( v5 )
    {
      v10 = 0LL;
      v6 = (_QWORD *)(*(__int64 (__fastcall **)(void *, __int64 *))(*(_QWORD *)v11 + 24LL))(v11, &v12);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v10);
      Element = (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*v6)(
                  *v6,
                  &GUID_32fb1eed_1f54_4f39_8ace_bc73caac51e2,
                  (__int64 *)&v10);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
      if ( Element >= 0 )
      {
        v7 = v10;
        v10 = 0LL;
        Element = 0;
        *a2 = v7;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2EE,
          (__int64)"pcshell\\twinui\\multitaskingview\\lib\\elementaccessibility.cpp",
          (const char *)(unsigned int)Element);
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v10);
    }
    else
    {
      Element = -2147220991;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2EA,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\elementaccessibility.cpp",
        (const char *)0x80040201LL);
    }
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v11);
  return (unsigned int)Element;
}
