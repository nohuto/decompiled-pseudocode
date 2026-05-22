/*
 * XREFs of ?Thunk_StartDrag_79@?$IDragNDropContextualProcessorPrincipal_Receive@VBamoDragNDropContextualProcessorPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180021BD0
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003640 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall IDragNDropContextualProcessorPrincipal_Receive<BamoImpl::BamoDragNDropContextualProcessorPrincipalImpl>::Thunk_StartDrag_79(
        __int64 a1,
        unsigned int **a2)
{
  unsigned int v3; // ebp
  __int64 v4; // r12
  unsigned int v5; // r13d
  _QWORD *i; // rbx
  __int64 v7; // r15
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rdi
  int v11; // eax
  wil::details::in1diag3 *v12; // rcx
  __int64 v13; // rbx
  const char *v14; // r9
  int v15; // eax
  __int64 v16; // r8
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  __int64 v19; // [rsp+80h] [rbp+8h] BYREF
  __int64 v20; // [rsp+88h] [rbp+10h]

  v3 = *a2[2];
  v4 = *(_QWORD *)a2[1];
  v5 = **a2;
  for ( i = *(_QWORD **)(a1 + 32);
        i && *(_DWORD *)(i[5] + 36LL) != *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 24LL) + 32LL);
        i = (_QWORD *)i[6] )
  {
    ;
  }
  v7 = (*(__int64 (__fastcall **)(_QWORD *))(*i + 24LL))(i);
  v8 = i[5];
  v9 = *(_QWORD *)(*(_QWORD *)(v8 + 24) + 24LL);
  v10 = 0LL;
  v19 = 0LL;
  if ( v3 )
  {
    v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64 *))(**(_QWORD **)(v9 + 40) + 56LL))(
            *(_QWORD *)(v9 + 40),
            *(unsigned int *)(v8 + 36),
            v3,
            &v19);
    v12 = retaddr;
    if ( v11 < 0 )
      goto LABEL_19;
    v10 = v19;
  }
  v13 = 0LL;
  v20 = 0LL;
  if ( !*(_DWORD *)(v9 + 140) )
  {
    v13 = v9;
    v20 = v9;
    if ( *(_DWORD *)(v9 + 136) != GetCurrentThreadId() )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x5CE,
        (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoconnection.inl",
        v14);
      JUMPOUT(0x180021D9FLL);
    }
    *(_DWORD *)(v9 + 136) = 0;
    LeaveCriticalSection((LPCRITICAL_SECTION)(v9 + 96));
  }
  v15 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, __int64))(*(_QWORD *)(a1 - 16) + 72LL))(
          a1 - 16,
          v7,
          v5,
          v4,
          (v10 - 16) & -(__int64)(v10 != 0));
  if ( v15 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xA498,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\bamos\\codegen\\objfre\\amd64\\ismbamos.bamo.h",
      (const char *)(unsigned int)v15);
LABEL_19:
    wil::details::in1diag3::FailFast_Hr(
      v12,
      (void *)0x29A,
      (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoconnection.inl",
      (const char *)(unsigned int)v11);
    __debugbreak();
  }
  if ( v13 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(v13 + 96));
    *(_DWORD *)(v13 + 136) = GetCurrentThreadId();
  }
  if ( v10 && !*(_BYTE *)(v10 + 29) )
  {
    LOBYTE(v16) = *(_DWORD *)(v10 + 8) > 0;
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(v10 + 16) + 56LL))(
      *(_QWORD *)(v10 + 16),
      *(unsigned int *)(v10 + 24),
      v16);
  }
  return 0LL;
}
