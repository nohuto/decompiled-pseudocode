/*
 * XREFs of ?Accelerate@CDeviceAcceleration@@QEAAXPEAH0PEAU_SUBPIXELS@@@Z @ 0x1C0052528
 * Callers:
 *     ?ApplyAccelerationToDelta@CMouseProcessor@@AEAAXJJUtagPOINT@@_NPEAU_SUBPIXELS@@PEAJ3@Z @ 0x1C00524BC (-ApplyAccelerationToDelta@CMouseProcessor@@AEAAXJJUtagPOINT@@_NPEAU_SUBPIXELS@@PEAJ3@Z.c)
 *     DoAccel @ 0x1C0052500 (DoAccel.c)
 * Callees:
 *     ?RegionFromPoint@Mouse@InputConfig@@SA_NUtagPOINT@@PEAVCLockedInputSpaceRegion@@@Z @ 0x1C0052990 (-RegionFromPoint@Mouse@InputConfig@@SA_NUtagPOINT@@PEAVCLockedInputSpaceRegion@@@Z.c)
 *     ??0CLockedInputSpace@@QEAA@XZ @ 0x1C0052E30 (--0CLockedInputSpace@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00BF5D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDeviceAcceleration::Accelerate(CDeviceAcceleration *this, int *a2, int *a3, struct _SUBPIXELS *a4)
{
  unsigned int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // r12
  __int64 v11; // r15
  signed __int64 v12; // r8
  __int64 v13; // rax
  signed __int64 v14; // rcx
  __int64 v15; // r9
  __int64 v16; // rax
  __int64 v17; // r9
  __int64 *v18; // rax
  __int64 v19; // rbx
  __int64 v20; // r8
  __int64 v21; // rcx
  __int64 v22; // r10
  __int64 v23; // r8
  __int64 v24; // rdx
  signed __int64 v25; // r11
  __int64 v26; // r10
  __int64 v27; // rdx
  __int64 v28; // rcx
  signed __int64 v29; // r10
  __int64 v30; // rdx
  __int64 *v31; // [rsp+40h] [rbp-30h] BYREF
  __int64 v32; // [rsp+48h] [rbp-28h] BYREF
  __int64 v33; // [rsp+50h] [rbp-20h] BYREF
  _QWORD v34[3]; // [rsp+58h] [rbp-18h] BYREF
  int v35; // [rsp+B8h] [rbp+48h] BYREF

  v8 = 0;
  CLockedInputSpace::CLockedInputSpace((CLockedInputSpace *)v34);
  InputConfig::Mouse::RegionFromPoint(gptCursorAsync, (struct CLockedInputSpaceRegion *)v34);
  v9 = v34[0];
  *(_DWORD *)a4 = 0;
  *((_DWORD *)a4 + 1) = 0;
  if ( v9 )
  {
    (*(void (__fastcall **)(CDeviceAcceleration *, __int64, int *, __int64 **, __int64 *, __int64 *))(*(_QWORD *)this + 8LL))(
      this,
      v9 + 88,
      &v35,
      &v31,
      &v33,
      &v32);
    v10 = (__int64)*a3 << 16;
    v11 = (__int64)*a2 << 16;
    v12 = abs64(v10);
    v13 = v11;
    v14 = abs64(v11);
    if ( v14 >= v12 )
      v13 = (__int64)*a3 << 16;
    v15 = (__int64)abs64(v13) / 2;
    v16 = (__int64)*a2 << 16;
    if ( v14 <= v12 )
      v16 = (__int64)*a3 << 16;
    v17 = abs64(v16) + v15;
    if ( v17 )
    {
      if ( v35 != 1 )
      {
        v18 = v31;
        do
        {
          if ( v17 <= *v18 )
            break;
          ++v8;
          ++v18;
        }
        while ( v8 < v35 - 1 );
      }
      v19 = v8 - 1;
      v20 = *(_QWORD *)(v33 + 8 * v19) + (*(_QWORD *)(v32 + 8 * v19) << 16) / v17;
      if ( dword_1C02124D8 < (unsigned int)v19 )
        v20 = (*(_QWORD *)(v33 + 8LL * (unsigned int)dword_1C02124D8)
             + (*(_QWORD *)(v32 + 8LL * (unsigned int)dword_1C02124D8) << 16) / v17
             + v20) >> 1;
      dword_1C02124D8 = v19;
      v21 = qword_1C02124D0 + ((v11 * v20) >> 16);
      v22 = -v21;
      v23 = qword_1C02124C8 + ((v10 * v20) >> 16);
      if ( v21 < 0 )
      {
        v25 = v21;
        v24 = -(__int64)(v22 & 0xFFFFFFFFFFFF0000uLL);
      }
      else
      {
        v24 = v21 & 0x7FFFFFFFFFFF0000LL;
        v25 = v21 & 0xFFFFFFFFFFFF0000uLL;
      }
      v26 = -(__int64)(v22 & 0xFFFFFFFFFFFF0000uLL);
      *(_DWORD *)a4 = v21 - v24;
      qword_1C02124D0 = v21 - v24;
      if ( v21 < 0 )
        v25 = v26;
      v27 = -v23;
      *a2 = v25 >> 16;
      if ( v23 < 0 )
      {
        v29 = v23;
        v28 = -(__int64)(v27 & 0xFFFFFFFFFFFF0000uLL);
      }
      else
      {
        v28 = v23 & 0x7FFFFFFFFFFF0000LL;
        v29 = v23 & 0xFFFFFFFFFFFF0000uLL;
      }
      v30 = -(__int64)(v27 & 0xFFFFFFFFFFFF0000uLL);
      *((_DWORD *)a4 + 1) = v23 - v28;
      qword_1C02124C8 = v23 - v28;
      if ( v23 < 0 )
        v29 = v30;
      *a3 = v29 >> 16;
    }
  }
  ExReleaseResourceLite(*(PERESOURCE *)v34[1]);
  KeLeaveCriticalRegion();
}
