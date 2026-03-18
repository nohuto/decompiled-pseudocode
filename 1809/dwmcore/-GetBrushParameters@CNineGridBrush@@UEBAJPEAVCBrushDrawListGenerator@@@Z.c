/*
 * XREFs of ?GetBrushParameters@CNineGridBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x18000B070
 * Callers:
 *     <none>
 * Callees:
 *     ?IsIdentity@CComponentTransform2D@@QEBA_NXZ @ 0x18000AD40 (-IsIdentity@CComponentTransform2D@@QEBA_NXZ.c)
 *     ??4?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18000B02C (--4-$unique_ptr@VCDrawListBrush@@U-$default_delete@VCDrawListBrush@@@std@@@std@@QEAAAEAV01@$$QEA.c)
 *     ?Create@CNineGridDrawListBrush@@SAJ$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@AEBVInsets@@1_NPEAPEAV1@@Z @ 0x18000CF80 (-Create@CNineGridDrawListBrush@@SAJ$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delete@VCDrawL.c)
 *     ??_GCNineGridDrawListBrush@@UEAAPEAXI@Z @ 0x18000D040 (--_GCNineGridDrawListBrush@@UEAAPEAXI@Z.c)
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x18000D0E4 (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 *     ?IsIdentity@Matrix3x2F@D2D1@@QEBA_NXZ @ 0x18002AFB0 (-IsIdentity@Matrix3x2F@D2D1@@QEBA_NXZ.c)
 *     ??1CBrushDrawListGenerator@@QEAA@XZ @ 0x18005C51C (--1CBrushDrawListGenerator@@QEAA@XZ.c)
 *     ?AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@@Z @ 0x18005C55C (-AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delet.c)
 *     ?Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z @ 0x18005C7CC (-Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z.c)
 *     ??_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z @ 0x180064010 (--_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?Reset@CBrushDrawListGenerator@@QEAAXXZ @ 0x1800AE7D4 (-Reset@CBrushDrawListGenerator@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _Init_thread_footer @ 0x1800EC020 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1800EC088 (_Init_thread_header.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0d @ 0x180147BF8 (McTemplateU0d.c)
 */

__int64 __fastcall CNineGridBrush::GetBrushParameters(CNineGridBrush *this, struct CBrushDrawListGenerator *a2)
{
  int v4; // esi
  struct CGeometryOnlyDrawListBrush *v5; // rbx
  unsigned int v6; // xmm0_4
  __int64 v7; // rax
  unsigned int v8; // xmm1_4
  unsigned int v9; // xmm0_4
  unsigned int v10; // xmm1_4
  int v11; // xmm1_4
  int v12; // eax
  unsigned int v13; // ecx
  int v14; // r9d
  __int128 v15; // xmm0
  CGeometryOnlyDrawListBrush *v16; // rcx
  unsigned int v17; // xmm1_4
  unsigned int v18; // xmm0_4
  CGeometryOnlyDrawListBrush *v19; // rax
  __int128 v20; // xmm1
  CNineGridDrawListBrush *v21; // rcx
  __int64 v22; // rcx
  struct CGeometryOnlyDrawListBrush *v23; // rdx
  struct CGeometryOnlyDrawListBrush *v24; // rax
  __int64 v25; // rcx
  CComponentTransform2D *v27; // rcx
  unsigned int v28; // ecx
  int v29; // xmm1_4
  unsigned int v30; // xmm0_4
  unsigned int v31; // xmm1_4
  unsigned int v32; // xmm0_4
  __int128 v33; // xmm1
  CGeometryOnlyDrawListBrush *v34; // rax
  CGeometryOnlyDrawListBrush *v35[2]; // [rsp+30h] [rbp-89h] BYREF
  struct CGeometryOnlyDrawListBrush *v36[2]; // [rsp+40h] [rbp-79h] BYREF
  char v37; // [rsp+50h] [rbp-69h]
  __int128 v38; // [rsp+58h] [rbp-61h] BYREF
  CGeometryOnlyDrawListBrush **v39; // [rsp+68h] [rbp-51h]
  CGeometryOnlyDrawListBrush *v40; // [rsp+70h] [rbp-49h] BYREF
  char v41; // [rsp+78h] [rbp-41h]
  __int128 v42; // [rsp+80h] [rbp-39h] BYREF
  __int64 v43; // [rsp+90h] [rbp-29h] BYREF
  int v44; // [rsp+98h] [rbp-21h]
  int v45; // [rsp+9Ch] [rbp-1Dh]
  int v46; // [rsp+A0h] [rbp-19h]
  __int128 v47; // [rsp+A4h] [rbp-15h]
  CGeometryOnlyDrawListBrush *v48; // [rsp+B8h] [rbp-1h]
  __int64 v49; // [rsp+C0h] [rbp+7h]
  __int64 v50; // [rsp+C8h] [rbp+Fh]
  __int64 v51; // [rsp+D0h] [rbp+17h]
  int v52; // [rsp+D8h] [rbp+1Fh]
  char v53; // [rsp+DCh] [rbp+23h]

  v4 = -2147022876;
  if ( dword_18030BCDC > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_18030BCDC);
    if ( dword_18030BCDC == -1 )
    {
      dword_180308350 = -2147022876;
      Init_thread_footer(&dword_18030BCDC);
    }
  }
  v5 = 0LL;
  *(float *)&v6 = *((float *)this + 21) * *((float *)this + 20);
  v7 = *(_QWORD *)a2;
  *(float *)&v8 = *((float *)this + 23) * *((float *)this + 22);
  v36[0] = 0LL;
  *(_QWORD *)&v38 = __PAIR64__(v8, v6);
  *(float *)&v9 = *((float *)this + 25) * *((float *)this + 24);
  v43 = v7;
  *(float *)&v10 = *((float *)this + 27) * *((float *)this + 26);
  v46 = 0;
  *((_QWORD *)&v38 + 1) = __PAIR64__(v10, v9);
  v44 = *((_DWORD *)a2 + 2);
  v11 = *((_DWORD *)a2 + 3);
  v47 = _xmm;
  v48 = 0LL;
  v45 = v11;
  v49 = 0LL;
  v50 = 0LL;
  v51 = 0LL;
  v52 = 0;
  v53 = 0;
  if ( !*((_BYTE *)this + 113) )
  {
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 9) + 48LL))(
           *((_QWORD *)this + 9),
           145LL) )
    {
      v27 = *(CComponentTransform2D **)(*((_QWORD *)this + 9) + 104LL);
      if ( v27 )
      {
        if ( !CComponentTransform2D::IsIdentity(v27) )
        {
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x80000) != 0 )
            McTemplateU0d(
              &Microsoft_Windows_Dwm_Core_Provider_Context,
              &EVTDESC_NINEGRIDBRUSH_DRAW_ERROR_INVALID_INPUT,
              2147944420LL);
          MilInstrumentationCheckHR_MaybeFailFast(v28, &dword_180308350, 1u, -2147022876, 0x256u);
          goto LABEL_45;
        }
      }
    }
  }
  v12 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 9) + 304LL))(*((_QWORD *)this + 9), &v43);
  v4 = v12;
  if ( v12 >= 0 )
  {
    v35[0] = v48;
    v48 = 0LL;
    std::unique_ptr<CDrawListBrush>::operator=((__int64 *)v36, (__int64 *)v35);
    if ( v35[0] )
      ((void (*)(void))std::default_delete<CShape>::operator())();
    v5 = v36[0];
    if ( v36[0] )
    {
      if ( *((_BYTE *)v36[0] + 52) )
      {
        v29 = *((_DWORD *)this + 22);
        LODWORD(v35[0]) = *((_DWORD *)this + 20);
        v30 = *((_DWORD *)this + 24);
        HIDWORD(v35[0]) = v29;
        v35[1] = (CGeometryOnlyDrawListBrush *)__PAIR64__(*((_DWORD *)this + 26), v30);
        v42 = *(_OWORD *)v35;
      }
      else
      {
        if ( !*((_BYTE *)this + 112) )
          goto LABEL_21;
        v31 = *((_DWORD *)a2 + 2);
        v35[0] = 0LL;
        v42 = v38;
        v32 = *((_DWORD *)a2 + 3);
        *((_BYTE *)v36[0] + 52) = 1;
        v35[1] = (CGeometryOnlyDrawListBrush *)__PAIR64__(v32, v31);
        v33 = *(_OWORD *)v35;
        *((_DWORD *)v5 + 12) = 50529027;
        *((_OWORD *)v5 + 2) = v33;
      }
    }
    else
    {
      v15 = v47;
      *((_BYTE *)a2 + 76) = v53;
      *(_OWORD *)((char *)a2 + 20) = v15;
      if ( !*((_BYTE *)this + 112) )
        goto LABEL_21;
      v35[0] = 0LL;
      v36[0] = (struct CGeometryOnlyDrawListBrush *)v35;
      v42 = v38;
      v36[1] = 0LL;
      v37 = 1;
      v4 = CGeometryOnlyDrawListBrush::Create(&v36[1]);
      if ( v37 )
      {
        v16 = *(CGeometryOnlyDrawListBrush **)v36[0];
        *(_QWORD *)v36[0] = v36[1];
        if ( v16 )
          CGeometryOnlyDrawListBrush::`vector deleting destructor'(v16, 1u);
      }
      if ( v4 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v16, &dword_180308350, 1u, v4, 0x26Eu);
        if ( v35[0] )
          CGeometryOnlyDrawListBrush::`vector deleting destructor'(v35[0], 1u);
        goto LABEL_45;
      }
      v17 = *((_DWORD *)a2 + 2);
      v18 = *((_DWORD *)a2 + 3);
      v19 = v35[0];
      v36[0] = 0LL;
      v36[1] = (struct CGeometryOnlyDrawListBrush *)__PAIR64__(v18, v17);
      v20 = *(_OWORD *)v36;
      *((_BYTE *)v35[0] + 52) = 1;
      *((_DWORD *)v19 + 12) = 50529027;
      *((_OWORD *)v19 + 2) = v20;
      v36[0] = v35[0];
    }
    LOBYTE(v14) = *((_BYTE *)this + 112);
    v39 = v35;
    v35[0] = 0LL;
    v40 = 0LL;
    v41 = 1;
    v4 = CNineGridDrawListBrush::Create((unsigned int)v36, (unsigned int)&v42, (unsigned int)&v38, v14, (__int64)&v40);
    if ( v41 )
    {
      v21 = *v39;
      *v39 = v40;
      if ( v21 )
        CNineGridDrawListBrush::`scalar deleting destructor'(v21, 1u);
    }
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v21, &dword_180308350, 1u, v4, 0x29Cu);
      if ( v35[0] )
        CNineGridDrawListBrush::`scalar deleting destructor'(v35[0], 1u);
      v5 = v36[0];
      goto LABEL_45;
    }
    if ( !D2D1::Matrix3x2F::IsIdentity((CNineGridBrush *)((char *)this + 116)) )
    {
      v34 = v35[0];
      *(_OWORD *)((char *)v35[0] + 8) = *(_OWORD *)v22;
      *((_QWORD *)v34 + 3) = *(_QWORD *)(v22 + 16);
    }
    v23 = v36[0];
    v24 = v35[0];
    v35[0] = 0LL;
    v36[0] = v24;
    if ( v23 )
    {
      ((void (*)(void))std::default_delete<CShape>::operator())();
      if ( v35[0] )
        CNineGridDrawListBrush::`scalar deleting destructor'(v35[0], 1u);
    }
LABEL_21:
    CBrushDrawListGenerator::AttachInput(a2, 0LL, v36);
    v4 = 0;
    v5 = v36[0];
    *((_DWORD *)a2 + 4) = v46;
    goto LABEL_22;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v13, &dword_180308350, 1u, v12, 0x25Bu);
LABEL_45:
  CBrushDrawListGenerator::Reset(a2);
LABEL_22:
  CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)&v43);
  if ( v5 )
    std::default_delete<CShape>::operator()(v25, v5);
  return (unsigned int)v4;
}
