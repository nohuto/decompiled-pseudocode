/*
 * XREFs of ?GetSimplifiedPathDataInternal@CShape@@MEBAJPEAPEAVCPathData@@@Z @ 0x18021DC60
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D4F8 (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F9F0 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPathData@@@Z @ 0x1801A4FFC (--4-$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPathData@@@Z.c)
 *     ??0CPathData@@QEAA@PEAUID2D1Factory@@V?$span@$$CBE$0?0@gsl@@@Z @ 0x18021C654 (--0CPathData@@QEAA@PEAUID2D1Factory@@V-$span@$$CBE$0-0@gsl@@@Z.c)
 *     ?Open@CPathData@@QEAAJPEAPEAUID2D1SimplifiedGeometrySink@@@Z @ 0x18021CF7C (-Open@CPathData@@QEAAJPEAPEAUID2D1SimplifiedGeometrySink@@@Z.c)
 */

__int64 __fastcall CShape::GetSimplifiedPathDataInternal(CShape *this, struct CPathData **a2)
{
  CPathData *v3; // rbx
  int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // esi
  __int64 v8; // rbx
  __int64 v9; // rax
  int v10; // r9d
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // r8
  struct ID2D1SimplifiedGeometrySink *v14; // rdi
  struct CPathData *v15; // rax
  unsigned int v17; // [rsp+20h] [rbp-30h]
  CPathData *v18; // [rsp+30h] [rbp-20h] BYREF
  __int128 v19; // [rsp+40h] [rbp-10h] BYREF
  __int64 v20; // [rsp+80h] [rbp+30h] BYREF
  struct ID2D1SimplifiedGeometrySink *v21; // [rsp+90h] [rbp+40h] BYREF
  __int64 v22; // [rsp+98h] [rbp+48h] BYREF

  v20 = 0LL;
  v22 = 0LL;
  v3 = 0LL;
  v21 = 0LL;
  v18 = 0LL;
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v20);
  v5 = (*(__int64 (__fastcall **)(CShape *, _QWORD, __int64 *))(*(_QWORD *)this + 24LL))(this, 0LL, &v20);
  v7 = v5;
  if ( v5 < 0 )
  {
    v17 = 995;
LABEL_14:
    v10 = v5;
    goto LABEL_15;
  }
  v8 = v20;
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v22);
  (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 24LL))(v8, &v22);
  v9 = (__int64)HeapAlloc(WPF::g_processHeap, 0, 0x58uLL);
  if ( v9 )
  {
    v19 = 0LL;
    v9 = CPathData::CPathData(v9, v22, &v19);
  }
  Microsoft::WRL::ComPtr<CPathData>::operator=((__int64 *)&v18, v9);
  v3 = v18;
  if ( v18 )
  {
    Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v21);
    v11 = CPathData::Open(v3, &v21);
    v7 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x3E9u);
      goto LABEL_16;
    }
    v14 = v21;
    v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, struct ID2D1SimplifiedGeometrySink *))(*(_QWORD *)v20 + 96LL))(
           v20,
           0LL,
           v13,
           v21);
    v7 = v5;
    if ( v5 < 0 )
    {
      v17 = 1004;
    }
    else
    {
      v5 = (*(__int64 (__fastcall **)(struct ID2D1SimplifiedGeometrySink *))(*(_QWORD *)v14 + 72LL))(v14);
      v7 = v5;
      if ( v5 >= 0 )
      {
        v15 = v3;
        v3 = 0LL;
        *a2 = v15;
        goto LABEL_16;
      }
      v17 = 1005;
    }
    goto LABEL_14;
  }
  v7 = -2147024882;
  v17 = 999;
  v10 = -2147024882;
LABEL_15:
  MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v10, v17);
LABEL_16:
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v21);
  if ( v3 )
    (*(void (__fastcall **)(CPathData *))(*(_QWORD *)v3 + 16LL))(v3);
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v22);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v20);
  return v7;
}
