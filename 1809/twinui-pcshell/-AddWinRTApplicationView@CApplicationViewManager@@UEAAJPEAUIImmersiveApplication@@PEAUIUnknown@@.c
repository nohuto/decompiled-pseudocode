/*
 * XREFs of ?AddWinRTApplicationView@CApplicationViewManager@@UEAAJPEAUIImmersiveApplication@@PEAUIUnknown@@@Z @ 0x180051600
 * Callers:
 *     <none>
 * Callees:
 *     ?RuntimeClassInitialize@CWinRTApplicationView@@QEAAJXZ @ 0x18002929C (-RuntimeClassInitialize@CWinRTApplicationView@@QEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApplicationViewBase@@UIWinRTApplicationView@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180051700 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApp_ea_180051700.c)
 *     ?_AddApplicationView@CApplicationViewManager@@AEAAJPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x1800517A0 (-_AddApplicationView@CApplicationViewManager@@AEAAJPEAUIApplicationView@@PEAUIUnknown@@@Z.c)
 *     ??0CWinRTApplicationView@@QEAA@PEAUIImmersiveApplication@@@Z @ 0x180051864 (--0CWinRTApplicationView@@QEAA@PEAUIImmersiveApplication@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationViewManager::AddWinRTApplicationView(
        RTL_SRWLOCK *this,
        struct IImmersiveApplication *a2,
        struct IUnknown *a3)
{
  CWinRTApplicationView *v6; // rbx
  CWinRTApplicationView *v7; // rax
  CWinRTApplicationView *v8; // r9
  CWinRTApplicationView *v9; // rsi
  int v10; // eax
  int v11; // ebp
  RTL_SRWLOCK *v12; // rdi
  CWinRTApplicationView *v13; // rax
  CWinRTApplicationView *v14; // r14
  __int64 v16; // r9
  __int64 v17; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v6 = 0LL;
  v7 = (CWinRTApplicationView *)operator new(0xF8uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = 0LL;
  v9 = 0LL;
  if ( v7 )
  {
    v6 = CWinRTApplicationView::CWinRTApplicationView(v7, a2);
    v8 = v6;
    v9 = v6;
  }
  if ( !v8 )
  {
    v11 = -2147024882;
    v16 = 2147942414LL;
    v17 = 533LL;
LABEL_14:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)v16);
    goto LABEL_9;
  }
  v10 = CWinRTApplicationView::RuntimeClassInitialize(v6);
  v11 = v10;
  if ( v10 < 0 )
  {
    v16 = (unsigned int)v10;
    v17 = 534LL;
    goto LABEL_14;
  }
  v12 = this + 64;
  AcquireSRWLockExclusive(this + 64);
  v11 = CApplicationViewManager::_AddApplicationView((CApplicationViewManager *)&this[-17], v6, a3);
  v13 = v9;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x219,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v11);
    v13 = v9;
  }
  v14 = v9;
  v9 = v13;
  if ( v12 )
  {
    ReleaseSRWLockExclusive(v12);
    v9 = v14;
  }
LABEL_9:
  if ( v9 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CApplicationViewBase,IWinRTApplicationView,Microsoft::WRL::FtmBase>::Release(v6);
  return (unsigned int)v11;
}
