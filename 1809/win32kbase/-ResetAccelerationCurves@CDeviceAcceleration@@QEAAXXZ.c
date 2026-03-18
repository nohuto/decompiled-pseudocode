/*
 * XREFs of ?ResetAccelerationCurves@CDeviceAcceleration@@QEAAXXZ @ 0x1C003CF84
 * Callers:
 *     ResetAccelerationCurves @ 0x1C003C550 (ResetAccelerationCurves.c)
 *     _SetPrecisionTouchPadConfiguration @ 0x1C00E52E4 (_SetPrecisionTouchPadConfiguration.c)
 * Callees:
 *     ?ModifiableRegion@Iter@CInputSpace@@QEAAPEAUCInputSpaceRegion@@XZ @ 0x1C003D7B4 (-ModifiableRegion@Iter@CInputSpace@@QEAAPEAUCInputSpaceRegion@@XZ.c)
 *     ??0CEResourceLockShared@@QEAA@AEAUCEResource@@@Z @ 0x1C00AD190 (--0CEResourceLockShared@@QEAA@AEAUCEResource@@@Z.c)
 *     ??1CEResourceLockExclusive@@QEAA@XZ @ 0x1C00AD1D4 (--1CEResourceLockExclusive@@QEAA@XZ.c)
 *     ??0CEResourceLockExclusive@@QEAA@AEAUCEResource@@@Z @ 0x1C00AD7F8 (--0CEResourceLockExclusive@@QEAA@AEAUCEResource@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDeviceAcceleration::ResetAccelerationCurves(CDeviceAcceleration *this, struct CEResource *a2)
{
  CInputConfig *v3; // r14
  struct CEResource *v4; // rdx
  struct CEResource *v5; // rdx
  CInputConfig *v6; // rax
  CInputConfig *v7; // rbx
  _QWORD **v8; // rsi
  _QWORD *v9; // rdi
  struct CInputSpaceRegion *v10; // rax
  char v11[8]; // [rsp+30h] [rbp-40h] BYREF
  _QWORD **v12; // [rsp+38h] [rbp-38h]
  _QWORD *v13; // [rsp+40h] [rbp-30h]
  char v14[8]; // [rsp+48h] [rbp-28h] BYREF
  CInputConfig *v15; // [rsp+50h] [rbp-20h]
  CInputConfig *v16; // [rsp+58h] [rbp-18h]
  CInputConfig *v17; // [rsp+60h] [rbp-10h]
  char v18; // [rsp+98h] [rbp+28h] BYREF

  CEResourceLockExclusive::CEResourceLockExclusive((CEResourceLockExclusive *)&v18, a2);
  v3 = gpInputConfig;
  CEResourceLockShared::CEResourceLockShared((CEResourceLockShared *)v14, v4);
  v6 = *(CInputConfig **)v3;
  v15 = v3;
  v16 = v6;
  v7 = *(CInputConfig **)v6;
  v17 = *(CInputConfig **)v6;
  while ( v6 != v3 && v6 != (CInputConfig *)-16LL )
  {
    v8 = (_QWORD **)((char *)v6 + 1216);
    CEResourceLockShared::CEResourceLockShared((CEResourceLockShared *)v11, v5);
    v9 = *v8;
    v12 = v8;
    while ( 1 )
    {
      v13 = v9;
      if ( v9 == v8 || v9 == (_QWORD *)-16LL )
        break;
      v10 = CInputSpace::Iter::ModifiableRegion((CInputSpace::Iter *)v11);
      (**(void (__fastcall ***)(CDeviceAcceleration *, _QWORD, _QWORD, __int64))this)(
        this,
        *((unsigned __int16 *)v10 + 10),
        *((unsigned __int16 *)v10 + 11),
        (__int64)v10 + 88);
      v9 = (_QWORD *)*v9;
    }
    CEResourceLockExclusive::~CEResourceLockExclusive((CEResourceLockExclusive *)v11);
    v6 = v7;
    v16 = v7;
    v7 = *(CInputConfig **)v7;
  }
  v17 = v7;
  CEResourceLockExclusive::~CEResourceLockExclusive((CEResourceLockExclusive *)v14);
  CEResourceLockExclusive::~CEResourceLockExclusive((CEResourceLockExclusive *)&v18);
}
