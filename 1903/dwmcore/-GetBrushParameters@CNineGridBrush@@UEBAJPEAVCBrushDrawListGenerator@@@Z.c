/*
 * XREFs of ?GetBrushParameters@CNineGridBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x18000E640
 * Callers:
 *     <none>
 * Callees:
 *     ?Create@CNineGridDrawListBrush@@SAJ$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@AEBVInsets@@1_NPEAPEAV1@@Z @ 0x18000FDA0 (-Create@CNineGridDrawListBrush@@SAJ$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delete@VCDrawL.c)
 *     ??_GCNineGridDrawListBrush@@UEAAPEAXI@Z @ 0x18000FE60 (--_GCNineGridDrawListBrush@@UEAAPEAXI@Z.c)
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x18000FF04 (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 *     ?IsIdentity@CComponentTransform2D@@QEBA_NXZ @ 0x18001151C (-IsIdentity@CComponentTransform2D@@QEBA_NXZ.c)
 *     ??_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z @ 0x18004E9C0 (--_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z @ 0x18004EA28 (-Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z.c)
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x180052C34 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ??4?$unique_ptr@VCDrawListPrimitive@@U?$default_delete@VCDrawListPrimitive@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180073328 (--4-$unique_ptr@VCDrawListPrimitive@@U-$default_delete@VCDrawListPrimitive@@@std@@@std@@QEAAAEAV.c)
 *     ??1CBrushDrawListGenerator@@QEAA@XZ @ 0x180075FA8 (--1CBrushDrawListGenerator@@QEAA@XZ.c)
 *     ?Reset@CBrushDrawListGenerator@@QEAAXXZ @ 0x180075FE8 (-Reset@CBrushDrawListGenerator@@QEAAXXZ.c)
 *     ?AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@@Z @ 0x180078AB8 (-AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delet.c)
 *     ?IsIdentity@Matrix3x2F@D2D1@@QEBA_NXZ @ 0x18008B108 (-IsIdentity@Matrix3x2F@D2D1@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _Init_thread_footer @ 0x1800E8500 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1800E8568 (_Init_thread_header.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0d @ 0x18015EC70 (McTemplateU0d.c)
 */

__int64 __fastcall CNineGridBrush::GetBrushParameters(CNineGridBrush *this, struct CBrushDrawListGenerator *a2)
{
  int v4; // esi
  struct CGeometryOnlyDrawListBrush *v5; // rbx
  unsigned int v6; // xmm0_4
  char v7; // r12
  __int64 v8; // rax
  unsigned int v9; // xmm1_4
  unsigned int v10; // xmm0_4
  unsigned int v11; // xmm1_4
  int v12; // xmm1_4
  int v13; // eax
  unsigned int v14; // ecx
  int v15; // r9d
  __int128 v16; // xmm0
  CGeometryOnlyDrawListBrush *v17; // rcx
  unsigned int v18; // xmm1_4
  unsigned int v19; // xmm0_4
  CGeometryOnlyDrawListBrush *v20; // rax
  __int128 v21; // xmm1
  CNineGridDrawListBrush *v22; // rcx
  struct CGeometryOnlyDrawListBrush *v23; // rdx
  const struct D2D1::Matrix3x2F *v24; // rcx
  __int64 v25; // rcx
  CComponentTransform2D *v27; // rcx
  unsigned int v28; // ecx
  int v29; // xmm1_4
  unsigned int v30; // xmm0_4
  unsigned int v31; // xmm1_4
  unsigned int v32; // xmm0_4
  __int128 v33; // xmm1
  __int64 v34; // xmm1_8
  __int64 v35; // rdx
  CGeometryOnlyDrawListBrush *v36[2]; // [rsp+30h] [rbp-99h] BYREF
  struct CGeometryOnlyDrawListBrush *v37[2]; // [rsp+40h] [rbp-89h] BYREF
  char v38; // [rsp+50h] [rbp-79h]
  __int128 v39; // [rsp+58h] [rbp-71h] BYREF
  __int128 v40; // [rsp+68h] [rbp-61h] BYREF
  __int64 v41; // [rsp+78h] [rbp-51h]
  __int128 v42; // [rsp+80h] [rbp-49h] BYREF
  __int64 v43; // [rsp+90h] [rbp-39h] BYREF
  int v44; // [rsp+98h] [rbp-31h]
  int v45; // [rsp+9Ch] [rbp-2Dh]
  int v46; // [rsp+A0h] [rbp-29h]
  __int128 v47; // [rsp+A4h] [rbp-25h]
  CGeometryOnlyDrawListBrush *v48; // [rsp+B8h] [rbp-11h]
  __int64 v49; // [rsp+C0h] [rbp-9h]
  __int64 v50; // [rsp+C8h] [rbp-1h]
  __int64 v51; // [rsp+D0h] [rbp+7h]
  int v52; // [rsp+D8h] [rbp+Fh]
  char v53; // [rsp+DCh] [rbp+13h]

  v4 = -2147022876;
  if ( dword_1803402C4 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_1803402C4);
    if ( dword_1803402C4 == -1 )
    {
      dword_18033CA50 = -2147022876;
      Init_thread_footer(&dword_1803402C4);
    }
  }
  v5 = 0LL;
  *(float *)&v6 = *((float *)this + 23) * *((float *)this + 22);
  v7 = 0;
  v8 = *(_QWORD *)a2;
  *(float *)&v9 = *((float *)this + 25) * *((float *)this + 24);
  v37[0] = 0LL;
  *(_QWORD *)&v39 = __PAIR64__(v9, v6);
  *(float *)&v10 = *((float *)this + 27) * *((float *)this + 26);
  v43 = v8;
  *(float *)&v11 = *((float *)this + 29) * *((float *)this + 28);
  v46 = 0;
  *((_QWORD *)&v39 + 1) = __PAIR64__(v11, v10);
  v44 = *((_DWORD *)a2 + 2);
  v12 = *((_DWORD *)a2 + 3);
  v47 = _xmm;
  v48 = 0LL;
  v45 = v12;
  v49 = 0LL;
  v50 = 0LL;
  v51 = 0LL;
  v52 = 0;
  v53 = 0;
  if ( !*((_BYTE *)this + 145) )
  {
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 10) + 48LL))(
           *((_QWORD *)this + 10),
           176LL) )
    {
      v27 = *(CComponentTransform2D **)(*((_QWORD *)this + 10) + 104LL);
      if ( v27 )
      {
        if ( !CComponentTransform2D::IsIdentity(v27) )
        {
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x80000) != 0 )
            McTemplateU0d(
              &Microsoft_Windows_Dwm_Core_Provider_Context,
              &EVTDESC_NINEGRIDBRUSH_DRAW_ERROR_INVALID_INPUT,
              2147944420LL);
          MilInstrumentationCheckHR_MaybeFailFast(v28, &dword_18033CA50, 1u, -2147022876, 0x284u, 0LL);
          goto LABEL_47;
        }
      }
    }
  }
  v13 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 10) + 368LL))(*((_QWORD *)this + 10), &v43);
  v4 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v14, &dword_18033CA50, 1u, v13, 0x289u, 0LL);
LABEL_47:
    CBrushDrawListGenerator::Reset(a2);
    goto LABEL_22;
  }
  v36[0] = v48;
  v48 = 0LL;
  std::unique_ptr<CDrawListPrimitive>::operator=(v37, v36);
  if ( v36[0] )
    ((void (*)(void))std::default_delete<CShape>::operator())();
  v5 = v37[0];
  if ( v37[0] )
  {
    if ( *((_BYTE *)v37[0] + 52) )
    {
      v29 = *((_DWORD *)this + 24);
      LODWORD(v36[0]) = *((_DWORD *)this + 22);
      v30 = *((_DWORD *)this + 26);
      HIDWORD(v36[0]) = v29;
      v36[1] = (CGeometryOnlyDrawListBrush *)__PAIR64__(*((_DWORD *)this + 28), v30);
      v42 = *(_OWORD *)v36;
    }
    else
    {
      if ( !*((_BYTE *)this + 144) )
        goto LABEL_20;
      v31 = *((_DWORD *)a2 + 2);
      v36[0] = 0LL;
      v42 = v39;
      v32 = *((_DWORD *)a2 + 3);
      *((_BYTE *)v37[0] + 52) = 1;
      v36[1] = (CGeometryOnlyDrawListBrush *)__PAIR64__(v32, v31);
      v33 = *(_OWORD *)v36;
      *((_DWORD *)v5 + 12) = 50529027;
      *((_OWORD *)v5 + 2) = v33;
    }
  }
  else
  {
    v16 = v47;
    *((_BYTE *)a2 + 76) = v53;
    *(_OWORD *)((char *)a2 + 20) = v16;
    if ( !*((_BYTE *)this + 144) )
      goto LABEL_20;
    v36[0] = 0LL;
    v37[0] = (struct CGeometryOnlyDrawListBrush *)v36;
    v42 = v39;
    v37[1] = 0LL;
    v38 = 1;
    v4 = CGeometryOnlyDrawListBrush::Create(&v37[1]);
    if ( v38 )
    {
      v17 = *(CGeometryOnlyDrawListBrush **)v37[0];
      *(_QWORD *)v37[0] = v37[1];
      if ( v17 )
        CGeometryOnlyDrawListBrush::`vector deleting destructor'(v17, 1u);
    }
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v17, &dword_18033CA50, 1u, v4, 0x29Cu, 0LL);
      if ( v36[0] )
        CGeometryOnlyDrawListBrush::`vector deleting destructor'(v36[0], 1u);
      goto LABEL_47;
    }
    v18 = *((_DWORD *)a2 + 2);
    v19 = *((_DWORD *)a2 + 3);
    v20 = v36[0];
    v37[0] = 0LL;
    v37[1] = (struct CGeometryOnlyDrawListBrush *)__PAIR64__(v19, v18);
    v21 = *(_OWORD *)v37;
    *((_BYTE *)v36[0] + 52) = 1;
    *((_DWORD *)v20 + 12) = 50529027;
    *((_OWORD *)v20 + 2) = v21;
    v37[0] = v36[0];
  }
  LOBYTE(v15) = *((_BYTE *)this + 144);
  *(_QWORD *)&v40 = v36;
  v36[0] = 0LL;
  *((_QWORD *)&v40 + 1) = 0LL;
  LOBYTE(v41) = 1;
  v4 = CNineGridDrawListBrush::Create((unsigned int)v37, (unsigned int)&v42, (unsigned int)&v39, v15, (__int64)&v40 + 8);
  if ( (_BYTE)v41 )
  {
    v22 = *(CNineGridDrawListBrush **)v40;
    *(_QWORD *)v40 = *((_QWORD *)&v40 + 1);
    if ( v22 )
      CNineGridDrawListBrush::`scalar deleting destructor'(v22, 1u);
  }
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v22, &dword_18033CA50, 1u, v4, 0x2CAu, 0LL);
    if ( v36[0] )
      CNineGridDrawListBrush::`scalar deleting destructor'(v36[0], 1u);
    v5 = v37[0];
    goto LABEL_47;
  }
  v23 = v37[0];
  v5 = v36[0];
  v36[0] = 0LL;
  v37[0] = v5;
  if ( v23 )
  {
    ((void (*)(void))std::default_delete<CShape>::operator())();
    if ( v36[0] )
      CNineGridDrawListBrush::`scalar deleting destructor'(v36[0], 1u);
  }
  v7 = 1;
LABEL_20:
  if ( !D2D1::Matrix3x2F::IsIdentity((CNineGridBrush *)((char *)this + 120)) )
  {
    D2D1::Matrix3x2F::SetProduct((D2D1::Matrix3x2F *)&v40, (struct CGeometryOnlyDrawListBrush *)((char *)v5 + 8), v24);
    v34 = v41;
    *(_OWORD *)v35 = v40;
    *(_QWORD *)(v35 + 16) = v34;
    if ( v7 )
      *((_BYTE *)v5 + 64) = 0;
  }
  CBrushDrawListGenerator::AttachInput(a2, 0LL, v37);
  v4 = 0;
  v5 = v37[0];
  *((_DWORD *)a2 + 4) = v46;
LABEL_22:
  CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)&v43);
  if ( v5 )
    std::default_delete<CShape>::operator()(v25, v5);
  return (unsigned int)v4;
}
