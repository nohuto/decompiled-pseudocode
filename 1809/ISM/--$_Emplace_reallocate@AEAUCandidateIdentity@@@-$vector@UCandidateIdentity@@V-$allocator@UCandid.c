/*
 * XREFs of ??$_Emplace_reallocate@AEAUCandidateIdentity@@@?$vector@UCandidateIdentity@@V?$allocator@UCandidateIdentity@@@std@@@std@@QEAAPEAUCandidateIdentity@@QEAU2@AEAU2@@Z @ 0x1800CC218
 * Callers:
 *     ?HitTest@Edges@@QEAA_NKKPEBUD2D_VECTOR_2F@@PEAPEAV?$vector@UCandidateIdentity@@V?$allocator@UCandidateIdentity@@@std@@@std@@@Z @ 0x1800CB794 (-HitTest@Edges@@QEAA_NKKPEBUD2D_VECTOR_2F@@PEAPEAV-$vector@UCandidateIdentity@@V-$allocator@UCan.c)
 * Callees:
 *     ?_Xlength@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@CAXXZ @ 0x180008CD8 (-_Xlength@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContext.c)
 *     ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x1800278A4 (--1-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x18004B594 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18012C18C (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<CandidateIdentity>::_Emplace_reallocate<CandidateIdentity &>(
        char **a1,
        char *a2,
        __int64 a3)
{
  __int64 v6; // r15
  __int64 v7; // rdx
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  size_t v11; // rax
  size_t v12; // rcx
  void *v13; // rax
  unsigned __int64 v14; // rdx
  __int64 v15; // rcx
  _QWORD *v16; // rdi
  _QWORD *v17; // r15
  __int64 v18; // rcx
  char *v19; // r8
  char *v20; // rcx
  _QWORD *v21; // rdx
  signed __int64 v22; // rcx
  __int64 v23; // r15
  char *v24; // rbx
  char *v25; // r14
  _QWORD *v27; // rdx
  signed __int64 v28; // rcx
  _QWORD *v29; // rcx
  __int64 v30; // rbx
  __int64 v31; // rcx
  __int64 v32; // [rsp+20h] [rbp-58h]
  __int64 v33; // [rsp+28h] [rbp-50h]
  __int64 v34; // [rsp+80h] [rbp+8h]

  v6 = (a2 - *a1) / 40;
  v7 = (a1[1] - *a1) / 40;
  if ( v7 == 0x666666666666666LL )
    std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Xlength();
  v8 = v7 + 1;
  v9 = (a1[2] - *a1) / 40;
  if ( v9 <= 0x666666666666666LL - (v9 >> 1) )
  {
    v10 = v9 + (v9 >> 1);
    if ( v10 < v8 )
      v10 = v8;
  }
  else
  {
    v10 = v8;
  }
  v32 = v10;
  v11 = 40 * v10;
  v33 = 5 * v10;
  if ( v10 > 0x666666666666666LL )
    v11 = -1LL;
  if ( v11 < 0x1000 )
  {
    if ( v11 )
      v16 = operator new(v11);
    else
      v16 = 0LL;
  }
  else
  {
    v12 = v11 + 39;
    if ( v11 + 39 < v11 )
      v12 = -1LL;
    v13 = operator new(v12);
    if ( !v13 )
      goto LABEL_39;
    v16 = (_QWORD *)(((unsigned __int64)v13 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
    *(v16 - 1) = v13;
  }
  v34 = 40 * v6;
  v17 = &v16[5 * v6];
  try
  {
    std::wstring::wstring(v17, a3);
  }
  catch ( ... )
  {
    std::vector<CandidateIdentity>::_Destroy(v18, (__int64)(v17 + 5), (__int64)(v17 + 5));
    std::allocator<CandidateIdentity>::deallocate(v31, v16, v32);
    throw;
  }
  *((_DWORD *)v17 + 8) = *(_DWORD *)(a3 + 32);
  v19 = a1[1];
  v20 = *a1;
  if ( a2 == v19 )
  {
    if ( v20 != v19 )
    {
      v21 = v16 + 3;
      v22 = v20 - (char *)v16;
      do
      {
        *(v21 - 1) = 0LL;
        *v21 = 0LL;
        *(_OWORD *)(v21 - 3) = *(_OWORD *)((char *)v21 + v22 - 24);
        *(_OWORD *)(v21 - 1) = *(_OWORD *)((char *)v21 + v22 - 8);
        *(_QWORD *)((char *)v21 + v22 - 8) = 0LL;
        *(_QWORD *)((char *)v21 + v22) = 7LL;
        *(_WORD *)((char *)v21 + v22 - 24) = 0;
        *((_DWORD *)v21 + 2) = *(_DWORD *)((char *)v21 + v22 + 8);
        v21 += 5;
      }
      while ( (char *)v21 + v22 - 24 != v19 );
    }
LABEL_21:
    v23 = v34;
    goto LABEL_22;
  }
  if ( v20 != a2 )
  {
    v27 = v16 + 3;
    v28 = v20 - (char *)v16;
    do
    {
      *(v27 - 1) = 0LL;
      *v27 = 0LL;
      *(_OWORD *)(v27 - 3) = *(_OWORD *)((char *)v27 + v28 - 24);
      *(_OWORD *)(v27 - 1) = *(_OWORD *)((char *)v27 + v28 - 8);
      *(_QWORD *)((char *)v27 + v28 - 8) = 0LL;
      *(_QWORD *)((char *)v27 + v28) = 7LL;
      *(_WORD *)((char *)v27 + v28 - 24) = 0;
      *((_DWORD *)v27 + 2) = *(_DWORD *)((char *)v27 + v28 + 8);
      v27 += 5;
    }
    while ( (char *)v27 + v28 - 24 != a2 );
    v19 = a1[1];
  }
  if ( a2 == v19 )
    goto LABEL_21;
  v29 = v17 + 8;
  v23 = v34;
  v30 = &a2[-v34] - (char *)v16;
  do
  {
    *(v29 - 1) = 0LL;
    *v29 = 0LL;
    *(_OWORD *)(v29 - 3) = *(_OWORD *)((char *)v29 + v30 - 64);
    *(_OWORD *)(v29 - 1) = *(_OWORD *)((char *)v29 + v30 - 48);
    *(_QWORD *)((char *)v29 + v30 - 48) = 0LL;
    *(_QWORD *)((char *)v29 + v30 - 40) = 7LL;
    *(_WORD *)((char *)v29 + v30 - 64) = 0;
    *((_DWORD *)v29 + 2) = *(_DWORD *)((char *)v29 + v30 - 32);
    v29 += 5;
  }
  while ( (char *)v29 + v30 - 64 != v19 );
LABEL_22:
  v24 = *a1;
  if ( *a1 )
  {
    v25 = a1[1];
    if ( v24 != v25 )
    {
      do
      {
        std::wstring::~wstring((__int64)v24);
        v24 += 40;
      }
      while ( v24 != v25 );
      v24 = *a1;
    }
    v14 = 40 * ((a1[2] - v24) / 40);
    if ( v14 < 0x1000 )
      goto LABEL_29;
    v14 += 39LL;
    v15 = *((_QWORD *)v24 - 1);
    if ( (unsigned __int64)&v24[-v15 - 8] <= 0x1F )
    {
      v24 = (char *)*((_QWORD *)v24 - 1);
LABEL_29:
      operator delete(v24, (const struct std::nothrow_t *)v14);
      goto LABEL_30;
    }
LABEL_39:
    _o__invalid_parameter_noinfo_noreturn(v15, v14);
    __debugbreak();
  }
LABEL_30:
  *a1 = (char *)v16;
  a1[1] = (char *)&v16[5 * v8];
  a1[2] = (char *)&v16[v33];
  return (__int64)&(*a1)[v23];
}
