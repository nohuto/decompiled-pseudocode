/*
 * XREFs of ?AddWin32ApplicationView@CApplicationViewManager@@UEAAJPEAUIClassicWindowExternal@@PEAPEAUIApplicationView@@@Z @ 0x180051190
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApplicationViewBase@@UIWin32ApplicationView@@UIAppSizeConstraintsCallback@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18004EFF0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApplicationViewB.c)
 *     ??0CWin32ApplicationView@@QEAA@PEAUIClassicWindowExternal@@@Z @ 0x180051284 (--0CWin32ApplicationView@@QEAA@PEAUIClassicWindowExternal@@@Z.c)
 *     ?_AddApplicationView@CApplicationViewManager@@AEAAJPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x1800517A0 (-_AddApplicationView@CApplicationViewManager@@AEAAJPEAUIApplicationView@@PEAUIUnknown@@@Z.c)
 *     ?RuntimeClassInitialize@CWin32ApplicationView@@QEAAJXZ @ 0x180051A60 (-RuntimeClassInitialize@CWin32ApplicationView@@QEAAJXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationViewManager::AddWin32ApplicationView(
        RTL_SRWLOCK *this,
        struct IClassicWindowExternal *a2,
        struct IApplicationView **a3)
{
  CWin32ApplicationView *v6; // rbx
  CWin32ApplicationView *v7; // rax
  CWin32ApplicationView *v8; // r9
  struct IApplicationView *v9; // rsi
  int v10; // eax
  unsigned int v11; // ebp
  int v12; // eax
  __int64 v14; // r9
  __int64 v15; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v6 = 0LL;
  v7 = (CWin32ApplicationView *)operator new(0x110uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = 0LL;
  v9 = 0LL;
  if ( v7 )
  {
    v6 = CWin32ApplicationView::CWin32ApplicationView(v7, a2);
    v8 = v6;
    v9 = v6;
  }
  if ( !v8 )
  {
    v11 = -2147024882;
    v14 = 2147942414LL;
    v15 = 518LL;
LABEL_14:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)v14);
    goto LABEL_9;
  }
  v10 = CWin32ApplicationView::RuntimeClassInitialize(v6);
  v11 = v10;
  if ( v10 < 0 )
  {
    v14 = (unsigned int)v10;
    v15 = 519LL;
    goto LABEL_14;
  }
  AcquireSRWLockExclusive(this + 64);
  v12 = CApplicationViewManager::_AddApplicationView((CApplicationViewManager *)&this[-17], v6, 0LL);
  v11 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x20B,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v12);
    if ( this != (RTL_SRWLOCK *)-512LL )
      ReleaseSRWLockExclusive(this + 64);
  }
  else
  {
    if ( this != (RTL_SRWLOCK *)-512LL )
      ReleaseSRWLockExclusive(this + 64);
    v6 = 0LL;
    *a3 = v9;
    v11 = 0;
    v9 = 0LL;
  }
LABEL_9:
  if ( v9 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CApplicationViewBase,IWin32ApplicationView,IAppSizeConstraintsCallback,Microsoft::WRL::FtmBase>::Release((__int64)v6);
  return v11;
}
