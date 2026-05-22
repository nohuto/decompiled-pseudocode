/*
 * XREFs of ?RequestHitTest@BamoTestCommandsPrincipalImpl@BamoImpl@@QEAAJ_J0PEBG@Z @ 0x1800F8EF4
 * Callers:
 *     ?Thunk_RequestHitTest_14@?$ITestCommandsPrincipal_Receive@VBamoTestCommandsPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1800F91C0 (-Thunk_RequestHitTest_14@-$ITestCommandsPrincipal_Receive@VBamoTestCommandsPrincipalImpl@BamoImp.c)
 * Callees:
 *     ?FindStub@BamoPrincipalImpl@BamoImpl@Microsoft@@AEBAPEAVBamoStubImpl@23@I@Z @ 0x1800058F0 (-FindStub@BamoPrincipalImpl@BamoImpl@Microsoft@@AEBAPEAVBamoStubImpl@23@I@Z.c)
 *     ??0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z @ 0x1800272E0 (--0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002DDA4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoImpl::BamoTestCommandsPrincipalImpl::RequestHitTest(
        BamoImpl::BamoTestCommandsPrincipalImpl *this,
        __int64 a2,
        __int64 a3,
        const unsigned __int16 *a4)
{
  struct Microsoft::BamoImpl::BamoStubImpl *Stub; // rbx
  __int64 v9; // rdi
  int v10; // eax
  __int64 v11; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v14; // [rsp+60h] [rbp+8h] BYREF

  Stub = Microsoft::BamoImpl::BamoPrincipalImpl::FindStub(
           this,
           *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL));
  v9 = (*(__int64 (__fastcall **)(struct Microsoft::BamoImpl::BamoStubImpl *))(*(_QWORD *)Stub + 24LL))(Stub);
  Microsoft::BamoImpl::DropAndReacquireLock::DropAndReacquireLock(
    (Microsoft::BamoImpl::DropAndReacquireLock *)&v14,
    *(struct Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)Stub + 5) + 24LL) + 24LL));
  v10 = (*(__int64 (__fastcall **)(char *, __int64, __int64, __int64, const unsigned __int16 *))(*((_QWORD *)this - 2)
                                                                                               + 72LL))(
          (char *)this - 16,
          v9,
          a2,
          a3,
          a4);
  if ( v10 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      14510LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\bamos\\codegen\\objfre\\amd64\\ismbamos.bamo.h",
      (const char *)(unsigned int)v10);
  v11 = v14;
  if ( v14 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(v14 + 96));
    *(_DWORD *)(v11 + 136) = GetCurrentThreadId();
  }
  return 0LL;
}
