/*
 * XREFs of ??$MakeAndInitialize@VViewEventArgsForSelectTargetView@@V1@AEAPEAUIPropertySet@Collections@Foundation@Windows@@AEAI@Details@WRL@Microsoft@@YAJPEAPEAVViewEventArgsForSelectTargetView@@AEAPEAUIPropertySet@Collections@Foundation@Windows@@AEAI@Z @ 0x180266F4C
 * Callers:
 *     ?ViewNavigationRequested@ViewEventDispatcher@@QEAAXIIW4ViewActivationFlags@Navigation@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180272284 (-ViewNavigationRequested@ViewEventDispatcher@@QEAAXIIW4ViewActivationFlags@Navigation@@PEAUIProp.c)
 * Callees:
 *     ?Attach@?$ComPtr@VViewEventArgsForSelectTargetView@@@WRL@Microsoft@@QEAAXPEAVViewEventArgsForSelectTargetView@@@Z @ 0x18000E2D8 (-Attach@-$ComPtr@VViewEventArgsForSelectTargetView@@@WRL@Microsoft@@QEAAXPEAVViewEventArgsForSel.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x18000E500 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ??0ViewEventArgsForSelectTargetView@@QEAA@XZ @ 0x18000E5C0 (--0ViewEventArgsForSelectTargetView@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VViewEventArgsForSelectTargetView@@@WRL@Microsoft@@IEAAKXZ @ 0x1800784D0 (-InternalRelease@-$ComPtr@VViewEventArgsForSelectTargetView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<ViewEventArgsForSelectTargetView,ViewEventArgsForSelectTargetView,Windows::Foundation::Collections::IPropertySet * &,unsigned int &>(
        _QWORD *a1,
        __int64 *a2,
        int *a3)
{
  unsigned int v3; // edi
  ViewEventArgsForSelectTargetView *v7; // rax
  ViewEventArgsForSelectTargetView *v8; // rax
  int v9; // eax
  volatile signed __int64 *v10; // rbx
  __int64 v11; // rdx
  __int64 *v12; // rcx
  signed __int64 v13; // rax
  signed __int64 v14; // rtt
  volatile signed __int64 *v16; // [rsp+40h] [rbp+8h] BYREF
  ViewEventArgsForSelectTargetView *v17; // [rsp+58h] [rbp+20h]

  v3 = 0;
  *a1 = 0LL;
  v7 = (ViewEventArgsForSelectTargetView *)operator new(0x70uLL, (const struct std::nothrow_t *)&std::nothrow);
  v17 = v7;
  if ( v7 )
  {
    v8 = ViewEventArgsForSelectTargetView::ViewEventArgsForSelectTargetView(v7);
    v16 = 0LL;
    Microsoft::WRL::ComPtr<ViewEventArgsForSelectTargetView>::Attach(&v16, (__int64)v8);
    v9 = *a3;
    v10 = v16;
    v11 = *a2;
    v12 = (__int64 *)(v16 + 7);
    *((_DWORD *)v16 + 26) = v9;
    *((_DWORD *)v10 + 12) = 1;
    Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=(v12, v11);
    v13 = *((_QWORD *)v10 + 11);
    while ( v13 >= 0 )
    {
      v14 = v13;
      v13 = _InterlockedCompareExchange64(v10 + 11, v13 + 1, v13);
      if ( v14 == v13 )
        goto LABEL_8;
    }
    _InterlockedIncrement((volatile signed __int32 *)(2 * v13 + 16));
LABEL_8:
    *a1 = v16;
    Microsoft::WRL::ComPtr<ViewEventArgsForSelectTargetView>::InternalRelease(&v16);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v3;
}
