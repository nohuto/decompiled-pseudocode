/*
 * XREFs of ?Thunk_UpdateGestureDirection_113@?$IEdgyControllerClientProxy_Receive@VBamoEdgyControllerClientProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18006F070
 * Callers:
 *     <none>
 * Callees:
 *     ??0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z @ 0x1800277C0 (--0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002E124 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall IEdgyControllerClientProxy_Receive<BamoImpl::BamoEdgyControllerClientProxyImpl>::Thunk_UpdateGestureDirection_113(
        __int64 a1,
        _QWORD **a2)
{
  int v3; // eax
  __int64 v4; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  *(_QWORD *)(a1 + 48) = **a2;
  if ( *(_BYTE *)(a1 + 28) )
  {
    Microsoft::BamoImpl::DropAndReacquireLock::DropAndReacquireLock(
      (Microsoft::BamoImpl::DropAndReacquireLock *)&v7,
      *(struct Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 24LL) + 24LL));
    v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a1 - 16) + 72LL))(a1 - 16);
    if ( v3 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        1719LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\bamos\\codegen\\objfre\\amd64\\ismbamos.bamo.h",
        (const char *)(unsigned int)v3);
    v4 = v7;
    if ( v7 )
    {
      EnterCriticalSection((LPCRITICAL_SECTION)(v7 + 96));
      *(_DWORD *)(v4 + 136) = GetCurrentThreadId();
    }
  }
  return 0LL;
}
