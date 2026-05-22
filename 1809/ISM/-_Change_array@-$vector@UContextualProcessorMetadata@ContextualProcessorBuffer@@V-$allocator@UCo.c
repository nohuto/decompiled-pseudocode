/*
 * XREFs of ?_Change_array@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@AEAAXQEAUContextualProcessorMetadata@ContextualProcessorBuffer@@_K1@Z @ 0x1800C4B34
 * Callers:
 *     ??$_Emplace_reallocate@AEBUContextualProcessorMetadata@ContextualProcessorBuffer@@@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@QEAAPEAUContextualProcessorMetadata@ContextualProcessorBuffer@@QEAU23@AEBU23@@Z @ 0x1800C4780 (--$_Emplace_reallocate@AEBUContextualProcessorMetadata@ContextualProcessorBuffer@@@-$vector@UCon.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Change_array(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 *v4; // rbx
  __int64 *v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 result; // rax

  v4 = *(__int64 **)a1;
  if ( *(_QWORD *)a1 )
  {
    v9 = *(__int64 **)(a1 + 8);
    if ( v4 != v9 )
    {
      do
      {
        v10 = v4[2];
        if ( v10 )
        {
          v4[2] = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
        }
        v11 = *v4;
        if ( *v4 )
        {
          *v4 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
        }
        v4 += 3;
      }
      while ( v4 != v9 );
      v4 = *(__int64 **)a1;
    }
    v12 = 24 * ((*(_QWORD *)(a1 + 16) - (_QWORD)v4) / 24LL);
    if ( v12 >= 0x1000 )
    {
      v13 = *(v4 - 1);
      v12 += 39LL;
      if ( (unsigned __int64)v4 - v13 - 8 > 0x1F )
      {
        _o__invalid_parameter_noinfo_noreturn(v13, v12);
        JUMPOUT(0x1800C4C3CLL);
      }
      v4 = (__int64 *)*(v4 - 1);
    }
    operator delete(v4, (const struct std::nothrow_t *)v12);
  }
  *(_QWORD *)a1 = a2;
  result = 3 * a4;
  *(_QWORD *)(a1 + 8) = a2 + 24 * a3;
  *(_QWORD *)(a1 + 16) = a2 + 24 * a4;
  return result;
}
