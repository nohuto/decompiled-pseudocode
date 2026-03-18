/*
 * XREFs of ?MxSubscribeWnfStateChange@MxWnf@@SAJPEAPEAU_MX_WNF_SUBSCRIPTION_CONTEXT@@PEAU_WNF_STATE_NAME@@P6AJPEAU2@PEAX@Z33@Z @ 0x1C00941A8
 * Callers:
 *     ?SleepStudyEvaluateParticipation@FxPkgPnp@@QEAAXXZ @ 0x1C0088118 (-SleepStudyEvaluateParticipation@FxPkgPnp@@QEAAXXZ.c)
 * Callees:
 *     memset @ 0x1C001C1C0 (memset.c)
 */

__int64 __fastcall MxWnf::MxSubscribeWnfStateChange(
        _MX_WNF_SUBSCRIPTION_CONTEXT **SubscriptionContext,
        _WNF_STATE_NAME *WnfStateName,
        int (__fastcall *CallbackContext)(_MX_WNF_SUBSCRIPTION_CONTEXT *, void *),
        void *a4)
{
  _MX_WNF_SUBSCRIPTION_CONTEXT *PoolWithTag; // rax
  _MX_WNF_SUBSCRIPTION_CONTEXT *v8; // rbx
  int v10; // edi

  PoolWithTag = (_MX_WNF_SUBSCRIPTION_CONTEXT *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x20uLL, 0x53535554u);
  v8 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225495LL;
  memset(PoolWithTag, 0, sizeof(_MX_WNF_SUBSCRIPTION_CONTEXT));
  v8->CallbackContext = a4;
  v8->Callback = (int (__fastcall *)(_MX_WNF_SUBSCRIPTION_CONTEXT *, void *))FxPkgPnp::_SleepStudyWnfCallback;
  v8->WnfStateName = *WnfStateName;
  *SubscriptionContext = v8;
  v10 = ExSubscribeWnfStateChange(v8, WnfStateName, 1LL);
  if ( v10 < 0 )
  {
    *SubscriptionContext = 0LL;
    ExFreePoolWithTag(v8, 0);
  }
  return (unsigned int)v10;
}
