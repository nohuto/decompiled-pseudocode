/*
 * XREFs of ?UnLockExclusive@CInpPushLock@@QEAAXXZ @ 0x1C00514E0
 * Callers:
 *     ?Initialize@CInputConfig@@SAJXZ @ 0x1C0007A48 (-Initialize@CInputConfig@@SAJXZ.c)
 *     RIMRegisterForInputWithCallbacks @ 0x1C007AF50 (RIMRegisterForInputWithCallbacks.c)
 *     RawInputManagerObjectDelete @ 0x1C00866A4 (RawInputManagerObjectDelete.c)
 *     RIMUnregisterForInput @ 0x1C0087040 (RIMUnregisterForInput.c)
 *     RIMSendLatencyMgtRequest @ 0x1C009DC40 (RIMSendLatencyMgtRequest.c)
 *     _lambda_4a9f2014d50dbcc8c02b38ea7afd9847_::_lambda_invoker_cdecl_ @ 0x1C00AD100 (_lambda_4a9f2014d50dbcc8c02b38ea7afd9847_--_lambda_invoker_cdecl_.c)
 *     rimRemoveFromObTrackList @ 0x1C010BC18 (rimRemoveFromObTrackList.c)
 *     RIMAddInjectionDeviceOfType @ 0x1C010C710 (RIMAddInjectionDeviceOfType.c)
 *     RIMAddNonPnpDeviceOfType @ 0x1C010CCC0 (RIMAddNonPnpDeviceOfType.c)
 *     RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle @ 0x1C010CFE0 (RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle.c)
 *     rimObsAddInputObserver @ 0x1C012C614 (rimObsAddInputObserver.c)
 * Callees:
 *     <none>
 */

void __fastcall CInpPushLock::UnLockExclusive(CInpPushLock *this)
{
  *((_QWORD *)this + 1) = 0LL;
  ExReleasePushLockExclusiveEx(this, 0LL);
  KeLeaveCriticalRegion();
}
