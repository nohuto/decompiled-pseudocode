/*
 * XREFs of ?Create@CCompositionSwapchainStatistics@@SAJPEAXPEAPEAV1@@Z @ 0x1802652D4
 * Callers:
 *     ?Initialize@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJ_K@Z @ 0x18003D430 (-Initialize@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJ_K@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180026730 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180089A74 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x180159A90 (ModuleFailFastForHRESULT.c)
 *     ?Initialize@CCompositionSwapchainStatistics@@IEAAJPEAX@Z @ 0x1802654B0 (-Initialize@CCompositionSwapchainStatistics@@IEAAJPEAX@Z.c)
 */

__int64 __fastcall CCompositionSwapchainStatistics::Create(void *a1, struct CCompositionSwapchainStatistics **a2)
{
  CCompositionSwapchainStatistics *v4; // rax
  CCompositionSwapchainStatistics *v5; // rbx
  signed int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // edi
  const void *retaddr; // [rsp+38h] [rbp+0h]
  CCompositionSwapchainStatistics *v11; // [rsp+50h] [rbp+18h] BYREF

  v4 = (CCompositionSwapchainStatistics *)DefaultHeap::AllocClear(0x38uLL);
  v5 = v4;
  if ( !v4 )
    ModuleFailFastForHRESULT(-2147024882, retaddr);
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
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x11u, 0LL);
  }
  else
  {
    v11 = 0LL;
    *a2 = v5;
  }
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)&v11);
  return v8;
}
