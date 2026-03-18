/*
 * XREFs of ?RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ @ 0x1800864F8
 * Callers:
 *     ?OnTimer@EnabledStateManager@details@wil@@QEAAXXZ @ 0x18008643C (-OnTimer@EnabledStateManager@details@wil@@QEAAXXZ.c)
 *     ?Destroy@?$manually_managed_shutdown_aware_object@VEnabledStateManager@details@wil@@@wil@@QEAAXXZ @ 0x1800EB61C (-Destroy@-$manually_managed_shutdown_aware_object@VEnabledStateManager@details@wil@@@wil@@QEAAXX.c)
 *     ??_GEnabledStateManager@details@wil@@QEAAPEAXI@Z @ 0x1801431D4 (--_GEnabledStateManager@details@wil@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x180086664 (-WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z.c)
 *     ?wil_details_RecordCachedUsage@@YAXIPEATwil_details_FeaturePropertyCache@@P6AXIIIPEBD@Z@Z @ 0x1800EDDF4 (-wil_details_RecordCachedUsage@@YAXIPEATwil_details_FeaturePropertyCache@@P6AXIIIPEBD@Z@Z.c)
 */

void __fastcall wil::details::EnabledStateManager::RecordCachedUsageUnderLock(
        wil::details::EnabledStateManager *this,
        __int64 a2,
        void (*a3)(unsigned int, unsigned int, unsigned int, const char *))
{
  __int64 v3; // rdi
  unsigned __int64 v5; // rbx
  __int64 v6; // rbx
  const char *v7; // [rsp+20h] [rbp-8h]

  v3 = *((_QWORD *)this + 6);
  v5 = (unsigned __int64)(*((_QWORD *)this + 7) - v3) >> 4;
  if ( v5 )
  {
    v6 = v3 + 16 * v5;
    while ( v3 != v6 )
    {
      wil_details_RecordCachedUsage(*(_DWORD *)v3, *(union wil_details_FeaturePropertyCache **)(v3 + 8), a3);
      v3 += 16LL;
    }
    *((_QWORD *)this + 7) = *((_QWORD *)this + 6);
    wil::details::WilApi_RecordFeatureUsage(0LL, 0xFEu, 0, 0, v7);
  }
}
