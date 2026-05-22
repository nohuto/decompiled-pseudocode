/*
 * XREFs of ?OnInput@InputRedirectionProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1800D18A0
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall InputRedirectionProcessor::OnInput(
        InputRedirectionProcessor *this,
        struct InputInfo *a2,
        struct InputContext *a3,
        struct ContextualProcessorResponse *a4)
{
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rdi
  __int64 v9; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v12; // [rsp+58h] [rbp+20h] BYREF

  v12 = 0LL;
  v6 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))a4 + 1))(
         *((_QWORD *)a4 + 1),
         &GUID_71951a11_6ad9_47fc_ac52_d90bf1e97b13,
         &v12);
  if ( v6 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x1D0,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\inputredirection\\system\\lib"
               "\\inputredirectionprocessor.cpp",
      (const char *)(unsigned int)v6);
    JUMPOUT(0x1800D199DLL);
  }
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v12 + 32LL))(v12) )
  {
    (*(void (__fastcall **)(__int64, struct InputInfo *))(*(_QWORD *)v12 + 24LL))(v12, a2);
    *(_DWORD *)a4 = 4;
LABEL_8:
    v7 = v12;
    goto LABEL_9;
  }
  *(_DWORD *)a4 = 2;
  v7 = v12;
  v8 = v12;
  if ( v12 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
    v7 = v12;
  }
  v9 = *((_QWORD *)a4 + 2);
  *((_QWORD *)a4 + 2) = v8;
  if ( v9 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    goto LABEL_8;
  }
LABEL_9:
  if ( v7 )
  {
    v12 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  return 0LL;
}
