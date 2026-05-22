/*
 * XREFs of ?Thunk_RequestHitTest_3@?$ITestCommandsPrincipal_Receive@VBamoTestCommandsPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1800C1B10
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003640 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ITestCommandsPrincipal_Receive<BamoImpl::BamoTestCommandsPrincipalImpl>::Thunk_RequestHitTest_3(
        __int64 a1,
        __int64 **a2)
{
  __int64 *v3; // r14
  __int64 v4; // r15
  __int64 v5; // r12
  int v6; // ecx
  _QWORD *i; // rbx
  __int64 v8; // rbp
  __int64 v9; // rdi
  __int64 v10; // rbx
  DWORD CurrentThreadId; // eax
  const char *v12; // r9
  wil::details::in1diag3 *v13; // rcx
  int v14; // eax
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v3 = a2[2];
  v4 = *a2[1];
  v5 = **a2;
  v6 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 24LL) + 32LL);
  for ( i = *(_QWORD **)(a1 + 32); i && *(_DWORD *)(i[5] + 36LL) != v6; i = (_QWORD *)i[6] )
    ;
  v8 = (*(__int64 (__fastcall **)(_QWORD *))(*i + 24LL))(i);
  v9 = *(_QWORD *)(*(_QWORD *)(i[5] + 24LL) + 24LL);
  v10 = 0LL;
  if ( !*(_DWORD *)(v9 + 140) )
  {
    v10 = v9;
    CurrentThreadId = GetCurrentThreadId();
    v13 = retaddr;
    if ( *(_DWORD *)(v9 + 136) != CurrentThreadId )
    {
LABEL_13:
      wil::details::in1diag3::_FailFast_Unexpected(
        v13,
        (void *)0x5CE,
        (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoconnection.inl",
        v12);
      JUMPOUT(0x1800C1C49LL);
    }
    *(_DWORD *)(v9 + 136) = 0;
    LeaveCriticalSection((LPCRITICAL_SECTION)(v9 + 96));
  }
  v14 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, __int64 *))(*(_QWORD *)(a1 - 16) + 72LL))(
          a1 - 16,
          v8,
          v5,
          v4,
          v3);
  if ( v14 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xC98D,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\bamos\\codegen\\objfre\\amd64\\ismbamos.bamo.h",
      (const char *)(unsigned int)v14);
    goto LABEL_13;
  }
  if ( v10 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(v10 + 96));
    *(_DWORD *)(v10 + 136) = GetCurrentThreadId();
  }
  return 0LL;
}
