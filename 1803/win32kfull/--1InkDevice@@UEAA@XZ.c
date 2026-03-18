/*
 * XREFs of ??1InkDevice@@UEAA@XZ @ 0x1C020E844
 * Callers:
 *     ??_EInkDevice@@UEAAPEAXI@Z @ 0x1C0203BE0 (--_EInkDevice@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?UnInitialize@RimBackedDeviceBase@Rim@@UEAAXXZ @ 0x1C01F9B90 (-UnInitialize@RimBackedDeviceBase@Rim@@UEAAXXZ.c)
 *     ?UnInitialize@InkDevice@@UEAAXXZ @ 0x1C0210480 (-UnInitialize@InkDevice@@UEAAXXZ.c)
 */

void __fastcall InkDevice::~InkDevice(InkDevice *this)
{
  *(_QWORD *)this = &InkDevice::`vftable'{for `Rim::RimBackedDeviceBase'};
  *((_QWORD *)this + 4) = &InkDevice::`vftable'{for `InkFeedbackProviderBase'};
  InkDevice::UnInitialize(this);
  *((_QWORD *)this + 4) = &InkFeedbackProviderBase::`vftable';
  *(_QWORD *)this = &Rim::RimBackedDeviceBase::`vftable';
  Rim::RimBackedDeviceBase::UnInitialize(this);
}
