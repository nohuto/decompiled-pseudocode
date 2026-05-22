/*
 * XREFs of ??$_Emplace_reallocate@AEBUContextualProcessorMetadata@ContextualProcessorBuffer@@@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@QEAAPEAUContextualProcessorMetadata@ContextualProcessorBuffer@@QEAU23@AEBU23@@Z @ 0x1800C4780
 * Callers:
 *     ?AddProcessor@ContextualProcessorBuffer@@QEAAJPEAUIContextualProcessor@@UContextualProcessorInitialState@@@Z @ 0x1800C306C (-AddProcessor@ContextualProcessorBuffer@@QEAAJPEAUIContextualProcessor@@UContextualProcessorInit.c)
 * Callees:
 *     ?_Xlength@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@CAXXZ @ 0x180008CD8 (-_Xlength@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContext.c)
 *     ?_Change_array@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@AEAAXQEAUContextualProcessorMetadata@ContextualProcessorBuffer@@_K1@Z @ 0x1800C4B34 (-_Change_array@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UCo.c)
 *     ??2@YAPEAX_K@Z @ 0x18012C18C (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Emplace_reallocate<ContextualProcessorBuffer::ContextualProcessorMetadata const &>(
        char **a1,
        char *a2,
        __int64 *a3)
{
  __int64 v6; // r15
  __int64 v7; // rdx
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // r14
  size_t v12; // rax
  size_t v13; // rcx
  void *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  _QWORD *v17; // rdi
  _QWORD *v18; // r15
  __int64 v19; // rcx
  __int64 v20; // rcx
  char *v21; // r8
  char *v22; // rcx
  _QWORD *v23; // rdx
  signed __int64 v24; // rcx
  _QWORD *v25; // r10
  _QWORD *v26; // r9
  __int64 v27; // r15
  _QWORD *v29; // rdx
  signed __int64 v30; // rcx
  _QWORD *v31; // r9
  _QWORD *v32; // r8
  _QWORD *v33; // rcx
  __int64 v34; // rsi
  _QWORD *v35; // r9
  _QWORD *v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // [rsp+28h] [rbp-40h]
  __int64 v39; // [rsp+70h] [rbp+8h]
  __int64 *v40; // [rsp+88h] [rbp+20h]

  v6 = (a2 - *a1) / 24;
  v7 = (a1[1] - *a1) / 24;
  if ( v7 == 0xAAAAAAAAAAAAAAALL )
    std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Xlength();
  v8 = v7 + 1;
  v38 = v7 + 1;
  v9 = (a1[2] - *a1) / 24;
  v10 = v9 >> 1;
  if ( v9 <= 0xAAAAAAAAAAAAAAALL - (v9 >> 1) )
  {
    v11 = v10 + v9;
    if ( v10 + v9 < v8 )
      v11 = v8;
  }
  else
  {
    v11 = v8;
  }
  v12 = 24 * v11;
  if ( v11 > 0xAAAAAAAAAAAAAAALL )
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
    {
      _o__invalid_parameter_noinfo_noreturn(v16, v15);
      __debugbreak();
    }
    v17 = (_QWORD *)(((unsigned __int64)v14 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
    *(v17 - 1) = v14;
  }
  v39 = 24 * v6;
  v18 = &v17[3 * v6];
  try
  {
    v19 = *a3;
    *v18 = *a3;
    if ( v19 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 8LL))(v19);
    *((_DWORD *)v18 + 2) = *((_DWORD *)a3 + 2);
    *((_DWORD *)v18 + 3) = *((_DWORD *)a3 + 3);
    v20 = a3[2];
    v18[2] = v20;
    if ( v20 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 8LL))(v20);
  }
  catch ( ... )
  {
    std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Destroy(v20, v40, v18 + 3);
    std::allocator<INPUT_SPACE_PAYLOAD>::deallocate(v37, v17, v11);
    throw;
  }
  v21 = a1[1];
  v22 = *a1;
  if ( a2 == v21 )
  {
    if ( v22 != v21 )
    {
      v23 = v17 + 2;
      v24 = v22 - (char *)v17;
      do
      {
        *(v23 - 2) = 0LL;
        v25 = (_QWORD *)((char *)v23 + v24 - 16);
        if ( v23 - 2 != v25 )
        {
          *(v23 - 2) = *v25;
          *v25 = 0LL;
        }
        *((_DWORD *)v23 - 2) = *(_DWORD *)((char *)v23 + v24 - 8);
        *((_DWORD *)v23 - 1) = *(_DWORD *)((char *)v23 + v24 - 4);
        *v23 = 0LL;
        v26 = (_QWORD *)((char *)v23 + v24);
        if ( v23 != (_QWORD *)((char *)v23 + v24) )
        {
          *v23 = *v26;
          *v26 = 0LL;
        }
        v23 += 3;
      }
      while ( (char *)v23 + v24 - 16 != v21 );
    }
LABEL_30:
    v27 = v39;
    goto LABEL_31;
  }
  if ( v22 != a2 )
  {
    v29 = v17 + 2;
    v30 = v22 - (char *)v17;
    do
    {
      *(v29 - 2) = 0LL;
      v31 = (_QWORD *)((char *)v29 + v30 - 16);
      if ( v29 - 2 != v31 )
      {
        *(v29 - 2) = *v31;
        *v31 = 0LL;
      }
      *((_DWORD *)v29 - 2) = *(_DWORD *)((char *)v29 + v30 - 8);
      *((_DWORD *)v29 - 1) = *(_DWORD *)((char *)v29 + v30 - 4);
      *v29 = 0LL;
      v32 = (_QWORD *)((char *)v29 + v30);
      if ( v29 != (_QWORD *)((char *)v29 + v30) )
      {
        *v29 = *v32;
        *v32 = 0LL;
      }
      v29 += 3;
    }
    while ( (char *)v29 + v30 - 16 != a2 );
    v21 = a1[1];
  }
  if ( a2 == v21 )
    goto LABEL_30;
  v33 = v18 + 5;
  v27 = v39;
  v34 = &a2[-v39] - (char *)v17;
  do
  {
    *(v33 - 2) = 0LL;
    v35 = (_QWORD *)((char *)v33 + v34 - 40);
    if ( v33 - 2 != v35 )
    {
      *(v33 - 2) = *v35;
      *v35 = 0LL;
    }
    *((_DWORD *)v33 - 2) = *(_DWORD *)((char *)v33 + v34 - 32);
    *((_DWORD *)v33 - 1) = *(_DWORD *)((char *)v33 + v34 - 28);
    *v33 = 0LL;
    v36 = (_QWORD *)((char *)v33 + v34 - 24);
    if ( v33 != v36 )
    {
      *v33 = *v36;
      *v36 = 0LL;
    }
    v33 += 3;
  }
  while ( (char *)v33 + v34 - 40 != v21 );
LABEL_31:
  std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Change_array(a1, v17, v38, v11, v11);
  return (__int64)&(*a1)[v27];
}
