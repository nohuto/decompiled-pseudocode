/*
 * XREFs of ?Thunk_Materialize_BamoInputAttemptedDeliveryClientProxy_0@?$IBamoPeer_ISMBamos_AutoBamos_Receive@VBamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180018590
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003640 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18012C18C (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall IBamoPeer_ISMBamos_AutoBamos_Receive<BamoImpl::ISMBamos_AutoBamos::BamoPeerImpl>::Thunk_Materialize_BamoInputAttemptedDeliveryClientProxy_0(
        __int64 a1,
        unsigned int **a2)
{
  unsigned int v3; // r14d
  __int64 v4; // rsi
  __int64 v5; // rdi
  __int64 v6; // rbx
  const char *v7; // r9
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rsi
  _DWORD *v11; // rdi
  __int64 v12; // rbx
  void (__fastcall ***v13)(_QWORD); // rcx
  __int64 v14; // rcx
  int v15; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v3 = **a2;
  v4 = *(_QWORD *)(a1 + 16);
  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 24LL);
  v6 = 0LL;
  if ( !*(_DWORD *)(v5 + 140) )
  {
    v6 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 24LL);
    if ( *(_DWORD *)(v5 + 136) != GetCurrentThreadId() )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x5CE,
        (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoconnection.inl",
        v7);
      JUMPOUT(0x18001876CLL);
    }
    *(_DWORD *)(v5 + 136) = 0;
    LeaveCriticalSection((LPCRITICAL_SECTION)(v5 + 96));
  }
  v8 = *(_QWORD *)(*(_QWORD *)(v4 + 32) + 24LL);
  if ( *(int *)(v8 + 8) <= 0 )
    v9 = 0LL;
  else
    v9 = *(_QWORD *)(v8 + 16);
  v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(v9 + 152) + 8LL) + 88LL))(*(_QWORD *)(v9 + 152) + 8LL);
  v11 = operator new(0x40uLL);
  if ( v10 )
    (**(void (__fastcall ***)(__int64))v10)(v10);
  v11[6] = 0;
  *((_QWORD *)v11 + 4) = 0LL;
  v11[10] = 0;
  *((_WORD *)v11 + 22) = 0;
  *((_QWORD *)v11 + 2) = &BamoImpl::BamoInputAttemptedDeliveryClientProxyImpl::`vftable';
  v11[12] = 0;
  *(_QWORD *)v11 = &InputAttemptedDeliveryClientProxy::`vftable'{for `Microsoft::Bamo::BamoProxy'};
  *((_QWORD *)v11 + 1) = &InputAttemptedDeliveryClientProxy::`vftable'{for `IInputAttemptedDeliveryClientProxy'};
  *((_QWORD *)v11 + 7) = v10;
  if ( v10 )
  {
    (**(void (__fastcall ***)(__int64))v10)(v10);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
  }
  if ( v6 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(v6 + 96));
    *(_DWORD *)(v6 + 136) = GetCurrentThreadId();
  }
  v12 = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v11 + 48LL))(v11);
  v13 = *(void (__fastcall ****)(_QWORD))(v12 + 16);
  *(_QWORD *)(v12 + 16) = a1;
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 8));
  if ( v13 )
    (**v13)(v13);
  *(_DWORD *)(v12 + 24) = v3;
  v14 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 24LL) + 40LL);
  v15 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v14 + 40LL))(
          v14,
          *(unsigned int *)(a1 + 36),
          v3,
          v12);
  if ( v15 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xCC1E,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\bamos\\codegen\\objfre\\amd64\\ismbamos.bamo.h",
      (const char *)(unsigned int)v15);
    __debugbreak();
  }
  return 0LL;
}
