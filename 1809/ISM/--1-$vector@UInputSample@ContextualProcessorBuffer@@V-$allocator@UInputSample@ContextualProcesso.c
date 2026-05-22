/*
 * XREFs of ??1?$vector@UInputSample@ContextualProcessorBuffer@@V?$allocator@UInputSample@ContextualProcessorBuffer@@@std@@@std@@QEAA@XZ @ 0x1800C4238
 * Callers:
 *     ??_GContextualProcessorBuffer@@MEAAPEAXI@Z @ 0x1800C2D8C (--_GContextualProcessorBuffer@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::vector<ContextualProcessorBuffer::InputSample>::~vector<ContextualProcessorBuffer::InputSample>(
        __int64 *a1,
        const struct std::nothrow_t *a2)
{
  __int64 v3; // rbx
  __int64 v4; // rsi
  __int64 v5; // rcx
  const struct std::nothrow_t *v6; // rdx
  __int64 v7; // rcx

  v3 = *a1;
  if ( *a1 )
  {
    v4 = a1[1];
    if ( v3 != v4 )
    {
      do
      {
        v5 = *(_QWORD *)(v3 + 8);
        if ( v5 )
        {
          *(_QWORD *)(v3 + 8) = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
        }
        if ( *(_QWORD *)v3 )
          operator delete(*(void **)v3, a2);
        v3 += 16LL;
      }
      while ( v3 != v4 );
      v3 = *a1;
    }
    v6 = (const struct std::nothrow_t *)((a1[2] - v3) & 0xFFFFFFFFFFFFFFF0uLL);
    if ( (unsigned __int64)v6 >= 0x1000 )
    {
      v6 = (const struct std::nothrow_t *)((char *)v6 + 39);
      v7 = *(_QWORD *)(v3 - 8);
      if ( (unsigned __int64)(v3 - v7 - 8) > 0x1F )
      {
        _o__invalid_parameter_noinfo_noreturn(v7, v6);
        JUMPOUT(0x1800C42F9LL);
      }
      v3 = *(_QWORD *)(v3 - 8);
    }
    operator delete((void *)v3, v6);
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
}
