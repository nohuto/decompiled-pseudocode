/*
 * XREFs of ?GenerateTriangles@Mesh@@AEBAJPEAGHPEAH@Z @ 0x1800BAE9C
 * Callers:
 *     ?GenerateGeometry@Mesh@@QEAAJ_N0AEBV?$StridedSpan@UVertexXYW_ColorDW@@@@AEBV?$StridedSpan@UVertexAAFixupBase@@@@PEAHGPEAG3@Z @ 0x18003B8B8 (-GenerateGeometry@Mesh@@QEAAJ_N0AEBV-$StridedSpan@UVertexXYW_ColorDW@@@@AEBV-$StridedSpan@UVerte.c)
 *     ?CreateRectangleMesh@Mesh@@QEAAJAEBUContentInfo@1@AEBUD2D_RECT_F@@K@Z @ 0x1800BA810 (-CreateRectangleMesh@Mesh@@QEAAJAEBUContentInfo@1@AEBUD2D_RECT_F@@K@Z.c)
 * Callees:
 *     ?GetNext@PolygonPathIterator@Mesh@@QEAAPEAUMeshVertex@2@XZ @ 0x1800BB130 (-GetNext@PolygonPathIterator@Mesh@@QEAAPEAUMeshVertex@2@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x180152C70 (-terminate@details@gsl@@YAXXZ.c)
 *     ?IsCycle@PolygonPathIterator@Mesh@@CA_NPEBUMeshEdge@2@0@Z @ 0x180185878 (-IsCycle@PolygonPathIterator@Mesh@@CA_NPEBUMeshEdge@2@0@Z.c)
 */

__int64 __fastcall Mesh::GenerateTriangles(Mesh *this, unsigned __int16 *a2, int a3, int *a4)
{
  __int64 v4; // rax
  unsigned int v5; // edi
  Mesh *v6; // r9
  __int64 v7; // r12
  int v8; // r8d
  __int64 v9; // rdx
  gsl::details *v10; // rcx
  __int64 v11; // r15
  __int64 v13; // rcx
  __int64 v14; // rdx
  _QWORD *v15; // rax
  _QWORD *v16; // r8
  bool v17; // zf
  struct Mesh::MeshVertex *v18; // r13
  int v19; // r14d
  _BYTE *v20; // rsi
  struct Mesh::MeshVertex *v21; // r13
  __int64 v22; // rcx
  struct Mesh::MeshVertex *v23; // rbx
  unsigned __int16 *v24; // r10
  unsigned __int16 *v25; // r8
  int v26; // r9d
  unsigned __int16 v27; // ax
  const struct Mesh::MeshEdge *v28; // r10
  __int64 v29; // rax
  float v30; // xmm1_4
  __int64 *v31; // rbx
  int i; // esi
  float v33; // xmm0_4
  struct Mesh::MeshVertex *v34; // rax
  const struct Mesh::MeshEdge *v35; // r11
  const struct Mesh::MeshEdge *m; // r9
  __int64 v37; // rax
  __int64 v38; // r9
  __int64 k; // rdx
  _QWORD *v40; // rax
  __int64 j; // rdx
  _QWORD *v42; // rax
  int v43; // [rsp+38h] [rbp-59h]
  int v44; // [rsp+3Ch] [rbp-55h]
  struct Mesh::MeshVertex *Next; // [rsp+40h] [rbp-51h]
  unsigned __int16 *v46; // [rsp+48h] [rbp-49h]
  __int64 v47; // [rsp+50h] [rbp-41h]
  gsl::details *v48; // [rsp+58h] [rbp-39h]
  _BYTE v49[8]; // [rsp+68h] [rbp-29h] BYREF
  __int64 v50; // [rsp+70h] [rbp-21h]
  __int64 v51; // [rsp+78h] [rbp-19h]
  __int64 v52; // [rsp+80h] [rbp-11h] BYREF
  char v53; // [rsp+88h] [rbp-9h]
  __int64 v54; // [rsp+90h] [rbp-1h]
  __int64 v55; // [rsp+98h] [rbp+7h]
  __int64 v56; // [rsp+A0h] [rbp+Fh]

  v4 = *((_QWORD *)this + 2);
  v5 = 0;
  v6 = this;
  v43 = 0;
  LODWORD(v7) = 0;
  v44 = 0;
  v8 = 0;
  if ( *(int *)(v4 + 56) > 0 )
  {
    v9 = 0LL;
    v10 = 0LL;
    v47 = 0LL;
    v48 = 0LL;
    while ( 1 )
    {
      if ( (__int64)v10 < 0 || v9 >= *(_QWORD *)(v4 + 40) )
      {
        gsl::details::terminate(v10);
        JUMPOUT(0x1800BB129LL);
      }
      _mm_lfence();
      v11 = *(_QWORD *)((char *)v10 + *(_QWORD *)(v4 + 48) + 48);
      if ( v11 )
        break;
LABEL_9:
      v4 = *((_QWORD *)v6 + 2);
      ++v8;
      ++v9;
      v44 = v8;
      v10 = (gsl::details *)((char *)v10 + 88);
      v47 = v9;
      v48 = v10;
      if ( v8 >= *(_DWORD *)(v4 + 56) )
        goto LABEL_10;
    }
    while ( 1 )
    {
      if ( (*(_DWORD *)(v11 + 16) & 0x100) != 0 )
      {
        v13 = *(_QWORD *)(v11 + 80);
        v14 = **(_QWORD **)(v11 + 64);
        v15 = *(_QWORD **)(v14 + 32);
        v16 = (_QWORD *)v15[8];
        if ( (!v16 || v14 != *v15 || *v16 != *(_QWORD *)v11) && v14 != **(_QWORD **)(v13 + 64) )
          break;
      }
LABEL_7:
      v11 = *(_QWORD *)(v11 + 64);
      if ( !v11 )
      {
        v10 = v48;
        v9 = v47;
        v8 = v44;
        goto LABEL_9;
      }
    }
    v17 = (*((_BYTE *)v6 + 76) & 8) == 0;
    v18 = 0LL;
    v49[0] = 0;
    v50 = v11;
    v51 = 0LL;
    v52 = v11;
    v53 = 1;
    v54 = v13;
    v55 = 0LL;
    v56 = v13;
    Next = 0LL;
    if ( v17 )
    {
      v52 = v11;
      Next = Mesh::PolygonPathIterator::GetNext((Mesh::PolygonPathIterator *)v49);
    }
    else
    {
      v30 = 0.0;
      v31 = &v52;
      for ( i = 0; i < 2; ++i )
      {
        *v31 = *(v31 - 2);
        if ( i == 1 )
          *(v31 - 1) = v51;
        while ( 1 )
        {
          v34 = Mesh::PolygonPathIterator::GetNext((Mesh::PolygonPathIterator *)&v49[32 * i]);
          if ( !v34 )
            break;
          v33 = *(float *)(*((_QWORD *)v34 + 1) + 20LL);
          if ( !v18 || v33 > v30 )
          {
            v18 = v34;
            Next = v34;
            v30 = *(float *)(*((_QWORD *)v34 + 1) + 20LL);
            if ( v33 == 1.0 )
              goto LABEL_18;
          }
        }
        if ( v30 == 1.0 )
          break;
        v31 += 4;
      }
    }
LABEL_18:
    v19 = 0;
    v7 = (int)v7;
    v20 = v49;
    while ( 1 )
    {
      *((_QWORD *)v20 + 3) = *((_QWORD *)v20 + 1);
      if ( v19 == 1 )
        *((_QWORD *)v20 + 2) = v51;
      v21 = Mesh::PolygonPathIterator::GetNext((Mesh::PolygonPathIterator *)&v49[32 * v19]);
      v23 = Mesh::PolygonPathIterator::GetNext((Mesh::PolygonPathIterator *)&v49[32 * v19]);
      if ( v23 )
        break;
LABEL_36:
      ++v19;
      v20 += 32;
      if ( v19 >= 2 )
      {
        LODWORD(v7) = v43;
        v6 = this;
        goto LABEL_7;
      }
    }
    v24 = a2;
    v25 = &a2[v7 + 1];
    v46 = v25;
    while ( 1 )
    {
      if ( v21 != Next && v23 != Next )
      {
        if ( v7 >= a3 )
        {
          v5 = -2147024882;
          MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, -2147024882, 0xBB8u);
          return v5;
        }
        v22 = 2 * v7;
        v26 = v43 + 3;
        v24[v7] = *(_WORD *)Next;
        v7 += 3LL;
        v43 += 3;
        v46 = v25 + 3;
        if ( *v20 )
        {
          *v25 = *(_WORD *)v23;
          v27 = *(_WORD *)v21;
          v43 = v26;
        }
        else
        {
          *v25 = *(_WORD *)v21;
          v27 = *(_WORD *)v23;
        }
        *(unsigned __int16 *)((char *)v24 + v22 + 4) = v27;
      }
      v28 = (const struct Mesh::MeshEdge *)*((_QWORD *)v20 + 3);
      v21 = v23;
      v23 = 0LL;
      if ( v28 )
      {
        v29 = *(_QWORD *)v28;
        v22 = *((_QWORD *)v20 + 2);
        if ( *(_QWORD *)v28 == v22 )
        {
          if ( *v20 )
            v23 = (struct Mesh::MeshVertex *)*((_QWORD *)v28 + 3);
          else
            v23 = (struct Mesh::MeshVertex *)*((_QWORD *)v28 + 5);
        }
        else if ( *v20 )
        {
          v23 = (struct Mesh::MeshVertex *)*((_QWORD *)v28 + 4);
        }
        else
        {
          v23 = (struct Mesh::MeshVertex *)*((_QWORD *)v28 + 6);
        }
        if ( v29 != v22 )
        {
          v35 = (const struct Mesh::MeshEdge *)*((_QWORD *)v28 + 8);
          if ( v35 )
          {
            m = (const struct Mesh::MeshEdge *)*((_QWORD *)v28 + 8);
            if ( !v22 || (v37 = *(_QWORD *)v35, *(_QWORD *)v35 == v22) )
            {
              v38 = *((_QWORD *)v20 + 3);
              if ( *v20 )
              {
                for ( j = *((_QWORD *)v28 + 10); j; j = *(_QWORD *)(j + 80) )
                {
                  v42 = *(_QWORD **)(j + 64);
                  if ( !v42 || *(_QWORD *)v35 != *v42 )
                    break;
                  v38 = j;
                }
              }
              else
              {
                for ( k = *((_QWORD *)v28 + 9); k; k = *(_QWORD *)(k + 72) )
                {
                  v40 = *(_QWORD **)(k + 64);
                  if ( !v40 || *(_QWORD *)v35 != *v40 )
                    break;
                  v38 = k;
                }
              }
              m = *(const struct Mesh::MeshEdge **)(v38 + 64);
              v37 = *(_QWORD *)m;
              if ( *(_QWORD *)m == v22 )
                goto LABEL_87;
            }
            if ( *v20 )
            {
              if ( v22 || !*((_QWORD *)m + 10) )
              {
                for ( m = *(const struct Mesh::MeshEdge **)(v37 + 24);
                      m != v35 && Mesh::PolygonPathIterator::IsCycle(m, v28);
                      m = (const struct Mesh::MeshEdge *)*((_QWORD *)m + 10) )
                {
                  ;
                }
                goto LABEL_87;
              }
            }
            else if ( v22 || !*((_QWORD *)m + 9) )
            {
              for ( m = *(const struct Mesh::MeshEdge **)(v37 + 32);
                    m != v35 && Mesh::PolygonPathIterator::IsCycle(v28, m);
                    m = (const struct Mesh::MeshEdge *)*((_QWORD *)m + 9) )
              {
                ;
              }
              goto LABEL_87;
            }
            *((_QWORD *)v20 + 2) = v37;
LABEL_87:
            *((_QWORD *)v20 + 3) = m;
            goto LABEL_35;
          }
          *((_QWORD *)v20 + 2) = v29;
        }
        *((_QWORD *)v20 + 3) = 0LL;
      }
LABEL_35:
      v25 = v46;
      v24 = a2;
      if ( !v23 )
        goto LABEL_36;
    }
  }
LABEL_10:
  *a4 = v7;
  return v5;
}
