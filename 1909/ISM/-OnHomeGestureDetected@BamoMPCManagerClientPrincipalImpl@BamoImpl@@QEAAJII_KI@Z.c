/*
 * XREFs of ?OnHomeGestureDetected@BamoMPCManagerClientPrincipalImpl@BamoImpl@@QEAAJII_KI@Z @ 0x1801157A4
 * Callers:
 *     ?Thunk_OnHomeGestureDetected_65@?$IMPCManagerClientPrincipal_Receive@VBamoMPCManagerClientPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1801162B0 (-Thunk_OnHomeGestureDetected_65@-$IMPCManagerClientPrincipal_Receive@VBamoMPCManagerClientPrinci.c)
 * Callees:
 *     ?FindStub@BamoPrincipalImpl@BamoImpl@Microsoft@@AEBAPEAVBamoStubImpl@23@I@Z @ 0x1800058F0 (-FindStub@BamoPrincipalImpl@BamoImpl@Microsoft@@AEBAPEAVBamoStubImpl@23@I@Z.c)
 *     ??0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z @ 0x1800272E0 (--0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002DDA4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoImpl::BamoMPCManagerClientPrincipalImpl::OnHomeGestureDetected(
        BamoImpl::BamoMPCManagerClientPrincipalImpl *this,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5)
{
  struct Microsoft::BamoImpl::BamoStubImpl *Stub; // rbx
  __int64 v10; // rdi
  int v11; // eax
  __int64 v12; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  __int64 v15; // [rsp+70h] [rbp+8h] BYREF

  Stub = Microsoft::BamoImpl::BamoPrincipalImpl::FindStub(
           this,
           *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL));
  v10 = (*(__int64 (__fastcall **)(struct Microsoft::BamoImpl::BamoStubImpl *))(*(_QWORD *)Stub + 24LL))(Stub);
  Microsoft::BamoImpl::DropAndReacquireLock::DropAndReacquireLock(
    (Microsoft::BamoImpl::DropAndReacquireLock *)&v15,
    *(struct Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)Stub + 5) + 24LL) + 24LL));
  v11 = (*(__int64 (__fastcall **)(char *, __int64, _QWORD, _QWORD, __int64, unsigned int))(*((_QWORD *)this - 2) + 120LL))(
          (char *)this - 16,
          v10,
          a2,
          a3,
          a4,
          a5);
  if ( v11 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      9629LL,
      (__int64)"onecoreuap\\windows\\moderncore\\Inputv2\\InputHost\\Components\\MPCManager\\bamo\\objfre\\amd64\\MPCMana"
               "gerBamo.MPCManagerBamo.bamo.h",
      (const char *)(unsigned int)v11);
  v12 = v15;
  if ( v15 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(v15 + 96));
    *(_DWORD *)(v12 + 136) = GetCurrentThreadId();
  }
  return 0LL;
}
