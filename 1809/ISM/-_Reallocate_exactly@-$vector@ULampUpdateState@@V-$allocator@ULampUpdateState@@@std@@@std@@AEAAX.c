/*
 * XREFs of ?_Reallocate_exactly@?$vector@ULampUpdateState@@V?$allocator@ULampUpdateState@@@std@@@std@@AEAAX_K@Z @ 0x180076040
 * Callers:
 *     ?ProcessLampState@LampArrayDevice@@AEAAJPEAUViewClientListEntry@1@PEA_N@Z @ 0x180074890 (-ProcessLampState@LampArrayDevice@@AEAAJPEAUViewClientListEntry@1@PEA_N@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18012C18C (--2@YAPEAX_K@Z.c)
 *     memmove_0 @ 0x18012DB6B (memmove_0.c)
 */

char *__fastcall std::vector<LampUpdateState>::_Reallocate_exactly(__int64 a1, unsigned __int64 a2)
{
  __int64 v3; // rsi
  __int64 v4; // r14
  size_t v5; // rax
  __int64 v6; // r8
  size_t v7; // rcx
  void *v8; // rax
  const struct std::nothrow_t *v9; // rdx
  char *v10; // rcx
  _QWORD *v11; // rbx
  __int64 v12; // rcx
  char *v13; // rcx
  char *v14; // r8
  char *result; // rax

  v3 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 3;
  v4 = a2;
  v5 = 8 * a2;
  v6 = -1LL;
  if ( a2 <= 0x1FFFFFFFFFFFFFFFLL )
    goto LABEL_3;
  while ( 1 )
  {
    v5 = v6;
LABEL_3:
    if ( v5 < 0x1000 )
    {
      v11 = v5 ? operator new(v5) : 0LL;
    }
    else
    {
      v7 = v5 + 39;
      if ( v5 + 39 < v5 )
        v7 = v6;
      v8 = operator new(v7);
      if ( !v8 )
        goto LABEL_17;
      v11 = (_QWORD *)(((unsigned __int64)v8 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
      *(v11 - 1) = v8;
    }
    try
    {
      memmove_0(v11, *(const void **)a1, *(_QWORD *)(a1 + 8) - *(_QWORD *)a1);
    }
    catch ( ... )
    {
      std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<enum _Button>>,std::_Iterator_base0>>::deallocate(
        v12,
        v11,
        a2);
      throw;
    }
    v13 = *(char **)a1;
    if ( !*(_QWORD *)a1 )
      goto LABEL_16;
    v9 = (const struct std::nothrow_t *)((*(_QWORD *)(a1 + 16) - (_QWORD)v13) & 0xFFFFFFFFFFFFFFF8uLL);
    if ( (unsigned __int64)v9 < 0x1000 )
      goto LABEL_15;
    v9 = (const struct std::nothrow_t *)((char *)v9 + 39);
    v14 = (char *)*((_QWORD *)v13 - 1);
    v10 = (char *)(v13 - v14);
    if ( (unsigned __int64)(v10 - 8) <= 0x1F )
      break;
LABEL_17:
    _o__invalid_parameter_noinfo_noreturn(v10, v9);
  }
  v13 = v14;
LABEL_15:
  operator delete(v13, v9);
LABEL_16:
  *(_QWORD *)a1 = v11;
  *(_QWORD *)(a1 + 8) = &v11[v3];
  result = (char *)&v11[v4];
  *(_QWORD *)(a1 + 16) = &v11[v4];
  return result;
}
