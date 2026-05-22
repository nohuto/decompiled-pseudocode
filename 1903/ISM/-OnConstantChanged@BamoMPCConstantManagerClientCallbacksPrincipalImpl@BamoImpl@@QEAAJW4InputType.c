/*
 * XREFs of ?OnConstantChanged@BamoMPCConstantManagerClientCallbacksPrincipalImpl@BamoImpl@@QEAAJW4InputType@@PEBGPEAUtagPROPVARIANT@@2@Z @ 0x180124104
 * Callers:
 *     ?Thunk_OnConstantChanged_28@?$IMPCConstantManagerClientCallbacksPrincipal_Receive@VBamoMPCConstantManagerClientCallbacksPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1801244F0 (-Thunk_OnConstantChanged_28@-$IMPCConstantManagerClientCallbacksPrincipal_Receive@VBamoMPCConsta.c)
 * Callees:
 *     ?FindStub@BamoPrincipalImpl@BamoImpl@Microsoft@@AEBAPEAVBamoStubImpl@23@I@Z @ 0x1800058F0 (-FindStub@BamoPrincipalImpl@BamoImpl@Microsoft@@AEBAPEAVBamoStubImpl@23@I@Z.c)
 *     ??0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z @ 0x1800277C0 (--0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002E124 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoImpl::BamoMPCConstantManagerClientCallbacksPrincipalImpl::OnConstantChanged(
        Microsoft::BamoImpl::BamoPrincipalImpl *a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  struct Microsoft::BamoImpl::BamoStubImpl *Stub; // rbx
  __int64 v10; // rdi
  int v11; // eax
  __int64 v12; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  __int64 v15; // [rsp+70h] [rbp+8h] BYREF

  Stub = Microsoft::BamoImpl::BamoPrincipalImpl::FindStub(
           a1,
           *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 24LL) + 32LL));
  v10 = (*(__int64 (__fastcall **)(struct Microsoft::BamoImpl::BamoStubImpl *))(*(_QWORD *)Stub + 24LL))(Stub);
  Microsoft::BamoImpl::DropAndReacquireLock::DropAndReacquireLock(
    (Microsoft::BamoImpl::DropAndReacquireLock *)&v15,
    *(struct Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)Stub + 5) + 24LL) + 24LL));
  v11 = (*(__int64 (__fastcall **)(_QWORD *, __int64, _QWORD, __int64, __int64, __int64))(*((_QWORD *)a1 - 2) + 72LL))(
          (_QWORD *)a1 - 2,
          v10,
          a2,
          a3,
          a4,
          a5);
  if ( v11 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      8569LL,
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
