/*
 * XREFs of ?UnLockExclusive@CInpPushLock@@QEAAXXZ @ 0x1C0054C20
 * Callers:
 *     RIMRegisterForInputWithCallbacks @ 0x1C006DC80 (RIMRegisterForInputWithCallbacks.c)
 *     _lambda_b69e77e0fe9f52d9f607e8c4f2045e39_::operator() @ 0x1C00BF3F8 (_lambda_b69e77e0fe9f52d9f607e8c4f2045e39_--operator().c)
 *     RIMFindSiblingPointerDeviceForMouse @ 0x1C00BF498 (RIMFindSiblingPointerDeviceForMouse.c)
 *     NtUserRemoveInjectionDevice @ 0x1C011BA30 (NtUserRemoveInjectionDevice.c)
 *     RIMIDEProcessRemoveInjectionDevices @ 0x1C01355CC (RIMIDEProcessRemoveInjectionDevices.c)
 *     RIMAddInjectionDeviceOfType @ 0x1C01372D0 (RIMAddInjectionDeviceOfType.c)
 *     RIMAddNonPnpDeviceOfType @ 0x1C0137910 (RIMAddNonPnpDeviceOfType.c)
 *     RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle @ 0x1C0137C70 (RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle.c)
 *     RIMGetSourceProcessId @ 0x1C0139560 (RIMGetSourceProcessId.c)
 *     RIMIDERemoveInjectionDevice @ 0x1C0139738 (RIMIDERemoveInjectionDevice.c)
 *     RIMFindSiblingMouseDevice @ 0x1C01437C0 (RIMFindSiblingMouseDevice.c)
 * Callees:
 *     <none>
 */

void __fastcall CInpPushLock::UnLockExclusive(CInpPushLock *this)
{
  *((_QWORD *)this + 1) = 0LL;
  ExReleasePushLockExclusiveEx(this, 0LL);
  KeLeaveCriticalRegion();
}
