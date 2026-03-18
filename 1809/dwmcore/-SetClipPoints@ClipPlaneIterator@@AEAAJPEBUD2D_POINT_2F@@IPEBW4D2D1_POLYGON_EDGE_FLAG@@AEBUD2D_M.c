/*
 * XREFs of ?SetClipPoints@ClipPlaneIterator@@AEAAJPEBUD2D_POINT_2F@@IPEBW4D2D1_POLYGON_EDGE_FLAG@@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x18017A8B4
 * Callers:
 *     ?ClipToPolygon@ClipPlaneIterator@@QEAAJPEAVCPolygon@@AEBVCMILMatrix@@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@@Z @ 0x18017A2BC (-ClipToPolygon@ClipPlaneIterator@@QEAAJPEAVCPolygon@@AEBVCMILMatrix@@AEBV-$TMilRect_@HUtagRECT@@.c)
 * Callees:
 *     ?TransformPoints@MILMatrix3x2@@QEBAXPEBUMilPoint2F@@PEAU2@I@Z @ 0x180012160 (-TransformPoints@MILMatrix3x2@@QEBAXPEBUMilPoint2F@@PEAU2@I@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180022680 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     ?RemoveAt@?$DynArray@ULineSegment@ClipPlaneIterator@@$0A@@@QEAAJI@Z @ 0x18017A760 (-RemoveAt@-$DynArray@ULineSegment@ClipPlaneIterator@@$0A@@@QEAAJI@Z.c)
 *     ?RemoveAt@?$DynArray@W4D2D1_POLYGON_EDGE_FLAG@@$0A@@@QEAAJI@Z @ 0x18017A7E0 (-RemoveAt@-$DynArray@W4D2D1_POLYGON_EDGE_FLAG@@$0A@@@QEAAJI@Z.c)
 */

__int64 __fastcall ClipPlaneIterator::SetClipPoints(
        ClipPlaneIterator *this,
        const struct D2D_POINT_2F *a2,
        unsigned int a3,
        const enum D2D1_POLYGON_EDGE_FLAG *a4,
        const struct D2D_MATRIX_3X2_F *a5)
{
  const struct D2D_POINT_2F *v6; // rdi
  __int64 v8; // rax
  FLOAT x; // xmm2_4
  FLOAT y; // xmm3_4
  unsigned int v11; // eax
  unsigned int v12; // r12d
  const enum D2D1_POLYGON_EDGE_FLAG *v13; // r13
  unsigned int v14; // r15d
  __int64 v15; // rdx
  __int64 v16; // rcx
  FLOAT v17; // xmm1_4
  FLOAT v18; // xmm0_4
  unsigned int v19; // eax
  int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // rcx
  unsigned int v23; // eax
  int v24; // eax
  __int64 v25; // rcx
  unsigned int v26; // edx
  unsigned int i; // edi
  float *v28; // rax
  char *v29; // r12
  float *v30; // rcx
  float v31; // xmm3_4
  float v32; // xmm4_4
  unsigned int v33; // ecx
  float v34; // xmm2_4
  float v35; // xmm0_4
  unsigned int v36; // edi
  _BYTE *v37; // rcx
  __int64 v38; // rdx
  bool v39; // zf
  unsigned int v40; // eax
  unsigned int v41; // r9d
  unsigned int v42; // eax
  __int64 v43; // rdi
  unsigned int j; // esi
  __int64 v45; // rax
  _BYTE *v46; // rcx
  unsigned int v47; // edx
  unsigned int v48; // edi
  unsigned int v49; // eax
  __int64 v50; // rcx
  unsigned int v51; // eax
  int v52; // eax
  __int64 v53; // rcx
  struct MilPoint2F *v54; // r8
  const struct MilPoint2F *v55; // rdx
  FLOAT dy; // xmm1_4
  unsigned int v58; // [rsp+30h] [rbp-48h] BYREF
  __int64 v59; // [rsp+38h] [rbp-40h]
  __int64 v60; // [rsp+40h] [rbp-38h]
  __int64 v61; // [rsp+48h] [rbp-30h]
  __int128 v62; // [rsp+50h] [rbp-28h] BYREF
  FLOAT dx; // [rsp+60h] [rbp-18h]
  FLOAT v64; // [rsp+64h] [rbp-14h]

  v6 = a2;
  if ( a3 < 3 )
    return 0LL;
  v8 = a3 - 1;
  x = a2[v8].x;
  y = a2[v8].y;
  if ( a4 )
    v11 = *((_DWORD *)a4 + v8);
  else
    v11 = 0;
  v58 = v11;
  v12 = v11;
  v13 = a4;
  v14 = v11;
  v15 = a3;
  v59 = a3;
  while ( 1 )
  {
    v16 = *((unsigned int *)this + 12);
    v17 = v6->x;
    v18 = v6->y;
    *(FLOAT *)&v60 = v6->x;
    v19 = v16 + 1;
    *((FLOAT *)&v60 + 1) = v18;
    *(_QWORD *)&v62 = __PAIR64__(LODWORD(y), LODWORD(x));
    if ( (int)v16 + 1 >= (unsigned int)v16 )
      v12 = v16 + 1;
    *((_QWORD *)&v62 + 1) = __PAIR64__(LODWORD(v18), LODWORD(v17));
    if ( v19 < (unsigned int)v16 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v19 < (unsigned int)v16 ? 0x80070216 : 0, 0xB5u);
    }
    else
    {
      if ( v12 <= *((_DWORD *)this + 11) )
      {
        *(_OWORD *)(*((_QWORD *)this + 3) + 16LL * (unsigned int)v16) = v62;
        *((_DWORD *)this + 12) = v12;
        goto LABEL_15;
      }
      v20 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 24, 16, 1, &v62);
      if ( v20 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v20, 0xC0u);
    }
    v15 = v59;
LABEL_15:
    if ( a4 )
    {
      v22 = *((unsigned int *)this + 20);
      v23 = v22 + 1;
      if ( (int)v22 + 1 >= (unsigned int)v22 )
        v14 = v22 + 1;
      if ( v23 < (unsigned int)v22 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v23 < (unsigned int)v22 ? 0x80070216 : 0, 0xB5u);
      }
      else if ( v14 > *((_DWORD *)this + 19) )
      {
        v24 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 56, 4, 1, &v58);
        if ( v24 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, v24, 0xC0u);
      }
      else
      {
        *(_DWORD *)(*((_QWORD *)this + 7) + 4LL * (unsigned int)v22) = v58;
        *((_DWORD *)this + 20) = v14;
      }
      v15 = v59;
      v58 = *(_DWORD *)v13;
    }
    ++v6;
    v13 = (const enum D2D1_POLYGON_EDGE_FLAG *)((char *)v13 + 4);
    v61 = v60;
    v59 = --v15;
    if ( !v15 )
      break;
    y = *((FLOAT *)&v61 + 1);
    LODWORD(x) = v61;
  }
  v26 = *((_DWORD *)this + 12);
  for ( i = 0; i < v26; ++i )
  {
    v28 = (float *)(*((_QWORD *)this + 3) + 16LL * i);
    if ( (float)((float)((float)(v28[3] - v28[1]) * (float)(v28[3] - v28[1]))
               + (float)((float)(v28[2] - *v28) * (float)(v28[2] - *v28))) <= 1.0e-12 )
    {
      DynArray<ClipPlaneIterator::LineSegment,0>::RemoveAt((__int64)this + 24, i);
      if ( a4 )
        DynArray<enum D2D1_POLYGON_EDGE_FLAG,0>::RemoveAt((__int64)this + 56, i);
      --i;
    }
    v26 = *((_DWORD *)this + 12);
  }
  if ( v26 < 3 )
  {
    *((_DWORD *)this + 12) = 0;
    return 0LL;
  }
  v29 = (char *)this + 24;
  v30 = (float *)(*((_QWORD *)this + 3) + 16LL * (v26 - 1));
  v31 = v30[2] - *v30;
  v32 = v30[3] - v30[1];
  v33 = 0;
  do
  {
    v34 = (float)(v31
                * (float)(*(float *)(*(_QWORD *)v29 + 16LL * v33 + 12) - *(float *)(*(_QWORD *)v29 + 16LL * v33 + 4)))
        - (float)((float)(*(float *)(*(_QWORD *)v29 + 16LL * v33 + 8) - *(float *)(*(_QWORD *)v29 + 16LL * v33)) * v32);
    if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v34) & _xmm) > 0.000001 )
      break;
    ++v33;
  }
  while ( v33 < *((_DWORD *)this + 12) );
  if ( v34 <= 0.0 )
    v35 = FLOAT_1_0;
  else
    v35 = FLOAT_N1_0;
  v36 = 0;
  *((float *)this + 4) = v35;
  if ( a4 && *((_DWORD *)this + 12) )
  {
    v37 = (_BYTE *)*((_QWORD *)this + 7);
    v38 = *((unsigned int *)this + 12);
    do
    {
      v39 = (*v37 & 1) == 0;
      v40 = v36 + 1;
      v37 += 4;
      if ( v39 )
        v40 = v36;
      v36 = v40;
      --v38;
    }
    while ( v38 );
  }
  v41 = *((_DWORD *)this + 12);
  v42 = v41 - v36;
  if ( v36 )
  {
    if ( !v42 )
    {
      *((_DWORD *)this + 12) = 0;
      *(_BYTE *)this = 1;
      *((_DWORD *)this + 20) = 0;
      v41 = *((_DWORD *)this + 12);
      goto LABEL_79;
    }
    if ( v42 <= 4 )
    {
      v43 = 0LL;
      if ( !v41 )
        return 0LL;
      do
      {
        if ( (*(_BYTE *)(*((_QWORD *)this + 7) + 4 * v43) & 1) != 0 )
        {
          DynArray<ClipPlaneIterator::LineSegment,0>::RemoveAt((__int64)this + 24, v43);
          DynArray<enum D2D1_POLYGON_EDGE_FLAG,0>::RemoveAt((__int64)this + 56, v43);
          LODWORD(v43) = v43 - 1;
        }
        v41 = *((_DWORD *)this + 12);
        v43 = (unsigned int)(v43 + 1);
      }
      while ( (unsigned int)v43 < v41 );
      goto LABEL_79;
    }
    if ( v36 >= 2 )
    {
      for ( j = 1; j < v41; ++j )
      {
        v45 = *((_QWORD *)this + 7);
        if ( (*(_BYTE *)(v45 + 4LL * j) & 1) != 0 && (*(_BYTE *)(v45 + 4LL * (j - 1)) & 1) != 0 )
        {
          *(_QWORD *)(*(_QWORD *)v29 + 16LL * (j - 1) + 8) = *(_QWORD *)(*(_QWORD *)v29 + 16LL * j + 8);
          DynArray<ClipPlaneIterator::LineSegment,0>::RemoveAt((__int64)this + 24, j);
          DynArray<enum D2D1_POLYGON_EDGE_FLAG,0>::RemoveAt((__int64)this + 56, j--);
          --v36;
        }
        v41 = *((_DWORD *)this + 12);
      }
      if ( v36 >= 2 )
      {
        v46 = (_BYTE *)*((_QWORD *)this + 7);
        if ( (*v46 & 1) != 0 && (v46[4 * (*((_DWORD *)this + 20) - 1)] & 1) != 0 )
        {
          *(_QWORD *)(*(_QWORD *)v29 + 8LL) = *(_QWORD *)(*((_QWORD *)this + 3)
                                                        + 16LL * (unsigned int)--*((_DWORD *)this + 12));
          --*((_DWORD *)this + 20);
          v41 = *((_DWORD *)this + 12);
        }
      }
    }
    v47 = 0;
    v58 = 0;
    if ( v41 )
    {
      v48 = v58;
      v49 = 0;
      do
      {
        if ( (*(_BYTE *)(*((_QWORD *)this + 7) + 4LL * v49) & 1) != 0 )
        {
          v50 = *((unsigned int *)this + 28);
          v51 = v50 + 1;
          if ( (int)v50 + 1 >= (unsigned int)v50 )
            v48 = v50 + 1;
          if ( v51 < (unsigned int)v50 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v50, 0LL, 0, v51 < (unsigned int)v50 ? 0x80070216 : 0, 0xB5u);
          }
          else if ( v48 > *((_DWORD *)this + 27) )
          {
            v52 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 88, 4, 1, &v58);
            if ( v52 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(v53, 0LL, 0, v52, 0xC0u);
          }
          else
          {
            *(_DWORD *)(*((_QWORD *)this + 11) + 4 * v50) = v47;
            *((_DWORD *)this + 28) = v48;
          }
          v47 = v58;
        }
        v41 = *((_DWORD *)this + 12);
        v58 = ++v47;
        v49 = v47;
      }
      while ( v47 < v41 );
      goto LABEL_79;
    }
  }
  else
  {
LABEL_79:
    if ( v41 )
    {
      v54 = *(struct MilPoint2F **)v29;
      v55 = *(const struct MilPoint2F **)v29;
      dy = a5->dy;
      v62 = *(_OWORD *)&a5->m11;
      dx = a5->dx;
      v64 = dy;
      MILMatrix3x2::TransformPoints((MILMatrix3x2 *)&v62, v55, v54, 2 * v41);
    }
  }
  return 0LL;
}
