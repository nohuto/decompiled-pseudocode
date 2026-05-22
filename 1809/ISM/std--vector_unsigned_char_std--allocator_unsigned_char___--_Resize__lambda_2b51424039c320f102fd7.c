/*
 * XREFs of std::vector_unsigned_char_std::allocator_unsigned_char___::_Resize__lambda_2b51424039c320f102fd798e073c89b2___ @ 0x18011C228
 * Callers:
 *     ?Allocate@VariableSizeStructWrapperBase@Holographic@Internal@Windows@@QEAAJ_K@Z @ 0x180109EE0 (-Allocate@VariableSizeStructWrapperBase@Holographic@Internal@Windows@@QEAAJ_K@Z.c)
 *     ?SetValue@PropertyCache@Holographic@Internal@Windows@@QEAA_NAEBU_GUID@@PEBX_K@Z @ 0x18011047C (-SetValue@PropertyCache@Holographic@Internal@Windows@@QEAA_NAEBU_GUID@@PEBX_K@Z.c)
 *     ?SetValue@NodePropertyCache@Holographic@Internal@Windows@@QEAA_NAEBUSPATIAL_NODE_ID@@AEBU_GUID@@PEBX_K@Z @ 0x180110804 (-SetValue@NodePropertyCache@Holographic@Internal@Windows@@QEAA_NAEBUSPATIAL_NODE_ID@@AEBU_GUID@@.c)
 *     ?StartIo@V2PropertyRequest@Holographic@Internal@Windows@@QEAAXXZ @ 0x180110DE8 (-StartIo@V2PropertyRequest@Holographic@Internal@Windows@@QEAAXXZ.c)
 *     ?HandleCompletion@V2PropertyRequest@Holographic@Internal@Windows@@QEAAXJ_K@Z @ 0x180110FF8 (-HandleCompletion@V2PropertyRequest@Holographic@Internal@Windows@@QEAAXJ_K@Z.c)
 * Callees:
 *     ?_Xlength@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@CAXXZ @ 0x180008CD8 (-_Xlength@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContext.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18012C18C (--2@YAPEAX_K@Z.c)
 *     memmove_0 @ 0x18012DB6B (memmove_0.c)
 */

unsigned __int64 __fastcall std::vector_unsigned_char_std::allocator_unsigned_char___::_Resize__lambda_2b51424039c320f102fd798e073c89b2___(
        const void **a1,
        unsigned __int64 a2)
{
  char *v4; // rcx
  unsigned __int64 v5; // r15
  unsigned __int64 result; // rax
  unsigned __int64 v7; // rdx
  const struct std::nothrow_t *v8; // rbx
  size_t v9; // rcx
  void *v10; // rax
  const struct std::nothrow_t *v11; // rdx
  char *v12; // rcx
  _QWORD *v13; // rdi
  char *v14; // rsi
  __int64 v15; // rcx
  char *v16; // rcx
  char *v17; // r8
  char *v18; // rbx

  v4 = (char *)*a1;
  v5 = (_BYTE *)a1[1] - v4;
  result = (_BYTE *)a1[2] - v4;
  if ( a2 > result )
  {
    if ( a2 > 0x7FFFFFFFFFFFFFFFLL )
      std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Xlength();
    v7 = result >> 1;
    if ( result <= 0x7FFFFFFFFFFFFFFFLL - (result >> 1) )
    {
      v8 = (const struct std::nothrow_t *)(v7 + result);
      if ( v7 + result < a2 )
        v8 = (const struct std::nothrow_t *)a2;
    }
    else
    {
      v8 = (const struct std::nothrow_t *)a2;
    }
    if ( (unsigned __int64)v8 < 0x1000 )
    {
      if ( v8 )
        v13 = operator new((size_t)v8);
      else
        v13 = 0LL;
    }
    else
    {
      v9 = (size_t)v8 + 39;
      if ( (const struct std::nothrow_t *)((char *)v8 + 39) < v8 )
        v9 = -1LL;
      v10 = operator new(v9);
      if ( !v10 )
        goto LABEL_21;
      v13 = (_QWORD *)(((unsigned __int64)v10 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
      *(v13 - 1) = v10;
    }
    try
    {
      v14 = (char *)v13 + a2;
      memset_0((char *)v13 + v5, 0, v14 - ((char *)v13 + v5));
      memmove_0(v13, *a1, (_BYTE *)a1[1] - (_BYTE *)*a1);
    }
    catch ( ... )
    {
      std::allocator<unsigned char>::deallocate(v15, v13, v8);
      throw;
    }
    v16 = (char *)*a1;
    if ( !*a1 )
      goto LABEL_20;
    v11 = (const struct std::nothrow_t *)((_BYTE *)a1[2] - v16);
    if ( (unsigned __int64)v11 < 0x1000 )
    {
LABEL_19:
      operator delete(v16, v11);
LABEL_20:
      *a1 = v13;
      a1[1] = v14;
      result = (unsigned __int64)v8 + (_QWORD)v13;
      a1[2] = (char *)v8 + (_QWORD)v13;
      return result;
    }
    v11 = (const struct std::nothrow_t *)((char *)v11 + 39);
    v17 = (char *)*((_QWORD *)v16 - 1);
    v12 = (char *)(v16 - v17);
    if ( (unsigned __int64)(v12 - 8) <= 0x1F )
    {
      v16 = v17;
      goto LABEL_19;
    }
LABEL_21:
    _o__invalid_parameter_noinfo_noreturn(v12, v11);
    __debugbreak();
  }
  if ( a2 <= v5 )
  {
    if ( a2 != v5 )
    {
      result = (unsigned __int64)&v4[a2];
      a1[1] = &v4[a2];
    }
  }
  else
  {
    v18 = &v4[a2];
    result = (unsigned __int64)memset_0((void *)a1[1], 0, &v4[a2] - (_BYTE *)a1[1]);
    a1[1] = v18;
  }
  return result;
}
