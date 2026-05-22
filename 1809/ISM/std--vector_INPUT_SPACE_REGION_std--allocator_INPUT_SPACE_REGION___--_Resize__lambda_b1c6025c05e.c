/*
 * XREFs of std::vector_INPUT_SPACE_REGION_std::allocator_INPUT_SPACE_REGION___::_Resize__lambda_b1c6025c05e84eb9990eaa1e3a85a290___ @ 0x18010764C
 * Callers:
 *     ?OnSystemContextNotification@DWMCursorBroker@@UEAAJPEAUSystemContextMessage@@@Z @ 0x1801073A0 (-OnSystemContextNotification@DWMCursorBroker@@UEAAJPEAUSystemContextMessage@@@Z.c)
 * Callees:
 *     ?_Xlength@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@CAXXZ @ 0x180008CD8 (-_Xlength@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContext.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18012C18C (--2@YAPEAX_K@Z.c)
 *     memmove_0 @ 0x18012DB6B (memmove_0.c)
 */

__int64 __fastcall std::vector_INPUT_SPACE_REGION_std::allocator_INPUT_SPACE_REGION___::_Resize__lambda_b1c6025c05e84eb9990eaa1e3a85a290___(
        __int64 a1,
        unsigned __int64 a2)
{
  char *v4; // r15
  unsigned __int64 v5; // r14
  __int64 v6; // rcx
  __int64 result; // rax
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rax
  __int64 v11; // r15
  size_t v12; // rdx
  size_t v13; // rcx
  void *v14; // rax
  unsigned __int64 v15; // rdx
  __int64 v16; // rcx
  _QWORD *v17; // rbx
  __int64 v18; // rcx
  void *v19; // r8
  unsigned __int64 v20; // rdi
  __int64 v21; // [rsp+60h] [rbp+8h]

  v4 = *(char **)(a1 + 8);
  v5 = (__int64)&v4[-*(_QWORD *)a1] / 84;
  v6 = *(_QWORD *)(a1 + 16) - *(_QWORD *)a1;
  result = (unsigned __int64)(v6 + ((unsigned __int128)(v6 * (__int128)(__int64)0xC30C30C30C30C30DuLL) >> 64)) >> 63;
  v8 = v6 / 84;
  if ( a2 > v6 / 84 )
  {
    if ( a2 > 0x30C30C30C30C30CLL )
      std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Xlength();
    v9 = v8 >> 1;
    if ( v8 <= 0x30C30C30C30C30CLL - (v8 >> 1) )
    {
      v10 = v9 + v8;
      if ( v9 + v8 < a2 )
        v10 = a2;
    }
    else
    {
      v10 = a2;
    }
    v21 = v10;
    v11 = 84 * v10;
    v12 = 84 * v10;
    if ( v10 > 0x30C30C30C30C30CLL )
      v12 = -1LL;
    if ( v12 < 0x1000 )
    {
      if ( v12 )
        v17 = operator new(v12);
      else
        v17 = 0LL;
    }
    else
    {
      v13 = v12 + 39;
      if ( v12 + 39 < v12 )
        v13 = -1LL;
      v14 = operator new(v13);
      if ( !v14 )
        goto LABEL_26;
      v17 = (_QWORD *)(((unsigned __int64)v14 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
      *(v17 - 1) = v14;
    }
    try
    {
      if ( a2 != v5 )
        memset_0((char *)v17 + 84 * v5, 0, 84 * (a2 - v5));
      memmove_0(v17, *(const void **)a1, *(_QWORD *)(a1 + 8) - *(_QWORD *)a1);
    }
    catch ( ... )
    {
      std::allocator<INPUT_SPACE_REGION>::deallocate(v18, v17, v21);
      throw;
    }
    v19 = *(void **)a1;
    if ( !*(_QWORD *)a1 )
      goto LABEL_25;
    v15 = 84 * ((*(_QWORD *)(a1 + 16) - (_QWORD)v19) / 84LL);
    if ( v15 < 0x1000 )
    {
LABEL_24:
      operator delete(v19, (const struct std::nothrow_t *)v15);
LABEL_25:
      *(_QWORD *)a1 = v17;
      *(_QWORD *)(a1 + 8) = (char *)v17 + 84 * a2;
      result = (__int64)v17 + v11;
      *(_QWORD *)(a1 + 16) = (char *)v17 + v11;
      return result;
    }
    v15 += 39LL;
    v16 = *((_QWORD *)v19 - 1);
    if ( (unsigned __int64)v19 - v16 - 8 <= 0x1F )
    {
      v19 = (void *)*((_QWORD *)v19 - 1);
      goto LABEL_24;
    }
LABEL_26:
    _o__invalid_parameter_noinfo_noreturn(v16, v15);
    __debugbreak();
  }
  if ( a2 <= v5 )
  {
    if ( a2 != v5 )
    {
      result = *(_QWORD *)a1 + 84 * a2;
      *(_QWORD *)(a1 + 8) = result;
    }
  }
  else
  {
    v20 = a2 - v5;
    if ( v20 )
    {
      result = (__int64)memset_0(v4, 0, 84 * v20);
      v4 += 84 * v20;
    }
    *(_QWORD *)(a1 + 8) = v4;
  }
  return result;
}
