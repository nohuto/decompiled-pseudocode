/*
 * XREFs of ?Thunk_OnRemoveDataSourceError_5@?$IDataProviderPrincipal_Receive@VBamoDataProviderPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18009C890
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003640 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall IDataProviderPrincipal_Receive<BamoImpl::BamoDataProviderPrincipalImpl>::Thunk_OnRemoveDataSourceError_5(
        __int64 a1,
        unsigned int **a2)
{
  unsigned int v3; // r14d
  int v4; // ecx
  _QWORD *i; // rbx
  __int64 v6; // rbp
  __int64 v7; // rdi
  __int64 v8; // rbx
  DWORD CurrentThreadId; // eax
  const char *v10; // r9
  wil::details::in1diag3 *v11; // rcx
  int v12; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v3 = **a2;
  v4 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 24LL) + 32LL);
  for ( i = *(_QWORD **)(a1 + 32); i && *(_DWORD *)(i[5] + 36LL) != v4; i = (_QWORD *)i[6] )
    ;
  v6 = (*(__int64 (__fastcall **)(_QWORD *))(*i + 24LL))(i);
  v7 = *(_QWORD *)(*(_QWORD *)(i[5] + 24LL) + 24LL);
  v8 = 0LL;
  if ( !*(_DWORD *)(v7 + 140) )
  {
    v8 = v7;
    CurrentThreadId = GetCurrentThreadId();
    v11 = retaddr;
    if ( *(_DWORD *)(v7 + 136) != CurrentThreadId )
    {
LABEL_13:
      wil::details::in1diag3::_FailFast_Unexpected(
        v11,
        (void *)0x5CE,
        (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoconnection.inl",
        v10);
      JUMPOUT(0x18009C9A9LL);
    }
    *(_DWORD *)(v7 + 136) = 0;
    LeaveCriticalSection((LPCRITICAL_SECTION)(v7 + 96));
  }
  v12 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)(a1 - 16) + 104LL))(a1 - 16, v6, v3);
  if ( v12 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x1CA1,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      (const char *)(unsigned int)v12);
    goto LABEL_13;
  }
  if ( v8 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(v8 + 96));
    *(_DWORD *)(v8 + 136) = GetCurrentThreadId();
  }
  return 0LL;
}
