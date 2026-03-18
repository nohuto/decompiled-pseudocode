/*
 * XREFs of ?ApplyAccelerationToDelta@CMouseProcessor@@AEAAXJJUtagPOINT@@_NPEAU_SUBPIXELS@@PEAJ3@Z @ 0x1C003CB48
 * Callers:
 *     ?GetMouseCoordinateRelative@CMouseProcessor@@AEAAXJJPEAUtagPOINT@@PEAU_SUBPIXELS@@_K2W4GetMouseCoordinateOptions@@@Z @ 0x1C003CA34 (-GetMouseCoordinateRelative@CMouseProcessor@@AEAAXJJPEAUtagPOINT@@PEAU_SUBPIXELS@@_K2W4GetMouseC.c)
 *     ?PrepareDataForIntercept@CMouseProcessor@@AEAAXAEBVMouseInputDataEx@1@_NPEAU_MouseInterceptorData@@@Z @ 0x1C0158964 (-PrepareDataForIntercept@CMouseProcessor@@AEAAXAEBVMouseInputDataEx@1@_NPEAU_MouseInterceptorDat.c)
 * Callees:
 *     ?Accelerate@CDeviceAcceleration@@QEAAXPEAH0PEAU_SUBPIXELS@@@Z @ 0x1C003CBB8 (-Accelerate@CDeviceAcceleration@@QEAAXPEAH0PEAU_SUBPIXELS@@@Z.c)
 *     ?RegionFromPoint@Mouse@InputConfig@@SA_NUtagPOINT@@PEAVCLockedInputSpaceRegion@@@Z @ 0x1C003CE70 (-RegionFromPoint@Mouse@InputConfig@@SA_NUtagPOINT@@PEAVCLockedInputSpaceRegion@@@Z.c)
 *     ??0CLockedInputSpace@@QEAA@XZ @ 0x1C003CF5C (--0CLockedInputSpace@@QEAA@XZ.c)
 *     rand @ 0x1C00A6B0C (rand.c)
 *     ??1CEResourceLockExclusive@@QEAA@XZ @ 0x1C00AD1D4 (--1CEResourceLockExclusive@@QEAA@XZ.c)
 *     GetNormalizedMouseSensitivityFactor @ 0x1C01511A4 (GetNormalizedMouseSensitivityFactor.c)
 */

void __fastcall CMouseProcessor::ApplyAccelerationToDelta(
        CMouseProcessor *this,
        int a2,
        int a3,
        struct tagPOINT a4,
        bool a5,
        struct _SUBPIXELS *a6,
        int *a7,
        int *a8)
{
  int v9; // edi
  int v10; // esi
  CDeviceAcceleration *v12; // rcx
  struct _SUBPIXELS *v13; // r9
  int NormalizedMouseSensitivityFactor; // eax
  int v15; // ecx
  int v16; // edx
  int v17; // r8d
  int v18; // edx
  struct _SUBPIXELS *v19; // rbx
  int v20; // edx
  int v21; // eax
  __int64 v22; // [rsp+20h] [rbp-10h] BYREF
  _BYTE v23[8]; // [rsp+28h] [rbp-8h] BYREF
  int v24; // [rsp+58h] [rbp+28h] BYREF
  int v25; // [rsp+60h] [rbp+30h] BYREF

  v25 = a3;
  v24 = a2;
  v9 = a3;
  v10 = a2;
  if ( a5 && (*((_BYTE *)qword_1C01C3098 + 112) || (qword_1C01CBD28 & 0x8000000000LL) == 0) )
  {
    v12 = qword_1C01C30B0;
    v13 = (struct _SUBPIXELS *)&v22;
LABEL_7:
    CDeviceAcceleration::Accelerate(v12, &v24, &v25, v13);
    v9 = v25;
    v10 = v24;
    goto LABEL_20;
  }
  v12 = qword_1C01C3098;
  if ( *((_BYTE *)qword_1C01C3098 + 112) )
  {
    v13 = a6;
    goto LABEL_7;
  }
  CLockedInputSpace::CLockedInputSpace((CLockedInputSpace *)&v22);
  InputConfig::Mouse::RegionFromPoint(a4, (struct CLockedInputSpaceRegion *)&v22);
  NormalizedMouseSensitivityFactor = GetNormalizedMouseSensitivityFactor(v22);
  if ( NormalizedMouseSensitivityFactor == 256 )
  {
    v21 = rand();
    v19 = a6;
    *(_DWORD *)a6 = v21 % 0x10000;
    v20 = rand() % 0x10000;
  }
  else
  {
    if ( v10 )
    {
      v15 = *((_DWORD *)this + 19) + v10 * NormalizedMouseSensitivityFactor;
      v16 = v15 % 256;
      *((_DWORD *)this + 19) = v15 % 256;
      v10 = v15 / 256;
      if ( v15 < 0 && v16 > 0 )
      {
        v10 = v15 / 256 + 1;
        *((_DWORD *)this + 19) = v16 - 256;
      }
    }
    if ( v9 )
    {
      v17 = *((_DWORD *)this + 20) + v9 * NormalizedMouseSensitivityFactor;
      v18 = v17 % 256;
      *((_DWORD *)this + 20) = v17 % 256;
      v9 = v17 / 256;
      if ( v17 < 0 && v18 > 0 )
      {
        ++v9;
        *((_DWORD *)this + 20) = v18 - 256;
      }
    }
    v19 = a6;
    *(_DWORD *)a6 = *((_DWORD *)this + 19) << 8;
    v20 = *((_DWORD *)this + 20) << 8;
  }
  *((_DWORD *)v19 + 1) = v20;
  CEResourceLockExclusive::~CEResourceLockExclusive((CEResourceLockExclusive *)v23);
LABEL_20:
  *a7 = v10;
  *a8 = v9;
}
