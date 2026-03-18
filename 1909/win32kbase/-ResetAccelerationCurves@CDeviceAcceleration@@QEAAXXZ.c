/*
 * XREFs of ?ResetAccelerationCurves@CDeviceAcceleration@@QEAAXXZ @ 0x1C0052228
 * Callers:
 *     ?_NotifyExternalComponents@CInputConfig@@AEAAXXZ @ 0x1C0051324 (-_NotifyExternalComponents@CInputConfig@@AEAAXXZ.c)
 *     ResetAccelerationCurves @ 0x1C0052200 (ResetAccelerationCurves.c)
 *     _SetPrecisionTouchPadConfiguration @ 0x1C0107600 (_SetPrecisionTouchPadConfiguration.c)
 * Callees:
 *     ?ModifiableRegion@Iter@CInputSpace@@QEAAPEAUCInputSpaceRegion@@XZ @ 0x1C0052E94 (-ModifiableRegion@Iter@CInputSpace@@QEAAPEAUCInputSpaceRegion@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00BF5D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDeviceAcceleration::ResetAccelerationCurves(CDeviceAcceleration *this)
{
  CInputConfig *v2; // r14
  CInputConfig *v3; // rax
  CInputConfig *v4; // rdi
  _QWORD **v5; // rsi
  _QWORD *v6; // rbx
  struct CInputSpaceRegion *v7; // rax
  _QWORD v8[5]; // [rsp+20h] [rbp-28h] BYREF

  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite(CInputConfig::slock, 1u);
  v2 = gpInputConfig;
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(CInputConfig::slock, 1u);
  v3 = *(CInputConfig **)v2;
  v4 = **(CInputConfig ***)v2;
  while ( v3 != v2 && v3 != (CInputConfig *)-16LL )
  {
    v5 = (_QWORD **)((char *)v3 + 1216);
    v8[0] = &CInputConfig::slock;
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite(CInputConfig::slock, 1u);
    v6 = *v5;
    v8[1] = v5;
    while ( 1 )
    {
      v8[2] = v6;
      if ( v6 == v5 || v6 == (_QWORD *)-16LL )
        break;
      v7 = CInputSpace::Iter::ModifiableRegion((CInputSpace::Iter *)v8);
      (**(void (__fastcall ***)(CDeviceAcceleration *, _QWORD, __int64))this)(
        this,
        *((unsigned __int16 *)v7 + 10),
        (__int64)v7 + 88);
      v6 = (_QWORD *)*v6;
    }
    ExReleaseResourceLite(CInputConfig::slock);
    KeLeaveCriticalRegion();
    v3 = v4;
    v4 = *(CInputConfig **)v4;
  }
  ExReleaseResourceLite(CInputConfig::slock);
  KeLeaveCriticalRegion();
  ExReleaseResourceLite(CInputConfig::slock);
  KeLeaveCriticalRegion();
}
