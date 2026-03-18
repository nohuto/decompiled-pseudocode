/*
 * XREFs of ?CreateRectangleMesh@Mesh@@QEAAJAEBUContentInfo@1@AEBUD2D_RECT_F@@K@Z @ 0x180057590
 * Callers:
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBVMatrix3x2F@D2D1@@@Z @ 0x1800681F0 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 * Callees:
 *     ?PreallocateGraphObjects@Mesh@@AEAAJ_N@Z @ 0x180088C48 (-PreallocateGraphObjects@Mesh@@AEAAJ_N@Z.c)
 *     ?Create@MeshGraph@Mesh@@SAJHHHHPEAPEAU12@@Z @ 0x180088DB0 (-Create@MeshGraph@Mesh@@SAJHHHHPEAPEAU12@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?BuildGrid@Mesh@@AEAAJHHH@Z @ 0x1800AE440 (-BuildGrid@Mesh@@AEAAJHHH@Z.c)
 *     ?GenerateTriangles@Mesh@@AEBAJPEAGHPEAH@Z @ 0x1800B6CC8 (-GenerateTriangles@Mesh@@AEBAJPEAGHPEAH@Z.c)
 *     ?CopyGraph@Mesh@@CAJAEBUMeshGraph@1@PEAU21@@Z @ 0x1800BAD68 (-CopyGraph@Mesh@@CAJAEBUMeshGraph@1@PEAU21@@Z.c)
 *     ??$ComputeAntialiasBorderFlags@$0DAAAAAA@$0BAAAAAA@$0CAAAAAA@@Mesh@@CAKK@Z @ 0x1800CABB4 (--$ComputeAntialiasBorderFlags@$0DAAAAAA@$0BAAAAAA@$0CAAAAAA@@Mesh@@CAKK@Z.c)
 *     ??$ComputeAntialiasBorderFlags@$0DAA@$0BAA@$0CAA@@Mesh@@CAKK@Z @ 0x1800CABF0 (--$ComputeAntialiasBorderFlags@$0DAA@$0BAA@$0CAA@@Mesh@@CAKK@Z.c)
 *     ??$ComputeAntialiasBorderFlags@$0DAAAA@$0BAAAA@$0CAAAA@@Mesh@@CAKK@Z @ 0x1800CAC2C (--$ComputeAntialiasBorderFlags@$0DAAAA@$0BAAAA@$0CAAAA@@Mesh@@CAKK@Z.c)
 *     ??$ComputeAntialiasBorderFlags@$02$00$01@Mesh@@CAKK@Z @ 0x1800CB0AC (--$ComputeAntialiasBorderFlags@$02$00$01@Mesh@@CAKK@Z.c)
 *     ??_GMeshGraph@Mesh@@QEAAPEAXI@Z @ 0x1800CCA88 (--_GMeshGraph@Mesh@@QEAAPEAXI@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x18015EAE4 (-terminate@details@gsl@@YAXXZ.c)
 *     ?clear_region@?$vector_facade@W4D2D1_EDGE_FLAGS@@V?$buffer_impl@W4D2D1_EDGE_FLAGS@@$07$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1801AFB18 (-clear_region@-$vector_facade@W4D2D1_EDGE_FLAGS@@V-$buffer_impl@W4D2D1_EDGE_FLAGS@@$07$00Vlibera.c)
 */

__int64 __fastcall Mesh::CreateRectangleMesh(
        const struct Mesh::MeshGraph **this,
        const struct Mesh::ContentInfo *a2,
        const struct D2D_RECT_F *a3,
        unsigned int a4)
{
  unsigned int i; // esi
  unsigned int v8; // ecx
  const struct Mesh::MeshGraph *v9; // rax
  unsigned __int64 v10; // rdx
  int v11; // edi
  float v12; // xmm2_4
  float v13; // xmm0_4
  float right; // xmm1_4
  float left; // xmm2_4
  char *v16; // r14
  char *v17; // r9
  const struct Mesh::MeshGraph *v18; // rax
  float bottom; // xmm1_4
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // r8
  unsigned int v22; // r11d
  int v23; // r10d
  unsigned int v24; // edi
  __int64 v25; // r8
  unsigned int v26; // r10d
  __int64 v27; // r9
  const struct Mesh::MeshGraph *v28; // rcx
  float v29; // xmm1_4
  __int64 v30; // rax
  float v31; // xmm0_4
  char v32; // al
  __int64 v33; // r10
  __int64 v34; // r11
  __int64 v35; // rsi
  __int64 *v36; // r15
  __int64 v37; // rax
  _DWORD *v38; // rbx
  __int64 v39; // rax
  int v41; // eax
  unsigned int v42; // ecx
  int v43; // eax
  unsigned int v44; // ecx
  int *v45; // rcx
  Mesh::MeshGraph *v46; // rcx
  int v47; // eax
  gsl::details *v48; // rcx
  __int64 v49; // rax
  int Triangles; // eax
  const struct Mesh::MeshGraph *v51; // rax
  void *v52; // rcx
  bool v53; // zf
  __int64 v54; // rdx
  _DWORD *v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  void *v58; // rcx
  __int64 v59; // rdx
  _DWORD *v60; // rcx
  __int64 v61; // r8
  __int64 v62; // rdx
  _DWORD *v63; // rcx
  __int64 v64; // r8
  __int64 v65; // rdx
  _DWORD *v66; // rcx
  __int64 v67; // r8
  HANDLE ProcessHeap; // rax
  HANDLE v69; // rax
  _DWORD *v70; // rcx
  __int64 v71; // r8
  __int64 v72; // r9
  Mesh::MeshGraph **v74; // [rsp+40h] [rbp-41h]
  struct Mesh::MeshGraph *v75; // [rsp+48h] [rbp-39h] BYREF
  char v76; // [rsp+50h] [rbp-31h]
  _DWORD *v77; // [rsp+58h] [rbp-29h] BYREF
  LPVOID *v78; // [rsp+60h] [rbp-21h]
  LPVOID *p_lpMem; // [rsp+68h] [rbp-19h]
  _DWORD Mem[2]; // [rsp+70h] [rbp-11h] BYREF
  LPVOID lpMem; // [rsp+78h] [rbp-9h] BYREF
  char *v82; // [rsp+80h] [rbp-1h]
  _QWORD *v83; // [rsp+88h] [rbp+7h]
  _DWORD v84[2]; // [rsp+90h] [rbp+Fh] BYREF
  _QWORD v85[4]; // [rsp+98h] [rbp+17h] BYREF

  for ( i = a4; ; i = a4 )
  {
    while ( 1 )
    {
      v8 = *((unsigned __int8 *)this + 76);
      if ( (v8 & 4) != 0 )
      {
        v41 = Mesh::PreallocateGraphObjects((Mesh *)this, (v8 & 4) != 0);
        v11 = v41;
        if ( v41 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v42, 0LL, 0, v41, 0x36u, 0LL);
          goto LABEL_6;
        }
        *((_BYTE *)this + 76) &= ~4u;
        v8 = *((unsigned __int8 *)this + 76);
      }
      v9 = this[2];
      this[3] = 0LL;
      *((_DWORD *)this + 3) = 0;
      this[6] = 0LL;
      *((_DWORD *)this + 14) = 0;
      if ( v9 )
      {
        *((_QWORD *)v9 + 8) = 0LL;
        *((_DWORD *)v9 + 8) = 0;
        *((_DWORD *)v9 + 14) = 0;
        *((_QWORD *)v9 + 11) = 0LL;
        *((_QWORD *)v9 + 12) = 0LL;
        *((_DWORD *)v9 + 26) = 0;
        *((_DWORD *)v9 + 32) = 0;
        v8 = *((unsigned __int8 *)this + 76);
        v10 = (unsigned __int64)this[2];
      }
      else
      {
        v10 = 0LL;
      }
      LOBYTE(v8) = v8 & 4 | 1;
      v11 = 0;
      *((_BYTE *)this + 76) = v8;
      *((_BYTE *)this + 76) = v8 | (*((_BYTE *)a2 + 16) << 7);
      v12 = fmaxf(1.0, fmaxf(a3->right - a3->left, a3->bottom - a3->top)) * 0.0000099999997;
      *(float *)v10 = v12;
      *(float *)(v10 + 8) = v12 * v12;
      *(float *)(v10 + 4) = v12 + v12;
      v13 = (float)(a3->top + a3->bottom) * 0.5;
      *((float *)this + 10) = (float)(a3->left + a3->right) * 0.5;
      *((float *)this + 11) = v13;
LABEL_6:
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v11, 0xA3u, 0LL);
        goto LABEL_104;
      }
      right = a3->right;
      left = a3->left;
      v16 = (char *)Mem;
      v78 = (LPVOID *)Mem;
      v17 = (char *)v84;
      v77 = Mem;
      p_lpMem = &lpMem;
      v82 = (char *)v84;
      lpMem = v84;
      v83 = v85;
      v18 = this[2];
      if ( (float)(right - left) > *((float *)v18 + 1) )
      {
        *(float *)Mem = left;
        v78 = &lpMem;
        *(float *)&Mem[1] = right;
      }
      bottom = a3->bottom;
      if ( (float)(bottom - a3->top) > *((float *)v18 + 1) )
      {
        v17 = (char *)v85;
        v84[0] = LODWORD(a3->top);
        v82 = (char *)v85;
        *(float *)&v84[1] = bottom;
      }
      v20 = ((char *)v78 - (char *)Mem) >> 2;
      if ( v20 < 2 || (v10 = (v17 - (char *)v84) >> 2, v10 < 2) )
      {
        v11 = 1;
        v72 = (v17 - (char *)v84) >> 2;
        if ( v72 )
        {
          v71 = v72;
          goto LABEL_93;
        }
LABEL_94:
        v70 = lpMem;
LABEL_95:
        lpMem = 0LL;
        if ( v70 == v84 )
          v70 = 0LL;
        operator delete(v70);
        v66 = v77;
        v67 = ((char *)v78 - (char *)v77) >> 2;
        if ( v67 )
        {
LABEL_84:
          detail::vector_facade<enum D2D1_EDGE_FLAGS,detail::buffer_impl<enum D2D1_EDGE_FLAGS,8,1,detail::liberal_expansion_policy>>::clear_region(
            &v77,
            v65,
            v67);
          v66 = v77;
        }
LABEL_85:
        v77 = 0LL;
        if ( v66 == Mem )
          v66 = 0LL;
        operator delete(v66);
LABEL_104:
        *((_BYTE *)this + 76) &= ~1u;
        return (unsigned int)v11;
      }
      if ( v10 > 0x19 || v20 > 0x19 )
      {
        v11 = -2147024809;
        MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, -2147024809, 0xCEu, 0LL);
        v70 = lpMem;
        v71 = (v82 - (_BYTE *)lpMem) >> 2;
        if ( v71 )
        {
LABEL_93:
          detail::vector_facade<enum D2D1_EDGE_FLAGS,detail::buffer_impl<enum D2D1_EDGE_FLAGS,8,1,detail::liberal_expansion_policy>>::clear_region(
            &lpMem,
            v10,
            v71);
          goto LABEL_94;
        }
        goto LABEL_95;
      }
      v21 = *((unsigned int *)this + 2);
      if ( v20 * v10 <= v21 )
        break;
      *((_BYTE *)this + 76) |= 4u;
      detail::vector_facade<enum D2D1_EDGE_FLAGS,detail::buffer_impl<enum D2D1_EDGE_FLAGS,8,1,detail::liberal_expansion_policy>>::clear_region(
        &lpMem,
        v10,
        (v17 - (char *)v84) >> 2);
      v52 = lpMem;
      v53 = lpMem == v84;
      lpMem = 0LL;
      if ( v53 )
        v52 = 0LL;
      operator delete(v52);
      v55 = v77;
      v56 = ((char *)v78 - (char *)v77) >> 2;
      if ( v56 )
      {
        detail::vector_facade<enum D2D1_EDGE_FLAGS,detail::buffer_impl<enum D2D1_EDGE_FLAGS,8,1,detail::liberal_expansion_policy>>::clear_region(
          &v77,
          v54,
          v56);
        v55 = v77;
      }
      v77 = 0LL;
      if ( v55 == Mem )
        v55 = 0LL;
      operator delete(v55);
    }
    v22 = *((_DWORD *)this + 3);
    v23 = v20 * v10 + v22;
    if ( v23 > (int)v21 )
    {
      v11 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, -2147024882, 0xE1u, 0LL);
      v70 = lpMem;
      v71 = (v82 - (_BYTE *)lpMem) >> 2;
      if ( v71 )
        goto LABEL_93;
      goto LABEL_95;
    }
    *((_DWORD *)this + 3) = v23;
    v24 = 0;
    v25 = 0LL;
    do
    {
      v26 = 0;
      if ( v20 )
      {
        v27 = 0LL;
        do
        {
          ++v26;
          v28 = *this;
          v29 = *(float *)&v16[4 * v27] - *((float *)this + 10);
          v30 = v22++;
          v27 = v26;
          v10 = 3 * v30;
          v31 = *((float *)lpMem + v25) - *((float *)this + 11);
          *((float *)v28 + 2 * v10) = v29;
          *((float *)v28 + 2 * v10 + 1) = v31;
          *(_OWORD *)((char *)v28 + 8 * v10 + 8) = *(_OWORD *)a2;
          v16 = (char *)v77;
          v20 = ((char *)v78 - (char *)v77) >> 2;
        }
        while ( v26 < v20 );
        v17 = v82;
      }
      v25 = ++v24;
    }
    while ( v24 < (unsigned __int64)((v17 - (_BYTE *)lpMem) >> 2) );
    v32 = *((_BYTE *)this + 76) | 0x22;
    v33 = (v17 - (_BYTE *)lpMem) >> 2;
    v34 = ((char *)v78 - v16) >> 2;
    *((_BYTE *)this + 76) = v32;
    *((_DWORD *)this + 13) = v34;
    *((_DWORD *)this + 12) = v33;
    if ( i )
    {
      *((_BYTE *)this + 76) = v32 | 0x40;
      *((_DWORD *)this + 15) = Mesh::ComputeAntialiasBorderFlags<50331648,16777216,33554432>(i);
      *((_DWORD *)this + 16) = Mesh::ComputeAntialiasBorderFlags<3,1,2>(i);
      *((_DWORD *)this + 17) = Mesh::ComputeAntialiasBorderFlags<768,256,512>(i);
      *((_DWORD *)this + 18) = Mesh::ComputeAntialiasBorderFlags<196608,65536,131072>(i);
    }
    v35 = 0LL;
    if ( (_DWORD)v33 != 2 )
      goto LABEL_30;
    if ( (_DWORD)v34 != 2 )
      goto LABEL_30;
    v36 = (__int64 *)(this + 4);
    if ( this == (const struct Mesh::MeshGraph **)-32LL )
      goto LABEL_30;
    v35 = *v36;
    if ( *v36 )
    {
      if ( *(_DWORD *)(v35 + 128) )
        goto LABEL_30;
    }
    v43 = Mesh::BuildGrid((Mesh *)this, v10, 2, 2);
    v11 = v43;
    if ( v43 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v44, 0LL, 0, v43, 0x466u, 0LL);
    }
    else
    {
      if ( !v35 )
      {
        v45 = (int *)this[2];
        v74 = this + 4;
        v75 = 0LL;
        v76 = 1;
        v11 = Mesh::MeshGraph::Create(v45[8], v45[14], v45[22], 3 * (v45[25] + 2 * (v45[23] - v45[26])), &v75);
        if ( v76 )
        {
          v46 = *v74;
          *v74 = v75;
          if ( v46 )
            Mesh::MeshGraph::`scalar deleting destructor'(v46, (unsigned int)v74);
        }
        if ( v11 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v46, 0LL, 0, v11, 0x46Fu, 0LL);
LABEL_64:
          v16 = (char *)v77;
          v17 = v82;
          goto LABEL_31;
        }
        v35 = *v36;
      }
      v47 = Mesh::CopyGraph(this[2], (struct Mesh::MeshGraph *)v35);
      v11 = v47;
      if ( v47 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v48, 0LL, 0, v47, 0x474u, 0LL);
      }
      else
      {
        v49 = *(_QWORD *)(v35 + 112);
        if ( !v49 )
        {
          gsl::details::terminate(v48);
          JUMPOUT(0x180057AC1LL);
        }
        Triangles = Mesh::GenerateTriangles((Mesh *)this, *(unsigned __int16 **)(v35 + 120), v49, (int *)(v35 + 128));
        v11 = Triangles;
        if ( Triangles >= 0 )
        {
          v51 = this[2];
          *((_QWORD *)v51 + 8) = 0LL;
          *((_DWORD *)v51 + 8) = 0;
          *((_DWORD *)v51 + 14) = 0;
          *((_QWORD *)v51 + 11) = 0LL;
          *((_QWORD *)v51 + 12) = 0LL;
          *((_DWORD *)v51 + 26) = 0;
          *((_DWORD *)v51 + 32) = 0;
          v16 = (char *)v77;
          v17 = v82;
LABEL_30:
          this[3] = (const struct Mesh::MeshGraph *)v35;
          v11 = 0;
          goto LABEL_31;
        }
        MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, Triangles, 0x477u, 0LL);
      }
    }
    if ( !v35 )
      goto LABEL_64;
    *(_QWORD *)(v35 + 64) = 0LL;
    *(_DWORD *)(v35 + 32) = 0;
    *(_DWORD *)(v35 + 56) = 0;
    *(_QWORD *)(v35 + 88) = 0LL;
    *(_QWORD *)(v35 + 96) = 0LL;
    *(_DWORD *)(v35 + 104) = 0;
    *(_DWORD *)(v35 + 128) = 0;
    v16 = (char *)v77;
    v17 = v82;
LABEL_31:
    if ( (*((_BYTE *)this + 76) & 4) == 0 )
      break;
    v57 = (v17 - (_BYTE *)lpMem) >> 2;
    if ( v57 )
      detail::vector_facade<enum D2D1_EDGE_FLAGS,detail::buffer_impl<enum D2D1_EDGE_FLAGS,8,1,detail::liberal_expansion_policy>>::clear_region(
        &lpMem,
        v10,
        v57);
    v58 = lpMem;
    v53 = lpMem == v84;
    lpMem = 0LL;
    if ( v53 )
      v58 = 0LL;
    operator delete(v58);
    v60 = v77;
    v61 = ((char *)v78 - (char *)v77) >> 2;
    if ( v61 )
    {
      detail::vector_facade<enum D2D1_EDGE_FLAGS,detail::buffer_impl<enum D2D1_EDGE_FLAGS,8,1,detail::liberal_expansion_policy>>::clear_region(
        &v77,
        v59,
        v61);
      v60 = v77;
    }
    v77 = 0LL;
    if ( v60 == Mem )
      v60 = 0LL;
    operator delete(v60);
  }
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v11, 0x128u, 0LL);
    v63 = lpMem;
    v64 = (v82 - (_BYTE *)lpMem) >> 2;
    if ( v64 )
    {
      detail::vector_facade<enum D2D1_EDGE_FLAGS,detail::buffer_impl<enum D2D1_EDGE_FLAGS,8,1,detail::liberal_expansion_policy>>::clear_region(
        &lpMem,
        v62,
        v64);
      v63 = lpMem;
    }
    lpMem = 0LL;
    if ( v63 == v84 )
      v63 = 0LL;
    operator delete(v63);
    v66 = v77;
    v67 = ((char *)v78 - (char *)v77) >> 2;
    if ( v67 )
      goto LABEL_84;
    goto LABEL_85;
  }
  v11 = 0;
  v37 = (v17 - (_BYTE *)lpMem) >> 2;
  if ( v37 )
    v82 = &v17[-4 * v37];
  v38 = lpMem;
  lpMem = 0LL;
  if ( v38 != v84 && v38 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v38);
    v16 = (char *)v77;
  }
  v39 = ((char *)v78 - v16) >> 2;
  if ( v39 )
    v78 = (LPVOID *)((char *)v78 - 4 * v39);
  v77 = 0LL;
  if ( v16 != (char *)Mem && v16 )
  {
    v69 = GetProcessHeap();
    HeapFree(v69, 0, v16);
  }
  return (unsigned int)v11;
}
