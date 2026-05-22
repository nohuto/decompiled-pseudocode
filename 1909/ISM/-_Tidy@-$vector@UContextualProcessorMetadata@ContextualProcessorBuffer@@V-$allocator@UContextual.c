/*
 * XREFs of ?_Tidy@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@AEAAXXZ @ 0x180006AB0
 * Callers:
 *     ??_GContextualProcessorBuffer@@MEAAPEAXI@Z @ 0x18000B600 (--_GContextualProcessorBuffer@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C3E0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1800525DC (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 */

void __fastcall std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Tidy(__int64 a1)
{
  __int64 *v1; // rdi
  __int64 *v3; // rsi
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // [rsp+40h] [rbp+8h] BYREF
  void *v9; // [rsp+48h] [rbp+10h] BYREF

  v1 = *(__int64 **)a1;
  if ( *(_QWORD *)a1 )
  {
    v3 = *(__int64 **)(a1 + 8);
    if ( v1 != v3 )
    {
      do
      {
        v4 = v1[2];
        if ( v4 )
        {
          v1[2] = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
        }
        v5 = *v1;
        if ( *v1 )
        {
          *v1 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
        }
        v1 += 3;
      }
      while ( v1 != v3 );
      v1 = *(__int64 **)a1;
    }
    v6 = *(_QWORD *)(a1 + 16) - (_QWORD)v1;
    v9 = v1;
    v7 = 24 * (v6 / 24);
    v8 = v7;
    if ( v7 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v9, &v8);
      v7 = v8;
      v1 = (__int64 *)v9;
    }
    operator delete(v1, (const struct std::nothrow_t *)v7);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
