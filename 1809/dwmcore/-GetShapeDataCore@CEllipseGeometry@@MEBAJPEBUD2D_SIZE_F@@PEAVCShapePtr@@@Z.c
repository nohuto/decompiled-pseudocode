/*
 * XREFs of ?GetShapeDataCore@CEllipseGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x180195760
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D4F8 (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800659B4 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z @ 0x180096D48 (-HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ??0CComplexShape@@QEAA@PEAUID2D1Geometry@@@Z @ 0x18021DF58 (--0CComplexShape@@QEAA@PEAUID2D1Geometry@@@Z.c)
 */

__int64 __fastcall CEllipseGeometry::GetShapeDataCore(
        CEllipseGeometry *this,
        const struct D2D_SIZE_F *a2,
        struct CShapePtr *a3)
{
  __int128 v3; // xmm0
  CComplexShape *v4; // rdi
  int D2DFactoryNoRef; // eax
  __int64 v7; // rcx
  unsigned int v8; // ebx
  CComplexShape *v9; // rax
  __int64 v10; // rcx
  unsigned int v12; // [rsp+20h] [rbp-40h]
  struct ID2D1Geometry *v13; // [rsp+30h] [rbp-30h] BYREF
  struct CD2DFactory *v14; // [rsp+38h] [rbp-28h] BYREF
  __int128 v15; // [rsp+40h] [rbp-20h] BYREF

  v3 = *(_OWORD *)((char *)this + 136);
  v4 = 0LL;
  v13 = 0LL;
  v15 = v3;
  D2DFactoryNoRef = CD3DDeviceManager::HandleGetD2DFactoryNoRef(this, &v14);
  v8 = D2DFactoryNoRef;
  if ( D2DFactoryNoRef < 0 )
  {
    v12 = 85;
    goto LABEL_9;
  }
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v13);
  D2DFactoryNoRef = (*(__int64 (__fastcall **)(_QWORD, __int128 *, struct ID2D1Geometry **))(**((_QWORD **)v14 + 3)
                                                                                           + 56LL))(
                      *((_QWORD *)v14 + 3),
                      &v15,
                      &v13);
  v8 = D2DFactoryNoRef;
  if ( D2DFactoryNoRef < 0 )
  {
    v12 = 87;
LABEL_9:
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, D2DFactoryNoRef, v12);
    goto LABEL_10;
  }
  v9 = (CComplexShape *)HeapAlloc(WPF::g_processHeap, 0, 0x18uLL);
  if ( v9 )
    v4 = CComplexShape::CComplexShape(v9, v13);
  if ( !v4 )
  {
    v8 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, -2147024882, 0x5Au);
  }
LABEL_10:
  CShapePtr::Release(a3);
  *(_QWORD *)a3 = v4;
  *((_BYTE *)a3 + 8) = 1;
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v13);
  return v8;
}
