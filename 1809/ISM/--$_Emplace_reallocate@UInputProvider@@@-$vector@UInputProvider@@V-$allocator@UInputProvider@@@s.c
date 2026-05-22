/*
 * XREFs of ??$_Emplace_reallocate@UInputProvider@@@?$vector@UInputProvider@@V?$allocator@UInputProvider@@@std@@@std@@QEAAPEAUInputProvider@@QEAU2@$$QEAU2@@Z @ 0x180056808
 * Callers:
 *     ?InitializeHelper@InputProviderManager@@AEAAJPEAUIRawInputClient@@W4InputProviderInitialization@@@Z @ 0x1800565F0 (-InitializeHelper@InputProviderManager@@AEAAJPEAUIRawInputClient@@W4InputProviderInitialization@.c)
 * Callees:
 *     ?_Xlength@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@CAXXZ @ 0x180008CD8 (-_Xlength@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContext.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18012C18C (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::vector<InputProvider>::_Emplace_reallocate<InputProvider>(__int64 **a1, char *a2, _OWORD *a3)
{
  __int64 v6; // r15
  __int64 v7; // rdx
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  size_t v11; // rax
  size_t v12; // rcx
  void *v13; // rax
  unsigned __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 *v16; // rdi
  __int64 v17; // rcx
  _QWORD *v18; // rdx
  char *v19; // rdx
  char *v20; // rax
  char *v21; // r8
  char *v22; // rdx
  __int64 v23; // r9
  __int64 *v24; // rbx
  __int64 *v25; // r15
  __int64 v26; // rcx
  __int64 v28; // rcx
  __int64 v29; // [rsp+20h] [rbp-48h]
  __int64 v30; // [rsp+28h] [rbp-40h]
  __int64 *v31; // [rsp+30h] [rbp-38h]
  __int64 *v32; // [rsp+78h] [rbp+10h]
  __int64 v33; // [rsp+88h] [rbp+20h]

  v6 = (a2 - (char *)*a1) / 24;
  v7 = ((char *)a1[1] - (char *)*a1) / 24;
  if ( v7 == 0xAAAAAAAAAAAAAAALL )
    std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Xlength();
  v8 = v7 + 1;
  v9 = ((char *)a1[2] - (char *)*a1) / 24;
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
  v33 = v10;
  v11 = 24 * v10;
  v29 = 3 * v10;
  if ( v10 > 0xAAAAAAAAAAAAAAALL )
    v11 = -1LL;
  if ( v11 < 0x1000 )
  {
    if ( v11 )
      v16 = (__int64 *)operator new(v11);
    else
      v16 = 0LL;
  }
  else
  {
    v12 = v11 + 39;
    if ( v11 + 39 < v11 )
      v12 = -1LL;
    v13 = operator new(v12);
    if ( !v13 )
      goto LABEL_49;
    v16 = (__int64 *)(((unsigned __int64)v13 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
    *(v16 - 1) = (__int64)v13;
  }
  v30 = 3 * v6;
  v17 = (__int64)&v16[3 * v6];
  v31 = (__int64 *)(v17 + 24);
  try
  {
    *(_OWORD *)v17 = *a3;
    v18 = a3 + 1;
    *(_QWORD *)(v17 + 16) = 0LL;
    if ( (_OWORD *)(v17 + 16) != a3 + 1 )
    {
      *(_QWORD *)(v17 + 16) = *v18;
      *v18 = 0LL;
    }
    v32 = &v16[3 * v6];
    v19 = (char *)a1[1];
    v20 = (char *)*a1;
    if ( a2 == v19 )
    {
      if ( v20 != v19 )
      {
        v17 = (__int64)(v20 + 16);
        v21 = (char *)((char *)v16 - v20);
        do
        {
          *(_OWORD *)&v21[v17 - 16] = *(_OWORD *)(v17 - 16);
          *(_QWORD *)&v21[v17] = 0LL;
          if ( &v21[v17] != (char *)v17 )
          {
            *(_QWORD *)&v21[v17] = *(_QWORD *)v17;
            *(_QWORD *)v17 = 0LL;
          }
          v17 += 24LL;
        }
        while ( (char *)(v17 - 16) != v19 );
      }
    }
    else
    {
      if ( v20 != a2 )
      {
        v17 = (__int64)(v20 + 16);
        v22 = (char *)((char *)v16 - v20);
        do
        {
          *(_OWORD *)&v22[v17 - 16] = *(_OWORD *)(v17 - 16);
          *(_QWORD *)&v22[v17] = 0LL;
          if ( &v22[v17] != (char *)v17 )
          {
            *(_QWORD *)&v22[v17] = *(_QWORD *)v17;
            *(_QWORD *)v17 = 0LL;
          }
          v17 += 24LL;
        }
        while ( (char *)(v17 - 16) != a2 );
        v19 = (char *)a1[1];
      }
      v32 = v16;
      if ( a2 != v19 )
      {
        v17 = (__int64)(a2 + 16);
        v23 = (char *)v16 - a2 + 8 * (3 * v6 + 3);
        do
        {
          *(_OWORD *)((char *)v16 - a2 + 24 * v6 + v17 + 8) = *(_OWORD *)(v17 - 16);
          *(_QWORD *)(v23 + v17) = 0LL;
          if ( v23 + v17 != v17 )
          {
            *(_QWORD *)(v23 + v17) = *(_QWORD *)v17;
            *(_QWORD *)v17 = 0LL;
          }
          v17 += 24LL;
        }
        while ( (char *)(v17 - 16) != v19 );
      }
    }
  }
  catch ( ... )
  {
    std::vector<InputProvider>::_Destroy(v17, v32, v31);
    std::allocator<INPUT_SPACE_PAYLOAD>::deallocate(v28, v16, v33);
    throw;
  }
  v24 = *a1;
  if ( *a1 )
  {
    v25 = a1[1];
    if ( v24 != v25 )
    {
      do
      {
        v26 = v24[2];
        if ( v26 )
        {
          v24[2] = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
        }
        v24 += 3;
      }
      while ( v24 != v25 );
      v24 = *a1;
    }
    v14 = 24 * (((char *)a1[2] - (char *)v24) / 24);
    if ( v14 < 0x1000 )
      goto LABEL_47;
    v14 += 39LL;
    v15 = *(v24 - 1);
    if ( (unsigned __int64)v24 - v15 - 8 <= 0x1F )
    {
      v24 = (__int64 *)*(v24 - 1);
LABEL_47:
      operator delete(v24, (const struct std::nothrow_t *)v14);
      goto LABEL_48;
    }
LABEL_49:
    _o__invalid_parameter_noinfo_noreturn(v15, v14);
    __debugbreak();
  }
LABEL_48:
  *a1 = v16;
  a1[1] = &v16[3 * v8];
  a1[2] = &v16[v29];
  return (__int64)&(*a1)[v30];
}
