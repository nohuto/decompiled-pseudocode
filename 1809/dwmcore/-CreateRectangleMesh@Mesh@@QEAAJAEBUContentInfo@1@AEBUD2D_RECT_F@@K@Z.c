/*
 * XREFs of ?CreateRectangleMesh@Mesh@@QEAAJAEBUContentInfo@1@AEBUD2D_RECT_F@@K@Z @ 0x1800BA810
 * Callers:
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBVMatrix3x2F@D2D1@@@Z @ 0x1800B7870 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 * Callees:
 *     ??_GMeshGraph@Mesh@@QEAAPEAXI@Z @ 0x18006019C (--_GMeshGraph@Mesh@@QEAAPEAXI@Z.c)
 *     ??1?$vector_facade@MV?$buffer_impl@M$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x1800BAE1C (--1-$vector_facade@MV-$buffer_impl@M$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QE.c)
 *     ?GenerateTriangles@Mesh@@AEBAJPEAGHPEAH@Z @ 0x1800BAE9C (-GenerateTriangles@Mesh@@AEBAJPEAGHPEAH@Z.c)
 *     ?CopyGraph@Mesh@@CAJAEBUMeshGraph@1@PEAU21@@Z @ 0x1800BB290 (-CopyGraph@Mesh@@CAJAEBUMeshGraph@1@PEAU21@@Z.c)
 *     ?PreallocateGraphObjects@Mesh@@AEAAJ_N@Z @ 0x1800BB35C (-PreallocateGraphObjects@Mesh@@AEAAJ_N@Z.c)
 *     ?Create@MeshGraph@Mesh@@SAJHHHHPEAPEAU12@@Z @ 0x1800BB4D0 (-Create@MeshGraph@Mesh@@SAJHHHHPEAPEAU12@@Z.c)
 *     ?BuildGrid@Mesh@@AEAAJHHH@Z @ 0x1800BB720 (-BuildGrid@Mesh@@AEAAJHHH@Z.c)
 *     ??$ComputeAntialiasBorderFlags@$0DAAAA@$0BAAAA@$0CAAAA@@Mesh@@CAKK@Z @ 0x1800BC3A0 (--$ComputeAntialiasBorderFlags@$0DAAAA@$0BAAAA@$0CAAAA@@Mesh@@CAKK@Z.c)
 *     ??$ComputeAntialiasBorderFlags@$0DAA@$0BAA@$0CAA@@Mesh@@CAKK@Z @ 0x1800BC3DC (--$ComputeAntialiasBorderFlags@$0DAA@$0BAA@$0CAA@@Mesh@@CAKK@Z.c)
 *     ??$ComputeAntialiasBorderFlags@$02$00$01@Mesh@@CAKK@Z @ 0x1800BC418 (--$ComputeAntialiasBorderFlags@$02$00$01@Mesh@@CAKK@Z.c)
 *     ??$ComputeAntialiasBorderFlags@$0DAAAAAA@$0BAAAAAA@$0CAAAAAA@@Mesh@@CAKK@Z @ 0x1800BC444 (--$ComputeAntialiasBorderFlags@$0DAAAAAA@$0BAAAAAA@$0CAAAAAA@@Mesh@@CAKK@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x180152C70 (-terminate@details@gsl@@YAXXZ.c)
 */

__int64 __fastcall Mesh::CreateRectangleMesh(
        Mesh *this,
        const struct Mesh::ContentInfo *a2,
        const struct D2D_RECT_F *a3,
        unsigned int a4)
{
  char v8; // r8
  int v9; // eax
  unsigned int v10; // ecx
  int v11; // esi
  __int64 v12; // rcx
  char v13; // r8
  float v14; // xmm2_4
  float v15; // xmm0_4
  float right; // xmm1_4
  float left; // xmm2_4
  char *v18; // r14
  char *v19; // r10
  char *v20; // rdx
  __int64 v21; // rax
  char *v22; // r9
  float bottom; // xmm1_4
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // r8
  unsigned __int64 v26; // r11
  unsigned int v27; // edi
  int v28; // eax
  unsigned int v29; // esi
  __int64 v30; // r11
  unsigned int v31; // r8d
  __int64 v32; // r9
  float v33; // xmm0_4
  float v34; // xmm1_4
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // r10
  char v39; // al
  __int64 v40; // r9
  __int64 v41; // rdi
  __int64 *v42; // r14
  int v43; // eax
  unsigned int v44; // ecx
  int *v45; // rcx
  Mesh::MeshGraph *v46; // rcx
  int v47; // eax
  gsl::details *v48; // rcx
  __int64 v49; // rax
  int Triangles; // eax
  __int64 v51; // rax
  Mesh::MeshGraph **v53; // [rsp+38h] [rbp-59h]
  struct Mesh::MeshGraph *v54; // [rsp+40h] [rbp-51h] BYREF
  char v55; // [rsp+48h] [rbp-49h]
  char *v56; // [rsp+50h] [rbp-41h] BYREF
  char *v57; // [rsp+58h] [rbp-39h]
  char **v58; // [rsp+60h] [rbp-31h]
  _DWORD v59[2]; // [rsp+68h] [rbp-29h] BYREF
  char *v60; // [rsp+70h] [rbp-21h] BYREF
  char *v61; // [rsp+78h] [rbp-19h]
  _QWORD *v62; // [rsp+80h] [rbp-11h]
  _DWORD v63[2]; // [rsp+88h] [rbp-9h] BYREF
  _QWORD v64[7]; // [rsp+90h] [rbp-1h] BYREF

  while ( 1 )
  {
    v8 = *((_BYTE *)this + 76);
    if ( (v8 & 4) != 0 )
    {
      v9 = Mesh::PreallocateGraphObjects(this, (v8 & 4) != 0);
      v11 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x36u);
        goto LABEL_7;
      }
      *((_BYTE *)this + 76) &= ~4u;
      v8 = *((_BYTE *)this + 76);
    }
    v12 = *((_QWORD *)this + 2);
    *((_QWORD *)this + 3) = 0LL;
    *((_DWORD *)this + 3) = 0;
    *((_QWORD *)this + 6) = 0LL;
    *((_DWORD *)this + 14) = 0;
    if ( v12 )
    {
      *(_QWORD *)(v12 + 64) = 0LL;
      *(_DWORD *)(v12 + 32) = 0;
      *(_DWORD *)(v12 + 56) = 0;
      *(_QWORD *)(v12 + 88) = 0LL;
      *(_QWORD *)(v12 + 96) = 0LL;
      *(_DWORD *)(v12 + 104) = 0;
      *(_DWORD *)(v12 + 128) = 0;
      v8 = *((_BYTE *)this + 76);
      v12 = *((_QWORD *)this + 2);
    }
    v13 = v8 & 4 | 1;
    v11 = 0;
    *((_BYTE *)this + 76) = v13;
    *((_BYTE *)this + 76) = v13 | (*((_BYTE *)a2 + 16) << 7);
    v14 = fmaxf(1.0, fmaxf(a3->right - a3->left, a3->bottom - a3->top)) * 0.0000099999997;
    *(float *)v12 = v14;
    *(float *)(v12 + 8) = v14 * v14;
    *(float *)(v12 + 4) = v14 + v14;
    v15 = (float)(a3->top + a3->bottom) * 0.5;
    *((float *)this + 10) = (float)(a3->left + a3->right) * 0.5;
    *((float *)this + 11) = v15;
LABEL_7:
    if ( v11 < 0 )
      break;
    right = a3->right;
    left = a3->left;
    v18 = (char *)v63;
    v62 = v64;
    v19 = (char *)v63;
    v60 = (char *)v63;
    v58 = &v60;
    v20 = (char *)v59;
    v21 = *((_QWORD *)this + 2);
    v22 = (char *)v59;
    v61 = (char *)v63;
    v56 = (char *)v59;
    v57 = (char *)v59;
    if ( (float)(right - left) > *(float *)(v21 + 4) )
    {
      v19 = (char *)v64;
      *(float *)v63 = left;
      v61 = (char *)v64;
      *(float *)&v63[1] = right;
    }
    bottom = a3->bottom;
    if ( (float)(bottom - a3->top) > *(float *)(v21 + 4) )
    {
      v22 = (char *)&v60;
      v59[0] = LODWORD(a3->top);
      v57 = (char *)&v60;
      *(float *)&v59[1] = bottom;
    }
    v24 = (v19 - (char *)v63) >> 2;
    if ( v24 < 2 || (v25 = (v22 - (char *)v59) >> 2, v25 < 2) )
    {
      v11 = 1;
      goto LABEL_55;
    }
    if ( v25 > 0x19 || v24 > 0x19 )
    {
      v11 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, -2147024809, 0xCEu);
      goto LABEL_55;
    }
    v26 = *((unsigned int *)this + 2);
    if ( v25 * v24 <= v26 )
    {
      v27 = *((_DWORD *)this + 3);
      v28 = v27 + v24 * v25;
      if ( v28 > (int)v26 )
      {
        v11 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, -2147024882, 0xE1u);
LABEL_55:
        detail::vector_facade<float,detail::buffer_impl<float,2,1,detail::liberal_expansion_policy>>::~vector_facade<float,detail::buffer_impl<float,2,1,detail::liberal_expansion_policy>>(&v56);
        detail::vector_facade<float,detail::buffer_impl<float,2,1,detail::liberal_expansion_policy>>::~vector_facade<float,detail::buffer_impl<float,2,1,detail::liberal_expansion_policy>>(&v60);
        goto LABEL_61;
      }
      v29 = 0;
      *((_DWORD *)this + 3) = v28;
      v30 = 0LL;
      do
      {
        v31 = 0;
        if ( v24 )
        {
          v32 = 0LL;
          do
          {
            ++v31;
            v33 = *(float *)&v20[4 * v30] - *((float *)this + 11);
            v34 = *(float *)&v18[4 * v32] - *((float *)this + 10);
            v35 = v27++;
            v32 = v31;
            v36 = 3 * v35;
            v37 = *(_QWORD *)this;
            *(float *)(v37 + 8 * v36) = v34;
            *(float *)(v37 + 8 * v36 + 4) = v33;
            *(_OWORD *)(v37 + 8 * v36 + 8) = *(_OWORD *)a2;
            v19 = v61;
            v18 = v60;
            v20 = v56;
            v24 = (v61 - v60) >> 2;
          }
          while ( v31 < v24 );
          v22 = v57;
        }
        v30 = ++v29;
      }
      while ( v29 < (unsigned __int64)((v22 - v20) >> 2) );
      v38 = (v19 - v18) >> 2;
      v39 = *((_BYTE *)this + 76) | 0x22;
      v40 = (v22 - v20) >> 2;
      *((_BYTE *)this + 76) = v39;
      *((_DWORD *)this + 13) = v38;
      *((_DWORD *)this + 12) = v40;
      if ( a4 )
      {
        *((_BYTE *)this + 76) = v39 | 0x40;
        *((_DWORD *)this + 15) = Mesh::ComputeAntialiasBorderFlags<50331648,16777216,33554432>(a4);
        *((_DWORD *)this + 16) = Mesh::ComputeAntialiasBorderFlags<3,1,2>(a4);
        *((_DWORD *)this + 17) = Mesh::ComputeAntialiasBorderFlags<768,256,512>(a4);
        *((_DWORD *)this + 18) = Mesh::ComputeAntialiasBorderFlags<196608,65536,131072>(a4);
      }
      v41 = 0LL;
      if ( (_DWORD)v40 != 2
        || (_DWORD)v38 != 2
        || (v42 = (__int64 *)((char *)this + 32), this == (Mesh *)-32LL)
        || (v41 = *v42) != 0 && *(_DWORD *)(v41 + 128) )
      {
        *((_QWORD *)this + 3) = v41;
        v11 = 0;
      }
      else
      {
        v43 = Mesh::BuildGrid(this, (int)v20, 2, 2);
        v11 = v43;
        if ( v43 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v44, 0LL, 0, v43, 0x466u);
        }
        else
        {
          if ( !v41 )
          {
            v45 = (int *)*((_QWORD *)this + 2);
            v53 = (Mesh::MeshGraph **)((char *)this + 32);
            v54 = 0LL;
            v55 = 1;
            v11 = Mesh::MeshGraph::Create(v45[8], v45[14], v45[22], 3 * (v45[25] + 2 * (v45[23] - v45[26])), &v54);
            if ( v55 )
            {
              v46 = *v53;
              *v53 = v54;
              if ( v46 )
                Mesh::MeshGraph::`scalar deleting destructor'(v46);
            }
            if ( v11 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v46, 0LL, 0, v11, 0x46Fu);
              goto LABEL_45;
            }
            v41 = *v42;
          }
          v47 = Mesh::CopyGraph(*((const struct Mesh::MeshGraph **)this + 2), (struct Mesh::MeshGraph *)v41);
          v11 = v47;
          if ( v47 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v48, 0LL, 0, v47, 0x474u);
          }
          else
          {
            v49 = *(_QWORD *)(v41 + 112);
            if ( v49 <= 0 )
            {
              gsl::details::terminate(v48);
              JUMPOUT(0x1800BAE14LL);
            }
            Triangles = Mesh::GenerateTriangles(this, *(unsigned __int16 **)(v41 + 120), v49, (int *)(v41 + 128));
            v11 = Triangles;
            if ( Triangles >= 0 )
            {
              v51 = *((_QWORD *)this + 2);
              v11 = 0;
              *(_QWORD *)(v51 + 64) = 0LL;
              *(_DWORD *)(v51 + 32) = 0;
              *(_DWORD *)(v51 + 56) = 0;
              *(_QWORD *)(v51 + 88) = 0LL;
              *(_QWORD *)(v51 + 96) = 0LL;
              *(_DWORD *)(v51 + 104) = 0;
              *(_DWORD *)(v51 + 128) = 0;
              *((_QWORD *)this + 3) = v41;
              goto LABEL_45;
            }
            MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, Triangles, 0x477u);
          }
        }
        if ( v41 )
        {
          *(_QWORD *)(v41 + 64) = 0LL;
          *(_DWORD *)(v41 + 32) = 0;
          *(_DWORD *)(v41 + 56) = 0;
          *(_QWORD *)(v41 + 88) = 0LL;
          *(_QWORD *)(v41 + 96) = 0LL;
          *(_DWORD *)(v41 + 104) = 0;
          *(_DWORD *)(v41 + 128) = 0;
        }
      }
LABEL_45:
      if ( (*((_BYTE *)this + 76) & 4) == 0 )
      {
        if ( v11 >= 0 )
        {
          v11 = 0;
          detail::vector_facade<float,detail::buffer_impl<float,2,1,detail::liberal_expansion_policy>>::~vector_facade<float,detail::buffer_impl<float,2,1,detail::liberal_expansion_policy>>(&v56);
          detail::vector_facade<float,detail::buffer_impl<float,2,1,detail::liberal_expansion_policy>>::~vector_facade<float,detail::buffer_impl<float,2,1,detail::liberal_expansion_policy>>(&v60);
          return (unsigned int)v11;
        }
        MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, v11, 0x128u);
        goto LABEL_55;
      }
      detail::vector_facade<float,detail::buffer_impl<float,2,1,detail::liberal_expansion_policy>>::~vector_facade<float,detail::buffer_impl<float,2,1,detail::liberal_expansion_policy>>(&v56);
      detail::vector_facade<float,detail::buffer_impl<float,2,1,detail::liberal_expansion_policy>>::~vector_facade<float,detail::buffer_impl<float,2,1,detail::liberal_expansion_policy>>(&v60);
    }
    else
    {
      *((_BYTE *)this + 76) |= 4u;
      detail::vector_facade<float,detail::buffer_impl<float,2,1,detail::liberal_expansion_policy>>::~vector_facade<float,detail::buffer_impl<float,2,1,detail::liberal_expansion_policy>>(&v56);
      detail::vector_facade<float,detail::buffer_impl<float,2,1,detail::liberal_expansion_policy>>::~vector_facade<float,detail::buffer_impl<float,2,1,detail::liberal_expansion_policy>>(&v60);
    }
  }
  MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0xA3u);
LABEL_61:
  *((_BYTE *)this + 76) &= ~1u;
  return (unsigned int)v11;
}
