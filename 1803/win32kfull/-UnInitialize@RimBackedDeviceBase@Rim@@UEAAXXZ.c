/*
 * XREFs of ?UnInitialize@RimBackedDeviceBase@Rim@@UEAAXXZ @ 0x1C01F9B90
 * Callers:
 *     ??_ERimBackedDeviceBase@Rim@@UEAAPEAXI@Z @ 0x1C01F97A0 (--_ERimBackedDeviceBase@Rim@@UEAAPEAXI@Z.c)
 *     ??1InkDevice@@UEAA@XZ @ 0x1C020E844 (--1InkDevice@@UEAA@XZ.c)
 *     ?UnInitialize@InkDevice@@UEAAXXZ @ 0x1C0210480 (-UnInitialize@InkDevice@@UEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Rim::RimBackedDeviceBase::UnInitialize(Rim::RimBackedDeviceBase *this)
{
  __int64 v2; // rcx

  (*(void (__fastcall **)(Rim::RimBackedDeviceBase *))(*(_QWORD *)this + 32LL))(this);
  v2 = *((_QWORD *)this + 2);
  if ( v2 )
  {
    RawInputManagerDeviceObjectDereference(v2);
    *((_QWORD *)this + 2) = 0LL;
  }
}
