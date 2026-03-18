/*
 * XREFs of ?Simplify@CPathData@@QEBAJPEAPEAV1@@Z @ 0x18021D1B8
 * Callers:
 *     ?GetSimplifiedPathDataInternal@CPathSegmentsShape@@MEBAJPEAPEAVCPathData@@@Z @ 0x18021FA40 (-GetSimplifiedPathDataInternal@CPathSegmentsShape@@MEBAJPEAPEAVCPathData@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D4F8 (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F9F0 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPathData@@@Z @ 0x1801A4FFC (--4-$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPathData@@@Z.c)
 *     ??0CPathData@@QEAA@PEAUID2D1Factory@@V?$span@$$CBE$0?0@gsl@@@Z @ 0x18021C654 (--0CPathData@@QEAA@PEAUID2D1Factory@@V-$span@$$CBE$0-0@gsl@@@Z.c)
 *     ?GetD2DGeometry@CPathData@@QEBAJPEAUID2D1Factory@@PEAPEAUID2D1Geometry@@@Z @ 0x18021CD94 (-GetD2DGeometry@CPathData@@QEBAJPEAUID2D1Factory@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ?Open@CPathData@@QEAAJPEAPEAUID2D1SimplifiedGeometrySink@@@Z @ 0x18021CF7C (-Open@CPathData@@QEAAJPEAPEAUID2D1SimplifiedGeometrySink@@@Z.c)
 */

__int64 __fastcall CPathData::Simplify(CPathData *this, struct CPathData **a2)
{
  CPathData *v2; // rbx
  bool v5; // zf
  unsigned int v6; // esi
  int v7; // r9d
  struct ID2D1Factory *v8; // rdx
  int D2DGeometry; // eax
  __int64 v10; // rax
  __int64 v11; // rdx
  struct ID2D1SimplifiedGeometrySink *v12; // rdi
  struct CPathData *v13; // rax
  unsigned int v15; // [rsp+20h] [rbp-20h]
  __int128 v16; // [rsp+30h] [rbp-10h] BYREF
  struct ID2D1SimplifiedGeometrySink *v17; // [rsp+70h] [rbp+30h] BYREF
  struct ID2D1Geometry *v18; // [rsp+80h] [rbp+40h] BYREF
  CPathData *v19; // [rsp+88h] [rbp+48h] BYREF

  v2 = 0LL;
  v18 = 0LL;
  v17 = 0LL;
  v5 = *((_BYTE *)this + 80) == 0xFF;
  v19 = 0LL;
  if ( v5 )
  {
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v18);
    D2DGeometry = CPathData::GetD2DGeometry(this, v8, &v18);
    v6 = D2DGeometry;
    if ( D2DGeometry < 0 )
    {
      v15 = 162;
    }
    else
    {
      v10 = (__int64)HeapAlloc(WPF::g_processHeap, 0, 0x58uLL);
      if ( v10 )
      {
        v11 = *((_QWORD *)this + 6);
        v16 = 0LL;
        v10 = CPathData::CPathData(v10, v11, &v16);
      }
      Microsoft::WRL::ComPtr<CPathData>::operator=((__int64 *)&v19, v10);
      v2 = v19;
      if ( !v19 )
      {
        v6 = -2147024882;
        v15 = 165;
        goto LABEL_3;
      }
      Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v17);
      D2DGeometry = CPathData::Open(v2, &v17);
      v6 = D2DGeometry;
      if ( D2DGeometry < 0 )
      {
        v15 = 167;
      }
      else
      {
        v12 = v17;
        D2DGeometry = (*(__int64 (__fastcall **)(struct ID2D1Geometry *, _QWORD, _QWORD))(*(_QWORD *)v18 + 72LL))(
                        v18,
                        0LL,
                        0LL);
        v6 = D2DGeometry;
        if ( D2DGeometry < 0 )
        {
          v15 = 172;
        }
        else
        {
          D2DGeometry = (*(__int64 (__fastcall **)(struct ID2D1SimplifiedGeometrySink *))(*(_QWORD *)v12 + 72LL))(v12);
          v6 = D2DGeometry;
          if ( D2DGeometry >= 0 )
          {
            v13 = v2;
            v2 = 0LL;
            *a2 = v13;
            goto LABEL_19;
          }
          v15 = 174;
        }
      }
    }
    v7 = D2DGeometry;
    goto LABEL_18;
  }
  v6 = -2003304315;
  v15 = 152;
LABEL_3:
  v7 = v6;
LABEL_18:
  MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, v7, v15);
LABEL_19:
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v17);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v18);
  if ( v2 )
    (*(void (__fastcall **)(CPathData *))(*(_QWORD *)v2 + 16LL))(v2);
  return v6;
}
