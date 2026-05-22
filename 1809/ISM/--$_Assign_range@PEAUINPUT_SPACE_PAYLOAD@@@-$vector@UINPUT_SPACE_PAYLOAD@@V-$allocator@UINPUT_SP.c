/*
 * XREFs of ??$_Assign_range@PEAUINPUT_SPACE_PAYLOAD@@@?$vector@UINPUT_SPACE_PAYLOAD@@V?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@AEAAXPEAUINPUT_SPACE_PAYLOAD@@0Uforward_iterator_tag@1@@Z @ 0x18009E6F0
 * Callers:
 *     ?OnInputConfigMessageReceived@InputConfigContextProvider@@IEAAXPEBU_MIT_INPUT_CONFIG_MESSAGE@@@Z @ 0x18009DFF0 (-OnInputConfigMessageReceived@InputConfigContextProvider@@IEAAXPEBU_MIT_INPUT_CONFIG_MESSAGE@@@Z.c)
 * Callees:
 *     ?_Xlength@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@CAXXZ @ 0x180008CD8 (-_Xlength@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContext.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18012C18C (--2@YAPEAX_K@Z.c)
 *     memmove_0 @ 0x18012DB6B (memmove_0.c)
 */

__int64 __fastcall std::vector<INPUT_SPACE_PAYLOAD>::_Assign_range<INPUT_SPACE_PAYLOAD *>(
        __int64 a1,
        char *a2,
        __int64 a3)
{
  _QWORD *v3; // r14
  size_t v6; // r12
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rax
  _QWORD *v13; // rbx
  unsigned __int64 v14; // rdx
  __int64 v15; // rcx
  size_t v16; // rsi
  size_t v17; // rcx
  void *v18; // rax
  _QWORD *v19; // rbx
  __int64 result; // rax
  __int64 v21; // rbx
  char *v22; // rdx
  void *v23; // rbx
  size_t v24; // r15

  v3 = *(_QWORD **)a1;
  v6 = a3 - (_QWORD)a2;
  v8 = (a3 - (__int64)a2) / 24;
  v9 = (*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) / 24LL;
  v10 = (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) / 24LL;
  if ( v8 > v10 )
  {
    if ( v8 <= 0xAAAAAAAAAAAAAAALL )
    {
      v11 = v10 >> 1;
      if ( v10 <= 0xAAAAAAAAAAAAAAALL - (v10 >> 1) )
      {
        v12 = v11 + v10;
        if ( v11 + v10 < v8 )
          v12 = v8;
        v8 = v12;
      }
      v13 = 0LL;
      if ( v3 )
      {
        v14 = 24 * v10;
        if ( v14 >= 0x1000 )
        {
          v15 = *(v3 - 1);
          v14 += 39LL;
          if ( (unsigned __int64)v3 - v15 - 8 > 0x1F )
            goto LABEL_18;
          v3 = (_QWORD *)*(v3 - 1);
        }
        operator delete(v3, (const struct std::nothrow_t *)v14);
      }
      *(_QWORD *)a1 = 0LL;
      *(_QWORD *)(a1 + 8) = 0LL;
      *(_QWORD *)(a1 + 16) = 0LL;
      if ( !v8 )
        goto LABEL_23;
      if ( v8 <= 0xAAAAAAAAAAAAAAALL )
      {
        v16 = 24 * v8;
        if ( v16 < 0x1000 )
        {
          if ( v16 )
            v13 = operator new(v16);
        }
        else
        {
          v17 = v16 + 39;
          if ( v16 + 39 < v16 )
            v17 = -1LL;
          v18 = operator new(v17);
          if ( !v18 )
          {
LABEL_18:
            _o__invalid_parameter_noinfo_noreturn(v15, v14);
            __debugbreak();
          }
          v13 = (_QWORD *)(((unsigned __int64)v18 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
          *(v13 - 1) = v18;
        }
        *(_QWORD *)a1 = v13;
        *(_QWORD *)(a1 + 8) = v13;
        *(_QWORD *)(a1 + 16) = v16 + *(_QWORD *)a1;
LABEL_23:
        v19 = *(_QWORD **)a1;
        memmove_0(*(void **)a1, a2, v6);
        result = (__int64)v19 + v6;
LABEL_26:
        *(_QWORD *)(a1 + 8) = result;
        return result;
      }
    }
    std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Xlength();
  }
  if ( v8 > v9 )
  {
    v21 = 24 * v9;
    memmove_0(v3, a2, 24 * v9);
    v22 = &a2[v21];
    v23 = *(void **)(a1 + 8);
    v24 = a3 - (_QWORD)v22;
    memmove_0(v23, v22, v24);
    result = (__int64)v23 + v24;
    goto LABEL_26;
  }
  memmove_0(v3, a2, v6);
  result = 3 * v8;
  *(_QWORD *)(a1 + 8) = &v3[3 * v8];
  return result;
}
