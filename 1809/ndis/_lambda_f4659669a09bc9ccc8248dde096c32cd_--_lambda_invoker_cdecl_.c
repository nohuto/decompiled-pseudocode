/*
 * XREFs of _lambda_f4659669a09bc9ccc8248dde096c32cd_::_lambda_invoker_cdecl_ @ 0x1C00D0FF0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_Zq @ 0x1C004F838 (WPP_SF_Zq.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00C1204 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00C2A58 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 */

void __fastcall lambda_f4659669a09bc9ccc8248dde096c32cd_::_lambda_invoker_cdecl_(Ndis::BindState *this)
{
  _NDIS_MINIPORT_BLOCK *Miniport; // rdi
  struct _NDIS_MINIPORT_BLOCK *v3; // rdx

  Miniport = this->Miniport;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(&Miniport->BindEngine.m_lock, 0LL);
  if ( Ndis::BindState::SetBinding(
         this,
         BindingEnabled,
         Reason_DisabledByLegacyIoctl|Reason_DriverRejectedBinding|Reason_LastRestartAttemptFailed|Reason_LastBindAttemptFailed)
    && (unsigned __int8)byte_1C00A026B >= 4u )
  {
    WPP_SF_Zq(0xFu, &WPP_e71ea69b5edd301746dbdb8179a32a42_Traceguids, 0LL, 0LL);
  }
  Miniport->BindEngine.m_isDirty = 1;
  Ndis::BindEngine::EndPolicyUpdates(&Miniport->BindEngine, v3);
}
