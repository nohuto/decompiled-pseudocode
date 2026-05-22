/*
 * XREFs of ??$_Emplace_reallocate@UInputSample@ContextualProcessorBuffer@@@?$vector@UInputSample@ContextualProcessorBuffer@@V?$allocator@UInputSample@ContextualProcessorBuffer@@@std@@@std@@QEAAPEAUInputSample@ContextualProcessorBuffer@@QEAU23@$$QEAU23@@Z @ 0x1800C44B0
 * Callers:
 *     ?DeliverInput@ContextualProcessorBuffer@@UEAAJPEAUInputInfo@@@Z @ 0x1800C3220 (-DeliverInput@ContextualProcessorBuffer@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?_Xlength@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@CAXXZ @ 0x180008CD8 (-_Xlength@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContext.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18012C18C (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

unsigned __int64 __fastcall std::vector<ContextualProcessorBuffer::InputSample>::_Emplace_reallocate<ContextualProcessorBuffer::InputSample>(
        const struct std::nothrow_t **a1,
        const struct std::nothrow_t *a2,
        __int64 *a3)
{
  signed __int64 v6; // r13
  __int64 v7; // rax
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rax
  size_t v12; // rdx
  size_t v13; // rcx
  void *v14; // rax
  const struct std::nothrow_t *v15; // rdx
  __int64 v16; // rcx
  char *v17; // rsi
  unsigned __int64 v18; // r13
  char *v19; // rcx
  __int64 v20; // rax
  _QWORD *v21; // rdx
  const struct std::nothrow_t *v22; // rdx
  const struct std::nothrow_t *v23; // rax
  char *v24; // r8
  __int64 v25; // rax
  char *v26; // rdx
  __int64 v27; // rax
  char *v28; // r9
  __int64 v29; // rax
  const struct std::nothrow_t *v30; // rbx
  const struct std::nothrow_t *v31; // r15
  __int64 v32; // rcx
  __int64 v34; // rcx
  __int64 v35; // [rsp+20h] [rbp-48h]
  const struct std::nothrow_t *v36; // [rsp+78h] [rbp+10h]
  __int64 v37; // [rsp+88h] [rbp+20h]

  v6 = a2 - *a1;
  v7 = (a1[1] - *a1) >> 4;
  if ( v7 == 0xFFFFFFFFFFFFFFFLL )
    std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Xlength();
  v8 = v7 + 1;
  v9 = (a1[2] - *a1) >> 4;
  v10 = v9 >> 1;
  if ( v9 <= 0xFFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v11 = v10 + v9;
    if ( v10 + v9 < v8 )
      v11 = v8;
  }
  else
  {
    v11 = v7 + 1;
  }
  v37 = v11;
  v35 = 16 * v11;
  v12 = 16 * v11;
  if ( v11 > 0xFFFFFFFFFFFFFFFLL )
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
      goto LABEL_51;
    v17 = (char *)(((unsigned __int64)v14 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
    *((_QWORD *)v17 - 1) = v14;
  }
  v18 = v6 & 0xFFFFFFFFFFFFFFF0uLL;
  v19 = &v17[v18];
  try
  {
    v20 = *a3;
    *a3 = 0LL;
    *(_QWORD *)v19 = v20;
    v21 = a3 + 1;
    *((_QWORD *)v19 + 1) = 0LL;
    if ( v19 + 8 != (char *)(a3 + 1) )
    {
      *((_QWORD *)v19 + 1) = *v21;
      *v21 = 0LL;
    }
    v36 = (const struct std::nothrow_t *)&v17[v18];
    v22 = a1[1];
    v23 = *a1;
    if ( a2 == v22 )
    {
      if ( v23 != v22 )
      {
        v19 = (char *)v23 + 8;
        v24 = (char *)(v17 - (char *)v23);
        do
        {
          v25 = *((_QWORD *)v19 - 1);
          *((_QWORD *)v19 - 1) = 0LL;
          *(_QWORD *)&v19[(_QWORD)v24 - 8] = v25;
          *(_QWORD *)&v24[(_QWORD)v19] = 0LL;
          if ( &v24[(_QWORD)v19] != v19 )
          {
            *(_QWORD *)&v24[(_QWORD)v19] = *(_QWORD *)v19;
            *(_QWORD *)v19 = 0LL;
          }
          v19 += 16;
        }
        while ( v19 - 8 != (char *)v22 );
      }
    }
    else
    {
      if ( v23 != a2 )
      {
        v19 = (char *)v23 + 8;
        v26 = (char *)(v17 - (char *)v23);
        do
        {
          v27 = *((_QWORD *)v19 - 1);
          *((_QWORD *)v19 - 1) = 0LL;
          *(_QWORD *)&v19[(_QWORD)v26 - 8] = v27;
          *(_QWORD *)&v26[(_QWORD)v19] = 0LL;
          if ( &v26[(_QWORD)v19] != v19 )
          {
            *(_QWORD *)&v26[(_QWORD)v19] = *(_QWORD *)v19;
            *(_QWORD *)v19 = 0LL;
          }
          v19 += 16;
        }
        while ( v19 - 8 != (char *)a2 );
        v22 = a1[1];
      }
      v36 = (const struct std::nothrow_t *)v17;
      if ( a2 != v22 )
      {
        v19 = (char *)a2 + 8;
        v28 = &v17[v18 - (_QWORD)a2 + 16];
        do
        {
          v29 = *((_QWORD *)v19 - 1);
          *((_QWORD *)v19 - 1) = 0LL;
          *(_QWORD *)&v17[v18 - (_QWORD)a2 + 8 + (_QWORD)v19] = v29;
          *(_QWORD *)&v19[(_QWORD)v28] = 0LL;
          if ( &v19[(_QWORD)v28] != v19 )
          {
            *(_QWORD *)&v19[(_QWORD)v28] = *(_QWORD *)v19;
            *(_QWORD *)v19 = 0LL;
          }
          v19 += 16;
        }
        while ( v19 - 8 != (char *)v22 );
      }
    }
  }
  catch ( ... )
  {
    std::vector<ContextualProcessorBuffer::InputSample>::_Destroy(
      (__int64)v19,
      v36,
      (const struct std::nothrow_t *)&v17[v18 + 16]);
    std::allocator<DWMInputRouter::DeviceDisplayMapping>::deallocate(v34, v17, v37);
    throw;
  }
  v30 = *a1;
  if ( *a1 )
  {
    v31 = a1[1];
    if ( v30 != v31 )
    {
      do
      {
        v32 = *((_QWORD *)v30 + 1);
        if ( v32 )
        {
          *((_QWORD *)v30 + 1) = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
        }
        if ( *(_QWORD *)v30 )
          operator delete(*(void **)v30, v22);
        v30 = (const struct std::nothrow_t *)((char *)v30 + 16);
      }
      while ( v30 != v31 );
      v30 = *a1;
    }
    v15 = (const struct std::nothrow_t *)((a1[2] - v30) & 0xFFFFFFFFFFFFFFF0uLL);
    if ( (unsigned __int64)v15 < 0x1000 )
      goto LABEL_49;
    v15 = (const struct std::nothrow_t *)((char *)v15 + 39);
    v16 = *((_QWORD *)v30 - 1);
    if ( (unsigned __int64)v30 - v16 - 8 <= 0x1F )
    {
      v30 = (const struct std::nothrow_t *)*((_QWORD *)v30 - 1);
LABEL_49:
      operator delete(v30, v15);
      goto LABEL_50;
    }
LABEL_51:
    _o__invalid_parameter_noinfo_noreturn(v16, v15);
    __debugbreak();
  }
LABEL_50:
  *a1 = (const struct std::nothrow_t *)v17;
  a1[1] = (const struct std::nothrow_t *)&v17[16 * v8];
  a1[2] = (const struct std::nothrow_t *)&v17[v35];
  return (unsigned __int64)*a1 + v18;
}
