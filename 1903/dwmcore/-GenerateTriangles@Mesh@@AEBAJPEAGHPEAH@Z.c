/*
 * XREFs of ?GenerateTriangles@Mesh@@AEBAJPEAGHPEAH@Z @ 0x1800B6CC8
 * Callers:
 *     ?CreateRectangleMesh@Mesh@@QEAAJAEBUContentInfo@1@AEBUD2D_RECT_F@@K@Z @ 0x180057590 (-CreateRectangleMesh@Mesh@@QEAAJAEBUContentInfo@1@AEBUD2D_RECT_F@@K@Z.c)
 *     ?GenerateGeometry@Mesh@@QEAAJ_N0AEBV?$StridedSpan@UVertexXYW_ColorDW@@@@AEBV?$StridedSpan@UVertexAAFixupBase@@@@PEAHGPEAG3@Z @ 0x18005C5AC (-GenerateGeometry@Mesh@@QEAAJ_N0AEBV-$StridedSpan@UVertexXYW_ColorDW@@@@AEBV-$StridedSpan@UVerte.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetNext@PolygonPathIterator@Mesh@@QEAAPEAUMeshVertex@2@XZ @ 0x1800B6EF4 (-GetNext@PolygonPathIterator@Mesh@@QEAAPEAUMeshVertex@2@XZ.c)
 *     ?IsCycle@PolygonPathIterator@Mesh@@CA_NPEBUMeshEdge@2@0@Z @ 0x1800B7080 (-IsCycle@PolygonPathIterator@Mesh@@CA_NPEBUMeshEdge@2@0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Mesh::GenerateTriangles(Mesh *this, unsigned __int16 *a2, int a3, int *a4)
{
  Mesh *v4; // r11
  int v5; // r15d
  int v6; // ecx
  __int64 v7; // rax
  unsigned __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rbx
  unsigned int v11; // ebx
  __int64 *v13; // rax
  __int64 v14; // r9
  __int64 v15; // r10
  __int64 v16; // rdx
  struct Mesh::MeshVertex *Next; // r13
  bool v18; // zf
  int v19; // esi
  __int64 v20; // r14
  __int64 *v21; // rdi
  Mesh::PolygonPathIterator *v22; // r12
  struct Mesh::MeshVertex *v23; // r15
  struct Mesh::MeshVertex *v24; // rcx
  unsigned __int16 *v25; // r10
  unsigned __int16 *v26; // r12
  __int64 v27; // rdx
  int v28; // r9d
  unsigned __int16 v29; // ax
  struct Mesh::MeshVertex *v30; // rax
  float v31; // xmm1_4
  __int64 *v32; // rdi
  int i; // esi
  __int64 v34; // rcx
  float v35; // xmm0_4
  struct Mesh::MeshVertex *v36; // rax
  int v37; // [rsp+38h] [rbp-49h]
  int v38; // [rsp+3Ch] [rbp-45h]
  unsigned __int64 v39; // [rsp+40h] [rbp-41h]
  __int64 v40; // [rsp+48h] [rbp-39h]
  _BYTE v41[8]; // [rsp+58h] [rbp-29h] BYREF
  __int64 v42; // [rsp+60h] [rbp-21h]
  __int64 v43; // [rsp+68h] [rbp-19h]
  __int64 v44; // [rsp+70h] [rbp-11h] BYREF
  char v45; // [rsp+78h] [rbp-9h]
  __int64 v46; // [rsp+80h] [rbp-1h]
  __int64 v47; // [rsp+88h] [rbp+7h]
  __int64 v48; // [rsp+90h] [rbp+Fh]

  v4 = this;
  v5 = 0;
  v6 = 0;
  v37 = 0;
  v38 = 0;
  v7 = *((_QWORD *)v4 + 2);
  if ( *(int *)(v7 + 56) > 0 )
  {
    v8 = 0LL;
    v9 = 0LL;
    v39 = 0LL;
    v40 = 0LL;
    do
    {
      if ( v8 >= *(_QWORD *)(v7 + 40) )
      {
        ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
        __debugbreak();
      }
      v10 = *(_QWORD *)(*(_QWORD *)(v7 + 48) + v9 + 48);
      if ( v10 )
      {
        do
        {
          if ( (*(_DWORD *)(v10 + 16) & 0x100) != 0 )
          {
            v13 = *(__int64 **)(v10 + 64);
            v14 = *(_QWORD *)(v10 + 80);
            v15 = *v13;
            v16 = *(_QWORD *)(*v13 + 32);
            if ( (!*(_QWORD *)(v16 + 64)
               || !Mesh::PolygonPathIterator::IsCycle(
                     (const struct Mesh::MeshEdge *)v10,
                     (const struct Mesh::MeshEdge *)v16))
              && v15 != **(_QWORD **)(v14 + 64) )
            {
              v43 = 0LL;
              Next = 0LL;
              v47 = 0LL;
              v18 = (*((_BYTE *)v4 + 76) & 8) == 0;
              v41[0] = 0;
              v42 = v10;
              v44 = v10;
              v45 = 1;
              v46 = v14;
              v48 = v14;
              if ( v18 )
              {
                Next = Mesh::PolygonPathIterator::GetNext((Mesh::PolygonPathIterator *)v41);
              }
              else
              {
                v31 = 0.0;
                v32 = &v44;
                for ( i = 0; i < 2; ++i )
                {
                  *v32 = *(v32 - 2);
                  if ( i == 1 )
                    *(v32 - 1) = v43;
                  while ( 1 )
                  {
                    v36 = Mesh::PolygonPathIterator::GetNext((Mesh::PolygonPathIterator *)&v41[32 * i]);
                    if ( !v36 )
                      break;
                    v34 = *((_QWORD *)v36 + 1);
                    v35 = *(float *)(v34 + 20);
                    if ( !Next || v35 > v31 )
                    {
                      Next = v36;
                      v31 = *(float *)(v34 + 20);
                      if ( v35 == 1.0 )
                        goto LABEL_16;
                    }
                  }
                  if ( v31 == 1.0 )
                    break;
                  v32 += 4;
                }
              }
LABEL_16:
              v19 = 0;
              v20 = v5;
              v21 = &v44;
              do
              {
                *v21 = *(v21 - 2);
                if ( v19 == 1 )
                  *(v21 - 1) = v43;
                v22 = (Mesh::PolygonPathIterator *)&v41[32 * v19];
                v23 = Mesh::PolygonPathIterator::GetNext(v22);
                v24 = Mesh::PolygonPathIterator::GetNext(v22);
                if ( v24 )
                {
                  v25 = a2;
                  v26 = &a2[v20 + 1];
                  do
                  {
                    if ( v23 != Next && v24 != Next )
                    {
                      if ( v20 >= a3 )
                      {
                        v11 = -2147024882;
                        MilInstrumentationCheckHR_MaybeFailFast((__int64)v24, 0LL, 0, 0x8007000E, 0xBB8u, 0LL);
                        return v11;
                      }
                      v27 = v20;
                      v28 = v37 + 3;
                      v25[v20] = *(_WORD *)Next;
                      v20 += 3LL;
                      v37 += 3;
                      if ( *((_BYTE *)v21 - 24) )
                      {
                        *v26 = *(_WORD *)v24;
                        v29 = *(_WORD *)v23;
                        v37 = v28;
                      }
                      else
                      {
                        *v26 = *(_WORD *)v23;
                        v29 = *(_WORD *)v24;
                      }
                      v26 += 3;
                      v25[v27 + 2] = v29;
                    }
                    v23 = v24;
                    v30 = Mesh::PolygonPathIterator::GetNext((Mesh::PolygonPathIterator *)&v41[32 * v19]);
                    v25 = a2;
                    v24 = v30;
                  }
                  while ( v30 );
                }
                ++v19;
                v21 += 4;
              }
              while ( v19 < 2 );
              v5 = v37;
              v4 = this;
            }
          }
          v10 = *(_QWORD *)(v10 + 64);
        }
        while ( v10 );
        v6 = v38;
        v8 = v39;
        v9 = v40;
      }
      v7 = *((_QWORD *)v4 + 2);
      ++v6;
      ++v8;
      v38 = v6;
      v9 += 88LL;
      v39 = v8;
      v40 = v9;
    }
    while ( v6 < *(_DWORD *)(v7 + 56) );
  }
  v11 = 0;
  *a4 = v5;
  return v11;
}
