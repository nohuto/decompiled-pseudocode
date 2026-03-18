/*
 * XREFs of ?IntersectGeometryBuilder@CRoundedRectangleShape@@CAJPEBUMilPoint2F@@QEBHPEAPEAUID2D1PathGeometry@@_N@Z @ 0x1800180B0
 * Callers:
 *     ?BuildRoundedRectangleShape@CRoundedRectangleShape@@AEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x180017FCC (-BuildRoundedRectangleShape@CRoundedRectangleShape@@AEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@.c)
 * Callees:
 *     ??$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z @ 0x18002B3C0 (--$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z @ 0x1800D2370 (-HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRoundedRectangleShape::IntersectGeometryBuilder(
        const struct MilPoint2F *a1,
        const int *const a2,
        struct ID2D1PathGeometry **a3,
        char a4)
{
  __int64 v4; // rax
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
  unsigned int v33; // [rsp+28h] [rbp-E0h]
  __int64 v34; // [rsp+48h] [rbp-C0h] BYREF
  struct ID2D1PathGeometry *v35; // [rsp+50h] [rbp-B8h] BYREF
  struct ID2D1PathGeometry *v36; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v37; // [rsp+60h] [rbp-A8h] BYREF
  struct CD2DFactory *v38; // [rsp+68h] [rbp-A0h] BYREF
  unsigned __int64 v39; // [rsp+70h] [rbp-98h]
  unsigned __int64 v40; // [rsp+78h] [rbp-90h]
  unsigned __int64 v41; // [rsp+80h] [rbp-88h]
  __int64 v42; // [rsp+88h] [rbp-80h]
  _DWORD v43[4]; // [rsp+90h] [rbp-78h] BYREF
  unsigned __int64 v44; // [rsp+A0h] [rbp-68h]

  v4 = *a2;
  v35 = 0LL;
  v34 = 0LL;
  v36 = 0LL;
  v37 = 0LL;
  v7 = *((_DWORD *)a1 + 2 * v4);
  v8 = *((_DWORD *)a1 + 2 * v4 + 1);
  v9 = a2[1];
  v39 = __PAIR64__(v8, v7);
  v38 = 0LL;
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
  v40 = __PAIR64__(v20, v19);
  v22 = *((_DWORD *)a1 + 2 * v21);
  v23 = *((_DWORD *)a1 + 2 * v21 + 1);
  v24 = a2[6];
  v41 = __PAIR64__(v23, v22);
  v25 = *((_DWORD *)a1 + 2 * v24 + 1);
  LODWORD(v42) = *((_DWORD *)a1 + 2 * v24);
  HIDWORD(v42) = v25;
  D2DFactoryNoRef = CD3DDeviceManager::HandleGetD2DFactoryNoRef(a1, &v38);
  v28 = D2DFactoryNoRef;
  if ( D2DFactoryNoRef < 0 )
  {
    v33 = 353;
    goto LABEL_21;
  }
  v29 = v38;
  D2DFactoryNoRef = (*(__int64 (__fastcall **)(_QWORD, struct ID2D1PathGeometry **))(**((_QWORD **)v38 + 3) + 80LL))(
                      *((_QWORD *)v38 + 3),
                      &v35);
  v28 = D2DFactoryNoRef;
  if ( D2DFactoryNoRef < 0 )
  {
    v33 = 354;
    goto LABEL_21;
  }
  v30 = (*(__int64 (__fastcall **)(struct ID2D1PathGeometry *, __int64 *))(*(_QWORD *)v35 + 136LL))(v35, &v34);
  v28 = v30;
  if ( v30 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v31, 0LL, 0, v30, 0x163u, 0LL);
    goto LABEL_11;
  }
  (*(void (__fastcall **)(__int64, unsigned __int64, _QWORD))(*(_QWORD *)v34 + 40LL))(v34, v39, 0LL);
  v43[0] = v10;
  v43[1] = v11;
  v43[2] = v13;
  v43[3] = v14;
  v44 = _mm_unpacklo_ps(v16, v17).m128_u64[0];
  (*(void (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v34 + 88LL))(v34, v43);
  (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v34 + 80LL))(v34, v40);
  (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v34 + 80LL))(v34, v41);
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v34 + 80LL))(v34, v42);
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v34 + 64LL))(v34, 1LL);
  D2DFactoryNoRef = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v34 + 72LL))(v34);
  v28 = D2DFactoryNoRef;
  if ( D2DFactoryNoRef < 0 )
  {
    v33 = 365;
    goto LABEL_21;
  }
  if ( a4 )
  {
    *a3 = v35;
    v35 = 0LL;
    goto LABEL_11;
  }
  D2DFactoryNoRef = (*(__int64 (__fastcall **)(_QWORD, struct ID2D1PathGeometry **))(**((_QWORD **)v29 + 3) + 80LL))(
                      *((_QWORD *)v29 + 3),
                      &v36);
  v28 = D2DFactoryNoRef;
  if ( D2DFactoryNoRef < 0 )
  {
    v33 = 377;
    goto LABEL_21;
  }
  D2DFactoryNoRef = (*(__int64 (__fastcall **)(struct ID2D1PathGeometry *, __int64 *))(*(_QWORD *)v36 + 136LL))(
                      v36,
                      &v37);
  v28 = D2DFactoryNoRef;
  if ( D2DFactoryNoRef < 0 )
  {
    v33 = 378;
    goto LABEL_21;
  }
  D2DFactoryNoRef = (*(__int64 (__fastcall **)(_QWORD, struct ID2D1PathGeometry *, __int64, _QWORD, _DWORD, __int64))(*(_QWORD *)*a3 + 88LL))(
                      *a3,
                      v35,
                      1LL,
                      0LL,
                      0,
                      v37);
  v28 = D2DFactoryNoRef;
  if ( D2DFactoryNoRef < 0 )
  {
    v33 = 387;
    goto LABEL_21;
  }
  D2DFactoryNoRef = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v37 + 72LL))(v37);
  v28 = D2DFactoryNoRef;
  if ( D2DFactoryNoRef < 0 )
  {
    v33 = 389;
LABEL_21:
    MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, D2DFactoryNoRef, v33, 0LL);
    goto LABEL_11;
  }
  ReleaseInterface<IBitmapLock>(a3);
  *a3 = v36;
  v36 = 0LL;
LABEL_11:
  ReleaseInterface<IBitmapLock>(&v35);
  ReleaseInterface<IBitmapLock>(&v34);
  ReleaseInterface<IBitmapLock>(&v36);
  ReleaseInterface<IBitmapLock>(&v37);
  return v28;
}
