/*
 * XREFs of ?EnsureInputTargeting@EdgyImpl@@QEAAJPEAUContextualProcessorResponse@@@Z @ 0x1800CE618
 * Callers:
 *     ?OnContextualInput@EdgyProcessorTarget@@QEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1800CD2A0 (-OnContextualInput@EdgyProcessorTarget@@QEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProc.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCandidateEdgyDetectedInfo@EdgyImpl@@QEAA_NPEAUCandidateEdgyDetectedInfo@@@Z @ 0x1800CE334 (-GetCandidateEdgyDetectedInfo@EdgyImpl@@QEAA_NPEAUCandidateEdgyDetectedInfo@@@Z.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall EdgyImpl::EnsureInputTargeting(EdgyImpl *this, struct ContextualProcessorResponse *a2)
{
  int v4; // r15d
  char CandidateEdgyDetectedInfo; // al
  unsigned int v6; // r14d
  _QWORD *v7; // rax
  _QWORD *v8; // rbx
  unsigned int v9; // ebx
  __int64 v10; // rcx
  __int64 v11; // rcx
  int v12; // eax
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int16 v17; // [rsp+30h] [rbp-50h] BYREF
  __int64 v18; // [rsp+38h] [rbp-48h]
  __int64 v19; // [rsp+40h] [rbp-40h]
  __int64 v20; // [rsp+48h] [rbp-38h]
  char v21[12]; // [rsp+50h] [rbp-30h] BYREF
  unsigned int v22; // [rsp+5Ch] [rbp-24h]
  __int64 v23; // [rsp+78h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]
  __int64 v25; // [rsp+D0h] [rbp+50h] BYREF
  _QWORD *v26; // [rsp+D8h] [rbp+58h]

  v4 = 0;
  *(_DWORD *)a2 = 0;
  v17 = 0;
  v18 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  memset_0(v21, 0, 0x28uLL);
  v23 = 0LL;
  if ( *((_QWORD *)this + 1) )
    CandidateEdgyDetectedInfo = EdgyImpl::GetCandidateEdgyDetectedInfo(this, (struct CandidateEdgyDetectedInfo *)&v17);
  else
    CandidateEdgyDetectedInfo = 0;
  if ( !CandidateEdgyDetectedInfo )
    return 0;
  v6 = v22;
  if ( v22 != *(_DWORD *)(*((_QWORD *)this + 1) + 32LL) )
    return 0;
  if ( (_DWORD)v20 != 1 )
    goto LABEL_27;
  if ( HIDWORD(v20) == 1 )
  {
    *(_DWORD *)a2 = 3;
    return 0;
  }
  v4 = 1;
  *(_DWORD *)a2 = 2;
  if ( !v6 )
  {
LABEL_27:
    *((_DWORD *)this + 4) = v4;
    return 0;
  }
  v26 = 0LL;
  v25 = 0LL;
  v7 = malloc(0x28uLL);
  v8 = v7;
  if ( v7 )
  {
    memset_0(v7, 0, 0x28uLL);
    v8[2] = &RefCountedObject::`vftable';
    *((_DWORD *)v8 + 6) = 1;
    *v8 = &EdgyInputTarget::`vftable'{for `IInputTarget'};
    v8[1] = &EdgyInputTarget::`vftable'{for `IDCompInputTarget'};
    v8[2] = &EdgyInputTarget::`vftable'{for `RefCountedObject'};
    *((_DWORD *)v8 + 8) = 0;
  }
  else
  {
    v8 = 0LL;
  }
  if ( v8 )
  {
    v26 = v8;
    v11 = v25;
    if ( v25 )
    {
      v25 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
    v12 = (*(__int64 (__fastcall **)(_QWORD *, GUID *, __int64 *))*v8)(
            v8,
            &GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631,
            &v25);
    if ( v12 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x127,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edgyimpl.cpp",
        (const char *)(unsigned int)v12);
      JUMPOUT(0x1800CE88ELL);
    }
    v13 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v25 + 80LL))(v25, v6);
    if ( v13 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x129,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edgyimpl.cpp",
        (const char *)(unsigned int)v13);
      __debugbreak();
    }
    if ( *((_QWORD **)a2 + 2) != v8 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v8 + 8LL))(v8);
      v14 = *((_QWORD *)a2 + 2);
      *((_QWORD *)a2 + 2) = v8;
      if ( v14 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    }
    v15 = v25;
    if ( v25 )
    {
      v25 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    }
    (*(void (__fastcall **)(_QWORD *))(*v8 + 16LL))(v8);
    goto LABEL_27;
  }
  v9 = -2147024882;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x15E,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edgyimpl.cpp",
    (const char *)0x8007000ELL);
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x123,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edgyimpl.cpp",
    (const char *)0x8007000ELL);
  v10 = v25;
  if ( v25 )
  {
    v25 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  return v9;
}
