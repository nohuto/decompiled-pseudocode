/*
 * XREFs of ??$_Emplace_reallocate@AEAV?$function@$$A6AX_N@Z@std@@@?$vector@V?$function@$$A6AX_N@Z@std@@V?$allocator@V?$function@$$A6AX_N@Z@std@@@2@@std@@QEAAPEAV?$function@$$A6AX_N@Z@1@QEAV21@AEAV21@@Z @ 0x18003BAA8
 * Callers:
 *     ?FireEventsOnInputThread@MPC3DStateHelper@@AEAAXXZ @ 0x18003AC98 (-FireEventsOnInputThread@MPC3DStateHelper@@AEAAXXZ.c)
 * Callees:
 *     ?_Xlength@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@CAXXZ @ 0x180008CD8 (-_Xlength@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContext.c)
 *     ?_Umove@?$vector@V?$function@$$A6AX_N@Z@std@@V?$allocator@V?$function@$$A6AX_N@Z@std@@@2@@std@@AEAAPEAV?$function@$$A6AX_N@Z@2@PEAV32@00@Z @ 0x18003BD1C (-_Umove@-$vector@V-$function@$$A6AX_N@Z@std@@V-$allocator@V-$function@$$A6AX_N@Z@std@@@2@@std@@A.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18012C18C (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
unsigned __int64 __fastcall std::vector<std::function<void (bool)>>::_Emplace_reallocate<std::function<void (bool)> &>(
        char **a1,
        char *a2,
        __int64 a3)
{
  __int64 v5; // r13
  __int64 v6; // r12
  unsigned __int64 v7; // r12
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // r14
  size_t v11; // rax
  unsigned __int64 v12; // rdx
  size_t v13; // rcx
  void *v14; // rax
  __int64 v15; // rcx
  char *v16; // rsi
  unsigned __int64 v17; // r13
  char *v18; // rbx
  __int64 (__fastcall ***v19)(_QWORD, char *); // rcx
  char *v20; // rax
  char *v21; // r15
  char *v22; // rbx
  char *v23; // rbx
  char *v24; // r15
  char *v25; // rcx
  __int64 v27; // rcx
  __int64 v28; // [rsp+20h] [rbp-78h]
  __int64 v29; // [rsp+20h] [rbp-78h]
  char *v30; // [rsp+28h] [rbp-70h]
  __int64 v31; // [rsp+A0h] [rbp+8h]
  __int64 v33; // [rsp+B8h] [rbp+20h]

  v5 = a2 - *a1;
  v6 = (a1[1] - *a1) >> 6;
  if ( v6 == 0x3FFFFFFFFFFFFFFLL )
    std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Xlength();
  v7 = v6 + 1;
  v8 = (a1[2] - *a1) >> 6;
  v9 = v8 >> 1;
  if ( v8 <= 0x3FFFFFFFFFFFFFFLL - (v8 >> 1) )
  {
    v10 = v9 + v8;
    if ( v9 + v8 < v7 )
      v10 = v7;
  }
  else
  {
    v10 = v7;
  }
  v28 = v10;
  v11 = v10 << 6;
  v12 = -1LL;
  if ( v10 > 0x3FFFFFFFFFFFFFFLL )
    v11 = -1LL;
  if ( v11 < 0x1000 )
  {
    if ( v11 )
      v16 = (char *)operator new(v11);
    else
      v16 = 0LL;
  }
  else
  {
    v13 = v11 + 39;
    if ( v11 + 39 < v11 )
      v13 = -1LL;
    v14 = operator new(v13);
    if ( !v14 )
      goto LABEL_37;
    v16 = (char *)(((unsigned __int64)v14 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
    *((_QWORD *)v16 - 1) = v14;
  }
  v17 = v5 & 0xFFFFFFFFFFFFFFC0uLL;
  v18 = &v16[v17];
  v33 = (__int64)&v16[v17 + 64];
  try
  {
    *((_QWORD *)v18 + 7) = 0LL;
    v19 = *(__int64 (__fastcall ****)(_QWORD, char *))(a3 + 56);
    if ( v19 )
      *((_QWORD *)v18 + 7) = (**v19)(v19, &v16[v17]);
    v31 = (__int64)&v16[v17];
    v20 = a1[1];
    v30 = v20;
    v21 = *a1;
    if ( a2 == v20 )
    {
      v22 = v16;
      while ( v21 != v20 )
      {
        *((_QWORD *)v22 + 7) = 0LL;
        v19 = (__int64 (__fastcall ***)(_QWORD, char *))*((_QWORD *)v21 + 7);
        if ( v19 )
        {
          *((_QWORD *)v22 + 7) = (**v19)(v19, v22);
          v20 = v30;
        }
        v22 += 64;
        v21 += 64;
      }
    }
    else
    {
      std::vector<std::function<void (bool)>>::_Umove(a1, *a1, a2, v16, v10);
      v31 = (__int64)v16;
      std::vector<std::function<void (bool)>>::_Umove(a1, a2, a1[1], v33, v29);
    }
  }
  catch ( ... )
  {
    std::vector<std::function<void (bool)>>::_Destroy((__int64)v19, v31, v33);
    std::allocator<std::function<void (bool)>>::deallocate(v27, v16, v28);
    throw;
  }
  v23 = *a1;
  if ( *a1 )
  {
    v24 = a1[1];
    if ( v23 != v24 )
    {
      do
      {
        v25 = (char *)*((_QWORD *)v23 + 7);
        if ( v25 )
        {
          LOBYTE(v12) = v25 != v23;
          (*(void (__fastcall **)(char *, unsigned __int64))(*(_QWORD *)v25 + 32LL))(v25, v12);
          *((_QWORD *)v23 + 7) = 0LL;
        }
        v23 += 64;
      }
      while ( v23 != v24 );
      v23 = *a1;
    }
    v12 = (a1[2] - v23) & 0xFFFFFFFFFFFFFFC0uLL;
    if ( v12 < 0x1000 )
      goto LABEL_35;
    v12 += 39LL;
    v15 = *((_QWORD *)v23 - 1);
    if ( (unsigned __int64)&v23[-v15 - 8] <= 0x1F )
    {
      v23 = (char *)*((_QWORD *)v23 - 1);
LABEL_35:
      operator delete(v23, (const struct std::nothrow_t *)v12);
      goto LABEL_36;
    }
LABEL_37:
    _o__invalid_parameter_noinfo_noreturn(v15, v12);
    __debugbreak();
  }
LABEL_36:
  *a1 = v16;
  a1[1] = &v16[64 * v7];
  a1[2] = &v16[64 * v10];
  return (unsigned __int64)&(*a1)[v17];
}
