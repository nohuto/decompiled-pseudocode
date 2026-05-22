/*
 * XREFs of ??$_Emplace_reallocate@AEBUINPUT_SPACE_PAYLOAD@@@?$vector@UINPUT_SPACE_PAYLOAD@@V?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@QEAAPEAUINPUT_SPACE_PAYLOAD@@QEAU2@AEBU2@@Z @ 0x18009E4D8
 * Callers:
 *     ?OnInputConfigMessageReceived@InputConfigContextProvider@@IEAAXPEBU_MIT_INPUT_CONFIG_MESSAGE@@@Z @ 0x18009DFF0 (-OnInputConfigMessageReceived@InputConfigContextProvider@@IEAAXPEBU_MIT_INPUT_CONFIG_MESSAGE@@@Z.c)
 * Callees:
 *     ?_Xlength@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@CAXXZ @ 0x180008CD8 (-_Xlength@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContext.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18012C18C (--2@YAPEAX_K@Z.c)
 *     memmove_0 @ 0x18012DB6B (memmove_0.c)
 */

__int64 __fastcall std::vector<INPUT_SPACE_PAYLOAD>::_Emplace_reallocate<INPUT_SPACE_PAYLOAD const &>(
        const void **a1,
        _BYTE *a2,
        __int64 a3)
{
  __int64 v6; // r14
  __int64 v7; // rdx
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  __int64 v11; // r12
  size_t v12; // rax
  size_t v13; // rcx
  void *v14; // rax
  unsigned __int64 v15; // rdx
  __int64 v16; // rcx
  char *v17; // rbx
  __int64 v18; // r14
  _BYTE *v19; // r8
  _BYTE *v20; // rdx
  char *v21; // rcx
  size_t v22; // r8
  __int64 v23; // rcx
  _BYTE *v24; // r8
  __int64 v26; // [rsp+68h] [rbp+10h]

  v6 = (a2 - (_BYTE *)*a1) / 24;
  v7 = ((_BYTE *)a1[1] - (_BYTE *)*a1) / 24;
  if ( v7 == 0xAAAAAAAAAAAAAAALL )
    std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Xlength();
  v8 = v7 + 1;
  v9 = ((_BYTE *)a1[2] - (_BYTE *)*a1) / 24;
  if ( v9 <= 0xAAAAAAAAAAAAAAALL - (v9 >> 1) )
  {
    v10 = v9 + (v9 >> 1);
    if ( v10 < v8 )
      v10 = v8;
  }
  else
  {
    v10 = v8;
  }
  v26 = v10;
  v11 = 24 * v10;
  v12 = 24 * v10;
  if ( v10 > 0xAAAAAAAAAAAAAAALL )
    v12 = -1LL;
  if ( v12 < 0x1000 )
  {
    if ( v12 )
      v17 = (char *)operator new(v12);
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
    v17 = (char *)(((unsigned __int64)v14 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
    *((_QWORD *)v17 - 1) = v14;
  }
  try
  {
    v18 = 3 * v6;
    *(_OWORD *)&v17[8 * v18] = *(_OWORD *)a3;
    *(_QWORD *)&v17[8 * v18 + 16] = *(_QWORD *)(a3 + 16);
    v19 = a1[1];
    v20 = *a1;
    v21 = v17;
    if ( a2 == v19 )
    {
      v22 = v19 - v20;
    }
    else
    {
      memmove_0(v17, v20, a2 - (_BYTE *)*a1);
      v21 = &v17[8 * v18 + 24];
      v22 = (_BYTE *)a1[1] - a2;
      v20 = a2;
    }
    memmove_0(v21, v20, v22);
  }
  catch ( ... )
  {
    std::allocator<INPUT_SPACE_PAYLOAD>::deallocate(v23, v17, v26);
    throw;
  }
  v24 = *a1;
  if ( *a1 )
  {
    v15 = 24 * (((_BYTE *)a1[2] - v24) / 24);
    if ( v15 < 0x1000 )
    {
LABEL_24:
      operator delete(v24, (const struct std::nothrow_t *)v15);
      goto LABEL_25;
    }
    v15 += 39LL;
    v16 = *((_QWORD *)v24 - 1);
    if ( (unsigned __int64)&v24[-v16 - 8] <= 0x1F )
    {
      v24 = (_BYTE *)*((_QWORD *)v24 - 1);
      goto LABEL_24;
    }
LABEL_26:
    _o__invalid_parameter_noinfo_noreturn(v16, v15);
    __debugbreak();
  }
LABEL_25:
  *a1 = v17;
  a1[1] = &v17[24 * v8];
  a1[2] = &v17[v11];
  return (__int64)*a1 + 8 * v18;
}
