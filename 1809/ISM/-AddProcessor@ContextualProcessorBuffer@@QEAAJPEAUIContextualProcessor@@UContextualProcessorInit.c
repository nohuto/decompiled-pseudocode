/*
 * XREFs of ?AddProcessor@ContextualProcessorBuffer@@QEAAJPEAUIContextualProcessor@@UContextualProcessorInitialState@@@Z @ 0x1800C306C
 * Callers:
 *     ?OnHitTest@ContextualProcessorManager@@QEAAJPEAUInputInfo@@PEAUInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@@Z @ 0x1800C2300 (-OnHitTest@ContextualProcessorManager@@QEAAJPEAUInputInfo@@PEAUInputContext@@PEAUIInputBuffer@@P.c)
 *     ?OnFocusRequest@ContextualProcessorManager@@QEAAJPEAUDeviceInfo@@PEAUInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@@Z @ 0x1800C25EC (-OnFocusRequest@ContextualProcessorManager@@QEAAJPEAUDeviceInfo@@PEAUInputContext@@PEAUIInputBuf.c)
 * Callees:
 *     ??$_Emplace_reallocate@AEBUContextualProcessorMetadata@ContextualProcessorBuffer@@@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@QEAAPEAUContextualProcessorMetadata@ContextualProcessorBuffer@@QEAU23@AEBU23@@Z @ 0x1800C4780 (--$_Emplace_reallocate@AEBUContextualProcessorMetadata@ContextualProcessorBuffer@@@-$vector@UCon.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ContextualProcessorBuffer::AddProcessor(__int64 a1, __int64 a2, unsigned int *a3)
{
  __int64 v6; // rbx
  __int64 v7; // rdi
  int v8; // r15d
  __int64 v9; // rsi
  __int64 v10; // rcx
  __int64 v12; // [rsp+28h] [rbp-30h] BYREF
  __int64 v13; // [rsp+30h] [rbp-28h]
  __int64 v14; // [rsp+38h] [rbp-20h]

  v6 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  v7 = 0LL;
  v14 = 0LL;
  if ( a2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
    v6 = a2;
    v12 = a2;
  }
  v8 = *a3;
  v13 = *a3;
  if ( *((_QWORD *)a3 + 1) )
  {
    v7 = *((_QWORD *)a3 + 1);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
    v14 = v7;
  }
  v9 = *(_QWORD *)(a1 + 40);
  if ( *(_QWORD *)(a1 + 48) == v9 )
  {
    std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Emplace_reallocate<ContextualProcessorBuffer::ContextualProcessorMetadata const &>(
      a1 + 32,
      *(_QWORD *)(a1 + 40),
      &v12);
    v7 = v14;
    v6 = v12;
  }
  else
  {
    *(_QWORD *)v9 = v6;
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
    *(_DWORD *)(v9 + 8) = v8;
    *(_DWORD *)(v9 + 12) = 0;
    *(_QWORD *)(v9 + 16) = v7;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
    *(_QWORD *)(a1 + 40) += 24LL;
  }
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  v10 = *((_QWORD *)a3 + 1);
  if ( v10 )
  {
    *((_QWORD *)a3 + 1) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  return 0LL;
}
