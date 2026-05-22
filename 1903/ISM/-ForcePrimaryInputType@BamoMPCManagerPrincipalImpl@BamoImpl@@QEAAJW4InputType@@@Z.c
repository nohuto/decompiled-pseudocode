/*
 * XREFs of ?ForcePrimaryInputType@BamoMPCManagerPrincipalImpl@BamoImpl@@QEAAJW4InputType@@@Z @ 0x18007DF5C
 * Callers:
 *     ?Thunk_ForcePrimaryInputType_5@?$IMPCManagerPrincipal_Receive@VBamoMPCManagerPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18007F900 (-Thunk_ForcePrimaryInputType_5@-$IMPCManagerPrincipal_Receive@VBamoMPCManagerPrincipalImpl@BamoI.c)
 * Callees:
 *     ?FindStub@BamoPrincipalImpl@BamoImpl@Microsoft@@AEBAPEAVBamoStubImpl@23@I@Z @ 0x1800058F0 (-FindStub@BamoPrincipalImpl@BamoImpl@Microsoft@@AEBAPEAVBamoStubImpl@23@I@Z.c)
 *     ??0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z @ 0x1800277C0 (--0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002E124 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoImpl::BamoMPCManagerPrincipalImpl::ForcePrimaryInputType(
        Microsoft::BamoImpl::BamoPrincipalImpl *a1,
        unsigned int a2)
{
  struct Microsoft::BamoImpl::BamoStubImpl *Stub; // rbx
  __int64 v5; // rdi
  int v6; // eax
  __int64 v7; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  Stub = Microsoft::BamoImpl::BamoPrincipalImpl::FindStub(
           a1,
           *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 24LL) + 32LL));
  v5 = (*(__int64 (__fastcall **)(struct Microsoft::BamoImpl::BamoStubImpl *))(*(_QWORD *)Stub + 24LL))(Stub);
  Microsoft::BamoImpl::DropAndReacquireLock::DropAndReacquireLock(
    (Microsoft::BamoImpl::DropAndReacquireLock *)&v10,
    *(struct Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)Stub + 5) + 24LL) + 24LL));
  v6 = (*(__int64 (__fastcall **)(_QWORD *, __int64, _QWORD))(*((_QWORD *)a1 - 2) + 112LL))((_QWORD *)a1 - 2, v5, a2);
  if ( v6 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      8992LL,
      (__int64)"onecoreuap\\windows\\moderncore\\Inputv2\\InputHost\\Components\\MPCManager\\bamo\\objfre\\amd64\\MPCMana"
               "gerBamo.MPCManagerBamo.bamo.h",
      (const char *)(unsigned int)v6);
  v7 = v10;
  if ( v10 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(v10 + 96));
    *(_DWORD *)(v7 + 136) = GetCurrentThreadId();
  }
  return 0LL;
}
