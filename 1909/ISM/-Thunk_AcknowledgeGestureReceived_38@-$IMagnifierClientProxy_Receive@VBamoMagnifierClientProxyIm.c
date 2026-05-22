/*
 * XREFs of ?Thunk_AcknowledgeGestureReceived_38@?$IMagnifierClientProxy_Receive@VBamoMagnifierClientProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18006FAE0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z @ 0x1800272E0 (--0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall IMagnifierClientProxy_Receive<BamoImpl::BamoMagnifierClientProxyImpl>::Thunk_AcknowledgeGestureReceived_38(
        __int64 a1)
{
  unsigned int v2; // edi
  __int64 v3; // rbx
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF

  Microsoft::BamoImpl::DropAndReacquireLock::DropAndReacquireLock(
    (Microsoft::BamoImpl::DropAndReacquireLock *)&v5,
    *(struct Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 24LL) + 24LL));
  v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a1 - 16) + 72LL))(a1 - 16);
  v3 = v5;
  if ( v5 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(v5 + 96));
    *(_DWORD *)(v3 + 136) = GetCurrentThreadId();
  }
  return v2;
}
