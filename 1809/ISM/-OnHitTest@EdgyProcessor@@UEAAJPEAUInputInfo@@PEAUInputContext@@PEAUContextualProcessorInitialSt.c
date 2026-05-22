/*
 * XREFs of ?OnHitTest@EdgyProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x1800CA970
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003640 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?EnsureEdgeMetricsForDisplay@EdgyProcessor@@IEAAXPEBUInputInfo@@@Z @ 0x1800CA570 (-EnsureEdgeMetricsForDisplay@EdgyProcessor@@IEAAXPEBUInputInfo@@@Z.c)
 *     ?HitTest@Edges@@QEAA_NKKPEBUD2D_VECTOR_2F@@PEAPEAV?$vector@UCandidateIdentity@@V?$allocator@UCandidateIdentity@@@std@@@std@@@Z @ 0x1800CB794 (-HitTest@Edges@@QEAA_NKKPEBUD2D_VECTOR_2F@@PEAPEAV-$vector@UCandidateIdentity@@V-$allocator@UCan.c)
 *     ?Create@EdgyProcessorTarget@@SAJPEAVEdgyProcessor@@AEBUEdgyPointerInfo@@UtagMsgRoutingInfo@@PEAXPEAPEAV1@@Z @ 0x1800CCE08 (-Create@EdgyProcessorTarget@@SAJPEAVEdgyProcessor@@AEBUEdgyPointerInfo@@UtagMsgRoutingInfo@@PEAX.c)
 *     ?UpdateInputTarget@EdgyProcessorTarget@@QEAAJUtagMsgRoutingInfo@@PEAXAEBUEdgyPointerInfo@@@Z @ 0x1800CCFCC (-UpdateInputTarget@EdgyProcessorTarget@@QEAAJUtagMsgRoutingInfo@@PEAXAEBUEdgyPointerInfo@@@Z.c)
 *     ?Reset@EdgyImpl@@QEAAXXZ @ 0x1800CE230 (-Reset@EdgyImpl@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall EdgyProcessor::OnHitTest(
        EdgyProcessor *this,
        struct InputInfo *a2,
        struct InputContext *a3,
        struct ContextualProcessorInitialState *a4)
{
  int v7; // r14d
  __int64 *v8; // rsi
  __int64 v9; // rcx
  const char *v10; // r9
  wil::details::in1diag3 *v11; // rcx
  int v12; // eax
  void *v13; // r14
  HANDLE CurrentProcess; // rbx
  HANDLE v15; // rax
  HANDLE v16; // r8
  __int64 v17; // rcx
  __int64 v18; // rcx
  void (*v19)(void); // rax
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v24; // [rsp+40h] [rbp-69h] BYREF
  HANDLE TargetHandle; // [rsp+48h] [rbp-61h] BYREF
  __m256i v26; // [rsp+50h] [rbp-59h] BYREF
  __int64 v27; // [rsp+70h] [rbp-39h]
  __int64 v28; // [rsp+80h] [rbp-29h]
  __m256i v29; // [rsp+88h] [rbp-21h] BYREF
  __int64 v30; // [rsp+A8h] [rbp-1h]
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+5Fh]

  v28 = -2LL;
  TargetHandle = a3;
  v7 = 0;
  *(_DWORD *)a4 = 0;
  v8 = (__int64 *)((char *)a4 + 8);
  v9 = *((_QWORD *)a4 + 1);
  if ( v9 )
  {
    *v8 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  v29.m256i_i32[0] = -1;
  *(_OWORD *)((char *)v29.m256i_i64 + 4) = 0uLL;
  v29.m256i_i64[3] = 0LL;
  if ( (*(_DWORD *)a2 & 0x88) != 8 || *((_DWORD *)a2 + 12) != 1 || (*((_BYTE *)a2 + 60) & 2) == 0 )
    goto LABEL_28;
  v29.m256i_i64[3] = *((unsigned int *)a2 + 2);
  v29.m256i_i32[0] = *((_DWORD *)a2 + 14);
  v29.m256i_i32[2] = *((_DWORD *)a2 + 15);
  v29.m256i_i32[1] = *((_DWORD *)a2 + 1);
  *(__int64 *)((char *)&v29.m256i_i64[1] + 4) = *((_QWORD *)a2 + 8);
  EdgyProcessor::EnsureEdgeMetricsForDisplay(this, a2);
  EdgyImpl::Reset((EdgyProcessor *)((char *)this + 80));
  if ( !(unsigned __int8)Edges::HitTest((Edges *)(*((_QWORD *)this + 13) + 72LL), (__int64)this + 80) )
  {
    v22 = *v8;
    if ( *v8 )
    {
      *v8 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
    }
    *(_DWORD *)a4 = 0;
    goto LABEL_28;
  }
  v11 = retaddr;
  if ( !*((_QWORD *)this + 10) )
  {
LABEL_35:
    wil::details::in1diag3::_FailFast_Unexpected(
      v11,
      (void *)0x2F,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edgyimpl.cpp",
      v10);
    JUMPOUT(0x1800CAC97LL);
  }
  *(__m256i *)((char *)this + 24) = v29;
  v24 = 0LL;
  v12 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))TargetHandle)(
          *(_QWORD *)TargetHandle,
          &GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631,
          &v24);
  if ( v12 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x92,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edgyprocessor.cpp",
      (const char *)(unsigned int)v12);
    goto LABEL_35;
  }
  (*(void (__fastcall **)(__int64, __m256i *))(*(_QWORD *)v24 + 72LL))(v24, &v29);
  v13 = (void *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v24 + 56LL))(v24);
  if ( v13
    && (CurrentProcess = GetCurrentProcess(),
        v15 = GetCurrentProcess(),
        DuplicateHandle(v15, v13, CurrentProcess, &TargetHandle, 0, 0, 2u)) )
  {
    v16 = TargetHandle;
  }
  else
  {
    v16 = 0LL;
    TargetHandle = 0LL;
  }
  v17 = *((_QWORD *)this + 9);
  v26 = v29;
  v27 = v30;
  if ( v17 )
  {
    EdgyProcessorTarget::UpdateInputTarget(v17, &v26, v16, (char *)this + 24);
  }
  else
  {
    v7 = EdgyProcessorTarget::Create(this, (char *)this + 24, &v26, v16, (char *)this + 72);
    if ( v7 < 0 )
    {
      v18 = v24;
      if ( v24 )
      {
        v24 = 0LL;
        v19 = *(void (**)(void))(*(_QWORD *)v18 + 16LL);
LABEL_17:
        v19();
        goto LABEL_28;
      }
      goto LABEL_28;
    }
  }
  v20 = *v8;
  if ( *v8 )
  {
    *v8 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  }
  v7 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 9))(
         *((_QWORD *)this + 9),
         &GUID_00000000_0000_0000_c000_000000000046,
         v8);
  if ( v7 >= 0 )
    *(_DWORD *)a4 = 1;
  v21 = v24;
  if ( v24 )
  {
    v24 = 0LL;
    v19 = *(void (**)(void))(*(_QWORD *)v21 + 16LL);
    goto LABEL_17;
  }
LABEL_28:
  if ( !*v8 || !*(_DWORD *)a4 )
    EdgyImpl::Reset((EdgyProcessor *)((char *)this + 80));
  if ( v7 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xE0,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edgyprocessor.cpp",
    (const char *)(unsigned int)v7);
  return (unsigned int)v7;
}
