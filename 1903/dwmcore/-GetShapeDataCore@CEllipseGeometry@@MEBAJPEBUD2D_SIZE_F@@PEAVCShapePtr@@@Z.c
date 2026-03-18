/*
 * XREFs of ?GetShapeDataCore@CEllipseGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1801D5440
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F5BC (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180080530 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800C2ED4 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z @ 0x1800D2370 (-HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ??0CComplexShape@@QEAA@PEAUID2D1Geometry@@@Z @ 0x18024BE38 (--0CComplexShape@@QEAA@PEAUID2D1Geometry@@@Z.c)
 */

__int64 __fastcall CEllipseGeometry::GetShapeDataCore(
        CEllipseGeometry *this,
        const struct D2D_SIZE_F *a2,
        struct CShapePtr *a3)
{
  __int128 v3; // xmm0
  CComplexShape *v4; // rdi
  signed int D2DFactoryNoRef; // eax
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
    v12 = 83;
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
    v12 = 85;
LABEL_9:
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, D2DFactoryNoRef, v12, 0LL);
    goto LABEL_10;
  }
  v9 = (CComplexShape *)DefaultHeap::Alloc(0x18uLL);
  if ( v9 )
    v4 = CComplexShape::CComplexShape(v9, v13);
  if ( !v4 )
  {
    v8 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, 0x8007000E, 0x58u, 0LL);
  }
LABEL_10:
  CShapePtr::Release(a3);
  *(_QWORD *)a3 = v4;
  *((_BYTE *)a3 + 8) = 1;
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v13);
  return v8;
}
