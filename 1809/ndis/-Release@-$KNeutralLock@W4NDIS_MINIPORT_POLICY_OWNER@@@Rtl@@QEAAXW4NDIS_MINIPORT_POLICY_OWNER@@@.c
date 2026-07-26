/*
 * XREFs of ?Release@?$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@Z @ 0x1C00C3658
 * Callers:
 *     ndisSetDevicePower @ 0x1C00108DC (ndisSetDevicePower.c)
 *     ndisRequestedDevicePowerIrpComplete @ 0x1C00112B0 (ndisRequestedDevicePowerIrpComplete.c)
 *     ?Iterate@BindEngine@Ndis@@AEAA_NXZ @ 0x1C00C0AFC (-Iterate@BindEngine@Ndis@@AEAA_NXZ.c)
 *     ndisIMInitializeDeviceInstance @ 0x1C00EB6F8 (ndisIMInitializeDeviceInstance_ea_1C00EB6F8.c)
 *     ndisPnPIrpSurpriseRemovalInner @ 0x1C00F4E5C (ndisPnPIrpSurpriseRemovalInner.c)
 *     ndisDevicePowerOn @ 0x1C010A1E0 (ndisDevicePowerOn.c)
 *     ndisDevicePowerDown @ 0x1C010ABF0 (ndisDevicePowerDown.c)
 * Callees:
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C00C2AE0 (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00C2E30 (--1KLockHolder@@QEAA@XZ.c)
 */

void __fastcall Rtl::KNeutralLock<enum NDIS_MINIPORT_POLICY_OWNER>::Release(__int64 a1)
{
  KLockHolder v2; // [rsp+20h] [rbp-28h] BYREF

  v2.m_State = Unlocked;
  v2.m_Lock = (KPushLockBase *)(a1 + 8);
  v2.m_Region.m_Entered = 0;
  KLockHolder::AcquireExclusive(&v2);
  *(_DWORD *)a1 = 0;
  KeSetEvent((PRKEVENT)(a1 + 16), 0, 0);
  KLockHolder::~KLockHolder(&v2);
}
