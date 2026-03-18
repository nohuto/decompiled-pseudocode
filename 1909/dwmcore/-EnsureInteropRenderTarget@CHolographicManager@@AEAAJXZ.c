/*
 * XREFs of ?EnsureInteropRenderTarget@CHolographicManager@@AEAAJXZ @ 0x180240184
 * Callers:
 *     CHolographicInteropTaskQueue::ProcessPendingMessages__lambda_db6293ec4389496e05a5db7898b72386___ @ 0x18023EF9C (CHolographicInteropTaskQueue--ProcessPendingMessages__lambda_db6293ec4389496e05a5db7898b72386___.c)
 * Callees:
 *     ?AddRenderTarget@CRenderTargetManager@@QEAAJPEAVCRenderTarget@@@Z @ 0x180028390 (-AddRenderTarget@CRenderTargetManager@@QEAAJPEAVCRenderTarget@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsEnabled@CompositorTracing@@SA_NE_K@Z @ 0x1800D626C (-IsEnabled@CompositorTracing@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VCompositorTracing@@@details@wil@@QEAAPEAVCompositorTracing@@P6AXXZ@Z @ 0x1800D6290 (-get@-$static_lazy@VCompositorTracing@@@details@wil@@QEAAPEAVCompositorTracing@@P6AXXZ@Z.c)
 *     ?HolographicInteropTargetCreated_@CompositorTracing@@QEAAXAEBU_LUID@@@Z @ 0x18024044C (-HolographicInteropTargetCreated_@CompositorTracing@@QEAAXAEBU_LUID@@@Z.c)
 *     ?Create@CHolographicInteropTarget@@SAJPEAVCComposition@@PEAU_LUID@@PEAPEAV1@@Z @ 0x180243EAC (-Create@CHolographicInteropTarget@@SAJPEAVCComposition@@PEAU_LUID@@PEAPEAV1@@Z.c)
 *     ?PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z @ 0x180246EBC (-PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z.c)
 */

__int64 __fastcall CHolographicManager::EnsureInteropRenderTarget(CHolographicManager *this)
{
  unsigned int v1; // ebx
  struct _LUID *v2; // rsi
  struct CHolographicInteropTarget **v4; // r14
  signed int v5; // eax
  __int64 v6; // rcx
  CHolographicInteropTaskQueue *v7; // rcx
  __int64 v8; // rcx
  CompositorTracing *v9; // rcx
  unsigned int v11; // [rsp+20h] [rbp-28h]

  v1 = 0;
  v2 = (struct _LUID *)((char *)this + 68);
  if ( !*((_DWORD *)this + 17) && !*((_DWORD *)this + 18) || !*((_BYTE *)this + 240) )
  {
    v1 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, 0x80004005, 0x3B2u, 0LL);
    return v1;
  }
  v4 = (struct CHolographicInteropTarget **)((char *)this + 32);
  if ( *((_QWORD *)this + 4) )
    return v1;
  v5 = CHolographicInteropTarget::Create(*((struct CComposition **)this + 3), v2, v4);
  v1 = v5;
  if ( v5 < 0 )
  {
    v11 = 951;
    goto LABEL_15;
  }
  v5 = CRenderTargetManager::AddRenderTarget(*(CRenderTargetManager **)(*((_QWORD *)this + 3) + 64LL), *v4);
  v1 = v5;
  if ( v5 < 0 )
  {
    v11 = 953;
LABEL_15:
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, v11, 0LL);
    return v1;
  }
  v7 = (CHolographicInteropTaskQueue *)*((_QWORD *)this + 6);
  if ( v7 && *((_BYTE *)this + 240) )
    CHolographicInteropTaskQueue::PostMessageW(v7, 0x14u, (struct IUnknown *)*v4, 0LL, 0LL, 0LL, 0LL);
  if ( CompositorTracing::IsEnabled((__int64)v7) )
  {
    wil::details::static_lazy<CompositorTracing>::get(
      v8,
      (void (__cdecl *)())lambda_54eb6a81c7e2c53bee8fa6139f2800b5_::_lambda_invoker_cdecl_);
    CompositorTracing::HolographicInteropTargetCreated_(v9, v2);
  }
  return v1;
}
