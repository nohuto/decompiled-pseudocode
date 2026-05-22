/*
 * XREFs of ?OnGamepadExclusivityExited@BamoMPCManagerClientPrincipalImpl@BamoImpl@@QEAAJXZ @ 0x180115664
 * Callers:
 *     ?Thunk_OnGamepadExclusivityExited_41@?$IMPCManagerClientPrincipal_Receive@VBamoMPCManagerClientPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180116370 (-Thunk_OnGamepadExclusivityExited_41@-$IMPCManagerClientPrincipal_Receive@VBamoMPCManagerClientP.c)
 * Callees:
 *     ?FindStub@BamoPrincipalImpl@BamoImpl@Microsoft@@AEBAPEAVBamoStubImpl@23@I@Z @ 0x1800058F0 (-FindStub@BamoPrincipalImpl@BamoImpl@Microsoft@@AEBAPEAVBamoStubImpl@23@I@Z.c)
 *     ??0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z @ 0x1800277C0 (--0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002E124 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoImpl::BamoMPCManagerClientPrincipalImpl::OnGamepadExclusivityExited(
        BamoImpl::BamoMPCManagerClientPrincipalImpl *this)
{
  struct Microsoft::BamoImpl::BamoStubImpl *Stub; // rbx
  __int64 v3; // rdi
  int v4; // eax
  __int64 v5; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  Stub = Microsoft::BamoImpl::BamoPrincipalImpl::FindStub(
           this,
           *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL));
  v3 = (*(__int64 (__fastcall **)(struct Microsoft::BamoImpl::BamoStubImpl *))(*(_QWORD *)Stub + 24LL))(Stub);
  Microsoft::BamoImpl::DropAndReacquireLock::DropAndReacquireLock(
    (Microsoft::BamoImpl::DropAndReacquireLock *)&v8,
    *(struct Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)Stub + 5) + 24LL) + 24LL));
  v4 = (*(__int64 (__fastcall **)(char *, __int64))(*((_QWORD *)this - 2) + 112LL))((char *)this - 16, v3);
  if ( v4 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      9607LL,
      (__int64)"onecoreuap\\windows\\moderncore\\Inputv2\\InputHost\\Components\\MPCManager\\bamo\\objfre\\amd64\\MPCMana"
               "gerBamo.MPCManagerBamo.bamo.h",
      (const char *)(unsigned int)v4);
  v5 = v8;
  if ( v8 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(v8 + 96));
    *(_DWORD *)(v5 + 136) = GetCurrentThreadId();
  }
  return 0LL;
}
