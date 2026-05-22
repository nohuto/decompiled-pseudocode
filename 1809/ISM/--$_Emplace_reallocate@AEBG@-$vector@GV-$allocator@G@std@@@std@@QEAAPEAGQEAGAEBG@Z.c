/*
 * XREFs of ??$_Emplace_reallocate@AEBG@?$vector@GV?$allocator@G@std@@@std@@QEAAPEAGQEAGAEBG@Z @ 0x180066448
 * Callers:
 *     ?OnInvalidateInput@MobileButtonDeviceCollection@@UEAAJPEAX@Z @ 0x1800659C0 (-OnInvalidateInput@MobileButtonDeviceCollection@@UEAAJPEAX@Z.c)
 * Callees:
 *     ?_Xlength@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@CAXXZ @ 0x180008CD8 (-_Xlength@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContext.c)
 *     ?allocate@?$allocator@G@std@@QEAAPEAG_K@Z @ 0x180027A64 (-allocate@-$allocator@G@std@@QEAAPEAG_K@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memmove_0 @ 0x18012DB6B (memmove_0.c)
 */

__int64 __fastcall std::vector<unsigned short>::_Emplace_reallocate<unsigned short const &>(
        char **a1,
        char *a2,
        _WORD *a3)
{
  __int64 v6; // r14
  __int64 v7; // rax
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rax
  __int64 v10; // rcx
  unsigned __int64 v11; // rdi
  _QWORD *v12; // rsi
  char *v13; // r8
  char *v14; // rdx
  char *v15; // rcx
  size_t v16; // r8
  char *v17; // rcx
  const struct std::nothrow_t *v18; // rdx
  char *v19; // r8
  char *v20; // rcx

  v6 = (a2 - *a1) >> 1;
  v7 = (a1[1] - *a1) >> 1;
  if ( v7 == 0x7FFFFFFFFFFFFFFFLL )
    std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Xlength();
  v8 = v7 + 1;
  v9 = (a1[2] - *a1) >> 1;
  v10 = v9 >> 1;
  if ( v9 <= 0x7FFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v11 = v10 + v9;
    if ( v10 + v9 < v8 )
      v11 = v8;
  }
  else
  {
    v11 = v8;
  }
  v12 = std::allocator<unsigned short>::allocate(v10, v11);
  *((_WORD *)v12 + v6) = *a3;
  v13 = a1[1];
  v14 = *a1;
  v15 = (char *)v12;
  if ( a2 == v13 )
  {
    v16 = v13 - v14;
  }
  else
  {
    memmove_0(v12, v14, a2 - *a1);
    v15 = (char *)v12 + 2 * v6 + 2;
    v16 = a1[1] - a2;
    v14 = a2;
  }
  memmove_0(v15, v14, v16);
  v17 = *a1;
  if ( *a1 )
  {
    v18 = (const struct std::nothrow_t *)(2 * ((a1[2] - v17) >> 1));
    if ( (unsigned __int64)v18 >= 0x1000 )
    {
      v18 = (const struct std::nothrow_t *)((char *)v18 + 39);
      v19 = (char *)*((_QWORD *)v17 - 1);
      v20 = (char *)(v17 - v19);
      if ( (unsigned __int64)(v20 - 8) > 0x1F )
      {
        _o__invalid_parameter_noinfo_noreturn(v20, v18);
        __debugbreak();
      }
      v17 = v19;
    }
    operator delete(v17, v18);
  }
  *a1 = (char *)v12;
  a1[1] = (char *)v12 + 2 * v8;
  a1[2] = (char *)v12 + 2 * v11;
  return (__int64)&(*a1)[2 * v6];
}
