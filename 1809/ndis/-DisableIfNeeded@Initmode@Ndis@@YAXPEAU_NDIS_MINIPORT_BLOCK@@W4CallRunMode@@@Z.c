/*
 * XREFs of ?DisableIfNeeded@Initmode@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z @ 0x1C00BE458
 * Callers:
 *     _lambda_adb42f86cf839cbbe3c588eaa9665cd9_::_lambda_invoker_cdecl_ @ 0x1C00B3910 (_lambda_adb42f86cf839cbbe3c588eaa9665cd9_--_lambda_invoker_cdecl_.c)
 *     ?Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z @ 0x1C00BDF78 (-Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z.c)
 *     _lambda_3586b9b7f2fd6000f93b66a493a8f736_::_lambda_invoker_cdecl_ @ 0x1C00BE420 (_lambda_3586b9b7f2fd6000f93b66a493a8f736_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?ndisMExitInitMode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z @ 0x1C00BE1DC (-ndisMExitInitMode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z.c)
 *     ?CheckAllDriversRunning@Initmode@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00BE4E8 (-CheckAllDriversRunning@Initmode@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

void __fastcall Ndis::Initmode::DisableIfNeeded(
        struct _NDIS_MINIPORT_BLOCK *this,
        enum CallRunMode a2,
        enum CallRunMode a3)
{
  struct _NDIS_MINIPORT_BLOCK *v5; // rdx
  bool v6; // bl

  if ( this->InitMode )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(&this->BindEngine.m_lock, 0LL);
    v6 = Ndis::Initmode::CheckAllDriversRunning((Ndis::Initmode *)this, v5);
    KeLeaveCriticalRegion();
    ExReleasePushLockEx(&this->BindEngine.m_lock, 0LL);
    if ( v6 )
      ndisMExitInitMode(this, a2);
  }
}
