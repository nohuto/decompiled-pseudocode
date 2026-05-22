/*
 * XREFs of ?Thunk_UpdateNumberOfReaders_5@?$IDataProviderPrincipal_Receive@VBamoDataProviderPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18009C9B0
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003640 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall IDataProviderPrincipal_Receive<BamoImpl::BamoDataProviderPrincipalImpl>::Thunk_UpdateNumberOfReaders_5(
        __int64 a1,
        _DWORD **a2)
{
  int v3; // ecx
  __int64 i; // rdi
  __int64 v5; // rsi
  __int64 v6; // rbx
  DWORD CurrentThreadId; // eax
  const char *v8; // r9
  wil::details::in1diag3 *v9; // rcx
  int v10; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v3 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 24LL) + 32LL);
  for ( i = *(_QWORD *)(a1 + 32); i && *(_DWORD *)(*(_QWORD *)(i + 40) + 36LL) != v3; i = *(_QWORD *)(i + 48) )
    ;
  *(_DWORD *)(i + 64) = **a2;
  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 24LL);
  v6 = 0LL;
  if ( !*(_DWORD *)(v5 + 140) )
  {
    v6 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 24LL);
    CurrentThreadId = GetCurrentThreadId();
    v9 = retaddr;
    if ( *(_DWORD *)(v5 + 136) != CurrentThreadId )
    {
LABEL_13:
      wil::details::in1diag3::_FailFast_Unexpected(
        v9,
        (void *)0x5CE,
        (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoconnection.inl",
        v8);
      JUMPOUT(0x18009CAB6LL);
    }
    *(_DWORD *)(v5 + 136) = 0;
    LeaveCriticalSection((LPCRITICAL_SECTION)(v5 + 96));
  }
  v10 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(a1 - 16) + 40LL))(a1 - 16, i - 16);
  if ( v10 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x1C53,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      (const char *)(unsigned int)v10);
    goto LABEL_13;
  }
  if ( v6 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(v6 + 96));
    *(_DWORD *)(v6 + 136) = GetCurrentThreadId();
  }
  return 0LL;
}
