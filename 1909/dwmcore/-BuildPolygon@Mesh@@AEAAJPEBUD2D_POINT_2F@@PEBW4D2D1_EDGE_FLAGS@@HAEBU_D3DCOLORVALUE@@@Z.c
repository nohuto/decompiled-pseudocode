/*
 * XREFs of ?BuildPolygon@Mesh@@AEAAJPEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@HAEBU_D3DCOLORVALUE@@@Z @ 0x1801B7A4C
 * Callers:
 *     ?CreatePolygonMesh@Mesh@@QEAAJAEBUContentInfo@1@PEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@H@Z @ 0x1801B84D4 (-CreatePolygonMesh@Mesh@@QEAAJAEBUContentInfo@1@PEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@H@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$ComputeAntialiasBorderFlags@$02$00$01@Mesh@@CAKK@Z @ 0x1800CAF8C (--$ComputeAntialiasBorderFlags@$02$00$01@Mesh@@CAKK@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     sqrtf_0 @ 0x1800F01DB (sqrtf_0.c)
 *     ?clear_region@?$vector_facade@W4D2D1_EDGE_FLAGS@@V?$buffer_impl@W4D2D1_EDGE_FLAGS@@$07$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1801AE258 (-clear_region@-$vector_facade@W4D2D1_EDGE_FLAGS@@V-$buffer_impl@W4D2D1_EDGE_FLAGS@@$07$00Vlibera.c)
 *     ?clear_region@?$vector_facade@UD2D_VECTOR_2F@@V?$buffer_impl@UD2D_VECTOR_2F@@$07$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1801AE4A4 (-clear_region@-$vector_facade@UD2D_VECTOR_2F@@V-$buffer_impl@UD2D_VECTOR_2F@@$07$00Vliberal_expa.c)
 *     ?AddPolygon@MeshGraph@Mesh@@QEAAJPEAUMeshEdge@2@@Z @ 0x1801B78F8 (-AddPolygon@MeshGraph@Mesh@@QEAAJPEAUMeshEdge@2@@Z.c)
 *     ?AllocateEdge@MeshGraph@Mesh@@QEAAJHPEAPEAUMeshEdge@2@@Z @ 0x1801B7920 (-AllocateEdge@MeshGraph@Mesh@@QEAAJHPEAPEAUMeshEdge@2@@Z.c)
 *     ?AllocateLine@MeshGraph@Mesh@@QEAAJHPEAPEAUMeshLine@2@@Z @ 0x1801B7978 (-AllocateLine@MeshGraph@Mesh@@QEAAJHPEAPEAUMeshLine@2@@Z.c)
 *     ?AllocateVertex@Mesh@@AEAAJHPEAH@Z @ 0x1801B79D0 (-AllocateVertex@Mesh@@AEAAJHPEAH@Z.c)
 *     ?AllocateVertex@MeshGraph@Mesh@@QEAAJHPEAPEAUMeshVertex@2@@Z @ 0x1801B79F4 (-AllocateVertex@MeshGraph@Mesh@@QEAAJHPEAPEAUMeshVertex@2@@Z.c)
 *     ?ComputeNormalizedLine@MeshGraph@Mesh@@SA?AVLine2d@2@AEBUD2D_VECTOR_2F@@0@Z @ 0x1801B834C (-ComputeNormalizedLine@MeshGraph@Mesh@@SA-AVLine2d@2@AEBUD2D_VECTOR_2F@@0@Z.c)
 *     ?ComputeRadialIndex@MeshGraph@Mesh@@SAMAEBVLine2d@2@@Z @ 0x1801B8468 (-ComputeRadialIndex@MeshGraph@Mesh@@SAMAEBVLine2d@2@@Z.c)
 *     ?InsertEdge@MeshEdgeList@Mesh@@QEAAXPEAUMeshEdge@2@@Z @ 0x1801B8888 (-InsertEdge@MeshEdgeList@Mesh@@QEAAXPEAUMeshEdge@2@@Z.c)
 *     ?reserve_region@?$vector_facade@UD2D_VECTOR_2F@@V?$buffer_impl@UD2D_VECTOR_2F@@$07$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUD2D_VECTOR_2F@@_K0@Z @ 0x1801B8B68 (-reserve_region@-$vector_facade@UD2D_VECTOR_2F@@V-$buffer_impl@UD2D_VECTOR_2F@@$07$00Vliberal_ex.c)
 *     ?reserve_region@?$vector_facade@W4D2D1_EDGE_FLAGS@@V?$buffer_impl@W4D2D1_EDGE_FLAGS@@$07$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAW4D2D1_EDGE_FLAGS@@_K0@Z @ 0x1801B8CA8 (-reserve_region@-$vector_facade@W4D2D1_EDGE_FLAGS@@V-$buffer_impl@W4D2D1_EDGE_FLAGS@@$07$00Vlibe.c)
 */

__int64 __fastcall Mesh::BuildPolygon(
        Mesh *this,
        struct D2D_POINT_2F *a2,
        const enum D2D1_EDGE_FLAGS *a3,
        int a4,
        const struct _D3DCOLORVALUE *a5)
{
  _BYTE *v5; // r15
  _BYTE *v6; // rsi
  int v7; // r8d
  __int64 v8; // r14
  __int64 v9; // rax
  int v12; // r12d
  __int64 v13; // rcx
  int v14; // ebx
  float x; // xmm10_4
  float y; // xmm11_4
  float v17; // xmm6_4
  float v18; // xmm9_4
  float v19; // xmm7_4
  float v20; // xmm8_4
  float v21; // xmm0_4
  unsigned __int64 v22; // rsi
  unsigned int v23; // ebx
  float v24; // xmm10_4
  float v25; // xmm11_4
  float *v26; // rax
  _DWORD *v27; // rax
  bool v28; // sf
  signed int Vertex; // eax
  int v30; // edx
  __int64 v31; // rcx
  Mesh::MeshGraph *v32; // rcx
  signed int v33; // eax
  __int64 v34; // rcx
  Mesh::MeshGraph *v35; // rcx
  signed int v36; // eax
  __int64 v37; // rcx
  Mesh::MeshGraph *v38; // rcx
  signed int v39; // eax
  __int64 v40; // rcx
  _BYTE *v41; // rcx
  _BYTE *v42; // r9
  int v43; // r10d
  unsigned __int64 v44; // r8
  int v45; // r11d
  FLOAT v46; // xmm0_4
  FLOAT v47; // xmm1_4
  char *v48; // r8
  unsigned int v49; // r8d
  unsigned __int64 v50; // rcx
  _QWORD *v51; // r13
  char *v52; // rsi
  char *v53; // r14
  float *v54; // rbx
  float v55; // xmm7_4
  float v56; // xmm6_4
  __int64 v57; // rax
  __int64 v58; // rcx
  __int64 v59; // r15
  float *v60; // rax
  char *v61; // r15
  float v62; // xmm8_4
  float v63; // xmm9_4
  float v64; // xmm7_4
  char *v65; // r12
  float v66; // xmm6_4
  float v67; // xmm0_4
  float *v68; // rax
  float v69; // xmm1_4
  __int128 v70; // xmm0
  int v71; // eax
  __int64 v72; // rdx
  int v73; // eax
  __int64 v74; // rax
  __int64 v75; // rax
  signed int v76; // eax
  __int64 v77; // rcx
  __int64 v78; // rax
  __int64 v79; // rax
  __int64 v80; // rdx
  signed int v81; // eax
  __int64 v82; // rcx
  unsigned __int64 v83; // r8
  void *v84; // rcx
  bool v85; // zf
  __int64 v86; // rdx
  _BYTE *v87; // rcx
  unsigned __int64 v88; // r8
  int v90[2]; // [rsp+38h] [rbp-D0h] BYREF
  struct Mesh::MeshVertex *v91; // [rsp+40h] [rbp-C8h] BYREF
  struct Mesh::MeshLine *v92; // [rsp+48h] [rbp-C0h] BYREF
  struct Mesh::MeshEdge *v93; // [rsp+50h] [rbp-B8h] BYREF
  struct Mesh::MeshVertex *v94; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v95[3]; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v96; // [rsp+78h] [rbp-90h]
  char *v97; // [rsp+80h] [rbp-88h]
  __int64 v98; // [rsp+88h] [rbp-80h]
  unsigned __int64 v99; // [rsp+90h] [rbp-78h]
  _BYTE *v100; // [rsp+98h] [rbp-70h] BYREF
  _BYTE *v101; // [rsp+A0h] [rbp-68h]
  char *v102; // [rsp+A8h] [rbp-60h]
  _BYTE v103[64]; // [rsp+B0h] [rbp-58h] BYREF
  char v104; // [rsp+F0h] [rbp-18h] BYREF
  _BYTE *v105; // [rsp+F8h] [rbp-10h] BYREF
  _BYTE *v106; // [rsp+100h] [rbp-8h]
  __int64 *v107; // [rsp+108h] [rbp+0h]
  _BYTE v108[32]; // [rsp+110h] [rbp+8h] BYREF
  __int64 v109; // [rsp+130h] [rbp+28h] BYREF

  v102 = &v104;
  v5 = v103;
  v95[0] = a3;
  v105 = v108;
  v6 = v103;
  v93 = (struct Mesh::MeshEdge *)a2;
  v106 = v108;
  v7 = a4 - 1;
  v100 = v103;
  v8 = 0LL;
  v107 = &v109;
  v9 = -1LL;
  v101 = v103;
  v92 = (struct Mesh::MeshLine *)-1LL;
  v12 = 0;
  if ( a4 > 0 )
  {
    v13 = v7;
    v14 = a4;
    v91 = (struct Mesh::MeshVertex *)v7;
    *(_QWORD *)v90 = -1LL;
    do
    {
      if ( v14 < 3 )
        break;
      x = a2[v8].x;
      y = a2[v8].y;
      v94 = (struct Mesh::MeshVertex *)(v8 + 1);
      v17 = x - a2[v13].x;
      if ( v12 != v7 )
        v9 = v8 + 1;
      v18 = y - a2[v13].y;
      v19 = a2[v9].x - a2[v13].x;
      v20 = a2[v9].y - a2[v13].y;
      v21 = sqrtf_0((float)(v19 * v19) + (float)(v20 * v20));
      if ( v21 == 0.0
        || *(float *)(*((_QWORD *)this + 2) + 4LL) > (float)((float)(v17 * (float)(v20 * (float)(1.0 / v21)))
                                                           - (float)(v18 * (float)(v19 * (float)(1.0 / v21)))) )
      {
        v13 = (__int64)v91;
        --v14;
      }
      else
      {
        v24 = x - *((float *)this + 10);
        v25 = y - *((float *)this + 11);
        v26 = (float *)detail::vector_facade<D2D_VECTOR_2F,detail::buffer_impl<D2D_VECTOR_2F,8,1,detail::liberal_expansion_policy>>::reserve_region(
                         &v100,
                         (v6 - v5) >> 3);
        *v26 = v24;
        v26[1] = v25;
        v27 = (_DWORD *)detail::vector_facade<enum D2D1_EDGE_FLAGS,detail::buffer_impl<enum D2D1_EDGE_FLAGS,8,1,detail::liberal_expansion_policy>>::reserve_region(
                          &v105,
                          (v106 - v105) >> 2);
        v28 = (int)v92 < 0;
        *v27 = *(_DWORD *)(v95[0] + 4 * v8);
        v13 = v8;
        v6 = v101;
        v5 = v100;
        v91 = (struct Mesh::MeshVertex *)v8;
        if ( v28 )
        {
          v9 = v8;
          LODWORD(v92) = v12;
          *(_QWORD *)v90 = v8;
          goto LABEL_9;
        }
      }
      v9 = *(_QWORD *)v90;
LABEL_9:
      v8 = (__int64)v94;
      v7 = a4 - 1;
      a2 = (struct D2D_POINT_2F *)v93;
      ++v12;
    }
    while ( v12 < a4 );
  }
  v22 = (v6 - v5) >> 3;
  if ( v22 < 3 )
  {
LABEL_11:
    v23 = 1;
    goto LABEL_47;
  }
  Vertex = Mesh::AllocateVertex(this, v22, v90);
  v23 = Vertex;
  if ( Vertex < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v31, 0LL, 0, Vertex, 0x3C5u, 0LL);
  }
  else
  {
    v32 = (Mesh::MeshGraph *)*((_QWORD *)this + 2);
    v91 = 0LL;
    v33 = Mesh::MeshGraph::AllocateVertex(v32, v30, &v91);
    v23 = v33;
    if ( v33 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v34, 0LL, 0, v33, 0x3C8u, 0LL);
    }
    else
    {
      v35 = (Mesh::MeshGraph *)*((_QWORD *)this + 2);
      v92 = 0LL;
      v36 = Mesh::MeshGraph::AllocateLine(v35, (v101 - v100) >> 3, &v92);
      v23 = v36;
      if ( v36 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v37, 0LL, 0, v36, 0x3CBu, 0LL);
      }
      else
      {
        v38 = (Mesh::MeshGraph *)*((_QWORD *)this + 2);
        v93 = 0LL;
        v39 = Mesh::MeshGraph::AllocateEdge(v38, 2 * (unsigned int)((v101 - v100) >> 3), &v93);
        v23 = v39;
        if ( v39 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v40, 0LL, 0, v39, 0x3CEu, 0LL);
        }
        else
        {
          v41 = v101;
          v42 = v100;
          if ( (v101 - v100) >> 3 )
          {
            v43 = v90[0];
            v44 = 0LL;
            v45 = v90[0];
            do
            {
              v46 = *(float *)&v42[8 * v44];
              v47 = *(float *)&v42[8 * v44 + 4];
              v48 = (char *)v91 + 64 * v44;
              a2 = (struct D2D_POINT_2F *)(*(_QWORD *)this + 24LL * v43);
              a2->x = v46;
              a2->y = v47;
              *(struct _D3DCOLORVALUE *)&a2[1].x = *(const struct _D3DCOLORVALUE *)&a5->r;
              *(_DWORD *)v48 = v43++;
              *((_QWORD *)v48 + 1) = a2;
              *((_QWORD *)v48 + 3) = 0LL;
              *((_QWORD *)v48 + 4) = 0LL;
              *((_DWORD *)v48 + 10) = 0;
              *((_QWORD *)v48 + 6) = 0LL;
              v41 = v101;
              v44 = (unsigned int)(v43 - v45);
              v42 = v100;
            }
            while ( v44 < (v101 - v100) >> 3 );
          }
          v49 = 0;
          v50 = (v41 - v42) >> 3;
          if ( v50 )
          {
            do
            {
              v90[0] = v49 + 1;
              v99 = v49 + 1;
              v51 = (_QWORD *)((char *)v91 + 64 * (v99 % v50));
              v52 = (char *)v92 + 88 * v49;
              v53 = (char *)v91 + 64 * (unsigned __int64)v49;
              v98 = v49;
              if ( v49 )
                v95[0] = (char *)v92 + 88 * v49 - 88;
              else
                v95[0] = (char *)v92 + 88 * v50 - 88;
              v54 = (float *)*((_QWORD *)v53 + 1);
              v55 = *v54;
              v56 = v54[1];
              v97 = (char *)v92 + 88 * (v99 % v50);
              v57 = 2 * v49;
              v58 = (unsigned int)(v57 + 1);
              v59 = 88 * v57;
              v60 = (float *)v51[1];
              v61 = (char *)v93 + v59;
              v62 = *v60;
              v63 = v60[1];
              v64 = v55 - *v60;
              v65 = (char *)v93 + 88 * v58;
              v66 = v56 - v63;
              v67 = sqrtf_0((float)(v64 * v64) + (float)(v66 * v66));
              v68 = (float *)*((_QWORD *)this + 2);
              *((float *)&v94 + 1) = (float)(1.0 / v67) * v66;
              *(float *)&v94 = (float)(1.0 / v67) * v64;
              v69 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v67) & _xmm);
              if ( *v68 > v69 )
                goto LABEL_11;
              Mesh::MeshGraph::ComputeNormalizedLine(&v95[1], v54, &v94);
              if ( (_BYTE)v96 )
              {
                *v54 = v62;
              }
              else
              {
                if ( !BYTE1(v96) )
                  goto LABEL_32;
                v54[1] = v63;
              }
              v95[1] = **((_QWORD **)v53 + 1);
LABEL_32:
              v70 = *(_OWORD *)&v95[1];
              *(_QWORD *)v52 = *((_QWORD *)this + 2);
              v71 = v96;
              *(_OWORD *)(v52 + 8) = v70;
              *((_DWORD *)v52 + 6) = v71;
              *((_DWORD *)v52 + 7) = 0;
              *((_QWORD *)v52 + 6) = 0LL;
              *((_QWORD *)v52 + 7) = 0LL;
              *((_DWORD *)v52 + 16) = 0;
              *(float *)&v70 = Mesh::MeshGraph::ComputeRadialIndex((const struct Mesh::Line2d *)(v52 + 8));
              *((_QWORD *)v52 + 9) = v95[0];
              *((_QWORD *)v52 + 10) = v97;
              *((_DWORD *)v52 + 8) = v70;
              *((_DWORD *)v61 + 4) = v72;
              *((_QWORD *)v61 + 9) = v72;
              *((_QWORD *)v61 + 10) = v72;
              *((_QWORD *)v61 + 7) = v72;
              *((_QWORD *)v61 + 8) = v72;
              *(_QWORD *)v61 = v53;
              *((_QWORD *)v61 + 1) = v52;
              *((_QWORD *)v61 + 4) = v53;
              *((_QWORD *)v61 + 3) = v53;
              *((_QWORD *)v61 + 6) = v53;
              *((_QWORD *)v61 + 5) = v53;
              Mesh::MeshEdgeList::InsertEdge((Mesh::MeshEdgeList *)(v53 + 16), (struct Mesh::MeshEdge *)v61);
              Mesh::MeshEdgeList::InsertEdge((Mesh::MeshEdgeList *)(v52 + 40), (struct Mesh::MeshEdge *)v61);
              *(_QWORD *)v65 = v51;
              *((_DWORD *)v65 + 4) = 0;
              *((_QWORD *)v65 + 9) = 0LL;
              *((_QWORD *)v65 + 10) = 0LL;
              *((_QWORD *)v65 + 7) = 0LL;
              *((_QWORD *)v65 + 8) = 0LL;
              *((_QWORD *)v65 + 1) = v52;
              *((_QWORD *)v65 + 4) = v51;
              *((_QWORD *)v65 + 3) = v51;
              *((_QWORD *)v65 + 6) = v51;
              *((_QWORD *)v65 + 5) = v51;
              Mesh::MeshEdgeList::InsertEdge((Mesh::MeshEdgeList *)(v51 + 2), (struct Mesh::MeshEdge *)v65);
              Mesh::MeshEdgeList::InsertEdge((Mesh::MeshEdgeList *)(v52 + 40), (struct Mesh::MeshEdge *)v65);
              v73 = *((_DWORD *)v52 + 7);
              if ( *((char **)v52 + 6) == v61 )
              {
                *((_DWORD *)v52 + 7) = v73 | 1;
                v74 = *((_QWORD *)this + 2);
                *((_DWORD *)v61 + 4) |= 4u;
                ++*(_DWORD *)(v74 + 100);
                v75 = *((_QWORD *)this + 2);
                *((_DWORD *)v65 + 4) |= 2u;
                ++*(_DWORD *)(v75 + 96);
                if ( (*(_BYTE *)(*((_QWORD *)v53 + 4) + 16LL) & 8) != 0 )
                {
                  v76 = Mesh::MeshGraph::AddPolygon(
                          *((Mesh::MeshGraph **)this + 2),
                          *((struct Mesh::MeshEdge **)v53 + 3));
                  v23 = v76;
                  if ( v76 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(v77, 0LL, 0, v76, 0x41Du, 0LL);
                    goto LABEL_47;
                  }
                }
              }
              else
              {
                *((_DWORD *)v52 + 7) = v73 | 2;
                v78 = *((_QWORD *)this + 2);
                *((_DWORD *)v65 + 4) |= 8u;
                ++*(_DWORD *)(v78 + 100);
                v79 = *((_QWORD *)this + 2);
                *((_DWORD *)v61 + 4) |= 2u;
                ++*(_DWORD *)(v79 + 96);
                v80 = v51[3];
                if ( (*(_BYTE *)(v80 + 16) & 4) != 0 )
                {
                  v81 = Mesh::MeshGraph::AddPolygon(*((Mesh::MeshGraph **)this + 2), (struct Mesh::MeshEdge *)v80);
                  v23 = v81;
                  if ( v81 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(v82, 0LL, 0, v81, 0x429u, 0LL);
                    goto LABEL_47;
                  }
                }
              }
              *((_DWORD *)v52 + 7) |= Mesh::ComputeAntialiasBorderFlags<3,1,2>(*(_DWORD *)&v105[4 * v98]);
              if ( (v52[28] & 0xC) != 0 )
                *((_BYTE *)this + 76) |= 0x40u;
              v49 = v90[0];
              v50 = (v101 - v100) >> 3;
            }
            while ( v99 < v50 );
          }
          v23 = 0;
          *(_QWORD *)(*((_QWORD *)this + 2) + 64LL) = v92;
        }
      }
    }
  }
LABEL_47:
  v83 = (v106 - v105) >> 2;
  if ( v83 )
    detail::vector_facade<enum D2D1_EDGE_FLAGS,detail::buffer_impl<enum D2D1_EDGE_FLAGS,8,1,detail::liberal_expansion_policy>>::clear_region(
      (__int64)&v105,
      (__int64)a2,
      v83);
  v84 = v105;
  v85 = v105 == v108;
  v105 = 0LL;
  if ( v85 )
    v84 = 0LL;
  operator delete(v84);
  v87 = v100;
  v88 = (v101 - v100) >> 3;
  if ( v88 )
  {
    detail::vector_facade<D2D_VECTOR_2F,detail::buffer_impl<D2D_VECTOR_2F,8,1,detail::liberal_expansion_policy>>::clear_region(
      (__int64)&v100,
      v86,
      v88);
    v87 = v100;
  }
  v100 = 0LL;
  if ( v87 == v103 )
    v87 = 0LL;
  operator delete(v87);
  return v23;
}
