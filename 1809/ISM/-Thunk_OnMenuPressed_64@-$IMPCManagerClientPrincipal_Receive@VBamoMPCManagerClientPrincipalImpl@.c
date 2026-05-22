/*
 * XREFs of ?Thunk_OnMenuPressed_64@?$IMPCManagerClientPrincipal_Receive@VBamoMPCManagerClientPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1800DFAE0
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003640 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall IMPCManagerClientPrincipal_Receive<BamoImpl::BamoMPCManagerClientPrincipalImpl>::Thunk_OnMenuPressed_64(
        __int64 a1,
        __int64 *a2)
{
  unsigned int v3; // r14d
  __int64 v4; // r15
  int v5; // ecx
  _QWORD *i; // rbx
  __int64 v7; // rbp
  __int64 v8; // rdi
  __int64 v9; // rbx
  DWORD CurrentThreadId; // eax
  const char *v11; // r9
  wil::details::in1diag3 *v12; // rcx
  int v13; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v3 = *(_DWORD *)a2[1];
  v4 = *a2;
  v5 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 24LL) + 32LL);
  for ( i = *(_QWORD **)(a1 + 32); i && *(_DWORD *)(i[5] + 36LL) != v5; i = (_QWORD *)i[6] )
    ;
  v7 = (*(__int64 (__fastcall **)(_QWORD *))(*i + 24LL))(i);
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
      JUMPOUT(0x1800DFC0ELL);
    }
    *(_DWORD *)(v8 + 136) = 0;
    LeaveCriticalSection((LPCRITICAL_SECTION)(v8 + 96));
  }
  v13 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)(a1 - 16) + 80LL))(
          a1 - 16,
          v7,
          v4,
          v3);
  if ( v13 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x1DE8,
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
