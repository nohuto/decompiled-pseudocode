/*
 * XREFs of ?IntersectGeometryBuilder@CRoundedRectangleShape@@CAJPEBUMilPoint2F@@QEBHPEAPEAUID2D1PathGeometry@@_N@Z @ 0x1800167D0
 * Callers:
 *     ?BuildRoundedRectangleShape@CRoundedRectangleShape@@AEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x1800166EC (-BuildRoundedRectangleShape@CRoundedRectangleShape@@AEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@.c)
 * Callees:
 *     ??$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z @ 0x180016D4C (--$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z.c)
 *     ??$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z @ 0x180016D7C (--$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z.c)
 *     ?HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z @ 0x180096D48 (-HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRoundedRectangleShape::IntersectGeometryBuilder(
        const struct MilPoint2F *a1,
        const int *const a2,
        struct ID2D1PathGeometry **a3,
        char a4)
{
  __int64 v6; // rax
  unsigned int v7; // xmm0_4
  unsigned int v8; // xmm1_4
  __int64 v9; // rax
  int v10; // xmm6_4
  int v11; // xmm7_4
  __int64 v12; // rax
  int v13; // xmm8_4
  int v14; // xmm9_4
  __int64 v15; // rax
  __m128 v16; // xmm10
  __m128 v17; // xmm11
  __int64 v18; // rax
  unsigned int v19; // xmm0_4
  unsigned int v20; // xmm1_4
  __int64 v21; // rax
  unsigned int v22; // xmm0_4
  unsigned int v23; // xmm1_4
  __int64 v24; // rax
  int v25; // xmm1_4
  int D2DFactoryNoRef; // eax
  unsigned int v27; // ecx
  unsigned int v28; // ebx
  struct CD2DFactory *v29; // rsi
  int v30; // eax
  unsigned int v31; // ecx
  struct ID2D1PathGeometry *v32; // rax
  struct ID2D1PathGeometry *v34; // rax
  unsigned int v35; // [rsp+28h] [rbp-E0h]
  __int64 v36; // [rsp+48h] [rbp-C0h] BYREF
  struct ID2D1PathGeometry *v37; // [rsp+50h] [rbp-B8h] BYREF
  struct ID2D1PathGeometry *v38; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v39; // [rsp+60h] [rbp-A8h] BYREF
  struct CD2DFactory *v40; // [rsp+68h] [rbp-A0h] BYREF
  unsigned __int64 v41; // [rsp+70h] [rbp-98h]
  unsigned __int64 v42; // [rsp+78h] [rbp-90h]
  unsigned __int64 v43; // [rsp+80h] [rbp-88h]
  __int64 v44; // [rsp+88h] [rbp-80h]
  _DWORD v45[4]; // [rsp+90h] [rbp-78h] BYREF
  unsigned __int64 v46; // [rsp+A0h] [rbp-68h]

  v37 = 0LL;
  v36 = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  v6 = *a2;
  v40 = 0LL;
  v7 = *((_DWORD *)a1 + 2 * v6);
  v8 = *((_DWORD *)a1 + 2 * v6 + 1);
  v9 = a2[1];
  v41 = __PAIR64__(v8, v7);
  v10 = *((_DWORD *)a1 + 2 * v9);
  v11 = *((_DWORD *)a1 + 2 * v9 + 1);
  v12 = a2[2];
  v13 = *((_DWORD *)a1 + 2 * v12);
  v14 = *((_DWORD *)a1 + 2 * v12 + 1);
  v15 = a2[3];
  v16 = (__m128)*((unsigned int *)a1 + 2 * v15);
  v17 = (__m128)*((unsigned int *)a1 + 2 * v15 + 1);
  v18 = a2[4];
  v19 = *((_DWORD *)a1 + 2 * v18);
  v20 = *((_DWORD *)a1 + 2 * v18 + 1);
  v21 = a2[5];
  v42 = __PAIR64__(v20, v19);
  v22 = *((_DWORD *)a1 + 2 * v21);
  v23 = *((_DWORD *)a1 + 2 * v21 + 1);
  v24 = a2[6];
  v43 = __PAIR64__(v23, v22);
  v25 = *((_DWORD *)a1 + 2 * v24 + 1);
  LODWORD(v44) = *((_DWORD *)a1 + 2 * v24);
  HIDWORD(v44) = v25;
  D2DFactoryNoRef = CD3DDeviceManager::HandleGetD2DFactoryNoRef(a1, &v40);
  v28 = D2DFactoryNoRef;
  if ( D2DFactoryNoRef < 0 )
  {
    v35 = 353;
    goto LABEL_21;
  }
  v29 = v40;
  D2DFactoryNoRef = (*(__int64 (__fastcall **)(_QWORD, struct ID2D1PathGeometry **))(**((_QWORD **)v40 + 3) + 80LL))(
                      *((_QWORD *)v40 + 3),
                      &v37);
  v28 = D2DFactoryNoRef;
  if ( D2DFactoryNoRef < 0 )
  {
    v35 = 354;
    goto LABEL_21;
  }
  v30 = (*(__int64 (__fastcall **)(struct ID2D1PathGeometry *, __int64 *))(*(_QWORD *)v37 + 136LL))(v37, &v36);
  v28 = v30;
  if ( v30 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v31, 0LL, 0, v30, 0x163u);
    goto LABEL_11;
  }
  (*(void (__fastcall **)(__int64, unsigned __int64, _QWORD))(*(_QWORD *)v36 + 40LL))(v36, v41, 0LL);
  v45[0] = v10;
  v45[1] = v11;
  v45[2] = v13;
  v45[3] = v14;
  v46 = _mm_unpacklo_ps(v16, v17).m128_u64[0];
  (*(void (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v36 + 88LL))(v36, v45);
  (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v36 + 80LL))(v36, v42);
  (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v36 + 80LL))(v36, v43);
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v36 + 80LL))(v36, v44);
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v36 + 64LL))(v36, 1LL);
  D2DFactoryNoRef = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v36 + 72LL))(v36);
  v28 = D2DFactoryNoRef;
  if ( D2DFactoryNoRef < 0 )
  {
    v35 = 365;
    goto LABEL_21;
  }
  if ( a4 )
  {
    v34 = v37;
    v37 = 0LL;
    *a3 = v34;
    goto LABEL_11;
  }
  D2DFactoryNoRef = (*(__int64 (__fastcall **)(_QWORD, struct ID2D1PathGeometry **))(**((_QWORD **)v29 + 3) + 80LL))(
                      *((_QWORD *)v29 + 3),
                      &v38);
  v28 = D2DFactoryNoRef;
  if ( D2DFactoryNoRef < 0 )
  {
    v35 = 377;
    goto LABEL_21;
  }
  D2DFactoryNoRef = (*(__int64 (__fastcall **)(struct ID2D1PathGeometry *, __int64 *))(*(_QWORD *)v38 + 136LL))(
                      v38,
                      &v39);
  v28 = D2DFactoryNoRef;
  if ( D2DFactoryNoRef < 0 )
  {
    v35 = 378;
    goto LABEL_21;
  }
  D2DFactoryNoRef = (*(__int64 (__fastcall **)(_QWORD, struct ID2D1PathGeometry *, __int64))(*(_QWORD *)*a3 + 88LL))(
                      *a3,
                      v37,
                      1LL);
  v28 = D2DFactoryNoRef;
  if ( D2DFactoryNoRef < 0 )
  {
    v35 = 387;
    goto LABEL_21;
  }
  D2DFactoryNoRef = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v39 + 72LL))(v39);
  v28 = D2DFactoryNoRef;
  if ( D2DFactoryNoRef < 0 )
  {
    v35 = 389;
LABEL_21:
    MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, D2DFactoryNoRef, v35);
    goto LABEL_11;
  }
  ReleaseInterface<ID2D1Geometry>(a3);
  v32 = v38;
  v38 = 0LL;
  *a3 = v32;
LABEL_11:
  ReleaseInterface<ID2D1Geometry>(&v37);
  ReleaseInterface<IBitmapLock>(&v36);
  ReleaseInterface<ID2D1Geometry>(&v38);
  ReleaseInterface<IBitmapLock>(&v39);
  return v28;
}
