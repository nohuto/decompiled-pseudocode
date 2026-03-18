/*
 * XREFs of ?Simplify@CPathData@@QEBAJPEAPEAV1@@Z @ 0x18022C340
 * Callers:
 *     ?GetSimplifiedPathDataInternal@CPathSegmentsShape@@MEBAJPEAPEAVCPathData@@@Z @ 0x18024D8A0 (-GetSimplifiedPathDataInternal@CPathSegmentsShape@@MEBAJPEAPEAVCPathData@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F5BC (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x1800216A8 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180080530 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPathData@@@Z @ 0x1801C1A68 (--4-$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPathData@@@Z.c)
 *     ??0CPathData@@QEAA@PEAUID2D1Factory@@V?$span@$$CBE$0?0@gsl@@@Z @ 0x18022B7B4 (--0CPathData@@QEAA@PEAUID2D1Factory@@V-$span@$$CBE$0-0@gsl@@@Z.c)
 *     ?GetD2DGeometry@CPathData@@QEBAJPEAUID2D1Factory@@PEAPEAUID2D1Geometry@@@Z @ 0x18022BEF4 (-GetD2DGeometry@CPathData@@QEBAJPEAUID2D1Factory@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ?Open@CPathData@@QEAAJPEAPEAUID2D1SimplifiedGeometrySink@@@Z @ 0x18022C0FC (-Open@CPathData@@QEAAJPEAPEAUID2D1SimplifiedGeometrySink@@@Z.c)
 */

__int64 __fastcall CPathData::Simplify(CPathData *this, struct CPathData **a2)
{
  CPathData *v2; // rbx
  bool v5; // zf
  unsigned int v6; // edi
  unsigned int v7; // r9d
  struct ID2D1Factory *v8; // rdx
  int D2DGeometry; // eax
  __int64 v10; // rax
  __int64 v11; // rdx
  struct CPathData *v12; // rax
  unsigned int v14; // [rsp+20h] [rbp-20h]
  __int128 v15; // [rsp+30h] [rbp-10h] BYREF
  struct ID2D1SimplifiedGeometrySink *v16; // [rsp+70h] [rbp+30h] BYREF
  struct ID2D1Geometry *v17; // [rsp+80h] [rbp+40h] BYREF
  CPathData *v18; // [rsp+88h] [rbp+48h] BYREF

  v2 = 0LL;
  v17 = 0LL;
  v16 = 0LL;
  v5 = *((_BYTE *)this + 80) == 0xFF;
  v18 = 0LL;
  if ( v5 )
  {
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v17);
    D2DGeometry = CPathData::GetD2DGeometry(this, v8, &v17);
    v6 = D2DGeometry;
    if ( D2DGeometry < 0 )
    {
      v14 = 162;
    }
    else
    {
      v10 = (__int64)DefaultHeap::Alloc(0x58uLL);
      if ( v10 )
      {
        v11 = *((_QWORD *)this + 6);
        v15 = 0LL;
        v10 = CPathData::CPathData(v10, v11, (__int64 *)&v15);
      }
      Microsoft::WRL::ComPtr<CPathData>::operator=((__int64 *)&v18, v10);
      v2 = v18;
      if ( !v18 )
      {
        v6 = -2147024882;
        v14 = 165;
        goto LABEL_3;
      }
      Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v16);
      D2DGeometry = CPathData::Open(v2, &v16);
      v6 = D2DGeometry;
      if ( D2DGeometry < 0 )
      {
        v14 = 167;
      }
      else
      {
        D2DGeometry = (*(__int64 (__fastcall **)(struct ID2D1Geometry *, _QWORD, _QWORD))(*(_QWORD *)v17 + 72LL))(
                        v17,
                        0LL,
                        0LL);
        v6 = D2DGeometry;
        if ( D2DGeometry < 0 )
        {
          v14 = 172;
        }
        else
        {
          D2DGeometry = (*(__int64 (__fastcall **)(struct ID2D1SimplifiedGeometrySink *))(*(_QWORD *)v16 + 72LL))(v16);
          v6 = D2DGeometry;
          if ( D2DGeometry >= 0 )
          {
            v12 = v2;
            v2 = 0LL;
            *a2 = v12;
            goto LABEL_19;
          }
          v14 = 174;
        }
      }
    }
    v7 = D2DGeometry;
    goto LABEL_18;
  }
  v6 = -2003304315;
  v14 = 152;
LABEL_3:
  v7 = v6;
LABEL_18:
  MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, v7, v14, 0LL);
LABEL_19:
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v16);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v17);
  if ( v2 )
    (*(void (__fastcall **)(CPathData *))(*(_QWORD *)v2 + 16LL))(v2);
  return v6;
}
