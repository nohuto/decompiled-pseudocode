/*
 * XREFs of ?Materialize_BamoEdgyControllerClientProxy@BamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@QEAAJI@Z @ 0x180016C40
 * Callers:
 *     ?Thunk_Materialize_BamoEdgyControllerClientProxy_0@?$IBamoPeer_ISMBamos_AutoBamos_Receive@VBamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180018470 (-Thunk_Materialize_BamoEdgyControllerClientProxy_0@-$IBamoPeer_ISMBamos_AutoBamos_Receive@VBamoP.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003640 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0EdgyControllerClientProxy@@QEAA@AEBV?$ComPtr@VEdgyControllerServer@@@WRL@Microsoft@@@Z @ 0x180027348 (--0EdgyControllerClientProxy@@QEAA@AEBV-$ComPtr@VEdgyControllerServer@@@WRL@Microsoft@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18012C18C (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoImpl::ISMBamos_AutoBamos::BamoPeerImpl::Materialize_BamoEdgyControllerClientProxy(
        BamoImpl::ISMBamos_AutoBamos::BamoPeerImpl *this,
        unsigned int a2)
{
  __int64 v4; // rsi
  __int64 v5; // rdi
  __int64 v6; // rbx
  const char *v7; // r9
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdi
  void *v11; // rax
  __int64 v12; // rsi
  const char *v13; // r9
  wil::details::in1diag3 *v14; // rcx
  __int64 v15; // rbx
  void (__fastcall ***v16)(_QWORD); // rcx
  __int64 v17; // rcx
  int v18; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v21; // [rsp+60h] [rbp+8h]
  __int64 v22; // [rsp+70h] [rbp+18h] BYREF

  v4 = *((_QWORD *)this + 2);
  v5 = *(_QWORD *)(*((_QWORD *)this + 3) + 24LL);
  v6 = 0LL;
  v21 = 0LL;
  if ( !*(_DWORD *)(v5 + 140) )
  {
    v6 = *(_QWORD *)(*((_QWORD *)this + 3) + 24LL);
    v21 = v6;
    if ( *(_DWORD *)(v5 + 136) != GetCurrentThreadId() )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x5CE,
        (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoconnection.inl",
        v7);
LABEL_24:
      wil::details::in1diag3::FailFast_Hr(
        v14,
        (void *)0x92BA,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\bamos\\codegen\\objfre\\amd64\\ismbamos.bamo.h",
        (const char *)(unsigned int)v5);
      goto LABEL_25;
    }
    *(_DWORD *)(v5 + 136) = 0;
    LeaveCriticalSection((LPCRITICAL_SECTION)(v5 + 96));
  }
  v8 = *(_QWORD *)(*(_QWORD *)(v4 + 32) + 24LL);
  if ( *(int *)(v8 + 8) <= 0 )
    v9 = 0LL;
  else
    v9 = *(_QWORD *)(v8 + 16);
  v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(v9 + 152) + 8LL) + 40LL))(*(_QWORD *)(v9 + 152) + 8LL);
  v11 = operator new(0x80uLL);
  v22 = v10;
  if ( v10 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v10 + 24));
    v6 = v21;
  }
  v12 = EdgyControllerClientProxy::EdgyControllerClientProxy(v11, &v22);
  if ( v10 )
    (**(void (__fastcall ***)(__int64))(v10 + 16))(v10 + 16);
  if ( v12 )
  {
    LODWORD(v5) = 0;
  }
  else
  {
    LODWORD(v5) = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x19,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\server\\edgycontrollerclientproxy.cpp",
      (const char *)0x8007000ELL);
  }
  v14 = retaddr;
  if ( (int)v5 < 0 )
    goto LABEL_24;
  if ( v6 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(v6 + 96));
    *(_DWORD *)(v6 + 136) = GetCurrentThreadId();
  }
  if ( !v12 )
  {
LABEL_25:
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x92BF,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\bamos\\codegen\\objfre\\amd64\\ismbamos.bamo.h",
      v13);
    JUMPOUT(0x180016E42LL);
  }
  v15 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 48LL))(v12);
  v16 = *(void (__fastcall ****)(_QWORD))(v15 + 16);
  *(_QWORD *)(v15 + 16) = this;
  _InterlockedIncrement((volatile signed __int32 *)this + 2);
  if ( v16 )
    (**v16)(v16);
  *(_DWORD *)(v15 + 24) = a2;
  v17 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 40LL);
  v18 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v17 + 40LL))(
          v17,
          *((unsigned int *)this + 9),
          a2,
          v15);
  if ( v18 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xCBDA,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\bamos\\codegen\\objfre\\amd64\\ismbamos.bamo.h",
      (const char *)(unsigned int)v18);
    __debugbreak();
  }
  return 0LL;
}
