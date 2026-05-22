/*
 * XREFs of ?Thunk_Materialize_BamoControllerNavigationOverrideProxy_0@?$IBamoPeer_ISMBamos_AutoBamos_Receive@VBamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180017D80
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003640 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     ??2@YAPEAX_K@Z @ 0x18012C18C (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall IBamoPeer_ISMBamos_AutoBamos_Receive<BamoImpl::ISMBamos_AutoBamos::BamoPeerImpl>::Thunk_Materialize_BamoControllerNavigationOverrideProxy_0(
        __int64 a1,
        unsigned int **a2)
{
  unsigned int v3; // ebp
  __int64 v4; // rdi
  __int64 v5; // rbx
  const char *v6; // r9
  void *v7; // rdi
  __int64 v8; // rbx
  void (__fastcall ***v9)(_QWORD); // rcx
  __int64 v10; // rcx
  int v11; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v3 = **a2;
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 24LL);
  v5 = 0LL;
  if ( !*(_DWORD *)(v4 + 140) )
  {
    v5 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 24LL);
    if ( *(_DWORD *)(v4 + 136) != GetCurrentThreadId() )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x5CE,
        (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoconnection.inl",
        v6);
      JUMPOUT(0x180017EFCLL);
    }
    *(_DWORD *)(v4 + 136) = 0;
    LeaveCriticalSection((LPCRITICAL_SECTION)(v4 + 96));
  }
  v7 = operator new(0x50uLL);
  memset_0(v7, 0, 0x50uLL);
  *((_DWORD *)v7 + 6) = 0;
  *((_QWORD *)v7 + 4) = 0LL;
  *((_DWORD *)v7 + 10) = 0;
  *((_WORD *)v7 + 22) = 0;
  *((_QWORD *)v7 + 2) = &BamoImpl::BamoControllerNavigationOverrideProxyImpl::`vftable';
  *((_BYTE *)v7 + 48) = 0;
  *((_DWORD *)v7 + 13) = 0;
  *((_QWORD *)v7 + 7) = 0LL;
  *((_QWORD *)v7 + 8) = 0LL;
  *((_QWORD *)v7 + 9) = 0LL;
  *(_QWORD *)v7 = &ControllerNavigationOverrideProxy::`vftable'{for `Microsoft::Bamo::BamoProxy'};
  *((_QWORD *)v7 + 1) = &ControllerNavigationOverrideProxy::`vftable'{for `IControllerNavigationOverrideProxy'};
  if ( v5 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(v5 + 96));
    *(_DWORD *)(v5 + 136) = GetCurrentThreadId();
  }
  v8 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v7 + 48LL))(v7);
  v9 = *(void (__fastcall ****)(_QWORD))(v8 + 16);
  *(_QWORD *)(v8 + 16) = a1;
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 8));
  if ( v9 )
    (**v9)(v9);
  *(_DWORD *)(v8 + 24) = v3;
  v10 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 24LL) + 40LL);
  v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v10 + 40LL))(
          v10,
          *(unsigned int *)(a1 + 36),
          v3,
          v8);
  if ( v11 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xCB3E,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\bamos\\codegen\\objfre\\amd64\\ismbamos.bamo.h",
      (const char *)(unsigned int)v11);
    __debugbreak();
  }
  return 0LL;
}
