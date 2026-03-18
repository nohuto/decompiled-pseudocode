/*
 * XREFs of ??1InkDevice@@UEAA@XZ @ 0x1C0237D70
 * Callers:
 *     ??_EInkDevice@@UEAAPEAXI@Z @ 0x1C022CB70 (--_EInkDevice@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?UnInitialize@RimBackedDeviceBase@Rim@@UEAAXXZ @ 0x1C0221D20 (-UnInitialize@RimBackedDeviceBase@Rim@@UEAAXXZ.c)
 *     ?UnInitialize@InkDevice@@UEAAXXZ @ 0x1C0239AE0 (-UnInitialize@InkDevice@@UEAAXXZ.c)
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
