/*
 * XREFs of ?_Destroy@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@AEAAXPEAUContextualProcessorMetadata@ContextualProcessorBuffer@@0@Z @ 0x1800C444C
 * Callers:
 *     _std::vector_ContextualProcessorBuffer::ContextualProcessorMetadata_std::allocator_ContextualProcessorBuffer::ContextualProcessorMetadata___::_Emplace_reallocate_ContextualProcessorBuffer::ContextualProcessorMetadata_const_&___ptr64__::_1_::catch$7 @ 0x180133E3E (_std--vector_ContextualProcessorBuffer--ContextualProcessorMetadata_std--allocator_ContextualPro.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Destroy(
        __int64 a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 *v4; // rbx
  __int64 v5; // rcx
  __int64 result; // rax
  __int64 v7; // rcx

  if ( a2 != a3 )
  {
    v4 = a2;
    do
    {
      v5 = v4[2];
      if ( v5 )
      {
        v4[2] = 0LL;
        result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
      }
      v7 = *v4;
      if ( *v4 )
      {
        *v4 = 0LL;
        result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
      }
      v4 += 3;
    }
    while ( v4 != a3 );
  }
  return result;
}
