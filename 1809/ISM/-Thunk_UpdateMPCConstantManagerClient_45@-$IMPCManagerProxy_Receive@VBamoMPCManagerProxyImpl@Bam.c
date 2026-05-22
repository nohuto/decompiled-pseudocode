/*
 * XREFs of ?Thunk_UpdateMPCConstantManagerClient_45@?$IMPCManagerProxy_Receive@VBamoMPCManagerProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1800DC170
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003640 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall IMPCManagerProxy_Receive<BamoImpl::BamoMPCManagerProxyImpl>::Thunk_UpdateMPCConstantManagerClient_45(
        __int64 a1,
        unsigned int **a2)
{
  __int64 v3; // r8
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rbx
  int v7; // eax
  wil::details::in1diag3 *v8; // rcx
  void (__fastcall ***v9)(_QWORD); // rcx
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // rbx
  const char *v13; // r9
  int v14; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v17; // [rsp+50h] [rbp+8h] BYREF
  __int64 v18; // [rsp+58h] [rbp+10h]

  v3 = **a2;
  v4 = *(_QWORD *)(a1 + 16);
  v5 = *(_QWORD *)(*(_QWORD *)(v4 + 24) + 24LL);
  v6 = 0LL;
  v17 = 0LL;
  if ( (_DWORD)v3 )
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64 *))(**(_QWORD **)(v5 + 40) + 56LL))(
           *(_QWORD *)(v5 + 40),
           *(unsigned int *)(v4 + 36),
           v3,
           &v17);
    v8 = retaddr;
    if ( v7 < 0 )
      goto LABEL_20;
    v6 = v17;
  }
  v9 = (void (__fastcall ***)(_QWORD))((v6 - 16) & -(__int64)(v6 != 0));
  v10 = *(_QWORD *)(a1 + 32);
  *(_QWORD *)(a1 + 32) = v9;
  if ( v9 )
    (**v9)(v9);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
  if ( v6 && !*(_BYTE *)(v6 + 29) )
  {
    LOBYTE(v3) = *(_DWORD *)(v6 + 8) > 0;
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(v6 + 16) + 56LL))(
      *(_QWORD *)(v6 + 16),
      *(unsigned int *)(v6 + 24),
      v3);
  }
  if ( *(_BYTE *)(a1 + 28) )
  {
    v11 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 24LL) + 24LL);
    v12 = 0LL;
    v18 = 0LL;
    if ( !*(_DWORD *)(v11 + 140) )
    {
      v12 = v11;
      v18 = v11;
      if ( *(_DWORD *)(v11 + 136) != GetCurrentThreadId() )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x5CE,
          (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoconnection.inl",
          v13);
        JUMPOUT(0x1800DC30CLL);
      }
      *(_DWORD *)(v11 + 136) = 0;
      LeaveCriticalSection((LPCRITICAL_SECTION)(v11 + 96));
    }
    v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a1 - 16) + 56LL))(a1 - 16);
    if ( v14 >= 0 )
    {
      if ( v12 )
      {
        EnterCriticalSection((LPCRITICAL_SECTION)(v12 + 96));
        *(_DWORD *)(v12 + 136) = GetCurrentThreadId();
      }
      return 0LL;
    }
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x1D9D,
      (__int64)"onecoreuap\\windows\\moderncore\\Inputv2\\InputHost\\Components\\MPCManager\\bamo\\objfre\\amd64\\MPCMana"
               "gerBamo.MPCManagerBamo.bamo.h",
      (const char *)(unsigned int)v14);
LABEL_20:
    wil::details::in1diag3::FailFast_Hr(
      v8,
      (void *)0x29A,
      (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoconnection.inl",
      (const char *)(unsigned int)v7);
    __debugbreak();
  }
  return 0LL;
}
