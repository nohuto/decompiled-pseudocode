/*
 * XREFs of ??$_Insert_range@V?$span_iterator@V?$span@$$CBM$0?0@gsl@@$0A@@details@gsl@@@?$vector@MV?$allocator@M@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@M@std@@@std@@@1@V?$span_iterator@V?$span@$$CBM$0?0@gsl@@$0A@@details@gsl@@1Uforward_iterator_tag@1@@Z @ 0x1801B2E0C
 * Callers:
 *     ??$insert@V?$span_iterator@V?$span@$$CBM$0?0@gsl@@$0A@@details@gsl@@X@?$vector@MV?$allocator@M@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@M@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@M@std@@@std@@@1@V?$span_iterator@V?$span@$$CBM$0?0@gsl@@$0A@@details@gsl@@1@Z @ 0x1801B30BC (--$insert@V-$span_iterator@V-$span@$$CBM$0-0@gsl@@$0A@@details@gsl@@X@-$vector@MV-$allocator@M@s.c)
 * Callees:
 *     ??E?$span_iterator@V?$span@PEAVCColorGradientStop@@$0?0@gsl@@$0A@@details@gsl@@QEAAAEAV012@XZ @ 0x180005ED4 (--E-$span_iterator@V-$span@PEAVCColorGradientStop@@$0-0@gsl@@$0A@@details@gsl@@QEAAAEAV012@XZ.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C766C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memmove_0 @ 0x1800F0087 (memmove_0.c)
 *     ?_Change_array@?$vector@HV?$allocator@H@std@@@std@@AEAAXQEAH_K1@Z @ 0x180149464 (-_Change_array@-$vector@HV-$allocator@H@std@@@std@@AEAAXQEAH_K1@Z.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x180152C70 (-terminate@details@gsl@@YAXXZ.c)
 *     ??9details@gsl@@YA_NV?$span_iterator@V?$span@$$CBUKeyframeData@@$0?0@gsl@@$0A@@01@0@Z @ 0x1801689A4 (--9details@gsl@@YA_NV-$span_iterator@V-$span@$$CBUKeyframeData@@$0-0@gsl@@$0A@@01@0@Z.c)
 *     ??D?$span_iterator@V?$span@$$CBM$0?0@gsl@@$0A@@details@gsl@@QEBAAEBMXZ @ 0x1801B31A4 (--D-$span_iterator@V-$span@$$CBM$0-0@gsl@@$0A@@details@gsl@@QEBAAEBMXZ.c)
 *     ?_Calculate_growth@?$vector@MV?$allocator@M@std@@@std@@AEBA_K_K@Z @ 0x1801B3FE0 (-_Calculate_growth@-$vector@MV-$allocator@M@std@@@std@@AEBA_K_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

char __fastcall std::vector<float>::_Insert_range<gsl::details::span_iterator<gsl::span<float const,-1>,0>>(
        __int64 a1,
        _DWORD *a2,
        __int128 *a3,
        __int128 *a4)
{
  _DWORD *v4; // rdi
  __int128 v5; // xmm0
  __int64 v6; // rax
  char v9; // r12
  unsigned __int64 v10; // rbx
  __int64 v11; // r15
  __int64 v12; // r14
  __int64 v13; // r14
  SIZE_T v14; // rcx
  unsigned __int64 v15; // r9
  char *v16; // r14
  char *v17; // rdi
  __int128 v18; // xmm1
  char *v19; // rcx
  const void *v20; // rdx
  size_t v21; // r8
  __int64 v22; // r15
  __int64 v23; // r12
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int64 v28; // [rsp+20h] [rbp-40h]
  __int128 i; // [rsp+30h] [rbp-30h] BYREF
  __int128 v30; // [rsp+40h] [rbp-20h] BYREF
  __int128 v31; // [rsp+50h] [rbp-10h] BYREF
  void *retaddr; // [rsp+98h] [rbp+38h]
  unsigned __int64 v35; // [rsp+B8h] [rbp+58h]

  v4 = a2;
  v5 = *a3;
  v6 = *(_QWORD *)a3;
  i = *a4;
  if ( (_QWORD)i != v6 )
  {
    gsl::details::terminate((gsl::details *)a1);
    __debugbreak();
  }
  v9 = 1;
  v10 = *((_QWORD *)&i + 1) - *((_QWORD *)&v5 + 1);
  v11 = ((__int64)a2 - *(_QWORD *)a1) >> 2;
  if ( *((_QWORD *)&i + 1) - *((_QWORD *)&v5 + 1) == 1LL && a2 == *(_DWORD **)(a1 + 8) || (v9 = 0, v10) )
  {
    v12 = *(_QWORD *)(a1 + 8);
    if ( v10 <= (*(_QWORD *)(a1 + 16) - v12) >> 2 )
    {
      v22 = v12 - (_QWORD)a2;
      v23 = v10;
      if ( v10 >= (v12 - (__int64)a2) >> 2 )
      {
        memmove_0(&a2[v23], a2, v12 - (_QWORD)a2);
        v25 = *a4;
        *(_QWORD *)(a1 + 8) = (char *)&v4[v23] + v22;
        v31 = v25;
        v26 = *a3;
        for ( i = *a3; ; v26 = i )
        {
          v30 = v26;
          LOBYTE(v6) = gsl::details::operator!=(&v30, &v31);
          if ( !(_BYTE)v6 )
            break;
          *v4++ = *(_DWORD *)gsl::details::span_iterator<gsl::span<float const,-1>,0>::operator*(&i);
          gsl::details::span_iterator<gsl::span<CColorGradientStop *,-1>,0>::operator++((gsl::details *)&i);
        }
      }
      else
      {
        memmove_0(*(void **)(a1 + 8), (const void *)(v12 - v23 * 4), 4 * v10);
        *(_QWORD *)(a1 + 8) = v23 * 4 + v12;
        memmove_0(&v4[v10], v4, v12 + -4LL * v10 - (_QWORD)v4);
        v31 = *a4;
        v24 = *a3;
        for ( i = *a3; ; v24 = i )
        {
          v30 = v24;
          LOBYTE(v6) = gsl::details::operator!=(&v30, &v31);
          if ( !(_BYTE)v6 )
            break;
          *v4++ = *(_DWORD *)gsl::details::span_iterator<gsl::span<float const,-1>,0>::operator*(&i);
          gsl::details::span_iterator<gsl::span<CColorGradientStop *,-1>,0>::operator++((gsl::details *)&i);
        }
      }
    }
    else
    {
      v13 = (v12 - *(_QWORD *)a1) >> 2;
      if ( v10 > 0x3FFFFFFFFFFFFFFFLL - v13 )
        ModuleFailFastForHRESULT(2147483659LL, retaddr);
      v28 = v13 + v10;
      v35 = std::vector<float>::_Calculate_growth(a1, v13 + v10);
      v14 = 4 * v35;
      if ( v35 > v15 )
        v14 = -1LL;
      v16 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(v14);
      v30 = *a4;
      v17 = &v16[4 * v11];
      v18 = *a3;
      for ( i = *a3; ; v18 = i )
      {
        v31 = v18;
        if ( !gsl::details::operator!=(&v31, &v30) )
          break;
        *(_DWORD *)v17 = *(_DWORD *)gsl::details::span_iterator<gsl::span<float const,-1>,0>::operator*(&i);
        v17 += 4;
        gsl::details::span_iterator<gsl::span<CColorGradientStop *,-1>,0>::operator++((gsl::details *)&i);
      }
      v19 = v16;
      v20 = *(const void **)a1;
      if ( v9 )
      {
        v21 = *(_QWORD *)(a1 + 8) - (_QWORD)v20;
      }
      else
      {
        memmove_0(v16, v20, (size_t)a2 - *(_QWORD *)a1);
        v21 = *(_QWORD *)(a1 + 8) - (_QWORD)a2;
        v19 = &v16[4 * v11 + 4 * v10];
        v20 = a2;
      }
      memmove_0(v19, v20, v21);
      LOBYTE(v6) = std::vector<int>::_Change_array(a1, (__int64)v16, v28, v35);
    }
  }
  return v6;
}
