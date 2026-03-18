/*
 * XREFs of ?Update@CDrawListCache@@AEAAX_KPEAPEAVCDrawListEntry@@IW4D2D1_ANTIALIAS_MODE@@_N@Z @ 0x1800B2A90
 * Callers:
 *     ?Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z @ 0x180026D0C (-Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z.c)
 *     ?FillRectanglesAsDrawList@CDrawingContext@@AEAAJ$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@AEBV?$span@$$CBUMilRectF@@$0?0@gsl@@AEBU_D3DCOLORVALUE@@@Z @ 0x1800B2580 (-FillRectanglesAsDrawList@CDrawingContext@@AEAAJ$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_d.c)
 * Callees:
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1800570A0 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?reserve_region@?$vector_facade@PEAVCDrawListEntry@@V?$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@@detail@@IEAAPEAPEAVCDrawListEntry@@_K0@Z @ 0x1800B2DAC (-reserve_region@-$vector_facade@PEAVCDrawListEntry@@V-$pointer_buffer_impl@PEAVCDrawListEntry@@@.c)
 *     ?first@?$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@QEBAPEAPEAVCDrawListEntry@@XZ @ 0x1800B3B10 (-first@-$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@QEBAPEAPEAVCDrawListEntry@@XZ.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x180152C70 (-terminate@details@gsl@@YAXXZ.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

void __fastcall CDrawListCache::Update(
        CDrawListCache *this,
        __int64 a2,
        struct CDrawListEntry **a3,
        unsigned int a4,
        enum D2D1_ANTIALIAS_MODE a5,
        bool a6)
{
  __int64 v6; // r12
  CDrawListCache *v8; // rdi
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rax
  _QWORD *v12; // r8
  _QWORD *v13; // r10
  __int64 v14; // rdx
  __int64 v15; // r9
  __int64 v16; // rcx
  _QWORD *v17; // rcx
  int v18; // eax
  unsigned int v19; // r15d
  __int64 v20; // r14
  unsigned __int64 v21; // rbx
  _DWORD *v22; // rbx
  int v23; // eax
  __m128 v24; // xmm6
  __m128 v25; // xmm6
  __m128 v26; // xmm6
  _QWORD v27[2]; // [rsp+20h] [rbp-69h] BYREF
  __int128 v28; // [rsp+30h] [rbp-59h] BYREF
  unsigned int v29; // [rsp+40h] [rbp-49h] BYREF
  float v30; // [rsp+44h] [rbp-45h]
  float v31; // [rsp+48h] [rbp-41h]
  float v32; // [rsp+4Ch] [rbp-3Dh]
  _BYTE v33[16]; // [rsp+50h] [rbp-39h] BYREF
  void *retaddr; // [rsp+D8h] [rbp+4Fh]

  v6 = a4;
  v27[0] = a4;
  v8 = this;
  v27[1] = a3;
  if ( !a3 && a4 )
  {
LABEL_35:
    gsl::details::terminate(this);
    __debugbreak();
  }
  v28 = (unsigned __int64)v27;
  v9 = detail::pointer_buffer_impl<CDrawListEntry *>::first((char *)this + 32);
  v10 = detail::pointer_buffer_impl<CDrawListEntry *>::first((char *)v8 + 32);
  v11 = detail::vector_facade<CDrawListEntry *,detail::pointer_buffer_impl<CDrawListEntry *>>::reserve_region(
          (char *)v8 + 32,
          (v9 - v10) >> 3,
          v6);
  v12 = (_QWORD *)v28;
  v13 = (_QWORD *)v11;
  v14 = *((_QWORD *)&v28 + 1);
  v15 = 0LL;
  while ( v12 != v27 || v14 != v6 )
  {
    if ( v14 == *v12 )
      goto LABEL_35;
    this = *(CDrawListCache **)(v15 + v12[1]);
    *v13 = this;
    if ( v15 < 0 || v14 == *v12 )
      goto LABEL_35;
    ++v14;
    v15 += 8LL;
    ++v13;
  }
  detail::pointer_buffer_impl<CDrawListEntry *>::first((char *)v8 + 32);
  *((_DWORD *)v8 + 24) = a5;
  *((_BYTE *)v8 + 100) = a6;
  *((_QWORD *)v8 + 3) = a2;
  if ( (_DWORD)v6 )
  {
    v16 = *((_QWORD *)v8 + 4);
    v32 = 0.0;
    v31 = 0.0;
    v30 = 0.0;
    v29 = 0;
    if ( (v16 & 3) != 0 )
    {
      switch ( v16 & 3 )
      {
        case 1LL:
          v17 = (_QWORD *)(v16 & 0xFFFFFFFFFFFFFFFCuLL);
          break;
        case 2LL:
          v17 = 0LL;
          break;
        case 3LL:
          goto LABEL_18;
        default:
          ModuleFailFastForHRESULT(2147549183LL, retaddr);
      }
LABEL_19:
      v18 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v17 + 24LL))(*v17);
      v19 = 0;
      *((_DWORD *)v8 + 22) = 0;
      *((_DWORD *)v8 + 4) = v18;
      *((_DWORD *)v8 + 23) = -1;
      v20 = 0LL;
      while ( 1 )
      {
        if ( (*((_QWORD *)v8 + 4) & 3) != 0 )
        {
          if ( (*((_QWORD *)v8 + 4) & 3LL) == 1 )
          {
            v21 = *((_QWORD *)v8 + 4) & 0xFFFFFFFFFFFFFFFCuLL;
            goto LABEL_25;
          }
          if ( (*((_QWORD *)v8 + 4) & 3LL) == 2 )
          {
            v21 = 0LL;
            goto LABEL_25;
          }
          if ( (*((_QWORD *)v8 + 4) & 3LL) != 3 )
            ModuleFailFastForHRESULT(2147549183LL, retaddr);
        }
        v21 = (unsigned __int64)v8 + 32;
LABEL_25:
        v22 = *(_DWORD **)(v21 + v20);
        (**(void (__fastcall ***)(_DWORD *))v22)(v22);
        v23 = v22[31];
        *((_DWORD *)v8 + 22) |= v23;
        *((_DWORD *)v8 + 23) &= v23;
        v28 = *(_OWORD *)(*(__int64 (__fastcall **)(_DWORD *, _BYTE *))(*(_QWORD *)v22 + 56LL))(v22, v33);
        TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe((float *)&v29, (float *)&v28);
        ++v19;
        v20 += 8LL;
        if ( v19 >= (unsigned int)v6 )
        {
          v24 = _mm_shuffle_ps((__m128)v29, (__m128)v29, 225);
          v24.m128_f32[0] = v30;
          v25 = _mm_shuffle_ps(v24, v24, 198);
          v25.m128_f32[0] = v31;
          v26 = _mm_shuffle_ps(v25, v25, 39);
          v26.m128_f32[0] = v32;
          *(__m128 *)((char *)v8 + 40) = _mm_shuffle_ps(v26, v26, 57);
          goto LABEL_30;
        }
      }
    }
LABEL_18:
    v17 = (_QWORD *)((char *)v8 + 32);
    goto LABEL_19;
  }
  *((_DWORD *)v8 + 22) = 32;
  *(_OWORD *)((char *)v8 + 40) = 0LL;
  *((_DWORD *)v8 + 23) = 32;
LABEL_30:
  if ( *((_DWORD *)v8 + 4) == 1 )
  {
    ++dword_180308194;
  }
  else if ( *((_DWORD *)v8 + 4) == 2 )
  {
    ++dword_1803081A0;
  }
}
