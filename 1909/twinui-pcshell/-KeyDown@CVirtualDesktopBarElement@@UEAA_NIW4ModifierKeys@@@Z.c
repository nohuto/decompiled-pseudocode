/*
 * XREFs of ?KeyDown@CVirtualDesktopBarElement@@UEAA_NIW4ModifierKeys@@@Z @ 0x18038F7A0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?IsSameElement@ElementHelpers@@YA_NPEAUIMultitaskingViewElement@@0@Z @ 0x18037B9D8 (-IsSameElement@ElementHelpers@@YA_NPEAUIMultitaskingViewElement@@0@Z.c)
 *     ?MapToChildNavDir@ElementHelpers@@YAII@Z @ 0x180388AC8 (-MapToChildNavDir@ElementHelpers@@YAII@Z.c)
 *     ?SetFocusToElement@ElementHelpers@@YAXPEAUIMultitaskingViewElement@@@Z @ 0x18038E7C8 (-SetFocusToElement@ElementHelpers@@YAXPEAUIMultitaskingViewElement@@@Z.c)
 */

char __fastcall CVirtualDesktopBarElement::KeyDown(__int64 a1, int a2)
{
  char v4; // si
  int v5; // edi
  struct IMultitaskingViewElement *v6; // r8
  unsigned int v7; // eax
  unsigned int v8; // edi
  int v9; // eax
  ElementHelpers **v10; // rax
  struct IMultitaskingViewElement *v11; // rdx
  __int64 v13[3]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v15; // [rsp+50h] [rbp+8h] BYREF
  ElementHelpers *v16; // [rsp+68h] [rbp+20h] BYREF

  v4 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 168) + 240LL))(*(_QWORD *)(a1 + 168));
  if ( !v4 && ((a2 - 37) & 0xFFFFFFFD) == 0 )
  {
    v5 = -(a2 != 39);
    (*(void (__fastcall **)(__int64, ElementHelpers **, _QWORD, _QWORD, _DWORD))(*(_QWORD *)a1 + 272LL))(
      a1,
      &v16,
      *(_QWORD *)(a1 + 168),
      (unsigned int)(v5 + 4),
      0);
    if ( v16 )
    {
      if ( ElementHelpers::IsSameElement((struct IUnknown *)v16, *(struct IUnknown **)(a1 + 744), v6) )
      {
        v7 = ElementHelpers::MapToChildNavDir((ElementHelpers *)(unsigned int)(v5 + 4));
        v15 = 0LL;
        v8 = v7;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
        v9 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(a1 + 736))(
               *(_QWORD *)(a1 + 736),
               &GUID_0bb549a1_eae6_47ed_b29e_ca24ee64ad8d,
               &v15);
        if ( v9 >= 0 )
        {
          v10 = (ElementHelpers **)(*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD, _QWORD, _DWORD))(*(_QWORD *)v15 + 272LL))(
                                     v15,
                                     v13,
                                     0LL,
                                     v8,
                                     0);
          ElementHelpers::SetFocusToElement(*v10, v11);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v13);
        }
        else
        {
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x8D,
            (__int64)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopbarelement.cpp",
            (const char *)(unsigned int)v9);
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
      }
      (*(void (__fastcall **)(__int64, ElementHelpers *))(*(_QWORD *)a1 + 288LL))(a1, v16);
    }
    v4 = 1;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
  }
  return v4;
}
