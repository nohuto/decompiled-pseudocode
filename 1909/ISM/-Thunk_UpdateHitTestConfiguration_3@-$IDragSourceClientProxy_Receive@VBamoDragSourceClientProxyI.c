/*
 * XREFs of ?Thunk_UpdateHitTestConfiguration_3@?$IDragSourceClientProxy_Receive@VBamoDragSourceClientProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1800632C0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z @ 0x1800272E0 (--0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002DDA4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall IDragSourceClientProxy_Receive<BamoImpl::BamoDragSourceClientProxyImpl>::Thunk_UpdateHitTestConfiguration_3(
        __int64 a1,
        _DWORD **a2)
{
  int v3; // eax
  __int64 v4; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  *(_DWORD *)(a1 + 56) = **a2;
  if ( *(_BYTE *)(a1 + 28) )
  {
    Microsoft::BamoImpl::DropAndReacquireLock::DropAndReacquireLock(
      (Microsoft::BamoImpl::DropAndReacquireLock *)&v7,
      *(struct Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 24LL) + 24LL));
    v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a1 - 16) + 72LL))(a1 - 16);
    if ( v3 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        408LL,
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
