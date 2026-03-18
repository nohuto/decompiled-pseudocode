/*
 * XREFs of ?EnsureInteropRenderTarget@CHolographicManager@@AEAAJXZ @ 0x18020B124
 * Callers:
 *     CHolographicInteropTaskQueue::ProcessPendingMessages__lambda_1af5a33988fbdcb1a8e6d38412aed786___ @ 0x18020A25C (CHolographicInteropTaskQueue--ProcessPendingMessages__lambda_1af5a33988fbdcb1a8e6d38412aed786___.c)
 * Callees:
 *     ?IsEnabled@CompositorTracing@@SA_NE_K@Z @ 0x1800785A0 (-IsEnabled@CompositorTracing@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VCompositorTracing@@@details@wil@@QEAAPEAVCompositorTracing@@P6AXXZ@Z @ 0x1800785C4 (-get@-$static_lazy@VCompositorTracing@@@details@wil@@QEAAPEAVCompositorTracing@@P6AXXZ@Z.c)
 *     ?AddRenderTarget@CRenderTargetManager@@QEAAJPEAVCRenderTarget@@@Z @ 0x18007E880 (-AddRenderTarget@CRenderTargetManager@@QEAAJPEAVCRenderTarget@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?HolographicInteropTargetCreated_@CompositorTracing@@QEAAXAEBU_LUID@@@Z @ 0x18020B3D4 (-HolographicInteropTargetCreated_@CompositorTracing@@QEAAXAEBU_LUID@@@Z.c)
 *     ?Create@CHolographicInteropTarget@@SAJPEAVCComposition@@PEAU_LUID@@PEAPEAV1@@Z @ 0x180210B9C (-Create@CHolographicInteropTarget@@SAJPEAVCComposition@@PEAU_LUID@@PEAPEAV1@@Z.c)
 *     ?PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z @ 0x180211B90 (-PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z.c)
 */

__int64 __fastcall CHolographicManager::EnsureInteropRenderTarget(CHolographicManager *this)
{
  struct _LUID *v1; // rsi
  unsigned int v2; // ebx
  struct CHolographicInteropTarget **v4; // r14
  int v5; // eax
  __int64 v6; // rcx
  CHolographicInteropTaskQueue *v7; // rcx
  __int64 v8; // rcx
  CompositorTracing *v9; // rcx
  unsigned int v11; // [rsp+20h] [rbp-28h]

  v1 = (struct _LUID *)((char *)this + 60);
  v2 = 0;
  if ( !*((_DWORD *)this + 15) && !*((_DWORD *)this + 16) || !*((_BYTE *)this + 216) )
  {
    v2 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2147467259, 0x36Du);
    return v2;
  }
  v4 = (struct CHolographicInteropTarget **)((char *)this + 24);
  if ( *((_QWORD *)this + 3) )
    return v2;
  v5 = CHolographicInteropTarget::Create(*((struct CComposition **)this + 2), v1, v4);
  v2 = v5;
  if ( v5 < 0 )
  {
    v11 = 882;
    goto LABEL_15;
  }
  v5 = CRenderTargetManager::AddRenderTarget(*(CRenderTargetManager **)(*((_QWORD *)this + 2) + 64LL), *v4);
  v2 = v5;
  if ( v5 < 0 )
  {
    v11 = 884;
LABEL_15:
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, v11);
    return v2;
  }
  v7 = (CHolographicInteropTaskQueue *)*((_QWORD *)this + 5);
  if ( v7 && *((_BYTE *)this + 216) )
    CHolographicInteropTaskQueue::PostMessageW(v7, 0x14u, (struct IUnknown *)*v4, 0LL, 0LL, 0LL, 0LL);
  if ( CompositorTracing::IsEnabled((__int64)v7) )
  {
    wil::details::static_lazy<CompositorTracing>::get(
      v8,
      (void (__cdecl *)())lambda_54eb6a81c7e2c53bee8fa6139f2800b5_::_lambda_invoker_cdecl_);
    CompositorTracing::HolographicInteropTargetCreated_(v9, v1);
  }
  return v2;
}
