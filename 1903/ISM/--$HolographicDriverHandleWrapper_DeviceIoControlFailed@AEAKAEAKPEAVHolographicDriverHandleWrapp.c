/*
 * XREFs of ??$HolographicDriverHandleWrapper_DeviceIoControlFailed@AEAKAEAKPEAVHolographicDriverHandleWrapper@Holographic@Internal@Windows@@AEBU_GUID@@@HolographicDriverClientContinuousTrace@@SAXAEAK0$$QEAPEAVHolographicDriverHandleWrapper@Holographic@Internal@Windows@@AEBU_GUID@@@Z @ 0x18014AB5C
 * Callers:
 *     ?DeviceIoControlHelper@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEBXKPEAXKPEAK@Z @ 0x180154CE4 (-DeviceIoControlHelper@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEBXKP.c)
 *     ?DeviceIoControlOverlapped@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEAXK0KPEAU_OVERLAPPED@@@Z @ 0x180154FE4 (-DeviceIoControlOverlapped@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPE.c)
 * Callees:
 *     ?HolographicDriverHandleWrapper_DeviceIoControlFailed_@HolographicDriverClientContinuousTrace@@QEAAXKKPEBXAEBU_GUID@@@Z @ 0x180158DC4 (-HolographicDriverHandleWrapper_DeviceIoControlFailed_@HolographicDriverClientContinuousTrace@@Q.c)
 *     ?IsEnabled@HolographicDriverClientContinuousTrace@@SA_NE_K@Z @ 0x180159868 (-IsEnabled@HolographicDriverClientContinuousTrace@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VHolographicDriverClientContinuousTrace@@@details@wil@@QEAAPEAVHolographicDriverClientContinuousTrace@@P6AXXZ@Z @ 0x18016176C (-get@-$static_lazy@VHolographicDriverClientContinuousTrace@@@details@wil@@QEAAPEAVHolographicDri.c)
 */

void __fastcall HolographicDriverClientContinuousTrace::HolographicDriverHandleWrapper_DeviceIoControlFailed<unsigned long &,unsigned long &,Windows::Internal::Holographic::HolographicDriverHandleWrapper *,_GUID const &>(
        unsigned int *a1,
        unsigned int *a2,
        const void **a3,
        const struct _GUID *a4)
{
  __int64 v8; // rcx
  HolographicDriverClientContinuousTrace *v9; // rcx

  if ( HolographicDriverClientContinuousTrace::IsEnabled((unsigned __int8)a1, (unsigned __int64)a2) )
  {
    wil::details::static_lazy<HolographicDriverClientContinuousTrace>::get(
      v8,
      lambda_fbd0f72fdb52924b760b88d2d8805198_::_lambda_invoker_cdecl_);
    HolographicDriverClientContinuousTrace::HolographicDriverHandleWrapper_DeviceIoControlFailed_(v9, *a1, *a2, *a3, a4);
  }
}
