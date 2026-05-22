/*
 * XREFs of ?Thunk_UpdateActivationConfigurationInputObject_0@?$IInputSiteElementProxy_Receive@VBamoInputSiteElementProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180008390
 * Callers:
 *     <none>
 * Callees:
 *     ??0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z @ 0x1800272E0 (--0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002DDA4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall IInputSiteElementProxy_Receive<BamoImpl::BamoInputSiteElementProxyImpl>::Thunk_UpdateActivationConfigurationInputObject_0(
        __int64 a1,
        unsigned int **a2)
{
  __int64 v3; // r8
  __int64 v4; // rdx
  __int64 v5; // rcx
  void (__fastcall ***v6)(_QWORD); // rdi
  __int64 v7; // rbx
  int v8; // eax
  __int64 v9; // r14
  int v11; // eax
  __int64 v12; // rbx
  int v13; // [rsp+20h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v15; // [rsp+60h] [rbp+8h] BYREF
  __int64 v16; // [rsp+68h] [rbp+10h] BYREF

  v3 = **a2;
  v4 = *(_QWORD *)(a1 + 16);
  v5 = *(_QWORD *)(*(_QWORD *)(v4 + 24) + 24LL);
  v6 = 0LL;
  v7 = 0LL;
  v15 = 0LL;
  if ( (_DWORD)v3 )
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64 *))(**(_QWORD **)(v5 + 40) + 56LL))(
           *(_QWORD *)(v5 + 40),
           *(unsigned int *)(v4 + 36),
           v3,
           &v15);
    if ( v8 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x29A,
        (unsigned int)"internal\\mincore\\priv_sdk\\inc\\bamoconnection.inl",
        (const char *)(unsigned int)v8,
        v13);
      __debugbreak();
    }
    v7 = v15;
  }
  if ( v7 )
    v6 = (void (__fastcall ***)(_QWORD))(v7 - 16);
  v9 = *(_QWORD *)(a1 + 56);
  *(_QWORD *)(a1 + 56) = v6;
  if ( v6 )
    (**v6)(v6);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
  if ( v7 && !*(_BYTE *)(v7 + 29) )
  {
    LOBYTE(v3) = *(_DWORD *)(v7 + 8) > 0;
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(v7 + 16) + 56LL))(
      *(_QWORD *)(v7 + 16),
      *(unsigned int *)(v7 + 24),
      v3);
  }
  if ( *(_BYTE *)(a1 + 28) )
  {
    Microsoft::BamoImpl::DropAndReacquireLock::DropAndReacquireLock(
      (Microsoft::BamoImpl::DropAndReacquireLock *)&v16,
      *(struct Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 24LL) + 24LL));
    v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a1 - 16) + 80LL))(a1 - 16);
    if ( v11 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x1561,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\bamos\\codegen\\objfre\\amd64\\ismbamos.bamo.h",
        (const char *)(unsigned int)v11,
        v13);
    v12 = v16;
    if ( v16 )
    {
      EnterCriticalSection((LPCRITICAL_SECTION)(v16 + 96));
      *(_DWORD *)(v12 + 136) = GetCurrentThreadId();
    }
  }
  return 0LL;
}
