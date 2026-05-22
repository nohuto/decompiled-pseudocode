/*
 * XREFs of ?Thunk_SetOnlyMixedWorldRouting_48@?$IMPCManagerPrincipal_Receive@VBamoMPCManagerPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18003F080
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003640 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall IMPCManagerPrincipal_Receive<BamoImpl::BamoMPCManagerPrincipalImpl>::Thunk_SetOnlyMixedWorldRouting_48(
        __int64 a1,
        char **a2)
{
  char v3; // r14
  int v4; // ecx
  _QWORD *i; // rbx
  __int64 v6; // rbp
  __int64 v7; // r8
  __int64 v8; // rdi
  __int64 v9; // rbx
  DWORD CurrentThreadId; // eax
  const char *v11; // r9
  wil::details::in1diag3 *v12; // rcx
  int v13; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v3 = **a2;
  v4 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 24LL) + 32LL);
  for ( i = *(_QWORD **)(a1 + 32); i && *(_DWORD *)(i[5] + 36LL) != v4; i = (_QWORD *)i[6] )
    ;
  v6 = (*(__int64 (__fastcall **)(_QWORD *))(*i + 24LL))(i);
  v8 = *(_QWORD *)(*(_QWORD *)(i[5] + 24LL) + 24LL);
  v9 = 0LL;
  if ( !*(_DWORD *)(v8 + 140) )
  {
    v9 = v8;
    CurrentThreadId = GetCurrentThreadId();
    v12 = retaddr;
    if ( *(_DWORD *)(v8 + 136) != CurrentThreadId )
    {
LABEL_13:
      wil::details::in1diag3::_FailFast_Unexpected(
        v12,
        (void *)0x5CE,
        (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoconnection.inl",
        v11);
      JUMPOUT(0x18003F199LL);
    }
    *(_DWORD *)(v8 + 136) = 0;
    LeaveCriticalSection((LPCRITICAL_SECTION)(v8 + 96));
  }
  LOBYTE(v7) = v3;
  v13 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)(a1 - 16) + 80LL))(a1 - 16, v6, v7);
  if ( v13 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x1BAA,
      (__int64)"onecoreuap\\windows\\moderncore\\Inputv2\\InputHost\\Components\\MPCManager\\bamo\\objfre\\amd64\\MPCMana"
               "gerBamo.MPCManagerBamo.bamo.h",
      (const char *)(unsigned int)v13);
    goto LABEL_13;
  }
  if ( v9 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(v9 + 96));
    *(_DWORD *)(v9 + 136) = GetCurrentThreadId();
  }
  return 0LL;
}
