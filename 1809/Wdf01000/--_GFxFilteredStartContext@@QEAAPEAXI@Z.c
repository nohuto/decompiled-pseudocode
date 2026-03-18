/*
 * XREFs of ??_GFxFilteredStartContext@@QEAAPEAXI@Z @ 0x1C0086C10
 * Callers:
 *     ?PnpSendStartDeviceDownTheStackOverload@FxPkgFdo@@EEAAEXZ @ 0x1C0086EF0 (-PnpSendStartDeviceDownTheStackOverload@FxPkgFdo@@EEAAEXZ.c)
 *     ?_PnpFilteredStartDeviceCompletionRoutine@FxPkgFdo@@KAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C00875D0 (-_PnpFilteredStartDeviceCompletionRoutine@FxPkgFdo@@KAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C00054C8 (-FxPoolFree@@YAXPEAX@Z.c)
 */

FxFilteredStartContext *__fastcall FxFilteredStartContext::`scalar deleting destructor'(FxFilteredStartContext *this)
{
  _CM_RESOURCE_LIST *ResourcesRaw; // rcx
  _CM_RESOURCE_LIST *ResourcesTranslated; // rcx

  ResourcesRaw = this->ResourcesRaw;
  if ( ResourcesRaw )
    ExFreePoolWithTag(ResourcesRaw, 0);
  ResourcesTranslated = this->ResourcesTranslated;
  if ( ResourcesTranslated )
    ExFreePoolWithTag(ResourcesTranslated, 0);
  FxPoolFree((FX_POOL_TRACKER *)this);
  return this;
}
