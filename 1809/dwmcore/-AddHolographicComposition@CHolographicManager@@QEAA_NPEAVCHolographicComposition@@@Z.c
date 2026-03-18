/*
 * XREFs of ?AddHolographicComposition@CHolographicManager@@QEAA_NPEAVCHolographicComposition@@@Z @ 0x18020A548
 * Callers:
 *     ?ProcessCreate@CHolographicComposition@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHICCOMPOSITION_CREATE@@@Z @ 0x18020BF98 (-ProcessCreate@CHolographicComposition@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHICCOMPOSITI.c)
 * Callees:
 *     ?IsEnabled@CompositorTracing@@SA_NE_K@Z @ 0x1800785A0 (-IsEnabled@CompositorTracing@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VCompositorTracing@@@details@wil@@QEAAPEAVCompositorTracing@@P6AXXZ@Z @ 0x1800785C4 (-get@-$static_lazy@VCompositorTracing@@@details@wil@@QEAAPEAVCompositorTracing@@P6AXXZ@Z.c)
 *     ?DwmHolographicCompositionAdd_@CompositorTracing@@QEAAXXZ @ 0x18020A9E0 (-DwmHolographicCompositionAdd_@CompositorTracing@@QEAAXXZ.c)
 *     ?EnsureHolographicClient@CHolographicManager@@AEAAJXZ @ 0x18020AFF0 (-EnsureHolographicClient@CHolographicManager@@AEAAJXZ.c)
 *     ?InitializeClient@CHolographicManager@@AEAAXXZ @ 0x18020B47C (-InitializeClient@CHolographicManager@@AEAAXXZ.c)
 *     ?PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z @ 0x180211B90 (-PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z.c)
 */

bool __fastcall CHolographicManager::AddHolographicComposition(
        CHolographicManager *this,
        struct CHolographicComposition *a2)
{
  __int64 v5; // rcx
  __int64 v6; // rcx
  CompositorTracing *v7; // rcx
  bool v8; // zf

  if ( *((_BYTE *)this + 216) )
    return 0;
  if ( (int)CHolographicManager::EnsureHolographicClient(this) >= 0 )
  {
    *((_BYTE *)this + 216) = CHolographicInteropTaskQueue::PostMessageW(
                               *((CHolographicInteropTaskQueue **)this + 5),
                               9u,
                               (struct IUnknown *)(((unsigned __int64)a2 + 64) & -(__int64)(a2 != 0LL)),
                               0LL,
                               0LL,
                               0LL,
                               0LL);
    if ( CompositorTracing::IsEnabled(v5) )
    {
      wil::details::static_lazy<CompositorTracing>::get(
        v6,
        (void (__cdecl *)())lambda_54eb6a81c7e2c53bee8fa6139f2800b5_::_lambda_invoker_cdecl_);
      CompositorTracing::DwmHolographicCompositionAdd_(v7);
    }
    v8 = *((_BYTE *)this + 216) == 0;
    *((_DWORD *)this + 14) = DisplayId::Hmd;
    if ( !v8 )
      CHolographicManager::InitializeClient(this);
  }
  return *((_BYTE *)this + 216);
}
