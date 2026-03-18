/*
 * XREFs of ?GetShapeDataCore@CLineGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1801A50F0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D4F8 (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800659B4 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z @ 0x180096D48 (-HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPathData@@@Z @ 0x1801A4FFC (--4-$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPathData@@@Z.c)
 *     ??0CPathData@@QEAA@PEAUID2D1Factory@@V?$span@$$CBE$0?0@gsl@@@Z @ 0x18021C654 (--0CPathData@@QEAA@PEAUID2D1Factory@@V-$span@$$CBE$0-0@gsl@@@Z.c)
 *     ?Open@CPathData@@QEAAJPEAPEAUID2D1SimplifiedGeometrySink@@@Z @ 0x18021CF7C (-Open@CPathData@@QEAAJPEAPEAUID2D1SimplifiedGeometrySink@@@Z.c)
 *     ??0CPathSegmentsShape@@QEAA@PEBVCPathData@@@Z @ 0x18021F8F8 (--0CPathSegmentsShape@@QEAA@PEBVCPathData@@@Z.c)
 */

__int64 __fastcall CLineGeometry::GetShapeDataCore(
        CLineGeometry *this,
        const struct D2D_SIZE_F *a2,
        struct CShapePtr *a3)
{
  CPathData *v3; // rdi
  int D2DFactoryNoRef; // eax
  __int64 v7; // rcx
  unsigned int v8; // ebx
  LPVOID v9; // rax
  __int64 v10; // rcx
  struct ID2D1SimplifiedGeometrySink *v11; // rbx
  CPathSegmentsShape *v12; // rax
  __int64 v13; // rcx
  CPathSegmentsShape *v14; // rsi
  unsigned int v16; // [rsp+20h] [rbp-30h]
  CPathData *v17; // [rsp+30h] [rbp-20h] BYREF
  struct CD2DFactory *v18; // [rsp+38h] [rbp-18h] BYREF
  __int128 v19; // [rsp+40h] [rbp-10h] BYREF
  struct ID2D1SimplifiedGeometrySink *v20; // [rsp+88h] [rbp+38h] BYREF

  v3 = 0LL;
  v20 = 0LL;
  v17 = 0LL;
  D2DFactoryNoRef = CD3DDeviceManager::HandleGetD2DFactoryNoRef(this, &v18);
  v8 = D2DFactoryNoRef;
  if ( D2DFactoryNoRef < 0 )
  {
    v16 = 85;
  }
  else
  {
    v9 = HeapAlloc(WPF::g_processHeap, 0, 0x58uLL);
    if ( v9 )
    {
      v19 = 0LL;
      v9 = (LPVOID)CPathData::CPathData(v9, *((_QWORD *)v18 + 3), &v19);
    }
    Microsoft::WRL::ComPtr<CPathData>::operator=((__int64 *)&v17, (__int64)v9);
    v3 = v17;
    if ( !v17 )
    {
      v8 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, -2147024882, 0x58u);
      goto LABEL_18;
    }
    Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v20);
    D2DFactoryNoRef = CPathData::Open(v3, &v20);
    v8 = D2DFactoryNoRef;
    if ( D2DFactoryNoRef < 0 )
    {
      v16 = 90;
    }
    else
    {
      v11 = v20;
      (*(void (__fastcall **)(struct ID2D1SimplifiedGeometrySink *, _QWORD, __int64))(*(_QWORD *)v20 + 40LL))(
        v20,
        *((_QWORD *)this + 17),
        1LL);
      (*(void (__fastcall **)(struct ID2D1SimplifiedGeometrySink *, char *, __int64))(*(_QWORD *)v11 + 48LL))(
        v11,
        (char *)this + 144,
        1LL);
      (*(void (__fastcall **)(struct ID2D1SimplifiedGeometrySink *, _QWORD))(*(_QWORD *)v11 + 64LL))(v11, 0LL);
      D2DFactoryNoRef = (*(__int64 (__fastcall **)(struct ID2D1SimplifiedGeometrySink *))(*(_QWORD *)v11 + 72LL))(v11);
      v8 = D2DFactoryNoRef;
      if ( D2DFactoryNoRef >= 0 )
      {
        v12 = (CPathSegmentsShape *)HeapAlloc(WPF::g_processHeap, 0, 0x18uLL);
        if ( v12 )
          v14 = CPathSegmentsShape::CPathSegmentsShape(v12, v3);
        else
          v14 = 0LL;
        if ( v14 )
        {
          CShapePtr::Release(a3);
          *(_QWORD *)a3 = v14;
          *((_BYTE *)a3 + 8) = 1;
        }
        else
        {
          v8 = -2147024882;
          MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, -2147024882, 0x63u);
        }
        goto LABEL_18;
      }
      v16 = 96;
    }
  }
  MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, D2DFactoryNoRef, v16);
LABEL_18:
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v20);
  if ( v3 )
    (*(void (__fastcall **)(CPathData *))(*(_QWORD *)v3 + 16LL))(v3);
  return v8;
}
