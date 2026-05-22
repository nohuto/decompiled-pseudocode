/*
 * XREFs of ?_Destroy@?$vector@UInputSample@ContextualProcessorBuffer@@V?$allocator@UInputSample@ContextualProcessorBuffer@@@std@@@std@@AEAAXPEAUInputSample@ContextualProcessorBuffer@@0@Z @ 0x1800C43F4
 * Callers:
 *     _std::vector_ContextualProcessorBuffer::InputSample_std::allocator_ContextualProcessorBuffer::InputSample___::_Emplace_reallocate_ContextualProcessorBuffer::InputSample__::_1_::catch$16 @ 0x180133E04 (_std--vector_ContextualProcessorBuffer--InputSample_std--allocator_ContextualProcessorBuffer--In.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::vector<ContextualProcessorBuffer::InputSample>::_Destroy(
        __int64 a1,
        const struct std::nothrow_t *a2,
        const struct std::nothrow_t *a3)
{
  const struct std::nothrow_t *v4; // rbx
  __int64 v5; // rcx

  if ( a2 != a3 )
  {
    v4 = a2;
    do
    {
      v5 = *((_QWORD *)v4 + 1);
      if ( v5 )
      {
        *((_QWORD *)v4 + 1) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
      }
      if ( *(_QWORD *)v4 )
        operator delete(*(void **)v4, a2);
      v4 = (const struct std::nothrow_t *)((char *)v4 + 16);
    }
    while ( v4 != a3 );
  }
}
