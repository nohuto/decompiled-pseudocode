/*
 * XREFs of ?AddWinRTApplicationView@CApplicationViewManager@@UEAAJPEAUIImmersiveApplication@@PEAUIUnknown@@@Z @ 0x1800424C0
 * Callers:
 *     <none>
 * Callees:
 *     ?RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1800282B0 (-RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_V.c)
 *     ?RuntimeClassInitialize@CWinRTApplicationView@@QEAAJXZ @ 0x180041F14 (-RuntimeClassInitialize@CWinRTApplicationView@@QEAAJXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApplicationViewBase@@UIWinRTApplicationView@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180042620 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApplicationViewB.c)
 *     ??0CWinRTApplicationView@@QEAA@PEAUIImmersiveApplication@@@Z @ 0x18004265C (--0CWinRTApplicationView@@QEAA@PEAUIImmersiveApplication@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x18011BE3C (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CApplicationViewManager::AddWinRTApplicationView(
        RTL_SRWLOCK *this,
        struct IImmersiveApplication *a2,
        struct IUnknown *a3)
{
  CWinRTApplicationView *v6; // rbx
  CWinRTApplicationView *v7; // rax
  CWinRTApplicationView *v8; // r14
  int v9; // eax
  int v10; // esi
  __int64 v11; // r8
  __int64 v12; // r9
  char *Ptr; // rdx
  CWinRTApplicationView **v14; // rdx
  __int64 v16; // r9
  __int64 v17; // rdx
  int v18; // [rsp+20h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  CWinRTApplicationView *v20; // [rsp+88h] [rbp+20h] BYREF

  v6 = 0LL;
  v18 = 0;
  v7 = (CWinRTApplicationView *)operator new(0x100uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = 0LL;
  if ( v7 )
  {
    v6 = CWinRTApplicationView::CWinRTApplicationView(v7, a2);
    v18 = (int)v6;
    v8 = v6;
  }
  if ( !v8 )
  {
    v10 = -2147024882;
    v16 = 2147942414LL;
    v17 = 533LL;
LABEL_20:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)v16,
      v18);
    goto LABEL_15;
  }
  v9 = CWinRTApplicationView::RuntimeClassInitialize(v6);
  v10 = v9;
  if ( v9 < 0 )
  {
    v16 = (unsigned int)v9;
    v17 = 534LL;
    goto LABEL_20;
  }
  AcquireSRWLockExclusive(this + 67);
  v20 = v8;
  (*(void (__fastcall **)(CWinRTApplicationView *))(*(_QWORD *)v8 + 8LL))(v8);
  v10 = 0;
  Ptr = (char *)this[69].Ptr;
  if ( Ptr != this[71].Ptr
    || (v10 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                &this[68],
                Ptr + 1,
                v11,
                v12),
        v10 >= 0) )
  {
    v14 = (CWinRTApplicationView **)((char *)this[68].Ptr + 8 * (__int64)this[69].Ptr++);
    if ( v14 )
    {
      *v14 = 0LL;
      if ( v14 != &v20 )
      {
        *v14 = v8;
        v20 = 0LL;
      }
    }
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
  if ( v10 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x219,
      (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v10,
      v18);
  else
    CApplicationViewManager::RaiseApplicationViewChanged(
      (__int64)this,
      (void (__fastcall ***)(_QWORD, GUID *, __int64 *))v8,
      0,
      (__int64)a3);
  if ( this != (RTL_SRWLOCK *)-536LL )
    ReleaseSRWLockExclusive(this + 67);
LABEL_15:
  if ( v6 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CApplicationViewBase,IWinRTApplicationView,Microsoft::WRL::FtmBase>::Release(v6);
  return (unsigned int)v10;
}
