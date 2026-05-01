/*
 * XREFs of ?_Reallocate_exactly@?$vector@U_GUID@@V?$allocator@U_GUID@@@std@@@std@@AEAAX_K@Z @ 0x180017708
 * Callers:
 *     ?DoWorkOnGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@$$QEAV?$function@$$A6AJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@Z@std@@@Z @ 0x18001568C (-DoWorkOnGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@$$QEAV-$function@$$A6AJU_GUID@.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180042DE4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800431A0 (--2@YAPEAX_K@Z.c)
 *     memmove_0 @ 0x18004423F (memmove_0.c)
 */

char *__fastcall std::vector<_GUID>::_Reallocate_exactly(__int64 a1, unsigned __int64 a2)
{
  __int64 v3; // rsi
  __int64 v4; // r14
  size_t v5; // rax
  __int64 v6; // r8
  size_t v7; // rcx
  void *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  _QWORD *v11; // rbx
  _QWORD *v12; // rax
  char *v13; // rcx
  const struct std::nothrow_t *v14; // rdx
  char *v15; // r8
  char *v16; // rcx
  char *result; // rax

  v3 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
  v4 = 2 * a2;
  v5 = 16 * a2;
  v6 = -1LL;
  if ( a2 > 0xFFFFFFFFFFFFFFFLL )
LABEL_2:
    v5 = v6;
  if ( v5 < 0x1000 )
  {
    if ( v5 )
    {
      v12 = operator new(v5);
      v11 = v12;
    }
    else
    {
      v11 = 0LL;
    }
  }
  else
  {
    v7 = v5 + 39;
    if ( v5 + 39 < v5 )
      v7 = v6;
    v8 = operator new(v7);
    if ( !v8 )
    {
      _o__invalid_parameter_noinfo_noreturn(v10, v9);
      __debugbreak();
    }
    v11 = (_QWORD *)(((unsigned __int64)v8 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
    *(v11 - 1) = v8;
  }
  try
  {
    memmove_0(v11, *(const void **)a1, *(_QWORD *)(a1 + 8) - *(_QWORD *)a1);
    v13 = *(char **)a1;
    if ( *(_QWORD *)a1 )
    {
      v14 = (const struct std::nothrow_t *)((*(_QWORD *)(a1 + 16) - (_QWORD)v13) & 0xFFFFFFFFFFFFFFF0uLL);
      if ( (unsigned __int64)v14 >= 0x1000 )
      {
        v14 = (const struct std::nothrow_t *)((char *)v14 + 39);
        v15 = (char *)*((_QWORD *)v13 - 1);
        v16 = (char *)(v13 - v15);
        if ( (unsigned __int64)(v16 - 8) > 0x1F )
        {
          _o__invalid_parameter_noinfo_noreturn(v16, v14);
          goto LABEL_2;
        }
        v13 = v15;
      }
      operator delete(v13, v14);
    }
    *(_QWORD *)a1 = v11;
    *(_QWORD *)(a1 + 8) = (char *)v11 + (v3 & 0xFFFFFFFFFFFFFFF0uLL);
    result = (char *)&v11[v4];
    *(_QWORD *)(a1 + 16) = &v11[v4];
  }
  catch ( ... )
  {
    std::allocator<_GUID>::deallocate(v13, v11, a2);
    throw;
  }
  return result;
}
