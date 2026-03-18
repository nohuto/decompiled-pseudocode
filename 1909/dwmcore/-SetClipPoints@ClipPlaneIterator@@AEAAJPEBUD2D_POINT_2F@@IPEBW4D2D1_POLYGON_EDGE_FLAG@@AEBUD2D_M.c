/*
 * XREFs of ?SetClipPoints@ClipPlaneIterator@@AEAAJPEBUD2D_POINT_2F@@IPEBW4D2D1_POLYGON_EDGE_FLAG@@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x18017976C
 * Callers:
 *     ?ClipToPolygon@ClipPlaneIterator@@QEAAJPEAVCPolygon@@AEBVCMILMatrix@@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@@Z @ 0x18017915C (-ClipToPolygon@ClipPlaneIterator@@QEAAJPEAVCPolygon@@AEBVCMILMatrix@@AEBV-$TMilRect_@HUtagRECT@@.c)
 * Callees:
 *     ?TransformPoints@MILMatrix3x2@@QEBAXPEBUMilPoint2F@@PEAU2@I@Z @ 0x18000B320 (-TransformPoints@MILMatrix3x2@@QEBAXPEBUMilPoint2F@@PEAU2@I@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18006AD4C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     ?RemoveAt@?$DynArray@ULineSegment@ClipPlaneIterator@@$0A@@@QEAAJI@Z @ 0x180179610 (-RemoveAt@-$DynArray@ULineSegment@ClipPlaneIterator@@$0A@@@QEAAJI@Z.c)
 *     ?RemoveAt@?$DynArray@W4D2D1_POLYGON_EDGE_FLAG@@$0A@@@QEAAJI@Z @ 0x180179694 (-RemoveAt@-$DynArray@W4D2D1_POLYGON_EDGE_FLAG@@$0A@@@QEAAJI@Z.c)
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
  const enum D2D1_POLYGON_EDGE_FLAG *v12; // r15
  __int64 v13; // r12
  __int64 v14; // rax
  FLOAT v15; // xmm0_4
  __int64 v16; // rcx
  signed int v17; // eax
  unsigned int v18; // eax
  unsigned int v19; // r8d
  signed int v20; // eax
  __int64 v21; // rcx
  unsigned int v22; // edx
  unsigned int v23; // edi
  unsigned int i; // r9d
  float *v25; // rax
  char *v26; // r15
  float *v27; // rcx
  float v28; // xmm3_4
  float v29; // xmm4_4
  unsigned int v30; // ecx
  float v31; // xmm2_4
  float v32; // xmm0_4
  unsigned int v33; // edi
  _BYTE *v34; // rcx
  __int64 v35; // rdx
  bool v36; // zf
  unsigned int v37; // eax
  unsigned int v38; // eax
  __int64 v39; // rdi
  unsigned int j; // esi
  __int64 v41; // rax
  _BYTE *v42; // rcx
  unsigned int v43; // edx
  unsigned int v44; // eax
  __int64 v45; // rcx
  unsigned int v46; // eax
  unsigned int v47; // r8d
  signed int v48; // eax
  __int64 v49; // rcx
  struct MilPoint2F *v50; // r8
  const struct MilPoint2F *v51; // rdx
  FLOAT dy; // xmm1_4
  unsigned int v54; // [rsp+30h] [rbp-40h] BYREF
  __int64 v55; // [rsp+38h] [rbp-38h]
  __int64 v56; // [rsp+40h] [rbp-30h]
  __int128 v57; // [rsp+48h] [rbp-28h] BYREF
  FLOAT dx; // [rsp+58h] [rbp-18h]
  FLOAT v59; // [rsp+5Ch] [rbp-14h]

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
  v54 = v11;
  v12 = a4;
  v13 = a3;
  while ( 1 )
  {
    v14 = *((unsigned int *)this + 12);
    v15 = v6->y;
    *(FLOAT *)&v55 = v6->x;
    v16 = (unsigned int)(v14 + 1);
    *((FLOAT *)&v55 + 1) = v15;
    *(_QWORD *)&v57 = __PAIR64__(LODWORD(y), LODWORD(x));
    *((_QWORD *)&v57 + 1) = __PAIR64__(LODWORD(v15), v55);
    if ( (unsigned int)v16 < (unsigned int)v14 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, 0x80070216, 0xB8u, 0LL);
    }
    else if ( (unsigned int)v16 > *((_DWORD *)this + 11) )
    {
      v17 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 24, 16, 1, &v57);
      if ( v17 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v17, 0xC3u, 0LL);
    }
    else
    {
      *(_OWORD *)(*((_QWORD *)this + 3) + 16 * v14) = v57;
      *((_DWORD *)this + 12) = v16;
    }
    if ( a4 )
    {
      v18 = *((_DWORD *)this + 20);
      v19 = v18 + 1;
      if ( v18 + 1 < v18 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, 0x80070216, 0xB8u, 0LL);
      }
      else if ( v19 > *((_DWORD *)this + 19) )
      {
        v20 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 56, 4, 1, &v54);
        if ( v20 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v20, 0xC3u, 0LL);
      }
      else
      {
        *(_DWORD *)(*((_QWORD *)this + 7) + 4LL * v18) = v54;
        *((_DWORD *)this + 20) = v19;
      }
      v54 = *(_DWORD *)v12;
    }
    ++v6;
    v12 = (const enum D2D1_POLYGON_EDGE_FLAG *)((char *)v12 + 4);
    v56 = v55;
    if ( !--v13 )
      break;
    y = *((FLOAT *)&v56 + 1);
    LODWORD(x) = v56;
  }
  v22 = *((_DWORD *)this + 12);
  v23 = 0;
  for ( i = v22; v23 < v22; i = v22 )
  {
    v25 = (float *)(*((_QWORD *)this + 3) + 16LL * v23);
    if ( (float)((float)((float)(v25[3] - v25[1]) * (float)(v25[3] - v25[1]))
               + (float)((float)(v25[2] - *v25) * (float)(v25[2] - *v25))) <= 1.0e-12 )
    {
      DynArray<ClipPlaneIterator::LineSegment,0>::RemoveAt((__int64)this + 24, v23);
      if ( a4 )
        DynArray<enum D2D1_POLYGON_EDGE_FLAG,0>::RemoveAt((__int64)this + 56, v23);
      --v23;
    }
    v22 = *((_DWORD *)this + 12);
    ++v23;
  }
  if ( v22 < 3 )
  {
    *((_DWORD *)this + 12) = 0;
    return 0LL;
  }
  v26 = (char *)this + 24;
  v27 = (float *)(*((_QWORD *)this + 3) + 16LL * (v22 - 1));
  v28 = v27[2] - *v27;
  v29 = v27[3] - v27[1];
  v30 = 0;
  do
  {
    v31 = (float)(v28
                * (float)(*(float *)(*(_QWORD *)v26 + 16LL * v30 + 12) - *(float *)(*(_QWORD *)v26 + 16LL * v30 + 4)))
        - (float)(v29 * (float)(*(float *)(*(_QWORD *)v26 + 16LL * v30 + 8) - *(float *)(*(_QWORD *)v26 + 16LL * v30)));
    if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v31) & _xmm) > 0.000001 )
      break;
    i = *((_DWORD *)this + 12);
    ++v30;
  }
  while ( v30 < i );
  if ( v31 <= 0.0 )
    v32 = *(float *)&FLOAT_1_0;
  else
    v32 = FLOAT_N1_0;
  v33 = 0;
  *((float *)this + 4) = v32;
  if ( a4 )
  {
    i = *((_DWORD *)this + 12);
    if ( i )
    {
      v34 = (_BYTE *)*((_QWORD *)this + 7);
      v35 = i;
      do
      {
        v36 = (*v34 & 1) == 0;
        v37 = v33 + 1;
        v34 += 4;
        if ( v36 )
          v37 = v33;
        v33 = v37;
        --v35;
      }
      while ( v35 );
    }
  }
  v38 = i - v33;
  if ( !v33 )
    goto LABEL_72;
  if ( !v38 )
  {
    *((_DWORD *)this + 12) = 0;
    *(_BYTE *)this = 1;
    *((_DWORD *)this + 20) = 0;
    i = *((_DWORD *)this + 12);
LABEL_72:
    if ( i )
    {
      v50 = *(struct MilPoint2F **)v26;
      v51 = *(const struct MilPoint2F **)v26;
      dy = a5->dy;
      v57 = *(_OWORD *)&a5->m11;
      dx = a5->dx;
      v59 = dy;
      MILMatrix3x2::TransformPoints((MILMatrix3x2 *)&v57, v51, v50, 2 * i);
    }
    return 0LL;
  }
  if ( v38 <= 4 )
  {
    v39 = 0LL;
    if ( !i )
      return 0LL;
    do
    {
      if ( (*(_BYTE *)(*((_QWORD *)this + 7) + 4 * v39) & 1) != 0 )
      {
        DynArray<ClipPlaneIterator::LineSegment,0>::RemoveAt((__int64)this + 24, v39);
        DynArray<enum D2D1_POLYGON_EDGE_FLAG,0>::RemoveAt((__int64)this + 56, v39);
        LODWORD(v39) = v39 - 1;
      }
      i = *((_DWORD *)this + 12);
      v39 = (unsigned int)(v39 + 1);
    }
    while ( (unsigned int)v39 < i );
    goto LABEL_72;
  }
  if ( v33 >= 2 )
  {
    for ( j = 1; j < i; ++j )
    {
      v41 = *((_QWORD *)this + 7);
      if ( (*(_BYTE *)(v41 + 4LL * j) & 1) != 0 && (*(_BYTE *)(v41 + 4LL * (j - 1)) & 1) != 0 )
      {
        *(_QWORD *)(*(_QWORD *)v26 + 16LL * (j - 1) + 8) = *(_QWORD *)(*(_QWORD *)v26 + 16LL * j + 8);
        DynArray<ClipPlaneIterator::LineSegment,0>::RemoveAt((__int64)this + 24, j);
        DynArray<enum D2D1_POLYGON_EDGE_FLAG,0>::RemoveAt((__int64)this + 56, j--);
        --v33;
      }
      i = *((_DWORD *)this + 12);
    }
    if ( v33 >= 2 )
    {
      v42 = (_BYTE *)*((_QWORD *)this + 7);
      if ( (*v42 & 1) != 0 && (v42[4 * (*((_DWORD *)this + 20) - 1)] & 1) != 0 )
      {
        *(_QWORD *)(*(_QWORD *)v26 + 8LL) = *(_QWORD *)(*((_QWORD *)this + 3)
                                                      + 16LL * (unsigned int)--*((_DWORD *)this + 12));
        --*((_DWORD *)this + 20);
        i = *((_DWORD *)this + 12);
      }
    }
  }
  v43 = 0;
  v54 = 0;
  if ( i )
  {
    v44 = 0;
    do
    {
      v45 = v44;
      if ( (*(_BYTE *)(*((_QWORD *)this + 7) + 4LL * v44) & 1) != 0 )
      {
        v46 = *((_DWORD *)this + 28);
        v47 = v46 + 1;
        if ( v46 + 1 < v46 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v45, 0LL, 0, 0x80070216, 0xB8u, 0LL);
        }
        else if ( v47 > *((_DWORD *)this + 27) )
        {
          v48 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 88, 4, 1, &v54);
          if ( v48 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v49, 0LL, 0, v48, 0xC3u, 0LL);
        }
        else
        {
          *(_DWORD *)(*((_QWORD *)this + 11) + 4LL * v46) = v43;
          *((_DWORD *)this + 28) = v47;
        }
        v43 = v54;
      }
      i = *((_DWORD *)this + 12);
      v54 = ++v43;
      v44 = v43;
    }
    while ( v43 < i );
    goto LABEL_72;
  }
  return 0LL;
}
