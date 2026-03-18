/*
 * XREFs of ?OnInputSuppressed@CBaseInput@@AEBAXXZ @ 0x1C01767D0
 * Callers:
 *     ?OnReadNotification@CBaseInput@@AEAAJXZ @ 0x1C01769C0 (-OnReadNotification@CBaseInput@@AEAAJXZ.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0031380 (RIMLockExclusive.c)
 *     ?FindDeviceInfo@CBaseInput@@QEBAPEAUDEVICEINFO@@PEAXH@Z @ 0x1C0176550 (-FindDeviceInfo@CBaseInput@@QEBAPEAUDEVICEINFO@@PEAXH@Z.c)
 *     ?IsInjectionDeviceFromKernelHandle@CBaseInput@@IEBAHPEAX@Z @ 0x1C0176710 (-IsInjectionDeviceFromKernelHandle@CBaseInput@@IEBAHPEAX@Z.c)
 */

void __fastcall CBaseInput::OnInputSuppressed(void **this, __int64 a2, __int64 a3)
{
  int IsInjectionDeviceFromKernelHandle; // eax
  struct DEVICEINFO *DeviceInfo; // rbx

  IsInjectionDeviceFromKernelHandle = CBaseInput::IsInjectionDeviceFromKernelHandle((CBaseInput *)this, this[6], a3);
  DeviceInfo = CBaseInput::FindDeviceInfo((CBaseInput *)this, (char *)this[6], IsInjectionDeviceFromKernelHandle != 0);
  if ( DeviceInfo )
  {
    RIMLockExclusive((__int64)&CBaseInput::_sLock);
    ++*((_DWORD *)DeviceInfo + 548);
    qword_1C02152E8 = 0LL;
    ExReleasePushLockExclusiveEx(&CBaseInput::_sLock, 0LL);
    KeLeaveCriticalRegion();
  }
}
