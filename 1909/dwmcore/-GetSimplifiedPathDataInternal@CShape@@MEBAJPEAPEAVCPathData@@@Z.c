/*
 * XREFs of ?GetSimplifiedPathDataInternal@CShape@@MEBAJPEAPEAVCPathData@@@Z @ 0x18024A400
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D76C (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001FA48 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18007BD70 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPathData@@@Z @ 0x1801C0298 (--4-$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPathData@@@Z.c)
 *     ??0CPathData@@QEAA@PEAUID2D1Factory@@V?$span@$$CBE$0?0@gsl@@@Z @ 0x18022A0A4 (--0CPathData@@QEAA@PEAUID2D1Factory@@V-$span@$$CBE$0-0@gsl@@@Z.c)
 *     ?Open@CPathData@@QEAAJPEAPEAUID2D1SimplifiedGeometrySink@@@Z @ 0x18022A9EC (-Open@CPathData@@QEAAJPEAPEAUID2D1SimplifiedGeometrySink@@@Z.c)
 */

__int64 __fastcall CShape::GetSimplifiedPathDataInternal(CShape *this, struct CPathData **a2)
{
  __int64 v2; // rax
  CPathData *v4; // rbx
  __int64 (__fastcall *v6)(CShape *, _QWORD, __int64 *); // rdi
  int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // edi
  __int64 v10; // rbx
  void (__fastcall *v11)(__int64, __int64 *); // rdi
  __int64 v12; // rax
  unsigned int v13; // r9d
  signed int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // r8
  struct CPathData *v17; // rax
  unsigned int v19; // [rsp+20h] [rbp-30h]
  CPathData *v20; // [rsp+30h] [rbp-20h] BYREF
  __int128 v21; // [rsp+40h] [rbp-10h] BYREF
  struct ID2D1SimplifiedGeometrySink *v22; // [rsp+80h] [rbp+30h] BYREF
  __int64 v23; // [rsp+90h] [rbp+40h] BYREF
  __int64 v24; // [rsp+98h] [rbp+48h] BYREF

  v2 = *(_QWORD *)this;
  v23 = 0LL;
  v24 = 0LL;
  v4 = 0LL;
  v22 = 0LL;
  v6 = *(__int64 (__fastcall **)(CShape *, _QWORD, __int64 *))(v2 + 24);
  v20 = 0LL;
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v23);
  v7 = v6(this, 0LL, &v23);
  v9 = v7;
  if ( v7 < 0 )
  {
    v19 = 991;
LABEL_14:
    v13 = v7;
    goto LABEL_15;
  }
  v10 = v23;
  v11 = *(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v23 + 24LL);
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v24);
  v11(v10, &v24);
  v12 = (__int64)DefaultHeap::Alloc(0x58uLL);
  if ( v12 )
  {
    v21 = 0LL;
    v12 = CPathData::CPathData(v12, v24, (__int64 *)&v21);
  }
  Microsoft::WRL::ComPtr<CPathData>::operator=((__int64 *)&v20, v12);
  v4 = v20;
  if ( v20 )
  {
    Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v22);
    v14 = CPathData::Open(v4, &v22);
    v9 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x3E5u, 0LL);
      goto LABEL_16;
    }
    v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, struct ID2D1SimplifiedGeometrySink *))(*(_QWORD *)v23 + 96LL))(
           v23,
           0LL,
           v16,
           v22);
    v9 = v7;
    if ( v7 < 0 )
    {
      v19 = 1000;
    }
    else
    {
      v7 = (*(__int64 (__fastcall **)(struct ID2D1SimplifiedGeometrySink *))(*(_QWORD *)v22 + 72LL))(v22);
      v9 = v7;
      if ( v7 >= 0 )
      {
        v17 = v4;
        v4 = 0LL;
        *a2 = v17;
        goto LABEL_16;
      }
      v19 = 1001;
    }
    goto LABEL_14;
  }
  v9 = -2147024882;
  v13 = -2147024882;
  v19 = 995;
LABEL_15:
  MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v13, v19, 0LL);
LABEL_16:
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v22);
  if ( v4 )
    (*(void (__fastcall **)(CPathData *))(*(_QWORD *)v4 + 16LL))(v4);
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v24);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v23);
  return v9;
}
