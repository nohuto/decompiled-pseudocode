/*
 * XREFs of ?_Reallocate_exactly@?$vector@U_GUID@@V?$allocator@U_GUID@@@std@@@std@@AEAAX_K@Z @ 0x180017A28
 * Callers:
 *     ?DoWorkOnGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@$$QEAV?$function@$$A6AJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@Z@std@@@Z @ 0x180015980 (-DoWorkOnGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@$$QEAV-$function@$$A6AJU_GUID@.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180042A84 (--3@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180042E10 (--2@YAPEAX_K@Z.c)
 *     memmove_0 @ 0x180043EBF (memmove_0.c)
 */

char *__fastcall std::vector<_GUID>::_Reallocate_exactly(__int64 a1, unsigned __int64 a2)
{
  __int64 v3; // rsi
  __int64 v4; // r14
  size_t v5; // rax
  __int64 v6; // r8
  size_t v7; // rcx
  void *v8; // rax
  unsigned __int64 v9; // rdx
  char *v10; // rcx
  _QWORD *v11; // rbx
  __int64 v12; // rcx
  char *v13; // rcx
  char *v14; // r8
  char *result; // rax

  v3 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
  v4 = 2 * a2;
  v5 = 16 * a2;
  v6 = -1LL;
  if ( a2 <= 0xFFFFFFFFFFFFFFFLL )
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
      std::allocator<_GUID>::deallocate(v12, v11, a2);
      throw;
    }
    v13 = *(char **)a1;
    if ( !*(_QWORD *)a1 )
      goto LABEL_16;
    v9 = (*(_QWORD *)(a1 + 16) - (_QWORD)v13) & 0xFFFFFFFFFFFFFFF0uLL;
    if ( v9 < 0x1000 )
      goto LABEL_15;
    v9 += 39LL;
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
  *(_QWORD *)(a1 + 8) = (char *)v11 + (v3 & 0xFFFFFFFFFFFFFFF0uLL);
  result = (char *)&v11[v4];
  *(_QWORD *)(a1 + 16) = &v11[v4];
  return result;
}
