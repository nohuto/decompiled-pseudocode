/*
 * XREFs of ?_Tidy@?$deque@V?$shared_ptr@VAsynchronousWorkItem@ButtonProcessor@@@std@@V?$allocator@V?$shared_ptr@VAsynchronousWorkItem@ButtonProcessor@@@std@@@2@@std@@IEAAXXZ @ 0x1800EB570
 * Callers:
 *     ??1ButtonProcessor@@MEAA@XZ @ 0x1800EA598 (--1ButtonProcessor@@MEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::deque<std::shared_ptr<ButtonProcessor::AsynchronousWorkItem>>::_Tidy(_QWORD *a1)
{
  __int64 i; // rcx
  volatile signed __int32 *v3; // rdi
  __int64 v5; // rdi
  void *v6; // rcx
  char *v7; // rcx
  const struct std::nothrow_t *v8; // rdx
  char *v9; // r8
  char *v10; // rcx

  for ( i = a1[4]; i; i = a1[4] )
  {
    v3 = *(volatile signed __int32 **)(*(_QWORD *)(a1[1] + 8 * ((a1[2] - 1LL) & (a1[3] - 1LL + i))) + 8LL);
    if ( v3 )
    {
      if ( _InterlockedExchangeAdd(v3 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v3)(v3);
        if ( _InterlockedExchangeAdd(v3 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 8LL))(v3);
      }
    }
    if ( a1[4]-- == 1LL )
      a1[3] = 0LL;
  }
  v5 = a1[2];
  while ( v5 )
  {
    --v5;
    v6 = *(void **)(a1[1] + 8 * v5);
    if ( v6 )
      operator delete(v6, (const struct std::nothrow_t *)0x10);
  }
  v7 = (char *)a1[1];
  if ( v7 )
  {
    v8 = (const struct std::nothrow_t *)(8LL * a1[2]);
    if ( (unsigned __int64)v8 >= 0x1000 )
    {
      v9 = (char *)*((_QWORD *)v7 - 1);
      v8 = (const struct std::nothrow_t *)((char *)v8 + 39);
      v10 = (char *)(v7 - v9);
      if ( (unsigned __int64)(v10 - 8) > 0x1F )
      {
        _o__invalid_parameter_noinfo_noreturn(v10, v8);
        JUMPOUT(0x1800EB66DLL);
      }
      v7 = v9;
    }
    operator delete(v7, v8);
  }
  a1[2] = 0LL;
  a1[1] = 0LL;
}
