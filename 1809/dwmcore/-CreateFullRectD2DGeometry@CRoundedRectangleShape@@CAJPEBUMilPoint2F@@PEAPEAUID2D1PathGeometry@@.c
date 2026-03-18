/*
 * XREFs of ?CreateFullRectD2DGeometry@CRoundedRectangleShape@@CAJPEBUMilPoint2F@@PEAPEAUID2D1PathGeometry@@@Z @ 0x18021FB00
 * Callers:
 *     ?BuildRoundedRectangleShape@CRoundedRectangleShape@@AEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x1800166EC (-BuildRoundedRectangleShape@CRoundedRectangleShape@@AEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@.c)
 * Callees:
 *     ??$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z @ 0x180016D4C (--$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z.c)
 *     ?HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z @ 0x180096D48 (-HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRoundedRectangleShape::CreateFullRectD2DGeometry(
        const struct MilPoint2F *a1,
        struct ID2D1PathGeometry **a2)
{
  unsigned int v2; // xmm0_4
  unsigned int v4; // xmm1_4
  int D2DFactoryNoRef; // eax
  __int64 v6; // rcx
  unsigned int v7; // ebx
  int v8; // eax
  __int64 v9; // rcx
  unsigned int v11; // [rsp+20h] [rbp-30h]
  __int64 v12; // [rsp+30h] [rbp-20h]
  __int64 v13; // [rsp+38h] [rbp-18h]
  __int64 v14; // [rsp+40h] [rbp-10h]
  __int64 v15; // [rsp+70h] [rbp+20h] BYREF
  struct CD2DFactory *v16; // [rsp+80h] [rbp+30h] BYREF
  unsigned __int64 v17; // [rsp+88h] [rbp+38h]

  v2 = *(_DWORD *)a1;
  v4 = *((_DWORD *)a1 + 1);
  v16 = 0LL;
  v15 = 0LL;
  v17 = __PAIR64__(v4, v2);
  v12 = *((_QWORD *)a1 + 3);
  v13 = *((_QWORD *)a1 + 11);
  v14 = *((_QWORD *)a1 + 8);
  D2DFactoryNoRef = CD3DDeviceManager::HandleGetD2DFactoryNoRef(a1, &v16);
  v7 = D2DFactoryNoRef;
  if ( D2DFactoryNoRef < 0 )
  {
    v11 = 271;
    goto LABEL_9;
  }
  D2DFactoryNoRef = (*(__int64 (__fastcall **)(_QWORD, struct ID2D1PathGeometry **))(**((_QWORD **)v16 + 3) + 80LL))(
                      *((_QWORD *)v16 + 3),
                      a2);
  v7 = D2DFactoryNoRef;
  if ( D2DFactoryNoRef < 0 )
  {
    v11 = 272;
    goto LABEL_9;
  }
  v8 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*a2 + 136LL))(*a2, &v15);
  v7 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x112u);
  }
  else
  {
    (*(void (__fastcall **)(__int64, unsigned __int64, _QWORD))(*(_QWORD *)v15 + 40LL))(v15, v17, 0LL);
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v15 + 80LL))(v15, v12);
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v15 + 80LL))(v15, v13);
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v15 + 80LL))(v15, v14);
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v15 + 64LL))(v15, 1LL);
    D2DFactoryNoRef = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 72LL))(v15);
    v7 = D2DFactoryNoRef;
    if ( D2DFactoryNoRef < 0 )
    {
      v11 = 282;
LABEL_9:
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, D2DFactoryNoRef, v11);
    }
  }
  ReleaseInterface<IBitmapLock>(&v15);
  return v7;
}
