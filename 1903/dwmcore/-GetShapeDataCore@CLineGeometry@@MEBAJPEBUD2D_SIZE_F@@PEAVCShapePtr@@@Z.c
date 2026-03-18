/*
 * XREFs of ?GetShapeDataCore@CLineGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1801E22B0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F5BC (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180080530 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800C2ED4 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z @ 0x1800D2370 (-HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPathData@@@Z @ 0x1801C1A68 (--4-$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPathData@@@Z.c)
 *     ??0CPathData@@QEAA@PEAUID2D1Factory@@V?$span@$$CBE$0?0@gsl@@@Z @ 0x18022B7B4 (--0CPathData@@QEAA@PEAUID2D1Factory@@V-$span@$$CBE$0-0@gsl@@@Z.c)
 *     ?Open@CPathData@@QEAAJPEAPEAUID2D1SimplifiedGeometrySink@@@Z @ 0x18022C0FC (-Open@CPathData@@QEAAJPEAPEAUID2D1SimplifiedGeometrySink@@@Z.c)
 *     ??0CPathSegmentsShape@@QEAA@PEBVCPathData@@@Z @ 0x18024D75C (--0CPathSegmentsShape@@QEAA@PEBVCPathData@@@Z.c)
 */

__int64 __fastcall CLineGeometry::GetShapeDataCore(
        CLineGeometry *this,
        const struct D2D_SIZE_F *a2,
        struct CShapePtr *a3)
{
  CPathData *v3; // rbx
  signed int D2DFactoryNoRef; // eax
  __int64 v7; // rcx
  unsigned int v8; // edi
  LPVOID v9; // rax
  __int64 v10; // rcx
  CPathSegmentsShape *v11; // rax
  __int64 v12; // rcx
  CPathSegmentsShape *v13; // rsi
  unsigned int v15; // [rsp+20h] [rbp-30h]
  CPathData *v16; // [rsp+30h] [rbp-20h] BYREF
  struct CD2DFactory *v17; // [rsp+38h] [rbp-18h] BYREF
  __int128 v18; // [rsp+40h] [rbp-10h] BYREF
  struct ID2D1SimplifiedGeometrySink *v19; // [rsp+88h] [rbp+38h] BYREF

  v3 = 0LL;
  v19 = 0LL;
  v16 = 0LL;
  D2DFactoryNoRef = CD3DDeviceManager::HandleGetD2DFactoryNoRef(this, &v17);
  v8 = D2DFactoryNoRef;
  if ( D2DFactoryNoRef < 0 )
  {
    v15 = 83;
  }
  else
  {
    v9 = DefaultHeap::Alloc(0x58uLL);
    if ( v9 )
    {
      v18 = 0LL;
      v9 = (LPVOID)CPathData::CPathData(v9, *((_QWORD *)v17 + 3), &v18);
    }
    Microsoft::WRL::ComPtr<CPathData>::operator=((__int64 *)&v16, (__int64)v9);
    v3 = v16;
    if ( !v16 )
    {
      v8 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, 0x8007000E, 0x56u, 0LL);
      goto LABEL_18;
    }
    Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v19);
    D2DFactoryNoRef = CPathData::Open(v3, &v19);
    v8 = D2DFactoryNoRef;
    if ( D2DFactoryNoRef < 0 )
    {
      v15 = 88;
    }
    else
    {
      (*(void (__fastcall **)(struct ID2D1SimplifiedGeometrySink *, _QWORD, __int64))(*(_QWORD *)v19 + 40LL))(
        v19,
        *((_QWORD *)this + 17),
        1LL);
      (*(void (__fastcall **)(struct ID2D1SimplifiedGeometrySink *, char *, __int64))(*(_QWORD *)v19 + 48LL))(
        v19,
        (char *)this + 144,
        1LL);
      (*(void (__fastcall **)(struct ID2D1SimplifiedGeometrySink *, _QWORD))(*(_QWORD *)v19 + 64LL))(v19, 0LL);
      D2DFactoryNoRef = (*(__int64 (__fastcall **)(struct ID2D1SimplifiedGeometrySink *))(*(_QWORD *)v19 + 72LL))(v19);
      v8 = D2DFactoryNoRef;
      if ( D2DFactoryNoRef >= 0 )
      {
        v11 = (CPathSegmentsShape *)DefaultHeap::Alloc(0x18uLL);
        if ( v11 )
          v13 = CPathSegmentsShape::CPathSegmentsShape(v11, v3);
        else
          v13 = 0LL;
        if ( v13 )
        {
          CShapePtr::Release(a3);
          *(_QWORD *)a3 = v13;
          *((_BYTE *)a3 + 8) = 1;
        }
        else
        {
          v8 = -2147024882;
          MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, 0x8007000E, 0x61u, 0LL);
        }
        goto LABEL_18;
      }
      v15 = 94;
    }
  }
  MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, D2DFactoryNoRef, v15, 0LL);
LABEL_18:
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v19);
  if ( v3 )
    (*(void (__fastcall **)(CPathData *))(*(_QWORD *)v3 + 16LL))(v3);
  return v8;
}
