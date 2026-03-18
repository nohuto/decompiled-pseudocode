/*
 * XREFs of ?Partition_ToggleHolographicSuspension@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_TOGGLEHOLOGRAPHICSUSPENSION@@@Z @ 0x18007854C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?IsEnabled@CompositorTracing@@SA_NE_K@Z @ 0x1800785A0 (-IsEnabled@CompositorTracing@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VCompositorTracing@@@details@wil@@QEAAPEAVCompositorTracing@@P6AXXZ@Z @ 0x1800785C4 (-get@-$static_lazy@VCompositorTracing@@@details@wil@@QEAAPEAVCompositorTracing@@P6AXXZ@Z.c)
 *     ?DwmHolographicSuspendRequest_@CompositorTracing@@QEAAX_N@Z @ 0x18020AD70 (-DwmHolographicSuspendRequest_@CompositorTracing@@QEAAX_N@Z.c)
 *     ?PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z @ 0x180211B90 (-PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z.c)
 */

__int64 __fastcall CComposition::Partition_ToggleHolographicSuspension(
        CComposition *this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct MILCMD_PARTITION_TOGGLEHOLOGRAPHICSUSPENSION *a4)
{
  __int64 v4; // rdi
  unsigned __int8 v5; // bl
  __int64 v7; // rcx
  CHolographicInteropTaskQueue *v8; // rcx
  CompositorTracing *v9; // rcx

  v4 = *((_QWORD *)this + 15);
  v5 = *((_DWORD *)a4 + 1) != 0;
  if ( v5 != *(_BYTE *)(v4 + 217) )
  {
    if ( CompositorTracing::IsEnabled((unsigned __int8)this, (unsigned __int64)a2) )
    {
      wil::details::static_lazy<CompositorTracing>::get(
        v7,
        lambda_54eb6a81c7e2c53bee8fa6139f2800b5_::_lambda_invoker_cdecl_);
      CompositorTracing::DwmHolographicSuspendRequest_(v9, v5);
    }
    v8 = *(CHolographicInteropTaskQueue **)(v4 + 40);
    *(_BYTE *)(v4 + 217) = v5;
    if ( v8 )
      CHolographicInteropTaskQueue::PostMessageW(v8, 0x1Bu, 0LL, (void *)v5, 0LL, 0LL, 0LL);
  }
  return 0LL;
}
