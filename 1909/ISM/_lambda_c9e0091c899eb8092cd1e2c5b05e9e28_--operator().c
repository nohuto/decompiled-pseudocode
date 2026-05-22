/*
 * XREFs of _lambda_c9e0091c899eb8092cd1e2c5b05e9e28_::operator() @ 0x180088938
 * Callers:
 *     _lambda_c9e0091c899eb8092cd1e2c5b05e9e28_::_lambda_invoker_cdecl_ @ 0x1800878C0 (_lambda_c9e0091c899eb8092cd1e2c5b05e9e28_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ??0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z @ 0x1800272E0 (--0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002DDA4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_c9e0091c899eb8092cd1e2c5b05e9e28_::operator()(
        __int64 a1,
        __int64 a2,
        __int64 (__fastcall *a3)(__int64, _QWORD, __int64, __int128 *, int *),
        unsigned int a4,
        __int64 a5,
        __int128 *a6,
        __int64 a7)
{
  int v10; // eax
  __int64 v11; // rbx
  int v13[4]; // [rsp+40h] [rbp-48h] BYREF
  __int64 v14; // [rsp+50h] [rbp-38h]
  __int128 v15; // [rsp+60h] [rbp-28h] BYREF
  __int64 v16; // [rsp+70h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  __int64 v18; // [rsp+90h] [rbp+8h] BYREF

  v18 = a1;
  Microsoft::BamoImpl::DropAndReacquireLock::DropAndReacquireLock(
    (Microsoft::BamoImpl::DropAndReacquireLock *)&v18,
    *(struct Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*(_QWORD *)(a2 + 40) + 24LL) + 24LL));
  *(_OWORD *)v13 = *(_OWORD *)a7;
  v14 = *(_QWORD *)(a7 + 16);
  v15 = *a6;
  v16 = *((_QWORD *)a6 + 2);
  v10 = a3(a2 - 16, a4, a5, &v15, v13);
  if ( v10 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      5754LL,
      (__int64)"onecoreuap\\windows\\moderncore\\Inputv2\\InputHost\\Components\\MPCManager\\bamo\\objfre\\amd64\\MPCMana"
               "gerBamo.MPCManagerBamo.bamo.h",
      (const char *)(unsigned int)v10);
  v11 = v18;
  if ( v18 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(v18 + 96));
    *(_DWORD *)(v11 + 136) = GetCurrentThreadId();
  }
  return 0LL;
}
