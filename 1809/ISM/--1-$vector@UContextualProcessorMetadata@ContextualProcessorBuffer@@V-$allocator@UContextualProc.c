/*
 * XREFs of ??1?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@QEAA@XZ @ 0x1800C4300
 * Callers:
 *     ??_GContextualProcessorBuffer@@MEAAPEAXI@Z @ 0x1800C2D8C (--_GContextualProcessorBuffer@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::~vector<ContextualProcessorBuffer::ContextualProcessorMetadata>(
        __int64 a1)
{
  __int64 *v2; // rbx
  __int64 *v3; // rsi
  __int64 v4; // rcx
  __int64 v5; // rcx
  unsigned __int64 v6; // rdx
  __int64 v7; // rcx

  v2 = *(__int64 **)a1;
  if ( *(_QWORD *)a1 )
  {
    v3 = *(__int64 **)(a1 + 8);
    if ( v2 != v3 )
    {
      do
      {
        v4 = v2[2];
        if ( v4 )
        {
          v2[2] = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
        }
        v5 = *v2;
        if ( *v2 )
        {
          *v2 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
        }
        v2 += 3;
      }
      while ( v2 != v3 );
      v2 = *(__int64 **)a1;
    }
    v6 = 24 * ((*(_QWORD *)(a1 + 16) - (_QWORD)v2) / 24LL);
    if ( v6 >= 0x1000 )
    {
      v6 += 39LL;
      v7 = *(v2 - 1);
      if ( (unsigned __int64)v2 - v7 - 8 > 0x1F )
      {
        _o__invalid_parameter_noinfo_noreturn(v7, v6);
        JUMPOUT(0x1800C43ECLL);
      }
      v2 = (__int64 *)*(v2 - 1);
    }
    operator delete(v2, (const struct std::nothrow_t *)v6);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
