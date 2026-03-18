/*
 * XREFs of ?Create@CCompositionSwapchainStatistics@@SAJPEAXPEAPEAV1@@Z @ 0x1801DBA04
 * Callers:
 *     ?Initialize@CBindInfo@CCompositionSurfaceInfo@@QEAAJ_K@Z @ 0x1800975F8 (-Initialize@CBindInfo@CCompositionSurfaceInfo@@QEAAJ_K@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000EB00 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x18004F094 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?Initialize@CCompositionSwapchainStatistics@@IEAAJPEAX@Z @ 0x1801DBBD8 (-Initialize@CCompositionSwapchainStatistics@@IEAAJPEAX@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CCompositionSwapchainStatistics::Create(void *a1, struct CCompositionSwapchainStatistics **a2)
{
  CCompositionSwapchainStatistics *v4; // rax
  CCompositionSwapchainStatistics *v5; // rbx
  int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // edi
  void *retaddr; // [rsp+38h] [rbp+0h]
  CCompositionSwapchainStatistics *v11; // [rsp+50h] [rbp+18h] BYREF

  v4 = (CCompositionSwapchainStatistics *)WPF::ProcessHeapImpl::AllocClear(0x38uLL);
  v5 = v4;
  if ( !v4 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  *((_DWORD *)v4 + 2) = 0;
  v11 = v4;
  *(_QWORD *)v4 = &CCompositionSwapchainStatistics::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)v4 + 2) = &CCompositionSwapchainStatistics::`vftable'{for `ICompositionSurfaceStatistics'};
  *((_QWORD *)v4 + 3) = 0LL;
  *((_QWORD *)v4 + 4) = 0LL;
  *((_QWORD *)v4 + 5) = 0LL;
  *((_QWORD *)v4 + 6) = 0LL;
  (*(void (__fastcall **)(CCompositionSwapchainStatistics *))(*(_QWORD *)v4 + 8LL))(v4);
  v6 = CCompositionSwapchainStatistics::Initialize(v5, a1);
  v8 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x13u);
  }
  else
  {
    v11 = 0LL;
    *a2 = v5;
  }
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)&v11);
  return v8;
}
