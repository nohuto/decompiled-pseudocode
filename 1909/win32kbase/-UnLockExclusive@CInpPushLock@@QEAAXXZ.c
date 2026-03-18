/*
 * XREFs of ?UnLockExclusive@CInpPushLock@@QEAAXXZ @ 0x1C00595E0
 * Callers:
 *     RIMRegisterForInputWithCallbacks @ 0x1C005A290 (RIMRegisterForInputWithCallbacks.c)
 *     _lambda_b69e77e0fe9f52d9f607e8c4f2045e39_::operator() @ 0x1C00BD358 (_lambda_b69e77e0fe9f52d9f607e8c4f2045e39_--operator().c)
 *     RIMFindSiblingPointerDeviceForMouse @ 0x1C00BD3F8 (RIMFindSiblingPointerDeviceForMouse.c)
 *     NtUserRemoveInjectionDevice @ 0x1C01190C0 (NtUserRemoveInjectionDevice.c)
 *     RIMIDEProcessRemoveInjectionDevices @ 0x1C0132F5C (RIMIDEProcessRemoveInjectionDevices.c)
 *     RIMAddInjectionDeviceOfType @ 0x1C0134C60 (RIMAddInjectionDeviceOfType.c)
 *     RIMAddNonPnpDeviceOfType @ 0x1C01352A0 (RIMAddNonPnpDeviceOfType.c)
 *     RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle @ 0x1C0135600 (RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle.c)
 *     RIMGetSourceProcessId @ 0x1C0136EF0 (RIMGetSourceProcessId.c)
 *     RIMIDERemoveInjectionDevice @ 0x1C01370C8 (RIMIDERemoveInjectionDevice.c)
 *     RIMFindSiblingMouseDevice @ 0x1C0141150 (RIMFindSiblingMouseDevice.c)
 *     rimInputApc @ 0x1C0150BC0 (rimInputApc.c)
 * Callees:
 *     <none>
 */

void __fastcall CInpPushLock::UnLockExclusive(CInpPushLock *this)
{
  *((_QWORD *)this + 1) = 0LL;
  ExReleasePushLockExclusiveEx(this, 0LL);
  KeLeaveCriticalRegion();
}
