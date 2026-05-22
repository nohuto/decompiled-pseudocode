/*
 * XREFs of ?Create@ContextualProcessorBuffer@@SAJPEAUInputContext@@PEAUIInputBuffer@@PEAPEAV1@@Z @ 0x1800C2E54
 * Callers:
 *     ?OnHitTest@ContextualProcessorManager@@QEAAJPEAUInputInfo@@PEAUInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@@Z @ 0x1800C2300 (-OnHitTest@ContextualProcessorManager@@QEAAJPEAUInputInfo@@PEAUInputContext@@PEAUIInputBuffer@@P.c)
 *     ?OnFocusRequest@ContextualProcessorManager@@QEAAJPEAUDeviceInfo@@PEAUInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@@Z @ 0x1800C25EC (-OnFocusRequest@ContextualProcessorManager@@QEAAJPEAUDeviceInfo@@PEAUInputContext@@PEAUIInputBuf.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ContextualProcessorBuffer::Create(
        struct InputContext *a1,
        struct IInputBuffer *a2,
        struct ContextualProcessorBuffer **a3)
{
  unsigned int v6; // ebx
  __int64 v7; // rdx
  _QWORD *v9; // rax
  _QWORD *v10; // rbx
  __int64 v11; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !a3 )
  {
    v6 = -2147024809;
    v7 = 40LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\manager\\lib\\contextualprocessorbuffer.cpp",
      (const char *)v6);
    return v6;
  }
  v9 = malloc(0x68uLL);
  v10 = v9;
  if ( v9 )
  {
    memset_0(v9, 0, 0x68uLL);
    v11 = *(_QWORD *)a1;
    v10[2] = &RefCountedObject::`vftable';
    *((_DWORD *)v10 + 6) = 1;
    *v10 = &ContextualProcessorBuffer::`vftable'{for `IDCompInputTarget'};
    v10[1] = &ContextualProcessorBuffer::`vftable'{for `IFocusInputTarget'};
    v10[2] = &ContextualProcessorBuffer::`vftable'{for `RefCountedObject'};
    v10[4] = 0LL;
    v10[5] = 0LL;
    v10[6] = 0LL;
    v10[7] = 0LL;
    v10[8] = 0LL;
    v10[9] = 0LL;
    v10[10] = a1;
    v10[11] = v11;
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
    v10[12] = a2;
    if ( a2 )
      (*(void (__fastcall **)(struct IInputBuffer *))(*(_QWORD *)a2 + 8LL))(a2);
  }
  else
  {
    v10 = 0LL;
  }
  if ( !v10 )
  {
    v6 = -2147024882;
    v7 = 47LL;
    goto LABEL_3;
  }
  *a3 = (struct ContextualProcessorBuffer *)v10;
  return 0LL;
}
