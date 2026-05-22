/*
 * XREFs of ?Thunk_SetAllConstantsForDeviceToDefault_41@?$IMPCConstantManagerClientPrincipal_Receive@VBamoMPCConstantManagerClientPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18004C120
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003640 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall IMPCConstantManagerClientPrincipal_Receive<BamoImpl::BamoMPCConstantManagerClientPrincipalImpl>::Thunk_SetAllConstantsForDeviceToDefault_41(
        __int64 a1,
        unsigned int **a2)
{
  unsigned int v3; // ebp
  unsigned int v4; // r12d
  _QWORD *i; // rbx
  __int64 v6; // r15
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rdi
  int v10; // eax
  wil::details::in1diag3 *v11; // rcx
  __int64 v12; // rbx
  const char *v13; // r9
  int v14; // eax
  __int64 v15; // r8
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  __int64 v18; // [rsp+70h] [rbp+8h] BYREF
  __int64 v19; // [rsp+78h] [rbp+10h]

  v3 = *a2[1];
  v4 = **a2;
  for ( i = *(_QWORD **)(a1 + 32);
        i && *(_DWORD *)(i[5] + 36LL) != *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 24LL) + 32LL);
        i = (_QWORD *)i[6] )
  {
    ;
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD *))(*i + 24LL))(i);
  v7 = i[5];
  v8 = *(_QWORD *)(*(_QWORD *)(v7 + 24) + 24LL);
  v9 = 0LL;
  v18 = 0LL;
  if ( v3 )
  {
    v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64 *))(**(_QWORD **)(v8 + 40) + 56LL))(
            *(_QWORD *)(v8 + 40),
            *(unsigned int *)(v7 + 36),
            v3,
            &v18);
    v11 = retaddr;
    if ( v10 < 0 )
      goto LABEL_19;
    v9 = v18;
  }
  v12 = 0LL;
  v19 = 0LL;
  if ( !*(_DWORD *)(v8 + 140) )
  {
    v12 = v8;
    v19 = v8;
    if ( *(_DWORD *)(v8 + 136) != GetCurrentThreadId() )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x5CE,
        (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoconnection.inl",
        v13);
      JUMPOUT(0x18004C2D6LL);
    }
    *(_DWORD *)(v8 + 136) = 0;
    LeaveCriticalSection((LPCRITICAL_SECTION)(v8 + 96));
  }
  v14 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64))(*(_QWORD *)(a1 - 16) + 112LL))(
          a1 - 16,
          v6,
          v4,
          (v9 - 16) & -(__int64)(v9 != 0));
  if ( v14 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x19C8,
      (__int64)"onecoreuap\\windows\\moderncore\\Inputv2\\InputHost\\Components\\MPCManager\\bamo\\objfre\\amd64\\MPCMana"
               "gerBamo.MPCManagerBamo.bamo.h",
      (const char *)(unsigned int)v14);
LABEL_19:
    wil::details::in1diag3::FailFast_Hr(
      v11,
      (void *)0x29A,
      (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoconnection.inl",
      (const char *)(unsigned int)v10);
    __debugbreak();
  }
  if ( v12 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(v12 + 96));
    *(_DWORD *)(v12 + 136) = GetCurrentThreadId();
  }
  if ( v9 && !*(_BYTE *)(v9 + 29) )
  {
    LOBYTE(v15) = *(_DWORD *)(v9 + 8) > 0;
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(v9 + 16) + 56LL))(
      *(_QWORD *)(v9 + 16),
      *(unsigned int *)(v9 + 24),
      v15);
  }
  return 0LL;
}
