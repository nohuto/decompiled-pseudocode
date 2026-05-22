/*
 * XREFs of ?OnHomeGestureReadyChanged@BamoMPCManagerClientPrincipalImpl@BamoImpl@@QEAAJ_NII_KII@Z @ 0x1801158C0
 * Callers:
 *     ?Thunk_OnHomeGestureReadyChanged_71@?$IMPCManagerClientPrincipal_Receive@VBamoMPCManagerClientPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1801162F0 (-Thunk_OnHomeGestureReadyChanged_71@-$IMPCManagerClientPrincipal_Receive@VBamoMPCManagerClientPr.c)
 * Callees:
 *     ?FindStub@BamoPrincipalImpl@BamoImpl@Microsoft@@AEBAPEAVBamoStubImpl@23@I@Z @ 0x1800058F0 (-FindStub@BamoPrincipalImpl@BamoImpl@Microsoft@@AEBAPEAVBamoStubImpl@23@I@Z.c)
 *     ??0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z @ 0x1800272E0 (--0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002DDA4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoImpl::BamoMPCManagerClientPrincipalImpl::OnHomeGestureReadyChanged(
        BamoImpl::BamoMPCManagerClientPrincipalImpl *this,
        char a2,
        unsigned int a3,
        int a4,
        unsigned __int64 a5,
        unsigned int a6,
        unsigned int a7)
{
  struct Microsoft::BamoImpl::BamoStubImpl *Stub; // rbx
  __int64 v12; // rdi
  __int64 v13; // r8
  int v14; // eax
  __int64 v15; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  __int64 v18; // [rsp+80h] [rbp+8h] BYREF

  Stub = Microsoft::BamoImpl::BamoPrincipalImpl::FindStub(
           this,
           *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL));
  v12 = (*(__int64 (__fastcall **)(struct Microsoft::BamoImpl::BamoStubImpl *))(*(_QWORD *)Stub + 24LL))(Stub);
  Microsoft::BamoImpl::DropAndReacquireLock::DropAndReacquireLock(
    (Microsoft::BamoImpl::DropAndReacquireLock *)&v18,
    *(struct Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)Stub + 5) + 24LL) + 24LL));
  LOBYTE(v13) = a2;
  v14 = (*(__int64 (__fastcall **)(char *, __int64, __int64, _QWORD, int, unsigned __int64, unsigned int, unsigned int))(*((_QWORD *)this - 2) + 128LL))(
          (char *)this - 16,
          v12,
          v13,
          a3,
          a4,
          a5,
          a6,
          a7);
  if ( v14 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      9653LL,
      (__int64)"onecoreuap\\windows\\moderncore\\Inputv2\\InputHost\\Components\\MPCManager\\bamo\\objfre\\amd64\\MPCMana"
               "gerBamo.MPCManagerBamo.bamo.h",
      (const char *)(unsigned int)v14);
  v15 = v18;
  if ( v18 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(v18 + 96));
    *(_DWORD *)(v15 + 136) = GetCurrentThreadId();
  }
  return 0LL;
}
