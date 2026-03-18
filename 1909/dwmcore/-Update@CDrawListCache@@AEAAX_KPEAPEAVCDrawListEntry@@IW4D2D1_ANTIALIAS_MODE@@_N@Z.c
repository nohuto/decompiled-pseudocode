/*
 * XREFs of ?Update@CDrawListCache@@AEAAX_KPEAPEAVCDrawListEntry@@IW4D2D1_ANTIALIAS_MODE@@_N@Z @ 0x180096860
 * Callers:
 *     ?Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z @ 0x18003C400 (-Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z.c)
 *     ?FillRectanglesAsDrawList@CDrawingContext@@AEAAJ$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@AEBV?$span@$$CBUMilRectF@@$0?0@gsl@@AEBU_D3DCOLORVALUE@@@Z @ 0x180098B60 (-FillRectanglesAsDrawList@CDrawingContext@@AEAAJ$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_d.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18007AC58 (--2@YAPEAX_K@Z.c)
 *     ?first@?$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@QEBAPEAPEAVCDrawListEntry@@XZ @ 0x180099050 (-first@-$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@QEBAPEAPEAVCDrawListEntry@@XZ.c)
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1800B6EE0 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ??$uninitialized_copy@V?$move_iterator@PEAPEAVCDrawListEntry@@@std@@V?$checked_array_iterator@PEAPEAVCDrawListEntry@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAPEAVCDrawListEntry@@@stdext@@V?$move_iterator@PEAPEAVCDrawListEntry@@@0@0V12@@Z @ 0x1800C8EF0 (--$uninitialized_copy@V-$move_iterator@PEAPEAVCDrawListEntry@@@std@@V-$checked_array_iterator@PE.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x1801583B0 (ModuleFailFastForHRESULT.c)
 *     ?_Xoverflow_error@std@@YAXPEBD@Z @ 0x180159B28 (-_Xoverflow_error@std@@YAXPEBD@Z.c)
 *     ??$move_backward@V?$move_iterator@PEAPEAVICompositionSurfaceInfoListener@@@std@@V?$checked_array_iterator@PEAPEAVICompositionSurfaceInfoListener@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAPEAVICompositionSurfaceInfoListener@@@stdext@@V?$move_iterator@PEAPEAVICompositionSurfaceInfoListener@@@0@0V12@@Z @ 0x180181658 (--$move_backward@V-$move_iterator@PEAPEAVICompositionSurfaceInfoListener@@@std@@V-$checked_array.c)
 */

void __fastcall CDrawListCache::Update(
        __int64 a1,
        struct CDrawListEntry *a2,
        struct CDrawListEntry **a3,
        enum D2D1_ANTIALIAS_MODE a4,
        bool a5,
        __int64 a6)
{
  __int128 this; // rcx
  __int64 v7; // r15
  __int64 v8; // rax
  int v9; // ecx
  unsigned __int64 v10; // r12
  unsigned __int64 v11; // r8
  __int64 v12; // r12
  unsigned __int64 v13; // rsi
  int v14; // eax
  unsigned __int64 v15; // r14
  unsigned __int64 v16; // r14
  int v17; // eax
  unsigned __int64 v18; // rsi
  __int64 v19; // rcx
  __int64 v20; // r9
  unsigned __int64 v21; // r13
  int v22; // eax
  unsigned __int64 v23; // rsi
  unsigned __int64 v24; // rcx
  _QWORD *v25; // rdx
  __int64 v26; // r13
  unsigned __int64 v27; // r8
  unsigned __int64 v28; // r14
  _QWORD *v29; // rax
  int v30; // ecx
  unsigned __int64 v31; // rsi
  bool v32; // sf
  int v33; // eax
  _QWORD *v34; // r10
  __int64 v35; // rcx
  _QWORD *v36; // rcx
  int v37; // eax
  __int64 v38; // r8
  __int64 v39; // rsi
  unsigned __int64 v40; // rbx
  _DWORD *v41; // rbx
  int v42; // eax
  __m128 v43; // xmm6
  __m128 v44; // xmm6
  __m128 v45; // xmm6
  int v46; // eax
  __int64 v47; // rax
  int v48; // eax
  __int64 v49; // rax
  int v50; // ecx
  int v51; // eax
  __int64 v52; // rax
  int v53; // ecx
  int v54; // eax
  _QWORD *v55; // rax
  unsigned __int64 v56; // r13
  __int64 v57; // rax
  __int64 v58; // r8
  int v59; // eax
  void *v60; // rax
  int v61; // eax
  __int64 v62; // r10
  __int64 v63; // r9
  bool v64; // sf
  unsigned int v65; // [rsp+20h] [rbp-A9h]
  _QWORD v66[3]; // [rsp+28h] [rbp-A1h] BYREF
  __int128 v67; // [rsp+40h] [rbp-89h] BYREF
  __int64 v68; // [rsp+50h] [rbp-79h]
  __int128 v69; // [rsp+60h] [rbp-69h] BYREF
  __int64 v70; // [rsp+70h] [rbp-59h]
  struct CDrawListEntry *v71; // [rsp+80h] [rbp-49h] BYREF
  float v72; // [rsp+88h] [rbp-41h]
  float v73; // [rsp+8Ch] [rbp-3Dh]
  __int128 v74; // [rsp+90h] [rbp-39h] BYREF
  void *retaddr; // [rsp+118h] [rbp+4Fh]

  *(_QWORD *)&this = a1;
  *((_QWORD *)&this + 1) = (unsigned int)a6;
  v7 = this;
  v66[0] = (unsigned int)a6;
  v65 = a6;
  v71 = a2;
  v66[1] = a3;
  if ( !a3 && (_DWORD)a6 )
  {
LABEL_111:
    ((void (__fastcall *)(_QWORD, struct CDrawListEntry *, struct CDrawListEntry **, __int64))`gsl::details::get_terminate_handler'::`2'::handler)(
      this,
      a2,
      a3,
      a6);
    __debugbreak();
  }
  v74 = (unsigned __int64)v66;
  v8 = *(_QWORD *)(this + 32);
  v9 = v8 & 3;
  if ( v9 == 2 )
  {
    v10 = 0LL;
    v11 = 0LL;
  }
  else
  {
    if ( v9 == 1 )
      v10 = v8 & 0xFFFFFFFFFFFFFFFCuLL;
    else
      v10 = v7 + 32;
    v11 = v8 & 0xFFFFFFFFFFFFFFFCuLL;
    if ( v9 != 1 )
      v11 = v7 + 32;
  }
  v12 = (__int64)(v10 - v11) >> 3;
  if ( v9 == 2 )
    goto LABEL_5;
  if ( (v8 & 3) != 0 )
  {
    v53 = v9 - 1;
    if ( v53 )
    {
      if ( v53 != 2 )
        ModuleFailFastForHRESULT(2147549183LL, retaddr, v11);
LABEL_5:
      v13 = 0LL;
      goto LABEL_6;
    }
    v13 = *(_QWORD *)(detail::pointer_buffer_impl<CDrawListEntry *>::first(v7 + 32) - 16);
    v8 = *(_QWORD *)(v7 + 32);
  }
  else
  {
    v13 = 1LL;
  }
LABEL_6:
  v14 = v8 & 3;
  if ( v14 == 2 )
  {
    *(_QWORD *)&this = 0LL;
    goto LABEL_8;
  }
  if ( v14 )
  {
    v54 = v14 - 1;
    if ( !v54 )
    {
      *(_QWORD *)&this = *(_QWORD *)(detail::pointer_buffer_impl<CDrawListEntry *>::first(v7 + 32) - 8);
      goto LABEL_8;
    }
    if ( v54 != 2 )
      ModuleFailFastForHRESULT(2147549183LL, retaddr, v11);
  }
  *(_QWORD *)&this = 1LL;
LABEL_8:
  *(_QWORD *)&this = this - v13;
  if ( (unsigned __int64)this < *((_QWORD *)&this + 1) )
  {
    v15 = v13 + *((_QWORD *)&this + 1);
    if ( v13 + *((_QWORD *)&this + 1) < v13 )
      std::_Xoverflow_error((const char *)this);
    if ( v15 == 1 )
    {
      *(_QWORD *)(v7 + 32) = 3LL;
      goto LABEL_12;
    }
    v55 = operator new(8 * v15 + 16);
    *((_QWORD *)&v69 + 1) = v13;
    v70 = 0LL;
    *v55 = 0LL;
    v55[1] = 0LL;
    v56 = (unsigned __int64)(v55 + 2);
    *(_QWORD *)&v69 = v55 + 2;
    v57 = detail::pointer_buffer_impl<CDrawListEntry *>::first(v7 + 32);
    v67 = v69;
    v68 = v70;
    std::uninitialized_copy<std::move_iterator<CDrawListEntry * *>,stdext::checked_array_iterator<CDrawListEntry * *>>(
      &v69,
      v57,
      v57 + 8 * v13,
      &v67);
    v59 = *(_DWORD *)(v7 + 32) & 3;
    if ( v59 != 2 && v59 )
    {
      v61 = v59 - 1;
      if ( !v61 )
      {
        v60 = (void *)(detail::pointer_buffer_impl<CDrawListEntry *>::first(v7 + 32) - 16);
        goto LABEL_94;
      }
      if ( v61 != 2 )
        ModuleFailFastForHRESULT(2147549183LL, retaddr, v58);
    }
    v60 = 0LL;
LABEL_94:
    *(_QWORD *)(v7 + 32) = v56 | 1;
    operator delete(v60);
    *(_QWORD *)(detail::pointer_buffer_impl<CDrawListEntry *>::first(v7 + 32) - 16) = v13;
    *(_QWORD *)(detail::pointer_buffer_impl<CDrawListEntry *>::first(v7 + 32) - 8) = v15;
  }
LABEL_12:
  v16 = *(_QWORD *)(v7 + 32);
  v17 = v16 & 3;
  if ( v17 == 3 || (v16 & 3) == 0 )
  {
    v18 = v7 + 32;
  }
  else if ( v17 == 1 )
  {
    v18 = v16 & 0xFFFFFFFFFFFFFFFCuLL;
  }
  else
  {
    v18 = 0LL;
  }
  if ( v17 != 3 )
  {
    if ( (v16 & 3) == 0 )
    {
      v20 = 1LL;
      v19 = 1LL;
      goto LABEL_17;
    }
    v46 = v17 - 1;
    if ( !v46 )
    {
      v47 = detail::pointer_buffer_impl<CDrawListEntry *>::first(v7 + 32);
      v16 = *(_QWORD *)(v7 + 32);
      v19 = *(_QWORD *)(v47 - 16);
      goto LABEL_16;
    }
    if ( v46 != 1 )
      ModuleFailFastForHRESULT(2147549183LL, retaddr, v11);
  }
  v19 = 0LL;
LABEL_16:
  v20 = 1LL;
LABEL_17:
  v21 = v18 + 8 * v19;
  v22 = v16 & 3;
  v23 = v16;
  if ( v22 == 3 || (v16 & 3) == 0 )
  {
    v24 = v7 + 32;
  }
  else if ( v22 == 1 )
  {
    v24 = v16 & 0xFFFFFFFFFFFFFFFCuLL;
  }
  else
  {
    if ( v22 != 2 )
      ModuleFailFastForHRESULT(2147549183LL, retaddr, v11);
    v24 = 0LL;
  }
  v25 = (_QWORD *)v16;
  v26 = (__int64)(v21 - v24) >> 3;
  v27 = v26 - v12;
  *(_QWORD *)&v69 = v26 - v12;
  if ( v22 == 3 || (v16 & 3) == 0 )
  {
    v28 = v7 + 32;
  }
  else if ( v22 == 1 )
  {
    v28 = v16 & 0xFFFFFFFFFFFFFFFCuLL;
  }
  else
  {
    if ( v22 != 2 )
      ModuleFailFastForHRESULT(2147549183LL, retaddr, v27);
    v28 = 0LL;
  }
  if ( v22 == 3 )
    goto LABEL_22;
  if ( v22 )
  {
    v48 = v22 - 1;
    if ( v48 )
    {
      if ( v48 != 1 )
        ModuleFailFastForHRESULT(2147549183LL, retaddr, v27);
LABEL_22:
      v20 = 0LL;
      goto LABEL_23;
    }
    v49 = detail::pointer_buffer_impl<CDrawListEntry *>::first(v7 + 32);
    v23 = *(_QWORD *)(v7 + 32);
    v27 = v69;
    v20 = *(_QWORD *)(v49 - 16);
  }
LABEL_23:
  v29 = (_QWORD *)(v28 + 8 * v20);
  v30 = *(_DWORD *)(v7 + 32) & 3;
  if ( v30 == 3 || !v30 )
  {
    v31 = v7 + 32;
  }
  else
  {
    v50 = v30 - 1;
    if ( v50 )
    {
      if ( v50 != 1 )
        ModuleFailFastForHRESULT(2147549183LL, retaddr, v27);
      v31 = 0LL;
    }
    else
    {
      v31 = v23 & 0xFFFFFFFFFFFFFFFCuLL;
    }
  }
  v70 = 0LL;
  *(_QWORD *)&this = v31 + 8 * v26;
  v69 = this;
  v68 = 0LL;
  v32 = this < 0;
  if ( *((_QWORD *)&this + 1) )
  {
    if ( !(_QWORD)this )
      goto LABEL_141;
    v32 = this < 0;
  }
  if ( v32 )
  {
    *(_QWORD *)&this = -*((_QWORD *)&this + 1);
    if ( *((_QWORD *)&this + 1) )
      goto LABEL_141;
  }
  v68 = *((_QWORD *)&this + 1);
  *(_QWORD *)&this = v27;
  if ( *((_QWORD *)&this + 1) < v27 )
    *(_QWORD *)&this = *((_QWORD *)&this + 1);
  v70 = *((_QWORD *)&this + 1);
  *(_QWORD *)&this = 8 * this;
  v25 = (_QWORD *)((char *)v29 - this);
  if ( v29 != (_QWORD *)((char *)v29 - this) )
  {
    v62 = v69;
    v63 = v70;
    do
    {
      --v29;
      if ( !v62 )
        goto LABEL_141;
      if ( !v63 )
        goto LABEL_141;
      if ( (unsigned __int64)--v63 >= *((_QWORD *)&v69 + 1) )
        goto LABEL_141;
      *(_QWORD *)&this = *v29;
      *(_QWORD *)(v62 + 8 * v63) = *v29;
    }
    while ( v29 != v25 );
  }
  if ( v27 <= *((_QWORD *)&this + 1) )
    goto LABEL_33;
  v70 = 0LL;
  *(_QWORD *)&v69 = v31;
  *((_QWORD *)&v69 + 1) = v26;
  v68 = 0LL;
  v64 = v26 < 0;
  if ( v26 )
  {
    if ( !v31 )
      goto LABEL_141;
    v64 = v26 < 0;
  }
  if ( v64 && v26 )
  {
LABEL_141:
    _o__invalid_parameter_noinfo_noreturn(this, v25);
    JUMPOUT(0x18012927FLL);
  }
  v68 = v26;
  v70 = v26;
  std::move_backward<std::move_iterator<ICompositionSurfaceInfoListener * *>,stdext::checked_array_iterator<ICompositionSurfaceInfoListener * *>>(
    &v67,
    v31 + 8 * v12,
    v31 + 8 * (v26 - *((_QWORD *)&this + 1)),
    &v69);
LABEL_33:
  if ( *((_QWORD *)&this + 1) )
  {
    v33 = *(_DWORD *)(v7 + 32) & 3;
    if ( v33 == 3 )
    {
      if ( *((_QWORD *)&this + 1) == 1LL )
        goto LABEL_36;
    }
    else if ( v33 )
    {
      v51 = v33 - 1;
      if ( v51 )
      {
        if ( v51 != 1 )
          ModuleFailFastForHRESULT(2147549183LL, retaddr, v27);
      }
      else
      {
        v52 = detail::pointer_buffer_impl<CDrawListEntry *>::first(v7 + 32);
        *(_QWORD *)(v52 - 16) += *((_QWORD *)&this + 1);
      }
      goto LABEL_36;
    }
    *(_QWORD *)(v7 + 32) = 2LL;
  }
LABEL_36:
  v34 = (_QWORD *)(v31 + 8 * v12);
  a6 = 0LL;
  a2 = (struct CDrawListEntry *)*((_QWORD *)&v74 + 1);
  a3 = (struct CDrawListEntry **)v74;
  while ( a2 != *((struct CDrawListEntry **)&this + 1) || a3 != v66 )
  {
    if ( a2 == *a3 )
      goto LABEL_111;
    *(_QWORD *)&this = *(_QWORD *)((char *)a3[1] + a6);
    *v34 = this;
    if ( a6 < 0 || a2 == *a3 )
      goto LABEL_111;
    a2 = (struct CDrawListEntry *)((char *)a2 + 1);
    a6 += 8LL;
    ++v34;
  }
  if ( (*(_DWORD *)(v7 + 32) & 3u) > 1 && (*(_DWORD *)(v7 + 32) & 3u) - 2 >= 2 )
    ModuleFailFastForHRESULT(2147549183LL, retaddr, a3);
  *(_QWORD *)(v7 + 24) = v71;
  *(_DWORD *)(v7 + 96) = a4;
  *(_BYTE *)(v7 + 100) = a5;
  if ( v65 )
  {
    v35 = *(_QWORD *)(v7 + 32);
    v73 = 0.0;
    v72 = 0.0;
    v71 = 0LL;
    if ( (v35 & 3) != 0 )
    {
      if ( (v35 & 3) == 1 )
      {
        v36 = (_QWORD *)(v35 & 0xFFFFFFFFFFFFFFFCuLL);
        goto LABEL_47;
      }
      if ( (v35 & 3) == 2 )
      {
        v36 = 0LL;
        goto LABEL_47;
      }
      if ( (v35 & 3) != 3 )
        ModuleFailFastForHRESULT(2147549183LL, retaddr, a3);
    }
    v36 = (_QWORD *)(v7 + 32);
LABEL_47:
    v37 = (*(__int64 (__fastcall **)(_QWORD, struct CDrawListEntry *, struct CDrawListEntry **, __int64))(*(_QWORD *)*v36 + 24LL))(
            *v36,
            a2,
            a3,
            a6);
    v39 = 0LL;
    *(_DWORD *)(v7 + 88) = 0;
    *(_DWORD *)(v7 + 16) = v37;
    *(_DWORD *)(v7 + 92) = -1;
    while ( 1 )
    {
      if ( (*(_QWORD *)(v7 + 32) & 3) != 0 )
      {
        if ( (*(_DWORD *)(v7 + 32) & 3) == 1 )
        {
          v40 = *(_QWORD *)(v7 + 32) & 0xFFFFFFFFFFFFFFFCuLL;
          goto LABEL_50;
        }
        if ( (*(_DWORD *)(v7 + 32) & 3) == 2 )
        {
          v40 = 0LL;
          goto LABEL_50;
        }
        if ( (*(_DWORD *)(v7 + 32) & 3) != 3 )
          ModuleFailFastForHRESULT(2147549183LL, retaddr, v38);
      }
      v40 = v7 + 32;
LABEL_50:
      v41 = *(_DWORD **)(v40 + 8 * v39);
      (**(void (__fastcall ***)(_DWORD *))v41)(v41);
      v42 = v41[33];
      *(_DWORD *)(v7 + 88) |= v42;
      *(_DWORD *)(v7 + 92) &= v42;
      v69 = *(_OWORD *)(*(__int64 (__fastcall **)(_DWORD *, __int128 *))(*(_QWORD *)v41 + 56LL))(v41, &v74);
      TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(&v71, &v69);
      v39 = (unsigned int)(v39 + 1);
      if ( (unsigned int)v39 >= v65 )
      {
        v43 = _mm_shuffle_ps((__m128)(unsigned int)v71, (__m128)(unsigned int)v71, 225);
        v43.m128_f32[0] = *((float *)&v71 + 1);
        v44 = _mm_shuffle_ps(v43, v43, 198);
        v44.m128_f32[0] = v72;
        v45 = _mm_shuffle_ps(v44, v44, 39);
        v45.m128_f32[0] = v73;
        *(__m128 *)(v7 + 40) = _mm_shuffle_ps(v45, v45, 57);
        goto LABEL_52;
      }
    }
  }
  *(_DWORD *)(v7 + 88) = 32;
  *(_OWORD *)(v7 + 40) = 0LL;
  *(_DWORD *)(v7 + 92) = 32;
LABEL_52:
  if ( *(_DWORD *)(v7 + 16) == 1 )
  {
    ++dword_180339964;
  }
  else if ( *(_DWORD *)(v7 + 16) == 2 )
  {
    ++dword_180339970;
  }
}
