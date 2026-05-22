/*
 * XREFs of ?_Growmap@?$deque@USubdivision@AverageHapticsFilter@SpatialInteractions@Internal@Windows@@V?$allocator@USubdivision@AverageHapticsFilter@SpatialInteractions@Internal@Windows@@@std@@@std@@IEAAX_K@Z @ 0x180128EF8
 * Callers:
 *     ?push_back@?$deque@USubdivision@AverageHapticsFilter@SpatialInteractions@Internal@Windows@@V?$allocator@USubdivision@AverageHapticsFilter@SpatialInteractions@Internal@Windows@@@std@@@std@@QEAAX$$QEAUSubdivision@AverageHapticsFilter@SpatialInteractions@Internal@Windows@@@Z @ 0x180128D14 (-push_back@-$deque@USubdivision@AverageHapticsFilter@SpatialInteractions@Internal@Windows@@V-$al.c)
 * Callees:
 *     ?_Xlen@?$deque@V?$shared_ptr@VAsynchronousWorkItem@ButtonProcessor@@@std@@V?$allocator@V?$shared_ptr@VAsynchronousWorkItem@ButtonProcessor@@@std@@@2@@std@@IEBAXXZ @ 0x1800B5678 (-_Xlen@-$deque@V-$shared_ptr@VAsynchronousWorkItem@ButtonProcessor@@@std@@V-$allocator@V-$shared.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18012C18C (--2@YAPEAX_K@Z.c)
 *     memmove_0 @ 0x18012DB6B (memmove_0.c)
 */

void __fastcall std::deque<Windows::Internal::SpatialInteractions::AverageHapticsFilter::Subdivision>::_Growmap(
        _QWORD *a1)
{
  unsigned __int64 v2; // rdx
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // r14
  unsigned __int64 v5; // r12
  size_t v6; // rax
  size_t v7; // rcx
  void *v8; // rax
  const struct std::nothrow_t *v9; // rdx
  char *v10; // rcx
  _QWORD *v11; // rbp
  __int64 v12; // r15
  size_t v13; // rbx
  const void *v14; // rdx
  char *v15; // rbx
  size_t v16; // r8
  char *v17; // rcx
  char *v18; // rcx
  char *v19; // r8

  v2 = 1LL;
  v3 = a1[2];
  if ( v3 )
    v2 = v3;
  while ( 1 )
  {
    v4 = v2 - v3;
    if ( v2 != v3 && v2 >= 8 )
      break;
    if ( 0xAAAAAAAAAAAAAAALL - v2 < v2 )
      std::deque<std::shared_ptr<ButtonProcessor::AsynchronousWorkItem>>::_Xlen();
    v2 *= 2LL;
  }
  v5 = a1[3];
  v6 = 8 * v2;
  if ( v2 > 0x1FFFFFFFFFFFFFFFLL )
    v6 = -1LL;
  if ( v6 < 0x1000 )
  {
    if ( v6 )
      v11 = operator new(v6);
    else
      v11 = 0LL;
  }
  else
  {
    v7 = v6 + 39;
    if ( v6 + 39 < v6 )
      v7 = -1LL;
    v8 = operator new(v7);
    if ( !v8 )
      goto LABEL_26;
    v11 = (_QWORD *)(((unsigned __int64)v8 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
    *(v11 - 1) = v8;
  }
  v12 = 8 * v5;
  v13 = 8LL * a1[2] - 8 * v5;
  memmove_0(&v11[v5], (const void *)(a1[1] + 8 * v5), v13);
  v14 = (const void *)a1[1];
  v15 = (char *)&v11[v5] + v13;
  if ( v5 > v4 )
  {
    memmove_0(v15, v14, 8 * v4);
    memmove_0(v11, (const void *)(8 * v4 + a1[1]), v12 - 8 * v4);
    v17 = (char *)v11 + v12 - 8 * v4;
    v16 = 8 * v4;
  }
  else
  {
    memmove_0(v15, v14, 8 * v5);
    memset_0(&v15[v12], 0, 8 * (v4 - v5));
    v16 = 8 * v5;
    v17 = (char *)v11;
  }
  memset_0(v17, 0, v16);
  v18 = (char *)a1[1];
  if ( v18 )
  {
    v9 = (const struct std::nothrow_t *)(8LL * a1[2]);
    if ( (unsigned __int64)v9 < 0x1000 )
    {
LABEL_24:
      operator delete(v18, v9);
      goto LABEL_25;
    }
    v19 = (char *)*((_QWORD *)v18 - 1);
    v9 = (const struct std::nothrow_t *)((char *)v9 + 39);
    v10 = (char *)(v18 - v19);
    if ( (unsigned __int64)(v10 - 8) <= 0x1F )
    {
      v18 = v19;
      goto LABEL_24;
    }
LABEL_26:
    _o__invalid_parameter_noinfo_noreturn(v10, v9);
    __debugbreak();
  }
LABEL_25:
  a1[1] = v11;
  a1[2] += v4;
}
