/*
 * XREFs of ?OnInputProviderChanged@BamoMPCManagerClientPrincipalImpl@BamoImpl@@QEAAJPEAULegacyDeviceInfo@@I@Z @ 0x1801159F0
 * Callers:
 *     ?Thunk_OnInputProviderChanged_54@?$IMPCManagerClientPrincipal_Receive@VBamoMPCManagerClientPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180116340 (-Thunk_OnInputProviderChanged_54@-$IMPCManagerClientPrincipal_Receive@VBamoMPCManagerClientPrinc.c)
 * Callees:
 *     ?FindStub@BamoPrincipalImpl@BamoImpl@Microsoft@@AEBAPEAVBamoStubImpl@23@I@Z @ 0x1800058F0 (-FindStub@BamoPrincipalImpl@BamoImpl@Microsoft@@AEBAPEAVBamoStubImpl@23@I@Z.c)
 *     ??0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z @ 0x1800272E0 (--0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002DDA4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoImpl::BamoMPCManagerClientPrincipalImpl::OnInputProviderChanged(
        BamoImpl::BamoMPCManagerClientPrincipalImpl *this,
        struct LegacyDeviceInfo *a2,
        unsigned int a3)
{
  struct Microsoft::BamoImpl::BamoStubImpl *Stub; // rbx
  __int64 v7; // rdi
  int v8; // eax
  __int64 v9; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v12; // [rsp+60h] [rbp+8h] BYREF

  Stub = Microsoft::BamoImpl::BamoPrincipalImpl::FindStub(
           this,
           *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL));
  v7 = (*(__int64 (__fastcall **)(struct Microsoft::BamoImpl::BamoStubImpl *))(*(_QWORD *)Stub + 24LL))(Stub);
  Microsoft::BamoImpl::DropAndReacquireLock::DropAndReacquireLock(
    (Microsoft::BamoImpl::DropAndReacquireLock *)&v12,
    *(struct Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)Stub + 5) + 24LL) + 24LL));
  v8 = (*(__int64 (__fastcall **)(char *, __int64, struct LegacyDeviceInfo *, _QWORD))(*((_QWORD *)this - 2) + 88LL))(
         (char *)this - 16,
         v7,
         a2,
         a3);
  if ( v8 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      9551LL,
      (__int64)"onecoreuap\\windows\\moderncore\\Inputv2\\InputHost\\Components\\MPCManager\\bamo\\objfre\\amd64\\MPCMana"
               "gerBamo.MPCManagerBamo.bamo.h",
      (const char *)(unsigned int)v8);
  v9 = v12;
  if ( v12 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(v12 + 96));
    *(_DWORD *)(v9 + 136) = GetCurrentThreadId();
  }
  return 0LL;
}
