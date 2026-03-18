/*
 * XREFs of ?OnRimDeviceOpened@CTouchProcessor@@QEAAXPEAX@Z @ 0x1C013FC54
 * Callers:
 *     ?OnRIMDeviceOpened@CHidInput@@EEAAKPEAUDEVICEINFO@@@Z @ 0x1C0092B00 (-OnRIMDeviceOpened@CHidInput@@EEAAKPEAUDEVICEINFO@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     ??1CInpLockGuardExclusive@@QEAA@XZ @ 0x1C0063118 (--1CInpLockGuardExclusive@@QEAA@XZ.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00AD204 (--0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?IsTouchDevice@CTouchProcessor@@IEBAHPEAX@Z @ 0x1C013F5AC (-IsTouchDevice@CTouchProcessor@@IEBAHPEAX@Z.c)
 *     ApiSetEditionCreateEdgePalmRejectionZones @ 0x1C01612AC (ApiSetEditionCreateEdgePalmRejectionZones.c)
 */

void __fastcall CTouchProcessor::OnRimDeviceOpened(CTouchProcessor *this, unsigned __int64 a2)
{
  CTouchProcessor *v3; // rcx
  CInpLockGuard *v4[7]; // [rsp+30h] [rbp-38h] BYREF

  CInpLockGuardExclusive::CInpLockGuardExclusive(
    (CInpLockGuardExclusive *)v4,
    (struct CInpLockGuard *)&WPP_MAIN_CB.Queue.ListEntry.Blink[3].Blink,
    0LL);
  v3 = (CTouchProcessor *)WPP_GLOBAL_Control;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0x149u,
      (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
  if ( CTouchProcessor::IsTouchDevice(v3, a2) )
    ApiSetEditionCreateEdgePalmRejectionZones(a2);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0x14Au,
      (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
  CInpLockGuardExclusive::~CInpLockGuardExclusive(v4);
}
